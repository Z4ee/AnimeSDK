#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_REGISTERCLEARREFFUNC_OFFSET UNITYSDK_OFFSET(0x1E9BBA30)
#define FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_REGISTERFORPROFILINGBATTLE_OFFSET UNITYSDK_OFFSET(0x1E9BB440)
#define FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_REGISTERFORPROFILING_OFFSET UNITYSDK_OFFSET(0x1E9BB3C0)
#define FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_UNLOADALLAUTO_OFFSET UNITYSDK_OFFSET(0x1E9BB4C0)
#define FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_UNLOADALLBATTLEAUTO_OFFSET UNITYSDK_OFFSET(0x1E9BB6F0)
#define FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_UNREGISTERFORPROFILINGBATTLE_OFFSET UNITYSDK_OFFSET(0x1E9BB480)
#define FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_UNREGISTERFORPROFILING_OFFSET UNITYSDK_OFFSET(0x1E9BB400)
#define FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BBB10)

namespace Foundation
{
	inline static constexpr unsigned int MihoyoSerializedSOAssetProxy_TypeDefinitionIndex = 8119;

	class MihoyoSerializedSOAssetProxy : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Action*>** StaticGet_AutoClearRefFuncs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(MihoyoSerializedSOAssetProxy_TypeDefinitionIndex)->GetStaticField(0x6700);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>** StaticGet_AutoBattleHandles()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(MihoyoSerializedSOAssetProxy_TypeDefinitionIndex)->GetStaticField(0x6708);
		}
		static ::System::Action_2<::Foundation::AssetPath, ::System::Func_2<::Foundation::AssetPath, ::Foundation::AssetRequestHandle>*>** StaticGet_IEnumeratorLoadCacheLoadProxy()
		{
			return (::System::Action_2<::Foundation::AssetPath, ::System::Func_2<::Foundation::AssetPath, ::Foundation::AssetRequestHandle>*>**)Il2CppClass::FromTypeDefinitionIndex(MihoyoSerializedSOAssetProxy_TypeDefinitionIndex)->GetStaticField(0x6710);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>** StaticGet_AutoHandles()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(MihoyoSerializedSOAssetProxy_TypeDefinitionIndex)->GetStaticField(0x6718);
		}
		static ::System::Action_2<::Foundation::AssetRequestHandle, ::System::Action_1<::Foundation::AssetRequestHandle>*>** StaticGet_IEnumeratorLoadCacheHandleProxy()
		{
			return (::System::Action_2<::Foundation::AssetRequestHandle, ::System::Action_1<::Foundation::AssetRequestHandle>*>**)Il2CppClass::FromTypeDefinitionIndex(MihoyoSerializedSOAssetProxy_TypeDefinitionIndex)->GetStaticField(0x6720);
		}
		static ::System::Boolean* StaticGet_EnableSOAsyncLoadMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MihoyoSerializedSOAssetProxy_TypeDefinitionIndex)->GetStaticField(0x3380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterForProfiling(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_REGISTERFORPROFILING_OFFSET))(obj);
		}

		static ::System::Void UnregisterForProfiling(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_UNREGISTERFORPROFILING_OFFSET))(obj);
		}

		static ::System::Void RegisterForProfilingBattle(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_REGISTERFORPROFILINGBATTLE_OFFSET))(obj);
		}

		static ::System::Void UnregisterForProfilingBattle(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_UNREGISTERFORPROFILINGBATTLE_OFFSET))(obj);
		}

		static ::System::Void UnloadAllAuto()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_UNLOADALLAUTO_OFFSET))();
		}

		static ::System::Void RegisterClearRefFunc(::System::Action* action)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_REGISTERCLEARREFFUNC_OFFSET))(action);
		}

		static ::System::Void UnloadAllBattleAuto()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MIHOYOSERIALIZEDSOASSETPROXY_UNLOADALLBATTLEAUTO_OFFSET))();
		}
	};
}

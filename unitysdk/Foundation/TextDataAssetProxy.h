#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_TEXTDATAASSETPROXY_LOADBYTESASSET_OFFSET UNITYSDK_OFFSET(0xF5D1E70)
#define FOUNDATION_TEXTDATAASSETPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0xF5D22C0)

namespace Foundation
{
	inline static constexpr unsigned int TextDataAssetProxy_TypeDefinitionIndex = 75743;

	class TextDataAssetProxy : public ::System::Object
	{
	public:
		static ::System::Action_2<::Foundation::AssetRequestHandle, ::System::Action_1<::Foundation::AssetRequestHandle>*>** StaticGet_IEnumeratorLoadCacheHandleProxy()
		{
			return (::System::Action_2<::Foundation::AssetRequestHandle, ::System::Action_1<::Foundation::AssetRequestHandle>*>**)Il2CppClass::FromTypeDefinitionIndex(TextDataAssetProxy_TypeDefinitionIndex)->GetStaticField(0x2AF20);
		}
		static ::System::Action_2<::Foundation::AssetPath, ::System::Func_2<::Foundation::AssetPath, ::Foundation::AssetRequestHandle>*>** StaticGet_IEnumeratorLoadCacheLoadProxy()
		{
			return (::System::Action_2<::Foundation::AssetPath, ::System::Func_2<::Foundation::AssetPath, ::Foundation::AssetRequestHandle>*>**)Il2CppClass::FromTypeDefinitionIndex(TextDataAssetProxy_TypeDefinitionIndex)->GetStaticField(0x2AF28);
		}
		static ::System::Boolean* StaticGet_EnableTextAsyncLoadMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextDataAssetProxy_TypeDefinitionIndex)->GetStaticField(0x9940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_TEXTDATAASSETPROXY__CCTOR_OFFSET))();
		}

		static ::System::Void LoadBytesAsset(::Foundation::AssetPath configPath, ::System::Action_1<::Il2CppArray<::System::Byte>*>* complete, ::System::Boolean isAsync)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::System::Action_1<::Il2CppArray<::System::Byte>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTDATAASSETPROXY_LOADBYTESASSET_OFFSET))(configPath, complete, isAsync);
		}
	};
}

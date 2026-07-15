#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetLoadPriority.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/RPG/Client/CachedType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace RPG::Client { class CachedAssetLoader_AssetDependencyData; }
namespace RPG::Client { class CachedAssetLoader_CachedAssetData; }
namespace RPG::Client { class CachedAssetLoader_CachedAssetGroup; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSETIMPL_OFFSET UNITYSDK_OFFSET(0x18CC3210)
#define RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x18CC14E0)
#define RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x18CC1450)
#define RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOADIMPL_OFFSET UNITYSDK_OFFSET(0x18CC3780)
#define RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x18CBC6D0)
#define RPG_CLIENT_CACHEDASSETLOADER_CANCLEAYSCLOAD_OFFSET UNITYSDK_OFFSET(0x18CC3730)
#define RPG_CLIENT_CACHEDASSETLOADER_CHECKASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x18CC50C0)
#define RPG_CLIENT_CACHEDASSETLOADER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x18CC4320)
#define RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSETGROUP_OFFSET UNITYSDK_OFFSET(0x18CC41D0)
#define RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSET_OFFSET UNITYSDK_OFFSET(0x18CC3F00)
#define RPG_CLIENT_CACHEDASSETLOADER_GETASSETDATA_OFFSET UNITYSDK_OFFSET(0x18CC4C30)
#define RPG_CLIENT_CACHEDASSETLOADER_GETASSETNAMEHASH_OFFSET UNITYSDK_OFFSET(0x18CC4B70)
#define RPG_CLIENT_CACHEDASSETLOADER_GETCACHEDASSETGROUP_OFFSET UNITYSDK_OFFSET(0x18CC4B00)
#define RPG_CLIENT_CACHEDASSETLOADER_GET_CAPACITYRATIO_OFFSET UNITYSDK_OFFSET(0x18CC3E40)
#define RPG_CLIENT_CACHEDASSETLOADER_GET_MAXMEMORYSIZERATIO_OFFSET UNITYSDK_OFFSET(0x18CC3EA0)
#define RPG_CLIENT_CACHEDASSETLOADER_INFERLOGICTYPE_OFFSET UNITYSDK_OFFSET(0x18CC4720)
#define RPG_CLIENT_CACHEDASSETLOADER_INITASSETGROUPCAPACITYANDMAXMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x18CC3A00)
#define RPG_CLIENT_CACHEDASSETLOADER_INTERNALINFERLOGICTYPE_OFFSET UNITYSDK_OFFSET(0x18CC48A0)
#define RPG_CLIENT_CACHEDASSETLOADER_INTERNALRELEASEASSET_OFFSET UNITYSDK_OFFSET(0x18CC4CC0)
#define RPG_CLIENT_CACHEDASSETLOADER_ONAFTERRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x18CC5020)
#define RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSETIMPL_OFFSET UNITYSDK_OFFSET(0x18CC25E0)
#define RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSET_OFFSET UNITYSDK_OFFSET(0x18CBC420)
#define RPG_CLIENT_CACHEDASSETLOADER_SET_CAPACITYRATIO_OFFSET UNITYSDK_OFFSET(0x18CC3A60)
#define RPG_CLIENT_CACHEDASSETLOADER_SET_MAXMEMORYSIZERATIO_OFFSET UNITYSDK_OFFSET(0x18CC3C50)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSETIMPL_OFFSET UNITYSDK_OFFSET(0x18CC1F60)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x18CC0C50)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x18CC0BE0)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x18CC1800)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x18CC1740)
#define RPG_CLIENT_CACHEDASSETLOADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CC0510)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_TypeDefinitionIndex = 56788;

	class CachedAssetLoader : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::UInt64>** StaticGet__CachedAssetToAssetNameHash()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x20E40);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Object*>** StaticGet__CachedTempAssetObjects()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x20E48);
		}
		static ::Il2CppArray<::RPG::Client::CachedAssetLoader_CachedAssetGroup*>** StaticGet__CachedAssetGroup()
		{
			return (::Il2CppArray<::RPG::Client::CachedAssetLoader_CachedAssetGroup*>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x20E50);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::CachedAssetLoader_CachedAssetData*>** StaticGet__AssetNameHashToCachedAsset()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::CachedAssetLoader_CachedAssetData*>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x20E58);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__GetAssetObjectCheckTypeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x20E60);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__InferLogicTypeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x20E68);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::CachedAssetLoader_AssetDependencyData*>** StaticGet__AssetDependencyData()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::CachedAssetLoader_AssetDependencyData*>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x20E70);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>** StaticGet__CachedTempAssetDependencies()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x20E78);
		}
		static ::System::Single* StaticGet__MaxMemorySizeRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x6980);
		}
		static ::System::Single* StaticGet__CapacityRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x6984);
		}
		static ::System::Int32* StaticGet_LogicTypeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x6988);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Object* SyncLoadAsset(::System::String* a1, ::System::Type* a2, ::RPG::Client::CachedAssetLogicType a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::RPG::Client::CachedAssetLogicType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::IAssetOperation* AsyncLoadAsset(::System::String* a1, ::System::Type* a2, ::RPG::Client::CachedAssetLogicType a3, ::System::Object* a4, ::RPG::Client::OnAssetOperationDelegate* a5, ::RPG::Client::AssetLoadPriority a6)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::System::String*, ::System::Type*, ::RPG::Client::CachedAssetLogicType, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean SyncOrAsyncLoadAsset(::System::String* a1, ::System::Type* a2, ::RPG::Client::CachedAssetLogicType a3, ::UnityEngine::Object*& a4, ::RPG::Client::IAssetOperation*& a5, ::System::Object* a6, ::RPG::Client::OnAssetOperationDelegate* a7, ::RPG::Client::AssetLoadPriority a8)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Type*, ::RPG::Client::CachedAssetLogicType, ::UnityEngine::Object*&, ::RPG::Client::IAssetOperation*&, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::UnityEngine::Object* SyncLoadAsset_1(::System::String* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::IAssetOperation* AsyncLoadAsset_1(::System::String* a1, ::System::Type* a2, ::System::Object* a3, ::RPG::Client::OnAssetOperationDelegate* a4, ::RPG::Client::AssetLoadPriority a5)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::System::String*, ::System::Type*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean SyncOrAsyncLoadAsset_1(::System::String* a1, ::System::Type* a2, ::UnityEngine::Object*& a3, ::RPG::Client::IAssetOperation*& a4, ::System::Object* a5, ::RPG::Client::OnAssetOperationDelegate* a6, ::RPG::Client::AssetLoadPriority a7)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Type*, ::UnityEngine::Object*&, ::RPG::Client::IAssetOperation*&, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void ReleaseAsset(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSET_OFFSET))(a1);
		}

		static ::System::Void CancleAyscLoad(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Void(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CANCLEAYSCLOAD_OFFSET))(a1);
		}

		static ::System::Void CancelAsyncLoad(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Void(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOAD_OFFSET))(a1);
		}

		static ::System::Void InitAssetGroupCapacityAndMaxMemorySize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INITASSETGROUPCAPACITYANDMAXMEMORYSIZE_OFFSET))();
		}

		static ::System::Single get_CapacityRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GET_CAPACITYRATIO_OFFSET))();
		}

		static ::System::Void set_CapacityRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SET_CAPACITYRATIO_OFFSET))(a1);
		}

		static ::System::Single get_MaxMemorySizeRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GET_MAXMEMORYSIZERATIO_OFFSET))();
		}

		static ::System::Void set_MaxMemorySizeRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SET_MAXMEMORYSIZERATIO_OFFSET))(a1);
		}

		static ::System::Boolean ClearCachedAsset(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSET_OFFSET))(a1);
		}

		static ::System::Void ClearCachedAssetGroup(::RPG::Client::CachedAssetLogicType a1)
		{
			return ((::System::Void(*)(::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSETGROUP_OFFSET))(a1);
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CLEARALL_OFFSET))();
		}

		static ::RPG::Client::CachedAssetLogicType InferLogicType(::System::String* a1, ::System::Type* a2)
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INFERLOGICTYPE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::CachedAssetLoader_CachedAssetGroup* GetCachedAssetGroup(::RPG::Client::CachedAssetLogicType a1)
		{
			return ((::RPG::Client::CachedAssetLoader_CachedAssetGroup*(*)(::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GETCACHEDASSETGROUP_OFFSET))(a1);
		}

		static ::System::UInt64 GetAssetNameHash(::UnityEngine::Object* a1)
		{
			return ((::System::UInt64(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GETASSETNAMEHASH_OFFSET))(a1);
		}

		static ::RPG::Client::CachedAssetLoader_CachedAssetData* GetAssetData(::System::UInt64 a1)
		{
			return ((::RPG::Client::CachedAssetLoader_CachedAssetData*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GETASSETDATA_OFFSET))(a1);
		}

		static ::System::Void InternalReleaseAsset(::RPG::Client::CachedAssetLoader_CachedAssetGroup* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::RPG::Client::CachedAssetLoader_CachedAssetGroup*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INTERNALRELEASEASSET_OFFSET))(a1, a2);
		}

		static ::RPG::Client::CachedAssetLogicType InternalInferLogicType(::System::String* a1, ::System::Type* a2)
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INTERNALINFERLOGICTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void OnAfterReloadConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ONAFTERRELOADCONFIG_OFFSET))(a1);
		}

		static ::System::Void CheckAssetObject(::UnityEngine::Object* a1, ::System::String* a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CHECKASSETOBJECT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Object* SyncLoadAssetImpl(::System::String* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSETIMPL_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::IAssetOperation* AsyncLoadAssetImpl(::System::String* a1, ::System::Type* a2, ::System::Object* a3, ::RPG::Client::OnAssetOperationDelegate* a4, ::RPG::Client::AssetLoadPriority a5)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::System::String*, ::System::Type*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSETIMPL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReleaseAssetImpl(::UnityEngine::Object* a1, ::RPG::Client::CachedType a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::RPG::Client::CachedType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSETIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void CancelAsyncLoadImpl(::RPG::Client::IAssetOperation* a1, ::RPG::Client::CachedType a2)
		{
			return ((::System::Void(*)(::RPG::Client::IAssetOperation*, ::RPG::Client::CachedType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOADIMPL_OFFSET))(a1, a2);
		}
	};
}

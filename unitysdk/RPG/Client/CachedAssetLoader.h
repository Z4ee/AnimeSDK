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

#define RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSETIMPL_OFFSET UNITYSDK_OFFSET(0x9EC0510)
#define RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x9EBE710)
#define RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x9EBE680)
#define RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOADIMPL_OFFSET UNITYSDK_OFFSET(0x9EC0F60)
#define RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x9EC0DD0)
#define RPG_CLIENT_CACHEDASSETLOADER_CANCLEAYSCLOAD_OFFSET UNITYSDK_OFFSET(0x9EC0D80)
#define RPG_CLIENT_CACHEDASSETLOADER_CHECKASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x9EC2A50)
#define RPG_CLIENT_CACHEDASSETLOADER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x9EC1B70)
#define RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSETGROUP_OFFSET UNITYSDK_OFFSET(0x9EC1A10)
#define RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSET_OFFSET UNITYSDK_OFFSET(0x9EC1700)
#define RPG_CLIENT_CACHEDASSETLOADER_GETASSETDATA_OFFSET UNITYSDK_OFFSET(0x9EC2500)
#define RPG_CLIENT_CACHEDASSETLOADER_GETASSETNAMEHASH_OFFSET UNITYSDK_OFFSET(0x9EC2440)
#define RPG_CLIENT_CACHEDASSETLOADER_GETCACHEDASSETGROUP_OFFSET UNITYSDK_OFFSET(0x9EC23D0)
#define RPG_CLIENT_CACHEDASSETLOADER_GET_CAPACITYRATIO_OFFSET UNITYSDK_OFFSET(0x9EC1640)
#define RPG_CLIENT_CACHEDASSETLOADER_GET_MAXMEMORYSIZERATIO_OFFSET UNITYSDK_OFFSET(0x9EC16A0)
#define RPG_CLIENT_CACHEDASSETLOADER_INFERLOGICTYPE_OFFSET UNITYSDK_OFFSET(0x9EC2050)
#define RPG_CLIENT_CACHEDASSETLOADER_INITASSETGROUPCAPACITYANDMAXMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x9EC11F0)
#define RPG_CLIENT_CACHEDASSETLOADER_INTERNALINFERLOGICTYPE_OFFSET UNITYSDK_OFFSET(0x9EC21E0)
#define RPG_CLIENT_CACHEDASSETLOADER_INTERNALRELEASEASSET_OFFSET UNITYSDK_OFFSET(0x9EC25C0)
#define RPG_CLIENT_CACHEDASSETLOADER_ONAFTERRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x9EC29B0)
#define RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSETIMPL_OFFSET UNITYSDK_OFFSET(0x9EBF880)
#define RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSET_OFFSET UNITYSDK_OFFSET(0x9EC0790)
#define RPG_CLIENT_CACHEDASSETLOADER_SET_CAPACITYRATIO_OFFSET UNITYSDK_OFFSET(0x9EC1250)
#define RPG_CLIENT_CACHEDASSETLOADER_SET_MAXMEMORYSIZERATIO_OFFSET UNITYSDK_OFFSET(0x9EC1440)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSETIMPL_OFFSET UNITYSDK_OFFSET(0x9EBF280)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x9EBDDD0)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x9EBDD60)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x9EBEAB0)
#define RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x9EBE9F0)
#define RPG_CLIENT_CACHEDASSETLOADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EBD5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_TypeDefinitionIndex = 54824;

	class CachedAssetLoader : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__GetAssetObjectCheckTypeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x40F00);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>** StaticGet__CachedTempAssetDependencies()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x40F08);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Object*>** StaticGet__CachedTempAssetObjects()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x40F10);
		}
		static ::Il2CppArray<::RPG::Client::CachedAssetLoader_CachedAssetGroup*>** StaticGet__CachedAssetGroup()
		{
			return (::Il2CppArray<::RPG::Client::CachedAssetLoader_CachedAssetGroup*>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x40F18);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__InferLogicTypeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x40F20);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::CachedAssetLoader_AssetDependencyData*>** StaticGet__AssetDependencyData()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::CachedAssetLoader_AssetDependencyData*>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x40F28);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::UInt64>** StaticGet__CachedAssetToAssetNameHash()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x40F30);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::CachedAssetLoader_CachedAssetData*>** StaticGet__AssetNameHashToCachedAsset()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::CachedAssetLoader_CachedAssetData*>**)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0x40F38);
		}
		static ::System::Single* StaticGet__CapacityRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0xEA90);
		}
		static ::System::Single* StaticGet__MaxMemorySizeRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0xEA94);
		}
		static ::System::Int32* StaticGet_LogicTypeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CachedAssetLoader_TypeDefinitionIndex)->GetStaticField(0xEA98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Object* SyncLoadAsset(::System::String* assetName, ::System::Type* assetType, ::RPG::Client::CachedAssetLogicType logicType, ::System::Boolean cancelOptOnFail)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::RPG::Client::CachedAssetLogicType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_OFFSET))(assetName, assetType, logicType, cancelOptOnFail);
		}

		static ::RPG::Client::IAssetOperation* AsyncLoadAsset(::System::String* assetName, ::System::Type* assetType, ::RPG::Client::CachedAssetLogicType logicType, ::System::Object* userParam, ::RPG::Client::OnAssetOperationDelegate* handle, ::RPG::Client::AssetLoadPriority assetLoadPriority)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::System::String*, ::System::Type*, ::RPG::Client::CachedAssetLogicType, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_OFFSET))(assetName, assetType, logicType, userParam, handle, assetLoadPriority);
		}

		static ::System::Boolean SyncOrAsyncLoadAsset(::System::String* assetName, ::System::Type* assetType, ::RPG::Client::CachedAssetLogicType logicType, ::UnityEngine::Object*& assetObject, ::RPG::Client::IAssetOperation*& assetOperation, ::System::Object* userParam, ::RPG::Client::OnAssetOperationDelegate* handle, ::RPG::Client::AssetLoadPriority assetLoadPriority)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Type*, ::RPG::Client::CachedAssetLogicType, ::UnityEngine::Object*&, ::RPG::Client::IAssetOperation*&, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_OFFSET))(assetName, assetType, logicType, assetObject, assetOperation, userParam, handle, assetLoadPriority);
		}

		static ::UnityEngine::Object* SyncLoadAsset_1(::System::String* assetName, ::System::Type* assetType, ::System::Boolean cancelOptOnFail)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSET_1_OFFSET))(assetName, assetType, cancelOptOnFail);
		}

		static ::RPG::Client::IAssetOperation* AsyncLoadAsset_1(::System::String* assetName, ::System::Type* assetType, ::System::Object* userParam, ::RPG::Client::OnAssetOperationDelegate* handle, ::RPG::Client::AssetLoadPriority assetLoadPriority)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::System::String*, ::System::Type*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSET_1_OFFSET))(assetName, assetType, userParam, handle, assetLoadPriority);
		}

		static ::System::Boolean SyncOrAsyncLoadAsset_1(::System::String* assetName, ::System::Type* assetType, ::UnityEngine::Object*& assetObject, ::RPG::Client::IAssetOperation*& assetOperation, ::System::Object* userParam, ::RPG::Client::OnAssetOperationDelegate* handle, ::RPG::Client::AssetLoadPriority assetLoadPriority)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Type*, ::UnityEngine::Object*&, ::RPG::Client::IAssetOperation*&, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCORASYNCLOADASSET_1_OFFSET))(assetName, assetType, assetObject, assetOperation, userParam, handle, assetLoadPriority);
		}

		static ::System::Void ReleaseAsset(::UnityEngine::Object* assetObject)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSET_OFFSET))(assetObject);
		}

		static ::System::Void CancleAyscLoad(::RPG::Client::IAssetOperation* assetOperation)
		{
			return ((::System::Void(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CANCLEAYSCLOAD_OFFSET))(assetOperation);
		}

		static ::System::Void CancelAsyncLoad(::RPG::Client::IAssetOperation* assetOperation)
		{
			return ((::System::Void(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOAD_OFFSET))(assetOperation);
		}

		static ::System::Void InitAssetGroupCapacityAndMaxMemorySize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INITASSETGROUPCAPACITYANDMAXMEMORYSIZE_OFFSET))();
		}

		static ::System::Single get_CapacityRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GET_CAPACITYRATIO_OFFSET))();
		}

		static ::System::Void set_CapacityRatio(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SET_CAPACITYRATIO_OFFSET))(value);
		}

		static ::System::Single get_MaxMemorySizeRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GET_MAXMEMORYSIZERATIO_OFFSET))();
		}

		static ::System::Void set_MaxMemorySizeRatio(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SET_MAXMEMORYSIZERATIO_OFFSET))(value);
		}

		static ::System::Boolean ClearCachedAsset(::System::String* assetName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSET_OFFSET))(assetName);
		}

		static ::System::Void ClearCachedAssetGroup(::RPG::Client::CachedAssetLogicType logicType)
		{
			return ((::System::Void(*)(::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CLEARCACHEDASSETGROUP_OFFSET))(logicType);
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CLEARALL_OFFSET))();
		}

		static ::RPG::Client::CachedAssetLogicType InferLogicType(::System::String* assetName, ::System::Type* assetType)
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INFERLOGICTYPE_OFFSET))(assetName, assetType);
		}

		static ::RPG::Client::CachedAssetLoader_CachedAssetGroup* GetCachedAssetGroup(::RPG::Client::CachedAssetLogicType logicType)
		{
			return ((::RPG::Client::CachedAssetLoader_CachedAssetGroup*(*)(::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GETCACHEDASSETGROUP_OFFSET))(logicType);
		}

		static ::System::UInt64 GetAssetNameHash(::UnityEngine::Object* assetObject)
		{
			return ((::System::UInt64(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GETASSETNAMEHASH_OFFSET))(assetObject);
		}

		static ::RPG::Client::CachedAssetLoader_CachedAssetData* GetAssetData(::System::UInt64 assetNameHash)
		{
			return ((::RPG::Client::CachedAssetLoader_CachedAssetData*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_GETASSETDATA_OFFSET))(assetNameHash);
		}

		static ::System::Void InternalReleaseAsset(::RPG::Client::CachedAssetLoader_CachedAssetGroup* cachedAssetGroup, ::System::UInt64 removedAssetNameHash)
		{
			return ((::System::Void(*)(::RPG::Client::CachedAssetLoader_CachedAssetGroup*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INTERNALRELEASEASSET_OFFSET))(cachedAssetGroup, removedAssetNameHash);
		}

		static ::RPG::Client::CachedAssetLogicType InternalInferLogicType(::System::String* assetName, ::System::Type* assetType)
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_INTERNALINFERLOGICTYPE_OFFSET))(assetName, assetType);
		}

		static ::System::Void OnAfterReloadConfig(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ONAFTERRELOADCONFIG_OFFSET))(name);
		}

		static ::System::Void CheckAssetObject(::UnityEngine::Object* assetObject, ::System::String* assetName, ::System::UInt64 assetNameHash)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CHECKASSETOBJECT_OFFSET))(assetObject, assetName, assetNameHash);
		}

		static ::UnityEngine::Object* SyncLoadAssetImpl(::System::String* assetShortName, ::System::Type* assetType, ::System::Boolean cancelOptOnFail)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_SYNCLOADASSETIMPL_OFFSET))(assetShortName, assetType, cancelOptOnFail);
		}

		static ::RPG::Client::IAssetOperation* AsyncLoadAssetImpl(::System::String* assetShortName, ::System::Type* assetType, ::System::Object* userParam, ::RPG::Client::OnAssetOperationDelegate* handle, ::RPG::Client::AssetLoadPriority assetLoadPriority)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::System::String*, ::System::Type*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::AssetLoadPriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASYNCLOADASSETIMPL_OFFSET))(assetShortName, assetType, userParam, handle, assetLoadPriority);
		}

		static ::System::Void ReleaseAssetImpl(::UnityEngine::Object* assetObject, ::RPG::Client::CachedType cachedType)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::RPG::Client::CachedType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_RELEASEASSETIMPL_OFFSET))(assetObject, cachedType);
		}

		static ::System::Void CancelAsyncLoadImpl(::RPG::Client::IAssetOperation* assetOperation, ::RPG::Client::CachedType cachedType)
		{
			return ((::System::Void(*)(::RPG::Client::IAssetOperation*, ::RPG::Client::CachedType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CANCELASYNCLOADIMPL_OFFSET))(assetOperation, cachedType);
		}
	};
}

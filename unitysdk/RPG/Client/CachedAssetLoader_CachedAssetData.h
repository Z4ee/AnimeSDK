#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CachedAssetLoader_AssetDependencyData; }
namespace RPG::Client { class CachedAssetLoader_AssetObjectNode; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_ADDASSETOBJECT_OFFSET UNITYSDK_OFFSET(0xB45C650)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB45FB60)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_DECREF_OFFSET UNITYSDK_OFFSET(0xB45D5B0)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GETASSETOBJECTS_OFFSET UNITYSDK_OFFSET(0xB45F080)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GETASSETOBJECT_OFFSET UNITYSDK_OFFSET(0xB45BDA0)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GET_LOGICTYPE_OFFSET UNITYSDK_OFFSET(0xB45FB40)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0xB45FB50)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_INCREF_OFFSET UNITYSDK_OFFSET(0xB45BF00)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_INITASSETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0xB45CA70)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB45FDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_CachedAssetData_TypeDefinitionIndex = 55554;

	class CachedAssetLoader_CachedAssetData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CachedAssetLoader_AssetDependencyData*>* _AssetDependencies; // 0x10
		::RPG::Client::CachedAssetLoader_AssetObjectNode* _AssetObjectNode; // 0x18
		::System::Int32 _RefCount; // 0x20
		::RPG::Client::CachedAssetLogicType _LogicType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::CachedAssetLogicType get_LogicType()
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GET_LOGICTYPE_OFFSET))(this);
		}

		::System::Int32 get_RefCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GET_REFCOUNT_OFFSET))(this);
		}

		::System::Void InitAssetDependencies(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_INITASSETDEPENDENCIES_OFFSET))(this, a1);
		}

		::System::Void IncRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_INCREF_OFFSET))(this);
		}

		::System::Void DecRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_DECREF_OFFSET))(this);
		}

		::System::Void GetAssetObjects(::System::Collections::Generic::List_1<::UnityEngine::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GETASSETOBJECTS_OFFSET))(this, a1);
		}

		::UnityEngine::Object* GetAssetObject(::System::Type* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GETASSETOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean AddAssetObject(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_ADDASSETOBJECT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_CLEAR_OFFSET))(this);
		}
	};
}

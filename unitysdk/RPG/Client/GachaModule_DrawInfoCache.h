#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class GachaDrawData; }

#define RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x192CF240)
#define RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_GET_DRAWDATA_OFFSET UNITYSDK_OFFSET(0x192CF2B0)
#define RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_GET_GACHAPOOL_OFFSET UNITYSDK_OFFSET(0x192CF290)
#define RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_GET_MAXRARITY_OFFSET UNITYSDK_OFFSET(0x192CF2D0)
#define RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_SET_DRAWDATA_OFFSET UNITYSDK_OFFSET(0x192CF2C0)
#define RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_SET_GACHAPOOL_OFFSET UNITYSDK_OFFSET(0x192CF2A0)
#define RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_SET_MAXRARITY_OFFSET UNITYSDK_OFFSET(0x192CF2E0)
#define RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x192C8170)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaModule_DrawInfoCache_TypeDefinitionIndex = 61382;

	class GachaModule_DrawInfoCache : public ::System::Object
	{
	public:
		::RPG::Client::BaseGachaPoolData* _GachaPool_k__BackingField; // 0x10
		::RPG::Client::GachaDrawData* _DrawData_k__BackingField; // 0x18
		::RPG::GameCore::ItemRarity _MaxRarity_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_CLEAR_OFFSET))(this);
		}

		::RPG::Client::BaseGachaPoolData* get_GachaPool()
		{
			return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_GET_GACHAPOOL_OFFSET))(this);
		}

		::System::Void set_GachaPool(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_SET_GACHAPOOL_OFFSET))(this, a1);
		}

		::RPG::Client::GachaDrawData* get_DrawData()
		{
			return ((::RPG::Client::GachaDrawData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_GET_DRAWDATA_OFFSET))(this);
		}

		::System::Void set_DrawData(::RPG::Client::GachaDrawData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaDrawData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_SET_DRAWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ItemRarity get_MaxRarity()
		{
			return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_GET_MAXRARITY_OFFSET))(this);
		}

		::System::Void set_MaxRarity(::RPG::GameCore::ItemRarity a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE_DRAWINFOCACHE_SET_MAXRARITY_OFFSET))(this, a1);
		}
	};
}

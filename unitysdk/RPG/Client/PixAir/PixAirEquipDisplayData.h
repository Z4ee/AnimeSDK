#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipData; }
namespace RPG::Client::PixAir { class PixAirEquipLevelData; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC3BF7B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_GET_EQUIPDATA_OFFSET UNITYSDK_OFFSET(0xC3BF940)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0xC3BF900)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0xC3BF960)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC3BF920)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_SET_EQUIPDATA_OFFSET UNITYSDK_OFFSET(0xC3BF950)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_SET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0xC3BF970)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3BF850)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipDisplayData_TypeDefinitionIndex = 73624;

	class PixAirEquipDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirEquipData* _EquipData_k__BackingField; // 0x10
		::RPG::Client::PixAir::PixAirEquipLevelData* _LevelData_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipDisplayData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipDisplayData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_EquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_GET_EQUIPID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipData* get_EquipData()
		{
			return ((::RPG::Client::PixAir::PixAirEquipData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_GET_EQUIPDATA_OFFSET))(this);
		}

		::System::Void set_EquipData(::RPG::Client::PixAir::PixAirEquipData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_SET_EQUIPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipLevelData* get_LevelData()
		{
			return ((::RPG::Client::PixAir::PixAirEquipLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_GET_LEVELDATA_OFFSET))(this);
		}

		::System::Void set_LevelData(::RPG::Client::PixAir::PixAirEquipLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPDISPLAYDATA_SET_LEVELDATA_OFFSET))(this, a1);
		}
	};
}

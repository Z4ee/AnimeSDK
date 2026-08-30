#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PIXAIR_LEGACY_PIXAIREQUIPDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDAE56A0)
#define RPG_CLIENT_PIXAIR_LEGACY_PIXAIREQUIPDISPLAYDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDAE5740)
#define RPG_CLIENT_PIXAIR_LEGACY_PIXAIREQUIPDISPLAYDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDAE5750)
#define RPG_CLIENT_PIXAIR_LEGACY_PIXAIREQUIPDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE5730)

namespace RPG::Client::PixAir::Legacy
{
	inline static constexpr unsigned int PixAirEquipDisplayData_TypeDefinitionIndex = 78925;

	class PixAirEquipDisplayData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* EquipIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* TagList; // 0x20
		::System::UInt32 _Level_k__BackingField; // 0x28
		::System::Boolean IsCore; // 0x2C
		::RPG::GameCore::PixAirSlotType SlotType; // 0x30
		::System::UInt32 EquipID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_LEGACY_PIXAIREQUIPDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::Legacy::PixAirEquipDisplayData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PixAir::Legacy::PixAirEquipDisplayData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_LEGACY_PIXAIREQUIPDISPLAYDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_LEGACY_PIXAIREQUIPDISPLAYDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_LEGACY_PIXAIREQUIPDISPLAYDATA_SET_LEVEL_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURRAILBALLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199E7260)
#define RPG_GAMECORE_PARKOURRAILBALLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199E7660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourRailBallConfigRow_TypeDefinitionIndex = 11529;

	class ParkourRailBallConfigRow : public ::System::Object
	{
	public:
		::System::String* ResPath; // 0x10
		::System::String* UI3DPrefabPath; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::String* BigResPath; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 UpgradeSubMission; // 0x40
		::System::Single StabilityDisplay; // 0x44
		::System::UInt32 SkillID; // 0x48
		::System::Single SpeedDisplay; // 0x4C
		::System::Single SkillChargeDisplay; // 0x50
		::System::UInt32 UpgradeBallID; // 0x54
		::System::UInt32 ID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRAILBALLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParkourRailBallConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourRailBallConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRAILBALLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

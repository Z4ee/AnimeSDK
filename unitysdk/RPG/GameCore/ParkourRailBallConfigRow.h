#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURRAILBALLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8EF6D0)
#define RPG_GAMECORE_PARKOURRAILBALLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EFAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourRailBallConfigRow_TypeDefinitionIndex = 12099;

	class ParkourRailBallConfigRow : public ::System::Object
	{
	public:
		::System::String* ResPath; // 0x10
		::System::String* UI3DPrefabPath; // 0x18
		::System::String* BigResPath; // 0x20
		::System::String* PrefabPath; // 0x28
		::System::Single SkillChargeDisplay; // 0x30
		::System::Single SpeedDisplay; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 UpgradeSubMission; // 0x48
		::System::UInt32 UpgradeBallID; // 0x4C
		::System::UInt32 SkillID; // 0x50
		::System::UInt32 ID; // 0x54
		::System::Single StabilityDisplay; // 0x58

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

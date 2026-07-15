#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MuseumTargetRewardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMTARGETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1DD730)
#define RPG_GAMECORE_MUSEUMTARGETROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1DDE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumTargetRow_TypeDefinitionIndex = 13716;

	class MuseumTargetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MuseumMissionList; // 0x10
		::System::UInt32 TypeParameter; // 0x18
		::System::UInt32 Order; // 0x1C
		::System::UInt32 TriggerTurns; // 0x20
		::RPG::GameCore::MuseumTargetRewardType RewardType; // 0x24
		::System::UInt32 TriggerPhase; // 0x28
		::System::UInt32 TargetID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumTargetRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumTargetRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMTARGETROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

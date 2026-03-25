#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYPHASEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1743E920)
#define RPG_GAMECORE_MONOPOLYPHASEREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1743EF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyPhaseRewardRow_TypeDefinitionIndex = 11036;

	class MonopolyPhaseRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 ProgressValue; // 0x14
		::System::UInt32 PhaseRewardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPHASEREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyPhaseRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyPhaseRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPHASEREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

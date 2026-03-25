#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildRewardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EVOLVEBUILDREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171AEC70)
#define RPG_GAMECORE_EVOLVEBUILDREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171AEE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardRow_TypeDefinitionIndex = 10683;

	class EvolveBuildRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 IncomeTarget; // 0x14
		::System::UInt32 RewardID; // 0x18
		::RPG::GameCore::EvolveBuildRewardType Type; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EvolveBuildRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

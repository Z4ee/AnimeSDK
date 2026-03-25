#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyFloorType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYMAPREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F76520)
#define RPG_GAMECORE_ALLEYMAPREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F766D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapRewardRow_TypeDefinitionIndex = 11534;

	class AlleyMapRewardRow : public ::System::Object
	{
	public:
		::RPG::GameCore::AlleyFloorType LayerID; // 0x10
		::System::UInt32 MapScore; // 0x14
		::System::UInt32 ScoreID; // 0x18
		::System::UInt32 RewardID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleyMapRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyMapRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

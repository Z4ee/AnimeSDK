#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19470DA0)
#define RPG_GAMECORE_ALLEYREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19471350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyRewardRow_TypeDefinitionIndex = 12018;

	class AlleyRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 NumTarget; // 0x14
		::System::UInt32 Level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

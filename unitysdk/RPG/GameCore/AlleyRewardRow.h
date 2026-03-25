#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F79230)
#define RPG_GAMECORE_ALLEYREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F797C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyRewardRow_TypeDefinitionIndex = 11523;

	class AlleyRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 RewardID; // 0x14
		::System::UInt32 NumTarget; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleyRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

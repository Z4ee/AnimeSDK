#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB32E40)
#define RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB32F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationBasicLevelDamageRow_TypeDefinitionIndex = 12718;

	class ElationBasicLevelDamageRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint ElationBasicLevelDamage; // 0x10
		::System::UInt32 Level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationBasicLevelDamageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationBasicLevelDamageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

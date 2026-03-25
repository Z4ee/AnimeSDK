#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1718A7F0)
#define RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1718A930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationBasicLevelDamageRow_TypeDefinitionIndex = 12060;

	class ElationBasicLevelDamageRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::RPG::GameCore::FixPoint ElationBasicLevelDamage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ElationBasicLevelDamageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationBasicLevelDamageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

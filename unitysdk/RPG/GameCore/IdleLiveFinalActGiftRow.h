#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEFINALACTGIFTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A11290)
#define RPG_GAMECORE_IDLELIVEFINALACTGIFTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A11400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveFinalActGiftRow_TypeDefinitionIndex = 11132;

	class IdleLiveFinalActGiftRow : public ::System::Object
	{
	public:
		::System::UInt32 FinalAct; // 0x10
		::System::UInt32 RewardID; // 0x14
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEFINALACTGIFTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveFinalActGiftRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveFinalActGiftRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEFINALACTGIFTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

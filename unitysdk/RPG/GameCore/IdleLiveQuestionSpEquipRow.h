#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A14650)
#define RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A14770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionSpEquipRow_TypeDefinitionIndex = 11274;

	class IdleLiveQuestionSpEquipRow : public ::System::Object
	{
	public:
		::System::UInt32 SpEquipID; // 0x10
		::System::UInt32 ID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

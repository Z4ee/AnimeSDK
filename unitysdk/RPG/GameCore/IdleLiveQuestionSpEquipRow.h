#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198468F0)
#define RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19846A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionSpEquipRow_TypeDefinitionIndex = 11321;

	class IdleLiveQuestionSpEquipRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 SpEquipID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

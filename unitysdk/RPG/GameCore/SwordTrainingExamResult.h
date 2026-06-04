#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGEXAMRESULT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CE34F0)
#define RPG_GAMECORE_SWORDTRAININGEXAMRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE3610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingExamResult_TypeDefinitionIndex = 11848;

	class SwordTrainingExamResult : public ::System::Object
	{
	public:
		::System::UInt32 CombatRatio; // 0x10
		::System::UInt32 EffectID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingExamResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingExamResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMRESULT_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

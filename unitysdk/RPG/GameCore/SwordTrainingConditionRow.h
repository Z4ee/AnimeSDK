#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CE2380)
#define RPG_GAMECORE_SWORDTRAININGCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE2510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingConditionRow_TypeDefinitionIndex = 11885;

	class SwordTrainingConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 ConditionID; // 0x18
		::RPG::GameCore::SwordTrainingConditionType CheckType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingConditionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

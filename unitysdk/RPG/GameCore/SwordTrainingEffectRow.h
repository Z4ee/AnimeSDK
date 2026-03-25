#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1779C490)
#define RPG_GAMECORE_SWORDTRAININGEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1779C700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingEffectRow_TypeDefinitionIndex = 11350;

	class SwordTrainingEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::Il2CppArray<::System::UInt32>* EnhanceActionList; // 0x18
		::System::UInt32 Count; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::GameCore::SwordTrainingEffectType EffectType; // 0x28
		::System::UInt32 Condition; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

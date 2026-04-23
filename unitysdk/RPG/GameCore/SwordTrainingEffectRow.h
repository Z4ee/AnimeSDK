#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EC26F0)
#define RPG_GAMECORE_SWORDTRAININGEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC2960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingEffectRow_TypeDefinitionIndex = 11752;

	class SwordTrainingEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::Il2CppArray<::System::UInt32>* EnhanceActionList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 Condition; // 0x24
		::System::UInt32 Count; // 0x28
		::RPG::GameCore::SwordTrainingEffectType EffectType; // 0x2C

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

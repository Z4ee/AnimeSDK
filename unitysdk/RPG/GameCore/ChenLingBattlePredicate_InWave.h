#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattlePredicate.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE_METHOD_3_3CC6D23F4B5BACAF_OFFSET UNITYSDK_OFFSET(0x1CFAB990)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE_METHOD_3_8B36E2E9EBF923FB_OFFSET UNITYSDK_OFFSET(0x1CFABA60)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFABA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePredicate_InWave_TypeDefinitionIndex = 15644;

	class ChenLingBattlePredicate_InWave : public ::RPG::GameCore::BaseChenLingBattlePredicate
	{
	public:
		::System::UInt32 Wave; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3CC6D23F4B5BACAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePredicate_InWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePredicate_InWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE_METHOD_3_3CC6D23F4B5BACAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B36E2E9EBF923FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePredicate_InWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePredicate_InWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE_METHOD_3_8B36E2E9EBF923FB_OFFSET))(a1, a2);
		}
	};
}

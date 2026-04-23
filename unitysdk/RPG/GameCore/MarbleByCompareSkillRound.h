#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_2291BE262C307FE7_OFFSET UNITYSDK_OFFSET(0x18A98120)
#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_C734367F8BBD0A31_OFFSET UNITYSDK_OFFSET(0x18A98200)
#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x18A981B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareSkillRound_TypeDefinitionIndex = 15978;

	class MarbleByCompareSkillRound : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleCompare CompareType; // 0x28
		::System::Int32 Value; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2291BE262C307FE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareSkillRound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareSkillRound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_2291BE262C307FE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C734367F8BBD0A31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareSkillRound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareSkillRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_C734367F8BBD0A31_OFFSET))(a1, a2);
		}
	};
}

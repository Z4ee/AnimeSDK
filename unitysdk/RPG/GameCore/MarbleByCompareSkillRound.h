#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_B04319FDA56F829A_OFFSET UNITYSDK_OFFSET(0x1D4A4E40)
#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_E8E90F04883F7BD6_OFFSET UNITYSDK_OFFSET(0x1D4A4EA0)
#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A4E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareSkillRound_TypeDefinitionIndex = 16696;

	class MarbleByCompareSkillRound : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleCompare CompareType; // 0x28
		::System::Int32 Value; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B04319FDA56F829A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareSkillRound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareSkillRound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_B04319FDA56F829A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E8E90F04883F7BD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareSkillRound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareSkillRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_E8E90F04883F7BD6_OFFSET))(a1, a2);
		}
	};
}

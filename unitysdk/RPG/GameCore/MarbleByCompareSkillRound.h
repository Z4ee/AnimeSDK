#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_9472A0207D9214D3_OFFSET UNITYSDK_OFFSET(0x198CB2D0)
#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_E8E90F04883F7BD6_OFFSET UNITYSDK_OFFSET(0x198CB3B0)
#define RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND__CTOR_OFFSET UNITYSDK_OFFSET(0x198CB360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareSkillRound_TypeDefinitionIndex = 16028;

	class MarbleByCompareSkillRound : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleCompare CompareType; // 0x28
		::System::Int32 Value; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9472A0207D9214D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareSkillRound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareSkillRound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_9472A0207D9214D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E8E90F04883F7BD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareSkillRound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareSkillRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESKILLROUND_METHOD_4_E8E90F04883F7BD6_OFFSET))(a1, a2);
		}
	};
}

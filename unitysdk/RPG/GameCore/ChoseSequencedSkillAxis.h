#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS_METHOD_3_324252EBF37D7FAD_OFFSET UNITYSDK_OFFSET(0x1CFD6470)
#define RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS_METHOD_3_ECBC2086BA568BD8_OFFSET UNITYSDK_OFFSET(0x1CFD6570)
#define RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD6560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChoseSequencedSkillAxis_TypeDefinitionIndex = 15344;

	class ChoseSequencedSkillAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::FixPoint CheckScore; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_324252EBF37D7FAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChoseSequencedSkillAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChoseSequencedSkillAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS_METHOD_3_324252EBF37D7FAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ECBC2086BA568BD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChoseSequencedSkillAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChoseSequencedSkillAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS_METHOD_3_ECBC2086BA568BD8_OFFSET))(a1, a2);
		}
	};
}

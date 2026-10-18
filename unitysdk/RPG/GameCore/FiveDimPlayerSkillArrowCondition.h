#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_METHOD_4_54B3CAC67367FC52_OFFSET UNITYSDK_OFFSET(0x1D6A4B10)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_METHOD_4_E5BA448578AF2C53_OFFSET UNITYSDK_OFFSET(0x1D6A4B90)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerSkillArrowCondition_TypeDefinitionIndex = 18798;

	class FiveDimPlayerSkillArrowCondition : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_54B3CAC67367FC52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_METHOD_4_54B3CAC67367FC52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E5BA448578AF2C53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_METHOD_4_E5BA448578AF2C53_OFFSET))(a1, a2);
		}
	};
}

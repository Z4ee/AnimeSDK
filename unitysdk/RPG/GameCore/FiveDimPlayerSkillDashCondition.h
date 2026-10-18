#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_METHOD_4_0F06116AFD02324F_OFFSET UNITYSDK_OFFSET(0x1D6A4CD0)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_METHOD_4_4591728E382AF9DE_OFFSET UNITYSDK_OFFSET(0x1D6A4D50)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerSkillDashCondition_TypeDefinitionIndex = 18800;

	class FiveDimPlayerSkillDashCondition : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0F06116AFD02324F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_METHOD_4_0F06116AFD02324F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4591728E382AF9DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillDashCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_METHOD_4_4591728E382AF9DE_OFFSET))(a1, a2);
		}
	};
}

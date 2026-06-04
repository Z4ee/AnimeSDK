#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_METHOD_3_07D73D0450C75F2C_OFFSET UNITYSDK_OFFSET(0x19733DF0)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_METHOD_3_6B258563420F6941_OFFSET UNITYSDK_OFFSET(0x1974D4F0)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x19733DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerSkillArrowCondition_TypeDefinitionIndex = 17886;

	class FiveDimPlayerSkillArrowCondition : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6B258563420F6941(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_METHOD_3_6B258563420F6941_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_07D73D0450C75F2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLARROWCONDITION_METHOD_3_07D73D0450C75F2C_OFFSET))(a1, a2);
		}
	};
}

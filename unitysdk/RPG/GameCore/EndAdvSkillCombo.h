#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENDADVSKILLCOMBO_METHOD_3_20437EBCF81BDD80_OFFSET UNITYSDK_OFFSET(0x188A7FA0)
#define RPG_GAMECORE_ENDADVSKILLCOMBO_METHOD_3_F6245AAE72492979_OFFSET UNITYSDK_OFFSET(0x188A8020)
#define RPG_GAMECORE_ENDADVSKILLCOMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x188A7FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndAdvSkillCombo_TypeDefinitionIndex = 19131;

	class EndAdvSkillCombo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillInputType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDADVSKILLCOMBO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_20437EBCF81BDD80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndAdvSkillCombo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndAdvSkillCombo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDADVSKILLCOMBO_METHOD_3_20437EBCF81BDD80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6245AAE72492979(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndAdvSkillCombo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndAdvSkillCombo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDADVSKILLCOMBO_METHOD_3_F6245AAE72492979_OFFSET))(a1, a2);
		}
	};
}

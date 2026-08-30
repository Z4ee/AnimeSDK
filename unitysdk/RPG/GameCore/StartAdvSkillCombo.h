#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARTADVSKILLCOMBO_METHOD_3_B2356548373E69C7_OFFSET UNITYSDK_OFFSET(0x1D565DF0)
#define RPG_GAMECORE_STARTADVSKILLCOMBO_METHOD_3_FC174154E8F1EE02_OFFSET UNITYSDK_OFFSET(0x1D565DB0)
#define RPG_GAMECORE_STARTADVSKILLCOMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D565DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartAdvSkillCombo_TypeDefinitionIndex = 19959;

	class StartAdvSkillCombo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillInputType; // 0x18
		::System::UInt32 TriggerSkillIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVSKILLCOMBO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC174154E8F1EE02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartAdvSkillCombo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartAdvSkillCombo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVSKILLCOMBO_METHOD_3_FC174154E8F1EE02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B2356548373E69C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartAdvSkillCombo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartAdvSkillCombo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVSKILLCOMBO_METHOD_3_B2356548373E69C7_OFFSET))(a1, a2);
		}
	};
}

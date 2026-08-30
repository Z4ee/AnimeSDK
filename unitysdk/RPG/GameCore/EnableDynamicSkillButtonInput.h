#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT_METHOD_3_02AD2F0C74C528EB_OFFSET UNITYSDK_OFFSET(0x1D061FA0)
#define RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT_METHOD_3_AEAC7B91C4D22932_OFFSET UNITYSDK_OFFSET(0x1D061FE0)
#define RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D061FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableDynamicSkillButtonInput_TypeDefinitionIndex = 22586;

	class EnableDynamicSkillButtonInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* Slots; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02AD2F0C74C528EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableDynamicSkillButtonInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableDynamicSkillButtonInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT_METHOD_3_02AD2F0C74C528EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AEAC7B91C4D22932(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT_METHOD_3_AEAC7B91C4D22932_OFFSET))(a1, a2);
		}
	};
}

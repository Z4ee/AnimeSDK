#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_METHOD_3_2128FD4285021B4B_OFFSET UNITYSDK_OFFSET(0x18E3F420)
#define RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_METHOD_3_7DC99BC079961EE2_OFFSET UNITYSDK_OFFSET(0x18E3F3A0)
#define RPG_GAMECORE_SETPROPINTERACTBTNSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3F3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropInteractBtnSwitch_TypeDefinitionIndex = 20878;

	class SetPropInteractBtnSwitch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SwitchState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTBTNSWITCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7DC99BC079961EE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropInteractBtnSwitch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropInteractBtnSwitch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_METHOD_3_7DC99BC079961EE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2128FD4285021B4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropInteractBtnSwitch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropInteractBtnSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_METHOD_3_2128FD4285021B4B_OFFSET))(a1, a2);
		}
	};
}

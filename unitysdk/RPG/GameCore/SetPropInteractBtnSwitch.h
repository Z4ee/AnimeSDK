#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_METHOD_3_2128FD4285021B4B_OFFSET UNITYSDK_OFFSET(0x1C605ED0)
#define RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_METHOD_3_742E416486C53238_OFFSET UNITYSDK_OFFSET(0x1C605E90)
#define RPG_GAMECORE_SETPROPINTERACTBTNSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C605EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropInteractBtnSwitch_TypeDefinitionIndex = 21212;

	class SetPropInteractBtnSwitch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SwitchState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTBTNSWITCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_742E416486C53238(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropInteractBtnSwitch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropInteractBtnSwitch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_METHOD_3_742E416486C53238_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2128FD4285021B4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropInteractBtnSwitch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropInteractBtnSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTBTNSWITCH_METHOD_3_2128FD4285021B4B_OFFSET))(a1, a2);
		}
	};
}

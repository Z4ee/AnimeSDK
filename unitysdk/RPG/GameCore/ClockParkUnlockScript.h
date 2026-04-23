#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_METHOD_3_3415A13B9BD3CAF8_OFFSET UNITYSDK_OFFSET(0x18822A20)
#define RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_METHOD_3_B676D13F5EB6E981_OFFSET UNITYSDK_OFFSET(0x18822AA0)
#define RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x18822A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkUnlockScript_TypeDefinitionIndex = 20489;

	class ClockParkUnlockScript : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ScriptID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3415A13B9BD3CAF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkUnlockScript*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkUnlockScript*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_METHOD_3_3415A13B9BD3CAF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B676D13F5EB6E981(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkUnlockScript* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkUnlockScript*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_METHOD_3_B676D13F5EB6E981_OFFSET))(a1, a2);
		}
	};
}

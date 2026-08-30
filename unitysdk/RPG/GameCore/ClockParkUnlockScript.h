#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_METHOD_3_B676D13F5EB6E981_OFFSET UNITYSDK_OFFSET(0x1D9A2410)
#define RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_METHOD_3_E358CC49DBE5EB42_OFFSET UNITYSDK_OFFSET(0x1D9A23D0)
#define RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A2400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkUnlockScript_TypeDefinitionIndex = 21397;

	class ClockParkUnlockScript : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ScriptID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E358CC49DBE5EB42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkUnlockScript*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkUnlockScript*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_METHOD_3_E358CC49DBE5EB42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B676D13F5EB6E981(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkUnlockScript* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkUnlockScript*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_METHOD_3_B676D13F5EB6E981_OFFSET))(a1, a2);
		}
	};
}

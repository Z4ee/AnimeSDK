#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK_METHOD_3_87B15D77F4333BFA_OFFSET UNITYSDK_OFFSET(0x196623D0)
#define RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK_METHOD_3_E8E369119D8C4283_OFFSET UNITYSDK_OFFSET(0x19662450)
#define RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK__CTOR_OFFSET UNITYSDK_OFFSET(0x19662420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryWaitPlayerClick_TypeDefinitionIndex = 19799;

	class ClockParkStoryWaitPlayerClick : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean CloseAllDialogOnClicked; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_87B15D77F4333BFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStoryWaitPlayerClick*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryWaitPlayerClick*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK_METHOD_3_87B15D77F4333BFA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8E369119D8C4283(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStoryWaitPlayerClick* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryWaitPlayerClick*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYWAITPLAYERCLICK_METHOD_3_E8E369119D8C4283_OFFSET))(a1, a2);
		}
	};
}

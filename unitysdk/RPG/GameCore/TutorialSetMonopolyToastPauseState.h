#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE_METHOD_3_375FD8AFE62136E3_OFFSET UNITYSDK_OFFSET(0x178DF4B0)
#define RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE_METHOD_3_8EEA12F24660C0DA_OFFSET UNITYSDK_OFFSET(0x178DF430)
#define RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x178DF480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialSetMonopolyToastPauseState_TypeDefinitionIndex = 22409;

	class TutorialSetMonopolyToastPauseState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8EEA12F24660C0DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialSetMonopolyToastPauseState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialSetMonopolyToastPauseState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE_METHOD_3_8EEA12F24660C0DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_375FD8AFE62136E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialSetMonopolyToastPauseState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialSetMonopolyToastPauseState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSETMONOPOLYTOASTPAUSESTATE_METHOD_3_375FD8AFE62136E3_OFFSET))(a1, a2);
		}
	};
}

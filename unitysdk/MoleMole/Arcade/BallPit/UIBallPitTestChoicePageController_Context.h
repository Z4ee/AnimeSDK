#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_5.h"

class Class_3_6F28FFD006F2B451;

#define MOLEMOLE_ARCADE_BALLPIT_UIBALLPITTESTCHOICEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F83D3A0)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int UIBallPitTestChoicePageController_Context_TypeDefinitionIndex = 93377;

	class UIBallPitTestChoicePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::Struct_2_A725E4562D03EA4E_5>* Options; // 0x28
		::Class_3_6F28FFD006F2B451* world; // 0x30
		::System::Int32 EventType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_UIBALLPITTESTCHOICEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

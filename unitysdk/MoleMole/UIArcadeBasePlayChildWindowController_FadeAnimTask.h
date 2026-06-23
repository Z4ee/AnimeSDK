#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER_FADEANIMTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x176B6F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeBasePlayChildWindowController_FadeAnimTask_TypeDefinitionIndex = 61498;

	class UIArcadeBasePlayChildWindowController_FadeAnimTask : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* FinishCallback; // 0x10
		::System::Action_1<::System::Boolean>* BlackScreenCallback; // 0x18
		::System::Boolean IsShowUI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER_FADEANIMTASK__CTOR_OFFSET))(this);
		}
	};
}

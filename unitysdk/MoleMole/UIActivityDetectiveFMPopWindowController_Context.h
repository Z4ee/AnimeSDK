#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17429080)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDetectiveFMPopWindowController_Context_TypeDefinitionIndex = 55892;

	class UIActivityDetectiveFMPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnSuccess; // 0x28
		::System::Action* OnFail; // 0x30
		::System::Int32 GameId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEFMPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

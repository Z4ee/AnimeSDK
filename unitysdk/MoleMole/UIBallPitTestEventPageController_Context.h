#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x175A8260)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallPitTestEventPageController_Context_TypeDefinitionIndex = 60789;

	class UIBallPitTestEventPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 EventType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTEVENTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

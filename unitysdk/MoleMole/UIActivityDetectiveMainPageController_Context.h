#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYDETECTIVEMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0CDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDetectiveMainPageController_Context_TypeDefinitionIndex = 57720;

	class UIActivityDetectiveMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsFinishedPreview; // 0x28
		::System::Int32 QuestID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BE37D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueQuestPageController_Context_TypeDefinitionIndex = 85575;

	class UIAntiqueQuestPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

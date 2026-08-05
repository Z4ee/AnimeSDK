#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_CONTEXT_GET_USEGENERALBG_OFFSET UNITYSDK_OFFSET(0x16111210)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_CONTEXT_SET_USEGENERALBG_OFFSET UNITYSDK_OFFSET(0x16111220)
#define MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16111230)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchInterknotNotePageController_Context_TypeDefinitionIndex = 85537;

	class UIWorkBenchInterknotNotePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean _UseGeneralBG_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseGeneralBG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_CONTEXT_GET_USEGENERALBG_OFFSET))(this);
		}

		::System::Void set_UseGeneralBG(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINTERKNOTNOTEPAGECONTROLLER_CONTEXT_SET_USEGENERALBG_OFFSET))(this, value);
		}
	};
}

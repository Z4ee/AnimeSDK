#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_38D525ECF7D5C15E_Class_1_0B392030174BA59A;

#define MOLEMOLE_UIFILMGUIDEDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166C8670)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuideDetailDialogPopWindowController_Context_TypeDefinitionIndex = 49512;

	class UIFilmGuideDetailDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_38D525ECF7D5C15E_Class_1_0B392030174BA59A* ScrollData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

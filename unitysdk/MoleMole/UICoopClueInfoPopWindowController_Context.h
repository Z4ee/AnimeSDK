#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_E64AC454BBA9F160_Class_1_84D29A777CDEE069;

#define MOLEMOLE_UICOOPCLUEINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152F9700)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueInfoPopWindowController_Context_TypeDefinitionIndex = 50324;

	class UICoopClueInfoPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_E64AC454BBA9F160_Class_1_84D29A777CDEE069* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

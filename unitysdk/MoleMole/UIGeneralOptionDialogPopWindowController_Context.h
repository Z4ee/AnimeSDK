#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALOPTIONDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184085F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionDialogPopWindowController_Context_TypeDefinitionIndex = 87759;

	class UIGeneralOptionDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* ChooseIndexCallBack; // 0x28
		::System::Int32 SpecialPopupId; // 0x30
		::System::Int32 InitIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

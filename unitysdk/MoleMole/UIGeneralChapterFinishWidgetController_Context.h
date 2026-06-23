#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18452DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralChapterFinishWidgetController_Context_TypeDefinitionIndex = 55164;

	class UIGeneralChapterFinishWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::System::Int32 TipID; // 0x30

		::System::Void _ctor(::System::Int32 tipID, ::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCHAPTERFINISHWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, tipID, onClose);
		}
	};
}

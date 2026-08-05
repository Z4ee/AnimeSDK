#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotMessageRowWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C16280)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostDialogPopWindowController___c__DisplayClass18_0_TypeDefinitionIndex = 85438;

	class UIInterKnotPostDialogPopWindowController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIInterKnotMessageRowWidgetController*>* animCtrl; // 0x10
		::System::Action* callback; // 0x18
		::System::Action_1<::System::Int32>* onReplyFadeIn; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}
	};
}

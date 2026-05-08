#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotPostDialogPopWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1609BFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostDialogPopWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 59043;

	class UIInterKnotPostDialogPopWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* onReplyFadeIn; // 0x10
		::System::Action* callback; // 0x18
		::MoleMole::UIInterKnotPostDialogPopWindowController* __4__this; // 0x20
		::System::Int32 nextid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}
	};
}

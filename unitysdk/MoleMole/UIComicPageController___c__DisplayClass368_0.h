#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController; }
namespace MoleMole::Comic { class MonoComicEventBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS368_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC6FE0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS368_0__TRIGGERCLEAREVENT_B__0_OFFSET UNITYSDK_OFFSET(0x14EC6FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass368_0_TypeDefinitionIndex = 40038;

	class UIComicPageController___c__DisplayClass368_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Comic::MonoComicEventBase*>* eventsToClearList; // 0x10
		::MoleMole::UIComicPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS368_0__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerClearEvent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS368_0__TRIGGERCLEAREVENT_B__0_OFFSET))(this);
		}
	};
}

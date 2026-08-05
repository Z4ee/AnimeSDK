#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowShopWidgetChildWindowController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19C66250)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19C668D0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19C66930)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19C668E0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C66240)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26__CTOR_OFFSET UNITYSDK_OFFSET(0x19C66230)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController___WaitBeforeAnimExit_d__26_TypeDefinitionIndex = 65883;

	class UIHollowShopWidgetChildWindowController___WaitBeforeAnimExit_d__26 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowShopWidgetChildWindowController* __4__this; // 0x10
		::System::String* nextName; // 0x18
		::System::String* firstName; // 0x20
		::System::Action* onNextAnimEnter; // 0x28
		::System::Action* onFirstAnimExit; // 0x30
		::System::Single __2__current; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Boolean _first_5__2; // 0x40

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___WAITBEFOREANIMEXIT_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

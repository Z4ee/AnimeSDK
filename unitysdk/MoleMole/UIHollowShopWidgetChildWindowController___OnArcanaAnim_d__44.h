#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowShopWidgetChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x173299A0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17329A60)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17329AC0)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17329A70)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17329990)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44__CTOR_OFFSET UNITYSDK_OFFSET(0x17329980)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController___OnArcanaAnim_d__44_TypeDefinitionIndex = 65882;

	class UIHollowShopWidgetChildWindowController___OnArcanaAnim_d__44 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowShopWidgetChildWindowController* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Single __2__current; // 0x20
		::System::Single length; // 0x24
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___ONARCANAANIM_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

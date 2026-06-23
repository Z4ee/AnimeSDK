#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainBottomWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1849A3F0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1849A830)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1849A890)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1849A840)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1849A3E0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93__CTOR_OFFSET UNITYSDK_OFFSET(0x1849A3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___PlayOverloadAnim_d__93_TypeDefinitionIndex = 47519;

	class UIHollowMainBottomWidgetController___PlayOverloadAnim_d__93 : public ::System::Object
	{
	public:
		::System::String* animName; // 0x10
		::System::Action* callback; // 0x18
		::MoleMole::UIHollowMainBottomWidgetController* __4__this; // 0x20
		::System::Single __2__current; // 0x28
		::System::Boolean playWarning; // 0x2C
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___PLAYOVERLOADANIM_D__93_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_147177123441150A;
namespace MoleMole { class UIMainCityChatPlayWidgetController; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x182D42E0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182D43D0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182D4430)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x182D43E0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x182D42D0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53__CTOR_OFFSET UNITYSDK_OFFSET(0x182D42C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController__WaitInteract_d__53_TypeDefinitionIndex = 77922;

	class UIMainCityChatPlayWidgetController__WaitInteract_d__53 : public ::System::Object
	{
	public:
		::Class_2_147177123441150A* transition; // 0x10
		::MoleMole::UIMainCityChatPlayWidgetController* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single _timer_5__3; // 0x2C
		::System::Single _MaxWait_5__2; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__WAITINTERACT_D__53_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

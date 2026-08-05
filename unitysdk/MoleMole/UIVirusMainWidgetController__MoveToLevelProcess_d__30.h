#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVirusMainWidgetController; }

#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x112C5FD0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x112C6240)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x112C62A0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x112C6250)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x112C5FC0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x112C5FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusMainWidgetController__MoveToLevelProcess_d__30_TypeDefinitionIndex = 77831;

	class UIVirusMainWidgetController__MoveToLevelProcess_d__30 : public ::System::Object
	{
	public:
		::MoleMole::UIVirusMainWidgetController* __4__this; // 0x10
		::System::Single targetRate; // 0x18
		::System::Int32 __1__state; // 0x1C
		::System::Single curRate; // 0x20
		::System::Single __2__current; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

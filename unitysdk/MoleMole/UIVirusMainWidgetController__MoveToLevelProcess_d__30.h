#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVirusMainWidgetController; }

#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1089A620)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1089A890)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1089A8F0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1089A8A0)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1089A610)
#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER__MOVETOLEVELPROCESS_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x1089A600)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusMainWidgetController__MoveToLevelProcess_d__30_TypeDefinitionIndex = 67818;

	class UIVirusMainWidgetController__MoveToLevelProcess_d__30 : public ::System::Object
	{
	public:
		::MoleMole::UIVirusMainWidgetController* __4__this; // 0x10
		::System::Single __2__current; // 0x18
		::System::Single targetRate; // 0x1C
		::System::Int32 __1__state; // 0x20
		::System::Single curRate; // 0x24

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

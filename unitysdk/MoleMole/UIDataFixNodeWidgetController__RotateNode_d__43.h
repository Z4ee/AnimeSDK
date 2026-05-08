#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataFixNodeWidgetController; }
namespace MoleMole { class UIDataFixNodeWidgetController___c__DisplayClass43_0; }

#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16788990)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16788D50)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16788DB0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16788D60)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16788980)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43__CTOR_OFFSET UNITYSDK_OFFSET(0x16788970)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixNodeWidgetController__RotateNode_d__43_TypeDefinitionIndex = 44492;

	class UIDataFixNodeWidgetController__RotateNode_d__43 : public ::System::Object
	{
	public:
		::MoleMole::UIDataFixNodeWidgetController___c__DisplayClass43_0* __8__1; // 0x10
		::MoleMole::UIDataFixNodeWidgetController* __4__this; // 0x18
		::System::Single _time_5__2; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Single __2__current; // 0x28
		::System::Single __rotateTime_5__4; // 0x2C
		::System::Boolean preConnected; // 0x30
		::System::Single _prevRate_5__3; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__ROTATENODE_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

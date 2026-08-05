#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILevelResultPageController; }

#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16510FF0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16511D10)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16511D70)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16511D20)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16510FE0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28__CTOR_OFFSET UNITYSDK_OFFSET(0x16510FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageController__RefreshActView_d__28_TypeDefinitionIndex = 69279;

	class UILevelResultPageController__RefreshActView_d__28 : public ::System::Object
	{
	public:
		::MoleMole::UILevelResultPageController* __4__this; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single __2__current; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHACTVIEW_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

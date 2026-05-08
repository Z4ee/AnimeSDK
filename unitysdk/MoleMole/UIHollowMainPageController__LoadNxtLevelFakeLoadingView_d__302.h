#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole { class UIHollowMainPageController___c__DisplayClass302_0; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x163853F0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16385710)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16385770)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16385720)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163853E0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302__CTOR_OFFSET UNITYSDK_OFFSET(0x163853D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController__LoadNxtLevelFakeLoadingView_d__302_TypeDefinitionIndex = 44960;

	class UIHollowMainPageController__LoadNxtLevelFakeLoadingView_d__302 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController___c__DisplayClass302_0* __8__1; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18
		::System::Action* onFakeVideoLoaded; // 0x20
		::System::Single __2__current; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER__LOADNXTLEVELFAKELOADINGVIEW_D__302_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

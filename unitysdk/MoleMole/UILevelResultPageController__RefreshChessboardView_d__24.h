#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILevelResultPageController; }

#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1782BE40)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1782D340)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1782D3A0)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1782D350)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1782BE30)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0x1782BE20)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageController__RefreshChessboardView_d__24_TypeDefinitionIndex = 47046;

	class UILevelResultPageController__RefreshChessboardView_d__24 : public ::System::Object
	{
	public:
		::MoleMole::UILevelResultPageController* __4__this; // 0x10
		::System::Boolean _isEndBattle_5__2; // 0x18
		::System::Single __2__current; // 0x1C
		::System::Int32 _coinBaseNum_5__4; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Int32 _coinNum_5__3; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER__REFRESHCHESSBOARDVIEW_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

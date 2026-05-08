#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityTimeTipsPopWindowController; }

#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15D4F5E0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15D4F830)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15D4F890)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15D4F840)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D4F5D0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4F5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTimeTipsPopWindowController__RotArrow_d__22_TypeDefinitionIndex = 64279;

	class UIMainCityTimeTipsPopWindowController__RotArrow_d__22 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityTimeTipsPopWindowController* __4__this; // 0x10
		::System::Single _rot_5__2; // 0x18
		::System::Single __2__current; // 0x1C
		::System::Single _delta_5__3; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Single nextRatio; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER__ROTARROW_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

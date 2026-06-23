#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController; }

#define MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x172DE3D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x172DE4F0)
#define MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x172DE550)
#define MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x172DE500)
#define MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172DE3C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339__CTOR_OFFSET UNITYSDK_OFFSET(0x172DE3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController__StartWaitPlayBGM_d__339_TypeDefinitionIndex = 46620;

	class UIComicPageController__StartWaitPlayBGM_d__339 : public ::System::Object
	{
	public:
		::MoleMole::UIComicPageController* __4__this; // 0x10
		::System::Single __2__current; // 0x18
		::System::Int32 index; // 0x1C
		::System::Boolean wait; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER__STARTWAITPLAYBGM_D__339_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

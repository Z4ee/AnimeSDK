#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIComicEventController.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Timeline { class ComicEventBase; }

#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_GETHIDEINDEX_OFFSET UNITYSDK_OFFSET(0x15EDB7A0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_GET_HIDEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x15EDB500)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_GET_MOVEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x15EDB520)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x15EDB5E0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_JUMPTOFINALSTATE_OFFSET UNITYSDK_OFFSET(0x15EDBA60)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_JUMPTOFINAL_OFFSET UNITYSDK_OFFSET(0x15EDBAB0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_MOLEMOLE_COMIC_ICOMICEVENTMOVEABLE_ISMOVING_OFFSET UNITYSDK_OFFSET(0x15EDBAF0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15EDB590)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EDB540)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x15EDB6B0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SETHIDEINDEX_OFFSET UNITYSDK_OFFSET(0x15EDB730)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SETMOVEPARAMS_OFFSET UNITYSDK_OFFSET(0x15EDB9A0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SET_HIDEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x15EDB510)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SET_MOVEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x15EDB530)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SIMULATEMOVEPROCESS_OFFSET UNITYSDK_OFFSET(0x15EDB8A0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_UPDATEMOVE_OFFSET UNITYSDK_OFFSET(0x15EDB7F0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDBB70)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x15EDBBD0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15EDBBE0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EDBBF0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x15EDBC00)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicDecorationEventController_TypeDefinitionIndex = 42245;

	class UIComicDecorationEventController : public ::MoleMole::UIComicEventController
	{
	public:
		::System::Boolean _hideWhenSplitScreen_k__BackingField; // 0x2E0
		::System::Int32 hideWhenSplitScreenIndex; // 0x2E4
		::System::Boolean _moveWhenSplitScreen_k__BackingField; // 0x2E8
		::System::Boolean isMoving; // 0x2E9
		::UnityEngine::Vector2 sourcePosition; // 0x2EC
		::UnityEngine::Vector2 moveVector; // 0x2F4
		::System::Single moveDeltaTime; // 0x2FC
		::System::Single totalMoveTime; // 0x300
		::UnityEngine::AnimationCurve* moveCurve; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_hideWhenSplitScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_GET_HIDEWHENSPLITSCREEN_OFFSET))(this);
		}

		::System::Void set_hideWhenSplitScreen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SET_HIDEWHENSPLITSCREEN_OFFSET))(this, value);
		}

		::System::Boolean get_moveWhenSplitScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_GET_MOVEWHENSPLITSCREEN_OFFSET))(this);
		}

		::System::Void set_moveWhenSplitScreen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SET_MOVEWHENSPLITSCREEN_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* eventBase)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_INITWITHBASE_OFFSET))(this, eventBase);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void SetHideIndex(::System::Int32 idx, ::System::Int32 SplitScreenCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SETHIDEINDEX_OFFSET))(this, idx, SplitScreenCount);
		}

		::System::Int32 GetHideIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_GETHIDEINDEX_OFFSET))(this);
		}

		::System::Void UpdateMove(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_UPDATEMOVE_OFFSET))(this, deltaTime);
		}

		::System::Void SetMoveParams(::UnityEngine::Vector2 deltaMove, ::UnityEngine::AnimationCurve* curve, ::System::Single totalMoveTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SETMOVEPARAMS_OFFSET))(this, deltaMove, curve, totalMoveTime);
		}

		::System::Void SimulateMoveProcess(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SIMULATEMOVEPROCESS_OFFSET))(this, progress);
		}

		::System::Void JumpToFinalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_JUMPTOFINALSTATE_OFFSET))(this);
		}

		::System::Void JumpToFinal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_JUMPTOFINAL_OFFSET))(this);
		}

		::System::Boolean MoleMole_Comic_IComicEventMoveable_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_MOLEMOLE_COMIC_ICOMICEVENTMOVEABLE_ISMOVING_OFFSET))(this);
		}

		::System::Void __base_InitWithBase(::UnityEngine::Timeline::ComicEventBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_INITWITHBASE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_RESETTODEFAULT_OFFSET))(this);
		}
	};
}

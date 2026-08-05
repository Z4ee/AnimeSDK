#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIComicEventController.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Timeline { class ComicEventBase; }

#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_GETHIDEINDEX_OFFSET UNITYSDK_OFFSET(0x183D1DD0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_GET_HIDEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x183D1B30)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_GET_MOVEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x183D1B50)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x183D1C10)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_JUMPTOFINALSTATE_OFFSET UNITYSDK_OFFSET(0x183D2090)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_JUMPTOFINAL_OFFSET UNITYSDK_OFFSET(0x183D20E0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_MOLEMOLE_COMIC_ICOMICEVENTMOVEABLE_ISMOVING_OFFSET UNITYSDK_OFFSET(0x183D2120)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x183D1BC0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183D1B70)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x183D1CE0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SETHIDEINDEX_OFFSET UNITYSDK_OFFSET(0x183D1D60)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SETMOVEPARAMS_OFFSET UNITYSDK_OFFSET(0x183D1FD0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SET_HIDEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x183D1B40)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SET_MOVEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x183D1B60)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_SIMULATEMOVEPROCESS_OFFSET UNITYSDK_OFFSET(0x183D1ED0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER_UPDATEMOVE_OFFSET UNITYSDK_OFFSET(0x183D1E20)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183D21A0)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x183D2200)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x183D2210)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183D2220)
#define MOLEMOLE_UICOMICDECORATIONEVENTCONTROLLER___BASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x183D2230)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicDecorationEventController_TypeDefinitionIndex = 77603;

	class UIComicDecorationEventController : public ::MoleMole::UIComicEventController
	{
	public:
		::System::Boolean _hideWhenSplitScreen_k__BackingField; // 0x2E8
		::System::Int32 hideWhenSplitScreenIndex; // 0x2EC
		::System::Boolean _moveWhenSplitScreen_k__BackingField; // 0x2F0
		::System::Boolean isMoving; // 0x2F1
		::UnityEngine::Vector2 sourcePosition; // 0x2F4
		::UnityEngine::Vector2 moveVector; // 0x2FC
		::System::Single moveDeltaTime; // 0x304
		::System::Single totalMoveTime; // 0x308
		::UnityEngine::AnimationCurve* moveCurve; // 0x310

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

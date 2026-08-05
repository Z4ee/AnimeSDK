#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_79F6D62CE30E3F8E_198;
class Class_3_6F28FFD006F2B451;
namespace MoleMole { class UIBallGamePlayerMoveChildWindowController_DirData; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_GET_JOYSTICKMOVEDIR_OFFSET UNITYSDK_OFFSET(0x1F3E88A0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1F3E8890)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_HIGHLIGHTDIRTRANS_OFFSET UNITYSDK_OFFSET(0x1F3E9C20)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_INITDIRTRANS_OFFSET UNITYSDK_OFFSET(0x1F3E8EF0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ISINDEADZONE_OFFSET UNITYSDK_OFFSET(0x1F3EA8A0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONACTIVE_OFFSET UNITYSDK_OFFSET(0x1F3E9B50)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1F3E9530)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1F3E88C0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONPOINTDOWN2UP_OFFSET UNITYSDK_OFFSET(0x1F3E9B00)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1F3EAB10)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONPOINTERUP2DOWN_OFFSET UNITYSDK_OFFSET(0x1F3E9AC0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1F3EACC0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1F3E91F0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1F3E8950)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1F3E9110)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONUNACTIVE_OFFSET UNITYSDK_OFFSET(0x1F3EAA30)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_RESETDIRTRANS_OFFSET UNITYSDK_OFFSET(0x1F3EA3F0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_RESETGRAPHICPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3EA370)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_SETGRAPHICPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3EA5E0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_SET_JOYSTICKMOVEDIR_OFFSET UNITYSDK_OFFSET(0x1F3E88B0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_TRYGETCURRENTPOINTERID_OFFSET UNITYSDK_OFFSET(0x1F3E98E0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_UPDATEAXISINPUT_OFFSET UNITYSDK_OFFSET(0x1F3E9EC0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_UPDATEJOYSTICK_OFFSET UNITYSDK_OFFSET(0x1F3E9590)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3EAD20)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1F3EAD30)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1F3EADC0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1F3EADD0)
#define MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1F3EADE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGamePlayerMoveChildWindowController_TypeDefinitionIndex = 93369;

	class UIBallGamePlayerMoveChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::UnityEngine::Vector2* StaticGet__JoystickMoveDir_k__BackingField()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIBallGamePlayerMoveChildWindowController_TypeDefinitionIndex)->GetStaticField(0x13190);
		}
		// static const ::System::Single DeadZonePercent; // 0x0
		::Class_2_79F6D62CE30E3F8E_198* _view; // 0x318
		::Class_3_6F28FFD006F2B451* _world; // 0x320
		::UnityEngine::Camera* _uiCamera; // 0x328
		::UnityEngine::RectTransform* _joystickBackTransform; // 0x330
		::UnityEngine::RectTransform* _joystickTouchTransform; // 0x338
		::UnityEngine::RectTransform* _imageTrans; // 0x340
		::System::Single _circleRadius; // 0x348
		::UnityEngine::Vector2 _originImageTransAnchorPos; // 0x34C
		::UnityEngine::Vector2 _currentInput; // 0x354
		::UnityEngine::Vector2 _lastInput; // 0x35C
		::System::Single _inputMagnitude; // 0x364
		::System::Boolean _isMoving; // 0x368
		::System::Boolean _useVirtualJoyStick; // 0x369
		::System::Boolean _isPointerDown; // 0x36A
		::System::Boolean _isPointerDownLastFrame; // 0x36B
		::System::Int32 _controlPointerID; // 0x36C
		::System::Collections::Generic::List_1<::MoleMole::UIBallGamePlayerMoveChildWindowController_DirData*>* _dirTransList; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 get_JoystickMoveDir()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_GET_JOYSTICKMOVEDIR_OFFSET))();
		}

		static ::System::Void set_JoystickMoveDir(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_SET_JOYSTICKMOVEDIR_OFFSET))(value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnBeforeUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONBEFOREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateJoystick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_UPDATEJOYSTICK_OFFSET))(this);
		}

		::System::Void UpdateAxisInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_UPDATEAXISINPUT_OFFSET))(this);
		}

		::System::Void OnActive(::UnityEngine::Vector2 hitPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONACTIVE_OFFSET))(this, hitPos);
		}

		::System::Single SetGraphicPosition(::UnityEngine::Vector2 hitPos)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_SETGRAPHICPOSITION_OFFSET))(this, hitPos);
		}

		::System::Void ResetGraphicPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_RESETGRAPHICPOSITION_OFFSET))(this);
		}

		::System::Boolean IsInDeadZone(::UnityEngine::Vector2 hitPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ISINDEADZONE_OFFSET))(this, hitPos);
		}

		::System::Void OnUnactive(::System::Boolean resetGraphic)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONUNACTIVE_OFFSET))(this, resetGraphic);
		}

		::System::Void OnPointDown2Up()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONPOINTDOWN2UP_OFFSET))(this);
		}

		::System::Void OnPointerUp2Down()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONPOINTERUP2DOWN_OFFSET))(this);
		}

		::System::Void OnPointerDown(::System::Int32 id, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONPOINTERDOWN_OFFSET))(this, id, position);
		}

		::System::Void OnPointerUp(::System::Int32 id, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_ONPOINTERUP_OFFSET))(this, id, position);
		}

		::System::Boolean TryGetCurrentPointerID(::UnityEngine::Vector2& position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_TRYGETCURRENTPOINTERID_OFFSET))(this, position);
		}

		::System::Void InitDirTrans()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_INITDIRTRANS_OFFSET))(this);
		}

		::System::Void ResetDirTrans()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_RESETDIRTRANS_OFFSET))(this);
		}

		::System::Void HighlightDirTrans(::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER_HIGHLIGHTDIRTRANS_OFFSET))(this, angle);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPLAYERMOVECHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

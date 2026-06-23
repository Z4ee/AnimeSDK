#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_626947D8870F8D56_1.h"
#include "unitysdk/Enum_3_D0F2373931CC685D_3.h"
#include "unitysdk/MoleMole/LogicAxis2DInputType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/VirtualJoystickMoveType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVirtualJoystickBaseController_DirData; }
namespace MoleMole::Config { class ConfigVirtualJoystickParam; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DEBUGSETCENTERMOVEAREASIZE_OFFSET UNITYSDK_OFFSET(0x156DDAB0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DEBUGSETDEADZONEPERCENT_OFFSET UNITYSDK_OFFSET(0x156DD9F0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DEBUGSETDIRSHAREDANGLEVALUE_OFFSET UNITYSDK_OFFSET(0x156DDA50)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DEBUGSETJOYSTICKMOVETYPE_OFFSET UNITYSDK_OFFSET(0x156DD9A0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DEBUGSETLEFTRIGHTANGLE_OFFSET UNITYSDK_OFFSET(0x156DDB10)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GETLOGICBUTTONINPUTTYPEBYDIR_OFFSET UNITYSDK_OFFSET(0x156DFBD0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_VIRTUALAXIS2DINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x156DC510)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_VIRTUALDOWNINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x156DC530)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_VIRTUALLEFTINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x156DC540)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_VIRTUALRIGHTINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x156DC550)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_VIRTUALUPINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x156DC520)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x156DC500)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_INITDIRDATA_OFFSET UNITYSDK_OFFSET(0x156DCD00)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_INITROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x156DF720)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_INITVIEWCONTROL_OFFSET UNITYSDK_OFFSET(0x156DDC00)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_INITVIRTUALJOYSTICKPARAM_OFFSET UNITYSDK_OFFSET(0x156DCAD0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_INTERNALTICK_OFFSET UNITYSDK_OFFSET(0x156DF310)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ISINDEADZONE_OFFSET UNITYSDK_OFFSET(0x156DE870)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x156DD150)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x156DD1D0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONPOINTDOWN2UP_OFFSET UNITYSDK_OFFSET(0x156DF9F0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x156DF770)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x156DF980)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x156DF2A0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONROOTFIXEDCHANGED_OFFSET UNITYSDK_OFFSET(0x156DFB30)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156DD230)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156DC560)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156DCBC0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONUNACTIVE_OFFSET UNITYSDK_OFFSET(0x156DF1C0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONVIRTUALJOYSTICKDIRSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x156DDC80)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_REFRESHROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x156DEE70)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_REFRESHVIRTUALJOYSTICKDIRSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x156DD830)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_REFRESHVIRTUALJOYSTICKPARAM_OFFSET UNITYSDK_OFFSET(0x156DDB90)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_RESETDIRDATA_OFFSET UNITYSDK_OFFSET(0x156DFA40)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_RESETGRAPHICPOSITION_OFFSET UNITYSDK_OFFSET(0x156DD5E0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_RESETROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x156DFAC0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_SETGRAPHICPOSITION_OFFSET UNITYSDK_OFFSET(0x156DE580)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_SETUICAMERARENDERTYPE_OFFSET UNITYSDK_OFFSET(0x156DC980)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_SETVIRTUALJOYSTICKDIR_OFFSET UNITYSDK_OFFSET(0x156DEA10)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_SETVIRTUALLOGICAXIS2D_OFFSET UNITYSDK_OFFSET(0x156DE0E0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_STOPMOVE_OFFSET UNITYSDK_OFFSET(0x156DD780)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_TRYGETCURRENTPOINTERID_OFFSET UNITYSDK_OFFSET(0x156DF540)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_TRYJOYSTICKMOVECLASSIC_OFFSET UNITYSDK_OFFSET(0x156DE310)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_TRYJOYSTICKMOVEMODERN_OFFSET UNITYSDK_OFFSET(0x156DDE70)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_TRYJOYSTICKMOVE_OFFSET UNITYSDK_OFFSET(0x156DDD10)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156DFCB0)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x156DFE20)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156DFE30)
#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x156DFE40)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirtualJoystickBaseController_TypeDefinitionIndex = 70244;

	class UIVirtualJoystickBaseController : public ::MoleMole::UIWindowController
	{
	public:
		::UnityEngine::RectTransform* _joyStickUpBACK; // 0x318
		::UnityEngine::RectTransform* _image; // 0x320
		::UnityEngine::Transform* _effButtonCircle; // 0x328
		::UnityEngine::RectTransform* _graphicCast; // 0x330
		::UnityEngine::RectTransform* _root; // 0x338
		::UnityEngine::RectTransform* _circleRadiusTrans; // 0x340
		::UnityEngine::RectTransform* _imageTrans; // 0x348
		::System::Single _circleRadius; // 0x350
		::UnityEngine::Vector2 _originImageTransAnchorPos; // 0x354
		::UnityEngine::Camera* _uiCamera; // 0x360
		::System::Boolean _isPointerDown; // 0x368
		::System::Boolean _isPointerDownLastFrame; // 0x369
		::UnityEngine::Vector2 _currentScreenHitPos; // 0x36C
		::System::Boolean _updateAfterEnable; // 0x374
		::System::Int32 _controlPointerID; // 0x378
		::UnityEngine::RectTransform* _joystickBackTransform; // 0x380
		::UnityEngine::RectTransform* _joystickTouchTransform; // 0x388
		::System::Boolean isCircleStyle; // 0x390
		::System::Collections::Generic::Dictionary_2<::Enum_3_D0F2373931CC685D_3, ::MoleMole::UIVirtualJoystickBaseController_DirData*>* _dirDataDict; // 0x398
		::MoleMole::VirtualJoystickMoveType _joystickMoveType; // 0x3A0
		::System::Single _deadZonePercent; // 0x3A4
		::System::Single _dirSharedAngle; // 0x3A8
		::System::Single _centerMoveAreaSize; // 0x3AC
		::System::Single _leftRightAngle; // 0x3B0
		::UnityEngine::Vector2 _currentInput; // 0x3B4
		::System::Single _currentAngle; // 0x3BC
		::Enum_3_626947D8870F8D56_1 _centerAreaType; // 0x3C0
		::System::Boolean _isRootFixed; // 0x3C4
		::System::Boolean _isInit; // 0x3C5
		::System::Boolean _isEnableBeforeInit; // 0x3C6
		::System::Boolean _isDisableBeforeInit; // 0x3C7

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::MoleMole::LogicAxis2DInputType get_VirtualAxis2DInputType()
		{
			return ((::MoleMole::LogicAxis2DInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_VIRTUALAXIS2DINPUTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_VirtualUpInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_VIRTUALUPINPUTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_VirtualDownInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_VIRTUALDOWNINPUTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_VirtualLeftInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_VIRTUALLEFTINPUTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_VirtualRightInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GET_VIRTUALRIGHTINPUTTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void DebugSetJoystickMoveType(::MoleMole::VirtualJoystickMoveType moveType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VirtualJoystickMoveType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DEBUGSETJOYSTICKMOVETYPE_OFFSET))(this, moveType);
		}

		::System::Void DebugSetDeadZonePercent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DEBUGSETDEADZONEPERCENT_OFFSET))(this, value);
		}

		::System::Void DebugSetDirSharedAngleValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DEBUGSETDIRSHAREDANGLEVALUE_OFFSET))(this, value);
		}

		::System::Void DebugSetCenterMoveAreaSize(::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DEBUGSETCENTERMOVEAREASIZE_OFFSET))(this, size);
		}

		::System::Void DebugSetLeftRightAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DEBUGSETLEFTRIGHTANGLE_OFFSET))(this, value);
		}

		::System::Void RefreshVirtualJoystickParam(::MoleMole::Config::ConfigVirtualJoystickParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigVirtualJoystickParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_REFRESHVIRTUALJOYSTICKPARAM_OFFSET))(this, param);
		}

		::System::Void InitViewControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_INITVIEWCONTROL_OFFSET))(this);
		}

		::System::Void OnVirtualJoystickDirStateChanged(::Enum_3_D0F2373931CC685D_3 virtualJoystickDir, ::System::Boolean isDirDown)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D0F2373931CC685D_3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONVIRTUALJOYSTICKDIRSTATECHANGED_OFFSET))(this, virtualJoystickDir, isDirDown);
		}

		::System::Void TryJoystickMove(::UnityEngine::Vector2 hitPos, ::System::Boolean wasPressedThisFrame)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_TRYJOYSTICKMOVE_OFFSET))(this, hitPos, wasPressedThisFrame);
		}

		::System::Void SetVirtualLogicAxis2D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_SETVIRTUALLOGICAXIS2D_OFFSET))(this);
		}

		::System::Void TryJoystickMoveClassic(::UnityEngine::Vector2 hitPos, ::System::Boolean wasPressedThisFrame)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_TRYJOYSTICKMOVECLASSIC_OFFSET))(this, hitPos, wasPressedThisFrame);
		}

		::System::Void TryJoystickMoveModern(::UnityEngine::Vector2 hitPos, ::System::Boolean wasPressedThisFrame)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_TRYJOYSTICKMOVEMODERN_OFFSET))(this, hitPos, wasPressedThisFrame);
		}

		::System::Void InitVirtualJoystickParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_INITVIRTUALJOYSTICKPARAM_OFFSET))(this);
		}

		::System::Void OnPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONPREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void InternalTick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_INTERNALTICK_OFFSET))(this, deltaTime);
		}

		::System::Void OnPointerDown(::System::Int32 id, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONPOINTERDOWN_OFFSET))(this, id, position);
		}

		::System::Void OnPointerUp(::System::Int32 id, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONPOINTERUP_OFFSET))(this, id, position);
		}

		::System::Void OnPointDown2Up()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONPOINTDOWN2UP_OFFSET))(this);
		}

		::System::Void OnUnactive(::System::Boolean resetGraphicPosition, ::System::Boolean resetRootPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONUNACTIVE_OFFSET))(this, resetGraphicPosition, resetRootPosition);
		}

		::System::Void OnRootFixedChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ONROOTFIXEDCHANGED_OFFSET))(this, args);
		}

		::System::Void ResetRootPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_RESETROOTPOSITION_OFFSET))(this);
		}

		::System::Void InitRootPosition(::UnityEngine::Vector2 hitPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_INITROOTPOSITION_OFFSET))(this, hitPos);
		}

		::System::Void RefreshRootPosition(::UnityEngine::Vector2 hitPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_REFRESHROOTPOSITION_OFFSET))(this, hitPos);
		}

		::System::Boolean IsInDeadZone(::UnityEngine::Vector2 hitPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_ISINDEADZONE_OFFSET))(this, hitPos);
		}

		::System::Single SetGraphicPosition(::UnityEngine::Vector2 hitPos)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_SETGRAPHICPOSITION_OFFSET))(this, hitPos);
		}

		::System::Void ResetGraphicPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_RESETGRAPHICPOSITION_OFFSET))(this);
		}

		::System::Boolean TryGetCurrentPointerID(::UnityEngine::Vector2& position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_TRYGETCURRENTPOINTERID_OFFSET))(this, position);
		}

		::System::Void SetUICameraRenderType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_SETUICAMERARENDERTYPE_OFFSET))(this);
		}

		::System::Void InitDirData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_INITDIRDATA_OFFSET))(this);
		}

		::System::Void RefreshVirtualJoystickDirStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_REFRESHVIRTUALJOYSTICKDIRSTATECHANGED_OFFSET))(this);
		}

		::System::Void ResetDirData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_RESETDIRDATA_OFFSET))(this);
		}

		::System::Void StopMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_STOPMOVE_OFFSET))(this);
		}

		::System::Void SetVirtualJoystickDir(::Enum_3_D0F2373931CC685D_3 virtualJoystickDir, ::System::Boolean isIn)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D0F2373931CC685D_3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_SETVIRTUALJOYSTICKDIR_OFFSET))(this, virtualJoystickDir, isIn);
		}

		::System::Boolean GetLogicButtonInputTypeByDir(::Enum_3_D0F2373931CC685D_3 dir, ::MoleMole::LogicButtonInputType& buttonInputType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_D0F2373931CC685D_3, ::MoleMole::LogicButtonInputType&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_GETLOGICBUTTONINPUTTYPEBYDIR_OFFSET))(this, dir, buttonInputType);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

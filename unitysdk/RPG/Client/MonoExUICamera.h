#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoExUICamera_E_ExUICameraState.h"
#include "unitysdk/RPG/Client/MonoExUICamera_E_ExUIZoomRange.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3EE0A731EA0C8B63;
class Class_2_0EF6D9EB61B0E98E_1;
class Class_2_1A03558EE92028F7;
class Class_2_4EAE3B7F219197BA;
class Class_2_53BA676286403FAC;
class Class_2_60C60A4B8464C872;
class Class_2_E46C72143CFC0F6C;
class Class_2_F760CE809D71CA56;
namespace RPG::Client { class MonoExUICameraNavigator; }
namespace RPG::Client { class MonoExUICamera_CameraOutInfo; }
namespace RPG::Client { class MonoExUICamera_IInputProvider; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEXUICAMERA_CLAMPINNERRECT_OFFSET UNITYSDK_OFFSET(0x1B3B16B0)
#define RPG_CLIENT_MONOEXUICAMERA_CLAMPOUTERRECT_OFFSET UNITYSDK_OFFSET(0x1B3B3260)
#define RPG_CLIENT_MONOEXUICAMERA_CLAMPRECT_OFFSET UNITYSDK_OFFSET(0x1B3B3040)
#define RPG_CLIENT_MONOEXUICAMERA_CLAMPZOOM_OFFSET UNITYSDK_OFFSET(0x1B3B3310)
#define RPG_CLIENT_MONOEXUICAMERA_DAMPINGCAMERA_OFFSET UNITYSDK_OFFSET(0x1ACD3730)
#define RPG_CLIENT_MONOEXUICAMERA_FOCUSCAMERA_1_OFFSET UNITYSDK_OFFSET(0x1ACD3CB0)
#define RPG_CLIENT_MONOEXUICAMERA_FOCUSCAMERA_OFFSET UNITYSDK_OFFSET(0x1ACD3C20)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x1ACD4DD0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAEULER_OFFSET UNITYSDK_OFFSET(0x1B3B2590)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAORIGINPOS_OFFSET UNITYSDK_OFFSET(0x1ACD5440)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAOUTINFO_OFFSET UNITYSDK_OFFSET(0x1B3B2BB0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAPIVOT_OFFSET UNITYSDK_OFFSET(0x1ACD5180)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B2470)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERASPEED_OFFSET UNITYSDK_OFFSET(0x1ACD51F0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAZOOMINFO_OFFSET UNITYSDK_OFFSET(0x1ACD2AD0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAZOOMRATIO_OFFSET UNITYSDK_OFFSET(0x1ACD2BB0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x1B3B2150)
#define RPG_CLIENT_MONOEXUICAMERA_GETCANVASPOS_OFFSET UNITYSDK_OFFSET(0x1ACD54A0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCANVASRANGE_OFFSET UNITYSDK_OFFSET(0x1B3B2890)
#define RPG_CLIENT_MONOEXUICAMERA_GETCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1B3B2840)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMBOTTOM_OFFSET UNITYSDK_OFFSET(0x1ACD2970)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMHEIGHT_OFFSET UNITYSDK_OFFSET(0x1ACD2870)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMLEFT_OFFSET UNITYSDK_OFFSET(0x1ACD2500)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMRIGHT_OFFSET UNITYSDK_OFFSET(0x1ACD26C0)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMTOP_OFFSET UNITYSDK_OFFSET(0x1ACD27E0)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMWIDTH_OFFSET UNITYSDK_OFFSET(0x1ACD2620)
#define RPG_CLIENT_MONOEXUICAMERA_GETOUTINFO_OFFSET UNITYSDK_OFFSET(0x1B3B2710)
#define RPG_CLIENT_MONOEXUICAMERA_GETSCREENLENGTH_OFFSET UNITYSDK_OFFSET(0x1ACD3690)
#define RPG_CLIENT_MONOEXUICAMERA_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1B3B27B0)
#define RPG_CLIENT_MONOEXUICAMERA_GETZOOMRANGE_OFFSET UNITYSDK_OFFSET(0x1ACD2E20)
#define RPG_CLIENT_MONOEXUICAMERA_GOTOSTATE_OFFSET UNITYSDK_OFFSET(0x1B3B19A0)
#define RPG_CLIENT_MONOEXUICAMERA_INITCANVASRANGE_OFFSET UNITYSDK_OFFSET(0x1B3B2AD0)
#define RPG_CLIENT_MONOEXUICAMERA_INITSTATES_OFFSET UNITYSDK_OFFSET(0x1B3B0FD0)
#define RPG_CLIENT_MONOEXUICAMERA_INIT_OFFSET UNITYSDK_OFFSET(0x1B3B0E30)
#define RPG_CLIENT_MONOEXUICAMERA_ISALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x1ACD2A00)
#define RPG_CLIENT_MONOEXUICAMERA_ISLOCKX_OFFSET UNITYSDK_OFFSET(0x1ACD55C0)
#define RPG_CLIENT_MONOEXUICAMERA_ISLOCKY_OFFSET UNITYSDK_OFFSET(0x1ACD5600)
#define RPG_CLIENT_MONOEXUICAMERA_MOVECAMERAIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1ACD30C0)
#define RPG_CLIENT_MONOEXUICAMERA_MOVECAMERA_OFFSET UNITYSDK_OFFSET(0x1ACD2EC0)
#define RPG_CLIENT_MONOEXUICAMERA_RECOVERCAMERAHARD_OFFSET UNITYSDK_OFFSET(0x1ACD3E50)
#define RPG_CLIENT_MONOEXUICAMERA_RECOVERCAMERASOFT_OFFSET UNITYSDK_OFFSET(0x1ACD42C0)
#define RPG_CLIENT_MONOEXUICAMERA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B3B1760)
#define RPG_CLIENT_MONOEXUICAMERA_SAFEFRAME_OFFSET UNITYSDK_OFFSET(0x1ACD3B60)
#define RPG_CLIENT_MONOEXUICAMERA_SETBORDERRECVSPEED_OFFSET UNITYSDK_OFFSET(0x1ACD5640)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAANIMATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1B3B1480)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAINITPOS_OFFSET UNITYSDK_OFFSET(0x1B3B1910)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAORIGINPOS_OFFSET UNITYSDK_OFFSET(0x1ACD53E0)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAPIVOT_OFFSET UNITYSDK_OFFSET(0x1ACD4250)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B21A0)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERASPEED_OFFSET UNITYSDK_OFFSET(0x1ACD5260)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAZOOMRATIO_OFFSET UNITYSDK_OFFSET(0x1ACD2C70)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAZOOMSPEED_OFFSET UNITYSDK_OFFSET(0x1ACD52D0)
#define RPG_CLIENT_MONOEXUICAMERA_SETCANVASMARGIN_OFFSET UNITYSDK_OFFSET(0x1ACD2CE0)
#define RPG_CLIENT_MONOEXUICAMERA_SETCANVASRECT_OFFSET UNITYSDK_OFFSET(0x1B3B14D0)
#define RPG_CLIENT_MONOEXUICAMERA_SETDRAGGOPOSOFFSET_OFFSET UNITYSDK_OFFSET(0x1B3B2520)
#define RPG_CLIENT_MONOEXUICAMERA_SETENABLENAVIGATOR_OFFSET UNITYSDK_OFFSET(0x1ACD5740)
#define RPG_CLIENT_MONOEXUICAMERA_SETINPUTPROVIDER_OFFSET UNITYSDK_OFFSET(0x1B3B2760)
#define RPG_CLIENT_MONOEXUICAMERA_SETLOCKXY_OFFSET UNITYSDK_OFFSET(0x1ACD5560)
#define RPG_CLIENT_MONOEXUICAMERA_SETSWIPEENABLE_OFFSET UNITYSDK_OFFSET(0x1ACD56A0)
#define RPG_CLIENT_MONOEXUICAMERA_SETZOOMENABLE_OFFSET UNITYSDK_OFFSET(0x1ACD56F0)
#define RPG_CLIENT_MONOEXUICAMERA_SETZOOMRANGE_OFFSET UNITYSDK_OFFSET(0x1ACD5330)
#define RPG_CLIENT_MONOEXUICAMERA_SET_PANEL0_OFFSET UNITYSDK_OFFSET(0x1B3B0DE0)
#define RPG_CLIENT_MONOEXUICAMERA_SWIPECAMERA_OFFSET UNITYSDK_OFFSET(0x1ACD3140)
#define RPG_CLIENT_MONOEXUICAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B3B1BC0)
#define RPG_CLIENT_MONOEXUICAMERA_ZOOMCAMERABASE_OFFSET UNITYSDK_OFFSET(0x1ACD4800)
#define RPG_CLIENT_MONOEXUICAMERA_ZOOMCAMERA_OFFSET UNITYSDK_OFFSET(0x1ACD4E50)
#define RPG_CLIENT_MONOEXUICAMERA_ZOOMDAMPINGCAMERA_OFFSET UNITYSDK_OFFSET(0x1ACD5140)
#define RPG_CLIENT_MONOEXUICAMERA_ZOOMRECOVERCAMERA_OFFSET UNITYSDK_OFFSET(0x1ACD4610)
#define RPG_CLIENT_MONOEXUICAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACD5810)
#define RPG_CLIENT_MONOEXUICAMERA__FRUSTUMRECT_OFFSET UNITYSDK_OFFSET(0x1ACD3560)
#define RPG_CLIENT_MONOEXUICAMERA__GETZOOMSPEEDBYPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1ACD4A10)
#define RPG_CLIENT_MONOEXUICAMERA__SWIPESPEED_OFFSET UNITYSDK_OFFSET(0x1ACD32E0)
#define RPG_CLIENT_MONOEXUICAMERA__UPDATECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B1F80)
#define RPG_CLIENT_MONOEXUICAMERA__UPDATEDRAGGOPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B1D50)
#define RPG_CLIENT_MONOEXUICAMERA__UPDATE_OFFSET UNITYSDK_OFFSET(0x1B3B1C70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoExUICamera_TypeDefinitionIndex = 72894;

	class MonoExUICamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single FloatEpsilon; // 0x0
		::UnityEngine::Transform* _canvas; // 0x18
		::UnityEngine::Transform* _panel_0; // 0x20
		::System::Boolean _DragGOInsteadOfCamera; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _DragGOList; // 0x30
		::System::Boolean _LockY; // 0x38
		::System::Boolean _LockX; // 0x39
		::UnityEngine::Vector3 _camera_origin_pos; // 0x3C
		::System::Single _canvas_left_margin; // 0x48
		::System::Single _canvas_right_margin; // 0x4C
		::System::Single _canvas_bottom_margin; // 0x50
		::System::Single _canvas_top_margin; // 0x54
		::System::Single _damping_ratio; // 0x58
		::System::Single _damping_in_recover_ratio; // 0x5C
		::System::Single _damping_in_recover_stop_threshold; // 0x60
		::System::Single _camera_recover_speed; // 0x64
		::System::Single _camera_recover_time; // 0x68
		::System::Single _camera_recover_stop_speed; // 0x6C
		::System::Boolean _enable_zoom; // 0x70
		::System::Boolean _zoom_on_pointer_position; // 0x71
		::System::Single _camera_zoom_min_outer; // 0x74
		::System::Single _camera_zoom_min_inner; // 0x78
		::System::Single _camera_zoom_max_inner; // 0x7C
		::System::Single _camera_zoom_max_outer; // 0x80
		::System::Single _swipe_reference_speed_ratio; // 0x84
		::System::Boolean _swipe_hard_follow; // 0x88
		::System::Single _pinch_speed_ratio; // 0x8C
		::System::Single _pinch_speed_limit; // 0x90
		::System::Single _camera_zoomin_recover_speed; // 0x94
		::System::Single _camera_zoomout_recover_speed; // 0x98
		::System::Single _zoom_recover_stop_threshold; // 0x9C
		::UnityEngine::RectTransform* _canvasRect; // 0xA0
		::System::Single _canvas_width_worldspace; // 0xA8
		::System::Single _canvas_height_worldspace; // 0xAC
		::Il2CppArray<::UnityEngine::Vector3>* _canvas_corners; // 0xB0
		::UnityEngine::Rect _canvas_inner_rect; // 0xB8
		::UnityEngine::Rect _canvas_outter_rect; // 0xC8
		::Class_1_3EE0A731EA0C8B63* _currentState; // 0xD8
		::Class_2_F760CE809D71CA56* _idleState; // 0xE0
		::Class_2_4EAE3B7F219197BA* _swipeState; // 0xE8
		::Class_2_E46C72143CFC0F6C* _dampingState; // 0xF0
		::Class_2_60C60A4B8464C872* _recoverState; // 0xF8
		::Class_2_1A03558EE92028F7* _zoomRecoverState; // 0x100
		::Class_2_0EF6D9EB61B0E98E_1* _zoomDampingState; // 0x108
		::Class_2_53BA676286403FAC* _focusState; // 0x110
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MonoExUICamera_E_ExUICameraState, ::Class_1_3EE0A731EA0C8B63*>* _stateDict; // 0x118
		::UnityEngine::Camera* _camera; // 0x120
		::UnityEngine::Vector3 _v_camera_pivot; // 0x128
		::UnityEngine::Vector3 _drag_go_pos_offset; // 0x134
		::System::Single _z_swipe_reference; // 0x140
		::System::Single _zoom_z_speed; // 0x144
		::UnityEngine::Vector3 _recoverSpeed; // 0x148
		::UnityEngine::Vector3 _moveSpeed; // 0x154
		::UnityEngine::Vector3 _innerMoveSpeed; // 0x160
		::RPG::Client::MonoExUICamera_CameraOutInfo* _outInfo; // 0x170
		::System::Boolean _enable_swipe; // 0x178
		::RPG::Client::MonoExUICameraNavigator* _gyroMgr; // 0x180
		::RPG::Client::MonoExUICamera_IInputProvider* _inputProvider; // 0x188
		::System::Boolean allowCameraAnimation; // 0x190
		::RPG::Client::UIController* ownContext; // 0x198
		::Il2CppArray<::System::Single>* _zoomRange; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA__CTOR_OFFSET))(this);
		}

		::System::Void set_Panel0(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SET_PANEL0_OFFSET))(this, a1);
		}

		::System::Void Init(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_INIT_OFFSET))(this, a1);
		}

		::System::Void SetCameraAnimationStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETCAMERAANIMATIONSTATUS_OFFSET))(this, a1);
		}

		::System::Void SetCanvasRect(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETCANVASRECT_OFFSET))(this, a1, a2);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_REFRESH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_UPDATE_OFFSET))(this);
		}

		::System::Void _Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA__UPDATE_OFFSET))(this);
		}

		::UnityEngine::Camera* GetCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCAMERA_OFFSET))(this);
		}

		::System::Void SetCameraInitPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETCAMERAINITPOS_OFFSET))(this);
		}

		::System::Void _UpdateCameraPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA__UPDATECAMERAPOSITION_OFFSET))(this);
		}

		::System::Void _UpdateDragGOPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA__UPDATEDRAGGOPOSITION_OFFSET))(this);
		}

		::System::Void SetCameraPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETCAMERAPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCAMERAPOSITION_OFFSET))(this);
		}

		::System::Void SetDragGoPosOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETDRAGGOPOSOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCameraEuler()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCAMERAEULER_OFFSET))(this);
		}

		::RPG::Client::MonoExUICamera_CameraOutInfo* GetOutInfo()
		{
			return ((::RPG::Client::MonoExUICamera_CameraOutInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETOUTINFO_OFFSET))(this);
		}

		::System::Void SetInputProvider(::RPG::Client::MonoExUICamera_IInputProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera_IInputProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETINPUTPROVIDER_OFFSET))(this, a1);
		}

		::System::Void InitStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_INITSTATES_OFFSET))(this);
		}

		::System::Void GotoState(::RPG::Client::MonoExUICamera_E_ExUICameraState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera_E_ExUICameraState, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GOTOSTATE_OFFSET))(this, a1, a2);
		}

		::Class_1_3EE0A731EA0C8B63* GetState(::RPG::Client::MonoExUICamera_E_ExUICameraState a1)
		{
			return ((::Class_1_3EE0A731EA0C8B63*(*)(::PVOID, ::RPG::Client::MonoExUICamera_E_ExUICameraState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETSTATE_OFFSET))(this, a1);
		}

		::Class_1_3EE0A731EA0C8B63* GetCurrentState()
		{
			return ((::Class_1_3EE0A731EA0C8B63*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCURRENTSTATE_OFFSET))(this);
		}

		::UnityEngine::Rect GetCanvasRange(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCANVASRANGE_OFFSET))(this, a1, a2);
		}

		::System::Void InitCanvasRange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_INITCANVASRANGE_OFFSET))(this);
		}

		::System::Void GetCameraOutInfo(::UnityEngine::Vector3 a1, ::RPG::Client::MonoExUICamera_CameraOutInfo*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::MonoExUICamera_CameraOutInfo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCAMERAOUTINFO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 ClampInnerRect(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_CLAMPINNERRECT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ClampOuterRect(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_CLAMPOUTERRECT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ClampRect(::UnityEngine::Vector3 a1, ::UnityEngine::Rect a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_CLAMPRECT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 ClampZoom(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_CLAMPZOOM_OFFSET))(this, a1);
		}

		::System::Single GetFrustumLeft(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMLEFT_OFFSET))(this, a1);
		}

		::System::Single GetFrustumRight(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMRIGHT_OFFSET))(this, a1);
		}

		::System::Single GetFrustumTop(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMTOP_OFFSET))(this, a1);
		}

		::System::Single GetFrustumBottom(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMBOTTOM_OFFSET))(this, a1);
		}

		::System::Single GetFrustumHeight(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMHEIGHT_OFFSET))(this, a1);
		}

		::System::Single GetFrustumWidth(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMWIDTH_OFFSET))(this, a1);
		}

		::System::Boolean IsAlmostZero(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_ISALMOSTZERO_OFFSET))(this, a1);
		}

		::RPG::Client::MonoExUICamera_E_ExUIZoomRange GetCameraZoomInfo(::System::Single a1, ::System::Single& a2)
		{
			return ((::RPG::Client::MonoExUICamera_E_ExUIZoomRange(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCAMERAZOOMINFO_OFFSET))(this, a1, a2);
		}

		::System::Single GetCameraZoomRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCAMERAZOOMRATIO_OFFSET))(this);
		}

		::System::Void SetCameraZoomRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETCAMERAZOOMRATIO_OFFSET))(this, a1);
		}

		::System::Void SetCanvasMargin(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETCANVASMARGIN_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Single>* GetZoomRange()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETZOOMRANGE_OFFSET))(this);
		}

		::System::Void MoveCamera(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_MOVECAMERA_OFFSET))(this, a1);
		}

		::System::Void MoveCameraImmediately(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_MOVECAMERAIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void SwipeCamera(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SWIPECAMERA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _SwipeSpeed(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA__SWIPESPEED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _FrustumRect(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA__FRUSTUMRECT_OFFSET))(this, a1);
		}

		::System::Boolean DampingCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_DAMPINGCAMERA_OFFSET))(this);
		}

		::System::Void FocusCamera(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_FOCUSCAMERA_OFFSET))(this, a1, a2);
		}

		::System::Void FocusCamera_1(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_FOCUSCAMERA_1_OFFSET))(this, a1, a2);
		}

		::System::Single SafeFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SAFEFRAME_OFFSET))(this);
		}

		::System::Boolean RecoverCameraHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_RECOVERCAMERAHARD_OFFSET))(this);
		}

		::System::Boolean RecoverCameraSoft()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_RECOVERCAMERASOFT_OFFSET))(this);
		}

		::System::Boolean ZoomRecoverCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_ZOOMRECOVERCAMERA_OFFSET))(this);
		}

		::System::Void ZoomCameraBase(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_ZOOMCAMERABASE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _GetZoomSpeedByPointerPosition(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA__GETZOOMSPEEDBYPOINTERPOSITION_OFFSET))(this, a1);
		}

		::System::Void ZoomCamera(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_ZOOMCAMERA_OFFSET))(this, a1);
		}

		::System::Boolean ZoomDampingCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_ZOOMDAMPINGCAMERA_OFFSET))(this);
		}

		::System::Single GetScreenLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETSCREENLENGTH_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCameraPivot()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCAMERAPIVOT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCameraSpeed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCAMERASPEED_OFFSET))(this);
		}

		::System::Void SetCameraSpeed(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETCAMERASPEED_OFFSET))(this, a1);
		}

		::System::Void SetCameraZoomSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETCAMERAZOOMSPEED_OFFSET))(this, a1);
		}

		::System::Void SetZoomRange(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETZOOMRANGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetCameraPivot(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETCAMERAPIVOT_OFFSET))(this, a1);
		}

		::System::Void SetCameraOriginPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETCAMERAORIGINPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCameraOriginPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCAMERAORIGINPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCanvasPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCANVASPOS_OFFSET))(this);
		}

		::System::Single GetCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_GETCAMERADISTANCE_OFFSET))(this);
		}

		::System::Void SetLockXY(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETLOCKXY_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsLockX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_ISLOCKX_OFFSET))(this);
		}

		::System::Boolean IsLockY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_ISLOCKY_OFFSET))(this);
		}

		::System::Void SetBorderRecvSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETBORDERRECVSPEED_OFFSET))(this, a1);
		}

		::System::Void SetSwipeEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETSWIPEENABLE_OFFSET))(this, a1);
		}

		::System::Void SetZoomEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETZOOMENABLE_OFFSET))(this, a1);
		}

		::System::Void SetEnableNavigator(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERA_SETENABLENAVIGATOR_OFFSET))(this, a1);
		}
	};
}

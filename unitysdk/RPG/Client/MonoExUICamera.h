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

#define RPG_CLIENT_MONOEXUICAMERA_CLAMPINNERRECT_OFFSET UNITYSDK_OFFSET(0xD825F40)
#define RPG_CLIENT_MONOEXUICAMERA_CLAMPOUTERRECT_OFFSET UNITYSDK_OFFSET(0xD8280F0)
#define RPG_CLIENT_MONOEXUICAMERA_CLAMPRECT_OFFSET UNITYSDK_OFFSET(0xD827ED0)
#define RPG_CLIENT_MONOEXUICAMERA_CLAMPZOOM_OFFSET UNITYSDK_OFFSET(0xD828340)
#define RPG_CLIENT_MONOEXUICAMERA_DAMPINGCAMERA_OFFSET UNITYSDK_OFFSET(0xD8290E0)
#define RPG_CLIENT_MONOEXUICAMERA_FOCUSCAMERA_1_OFFSET UNITYSDK_OFFSET(0xD829670)
#define RPG_CLIENT_MONOEXUICAMERA_FOCUSCAMERA_OFFSET UNITYSDK_OFFSET(0xD8295E0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0xD82A7C0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAEULER_OFFSET UNITYSDK_OFFSET(0xD826EA0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAORIGINPOS_OFFSET UNITYSDK_OFFSET(0xD82AE30)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAOUTINFO_OFFSET UNITYSDK_OFFSET(0xD8274C0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAPIVOT_OFFSET UNITYSDK_OFFSET(0xD82AB70)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xD826D80)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERASPEED_OFFSET UNITYSDK_OFFSET(0xD82ABE0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAZOOMINFO_OFFSET UNITYSDK_OFFSET(0xD8284B0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERAZOOMRATIO_OFFSET UNITYSDK_OFFSET(0xD828590)
#define RPG_CLIENT_MONOEXUICAMERA_GETCAMERA_OFFSET UNITYSDK_OFFSET(0xD8269E0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCANVASPOS_OFFSET UNITYSDK_OFFSET(0xD82AE90)
#define RPG_CLIENT_MONOEXUICAMERA_GETCANVASRANGE_OFFSET UNITYSDK_OFFSET(0xD8271A0)
#define RPG_CLIENT_MONOEXUICAMERA_GETCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xD827150)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMBOTTOM_OFFSET UNITYSDK_OFFSET(0xD827E40)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMHEIGHT_OFFSET UNITYSDK_OFFSET(0xD828240)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMLEFT_OFFSET UNITYSDK_OFFSET(0xD827B70)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMRIGHT_OFFSET UNITYSDK_OFFSET(0xD827C90)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMTOP_OFFSET UNITYSDK_OFFSET(0xD827DB0)
#define RPG_CLIENT_MONOEXUICAMERA_GETFRUSTUMWIDTH_OFFSET UNITYSDK_OFFSET(0xD8281A0)
#define RPG_CLIENT_MONOEXUICAMERA_GETOUTINFO_OFFSET UNITYSDK_OFFSET(0xD827020)
#define RPG_CLIENT_MONOEXUICAMERA_GETSCREENLENGTH_OFFSET UNITYSDK_OFFSET(0xD829040)
#define RPG_CLIENT_MONOEXUICAMERA_GETSTATE_OFFSET UNITYSDK_OFFSET(0xD8270C0)
#define RPG_CLIENT_MONOEXUICAMERA_GETZOOMRANGE_OFFSET UNITYSDK_OFFSET(0xD828800)
#define RPG_CLIENT_MONOEXUICAMERA_GOTOSTATE_OFFSET UNITYSDK_OFFSET(0xD826230)
#define RPG_CLIENT_MONOEXUICAMERA_INITCANVASRANGE_OFFSET UNITYSDK_OFFSET(0xD8273E0)
#define RPG_CLIENT_MONOEXUICAMERA_INITSTATES_OFFSET UNITYSDK_OFFSET(0xD825860)
#define RPG_CLIENT_MONOEXUICAMERA_INIT_OFFSET UNITYSDK_OFFSET(0xD8256B0)
#define RPG_CLIENT_MONOEXUICAMERA_ISALMOSTZERO_OFFSET UNITYSDK_OFFSET(0xD8283E0)
#define RPG_CLIENT_MONOEXUICAMERA_ISLOCKX_OFFSET UNITYSDK_OFFSET(0xD82AFB0)
#define RPG_CLIENT_MONOEXUICAMERA_ISLOCKY_OFFSET UNITYSDK_OFFSET(0xD82AFF0)
#define RPG_CLIENT_MONOEXUICAMERA_MOVECAMERAIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xD828A70)
#define RPG_CLIENT_MONOEXUICAMERA_MOVECAMERA_OFFSET UNITYSDK_OFFSET(0xD8288A0)
#define RPG_CLIENT_MONOEXUICAMERA_RECOVERCAMERAHARD_OFFSET UNITYSDK_OFFSET(0xD829820)
#define RPG_CLIENT_MONOEXUICAMERA_RECOVERCAMERASOFT_OFFSET UNITYSDK_OFFSET(0xD829C90)
#define RPG_CLIENT_MONOEXUICAMERA_REFRESH_OFFSET UNITYSDK_OFFSET(0xD825FF0)
#define RPG_CLIENT_MONOEXUICAMERA_SAFEFRAME_OFFSET UNITYSDK_OFFSET(0xD829520)
#define RPG_CLIENT_MONOEXUICAMERA_SETBORDERRECVSPEED_OFFSET UNITYSDK_OFFSET(0xD82B030)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAANIMATIONSTATUS_OFFSET UNITYSDK_OFFSET(0xD825D10)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAINITPOS_OFFSET UNITYSDK_OFFSET(0xD8261A0)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAORIGINPOS_OFFSET UNITYSDK_OFFSET(0xD82ADD0)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAPIVOT_OFFSET UNITYSDK_OFFSET(0xD829C20)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xD826AB0)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERASPEED_OFFSET UNITYSDK_OFFSET(0xD82AC50)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAZOOMRATIO_OFFSET UNITYSDK_OFFSET(0xD828650)
#define RPG_CLIENT_MONOEXUICAMERA_SETCAMERAZOOMSPEED_OFFSET UNITYSDK_OFFSET(0xD82ACC0)
#define RPG_CLIENT_MONOEXUICAMERA_SETCANVASMARGIN_OFFSET UNITYSDK_OFFSET(0xD8286C0)
#define RPG_CLIENT_MONOEXUICAMERA_SETCANVASRECT_OFFSET UNITYSDK_OFFSET(0xD825D60)
#define RPG_CLIENT_MONOEXUICAMERA_SETDRAGGOPOSOFFSET_OFFSET UNITYSDK_OFFSET(0xD826E30)
#define RPG_CLIENT_MONOEXUICAMERA_SETENABLENAVIGATOR_OFFSET UNITYSDK_OFFSET(0xD82B130)
#define RPG_CLIENT_MONOEXUICAMERA_SETINPUTPROVIDER_OFFSET UNITYSDK_OFFSET(0xD827070)
#define RPG_CLIENT_MONOEXUICAMERA_SETLOCKXY_OFFSET UNITYSDK_OFFSET(0xD82AF50)
#define RPG_CLIENT_MONOEXUICAMERA_SETSWIPEENABLE_OFFSET UNITYSDK_OFFSET(0xD82B090)
#define RPG_CLIENT_MONOEXUICAMERA_SETZOOMENABLE_OFFSET UNITYSDK_OFFSET(0xD82B0E0)
#define RPG_CLIENT_MONOEXUICAMERA_SETZOOMRANGE_OFFSET UNITYSDK_OFFSET(0xD82AD20)
#define RPG_CLIENT_MONOEXUICAMERA_SET_PANEL0_OFFSET UNITYSDK_OFFSET(0xD825660)
#define RPG_CLIENT_MONOEXUICAMERA_SWIPECAMERA_OFFSET UNITYSDK_OFFSET(0xD828AF0)
#define RPG_CLIENT_MONOEXUICAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0xD826450)
#define RPG_CLIENT_MONOEXUICAMERA_ZOOMCAMERABASE_OFFSET UNITYSDK_OFFSET(0xD82A200)
#define RPG_CLIENT_MONOEXUICAMERA_ZOOMCAMERA_OFFSET UNITYSDK_OFFSET(0xD82A840)
#define RPG_CLIENT_MONOEXUICAMERA_ZOOMDAMPINGCAMERA_OFFSET UNITYSDK_OFFSET(0xD82AB30)
#define RPG_CLIENT_MONOEXUICAMERA_ZOOMRECOVERCAMERA_OFFSET UNITYSDK_OFFSET(0xD82A010)
#define RPG_CLIENT_MONOEXUICAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xD82B200)
#define RPG_CLIENT_MONOEXUICAMERA__FRUSTUMRECT_OFFSET UNITYSDK_OFFSET(0xD828F10)
#define RPG_CLIENT_MONOEXUICAMERA__GETZOOMSPEEDBYPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0xD82A400)
#define RPG_CLIENT_MONOEXUICAMERA__SWIPESPEED_OFFSET UNITYSDK_OFFSET(0xD828C90)
#define RPG_CLIENT_MONOEXUICAMERA__UPDATECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xD826810)
#define RPG_CLIENT_MONOEXUICAMERA__UPDATEDRAGGOPOSITION_OFFSET UNITYSDK_OFFSET(0xD8265E0)
#define RPG_CLIENT_MONOEXUICAMERA__UPDATE_OFFSET UNITYSDK_OFFSET(0xD826500)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoExUICamera_TypeDefinitionIndex = 72895;

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

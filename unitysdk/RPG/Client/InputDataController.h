#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ClientInputData; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1; }

#define RPG_CLIENT_INPUTDATACONTROLLER_APPLYCAMERAROTATIONSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xBD39AF0)
#define RPG_CLIENT_INPUTDATACONTROLLER_CLEARINPUTDATA_OFFSET UNITYSDK_OFFSET(0xBD392F0)
#define RPG_CLIENT_INPUTDATACONTROLLER_CREATE_OFFSET UNITYSDK_OFFSET(0xBD39030)
#define RPG_CLIENT_INPUTDATACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD3A1F0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_HASPLAYERMOVEINPUTINLASTFRAME_OFFSET UNITYSDK_OFFSET(0xBD3B070)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0xBD3ABD0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTMOTIONFLAG_OFFSET UNITYSDK_OFFSET(0xBD3B030)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0xBD3B050)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0xBD3AC90)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xBD3AC30)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISDISALLOWPLAYERRUSH_OFFSET UNITYSDK_OFFSET(0xBD3AD40)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDRUSH_OFFSET UNITYSDK_OFFSET(0xBD3ADD0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDWALK_OFFSET UNITYSDK_OFFSET(0xBD3AE60)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORCEWALK_OFFSET UNITYSDK_OFFSET(0xBD396D0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSETTINGFORCEWALK_OFFSET UNITYSDK_OFFSET(0xBD3B020)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSTORYFORCEWALK_OFFSET UNITYSDK_OFFSET(0xBD3B010)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENHEIGHTININCH_OFFSET UNITYSDK_OFFSET(0xBD3AC10)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENWIDTHININCH_OFFSET UNITYSDK_OFFSET(0xBD3ABF0)
#define RPG_CLIENT_INPUTDATACONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBD39250)
#define RPG_CLIENT_INPUTDATACONTROLLER_RESETCAMERAROTATIONDATA_OFFSET UNITYSDK_OFFSET(0xBD397F0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERATOUCHDOWN_OFFSET UNITYSDK_OFFSET(0xBD3A190)
#define RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERAZOOMINPUTDATA_OFFSET UNITYSDK_OFFSET(0xBD39A60)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0xBD3ABE0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTMOTIONFLAG_OFFSET UNITYSDK_OFFSET(0xBD3B040)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0xBD3B060)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0xBD3ACA0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xBD3AC40)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDRUSH_OFFSET UNITYSDK_OFFSET(0xBD3ADE0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDWALK_OFFSET UNITYSDK_OFFSET(0xBD3AE70)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORCEWALK_OFFSET UNITYSDK_OFFSET(0xBD3ACF0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSETTINGFORCEWALK_OFFSET UNITYSDK_OFFSET(0xBD3A370)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSTORYFORCEWALK_OFFSET UNITYSDK_OFFSET(0xBD3AED0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENHEIGHTININCH_OFFSET UNITYSDK_OFFSET(0xBD3AC20)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENWIDTHININCH_OFFSET UNITYSDK_OFFSET(0xBD3AC00)
#define RPG_CLIENT_INPUTDATACONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0xBD39730)
#define RPG_CLIENT_INPUTDATACONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xBD39790)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYRUN_OFFSET UNITYSDK_OFFSET(0xBD394E0)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAROTATIONINPUTDATA_OFFSET UNITYSDK_OFFSET(0xBD39C30)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAZOOMPINCHDELTA_OFFSET UNITYSDK_OFFSET(0xBD39920)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYWALK_OFFSET UNITYSDK_OFFSET(0xBD39340)
#define RPG_CLIENT_INPUTDATACONTROLLER__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD3A4C0)
#define RPG_CLIENT_INPUTDATACONTROLLER__CALCULATECACHEDATAWEIGHT_OFFSET UNITYSDK_OFFSET(0xBD3AB30)
#define RPG_CLIENT_INPUTDATACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBD390A0)
#define RPG_CLIENT_INPUTDATACONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0xBD390C0)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0xBD3A660)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xBD3A750)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONRESETCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0xBD3A9C0)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0xBD3A900)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0xBD3A840)
#define RPG_CLIENT_INPUTDATACONTROLLER__SETCAMERAROTATIONINPUTDATA_OFFSET UNITYSDK_OFFSET(0xBD39F10)

namespace RPG::Client
{
	inline static constexpr unsigned int InputDataController_TypeDefinitionIndex = 57308;

	class InputDataController : public ::System::Object
	{
	public:
		// static const ::System::Single MOUSE_MOVING_X_SCALE_FACTOR; // 0x0
		// static const ::System::Single MOUSE_MOVING_Y_SCALE_FACTOR; // 0x0
		// static const ::System::Int32 _INPUT_CACHE_DATA_MAX_COUNT = 0xA; // 0x0
		// static const ::System::Single _DEFAULT_DPI; // 0x0
		::RPG::Client::ClientInputData* _InputData_k__BackingField; // 0x10
		::System::Collections::Generic::CacheLinkedList_1<::UnityEngine::Vector2>* _CameraRotationInputCache; // 0x18
		::System::Single ZOOMING_SCALE_FACTOR; // 0x20
		::System::Boolean _bForbidWalk; // 0x24
		::System::Boolean bCanCameraRotation; // 0x25
		::System::Boolean bCanCameraZoom; // 0x26
		::RPG::GameCore::CharacterMotionFlag _InputMotionFlag; // 0x28
		::System::Single _ScreenWidthInInch_k__BackingField; // 0x2C
		::System::Boolean bSettingForceWalk; // 0x30
		::System::Boolean bHasPlayerMoveInputInLastFrame; // 0x31
		::System::Boolean _IsBlocked_k__BackingField; // 0x32
		::System::Boolean bStoryForceWalk; // 0x33
		::System::Boolean bPlayerMove; // 0x34
		::System::Boolean _bForbidRush; // 0x35
		::System::Single _ScreenHeightInInch_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::InputDataController* Create()
		{
			return ((::RPG::Client::InputDataController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_CREATE_OFFSET))();
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ClearInputData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_CLEARINPUTDATA_OFFSET))(this);
		}

		::System::Void TryWalk(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYWALK_OFFSET))(this, a1);
		}

		::System::Void TryRun(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYRUN_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_STOP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TICK_OFFSET))(this, a1);
		}

		::System::Void ResetCameraRotationData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_RESETCAMERAROTATIONDATA_OFFSET))(this);
		}

		::System::Void TrySetCameraZoomPinchDelta(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAZOOMPINCHDELTA_OFFSET))(this, a1);
		}

		static ::System::Void ApplyCameraRotationScaleFactor(::System::Single& a1, ::System::Single& a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_APPLYCAMERAROTATIONSCALEFACTOR_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void TrySetCameraRotationInputData(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAROTATIONINPUTDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetCameraZoomInputData(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERAZOOMINPUTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetCameraTouchDown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERATOUCHDOWN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnApplicationFocusChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONFOCUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnApplicationPause(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void _OnUnLockCameraZoom(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAZOOM_OFFSET))(this, a1);
		}

		::System::Void _OnUnLockCameraRotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAROTATION_OFFSET))(this, a1);
		}

		::System::Void _OnResetCameraRotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONRESETCAMERAROTATION_OFFSET))(this, a1);
		}

		::System::Void _SetCameraRotationInputData(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__SETCAMERAROTATIONINPUTDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Single _CalculateCacheDataWeight(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__CALCULATECACHEDATAWEIGHT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ClientInputData* get_InputData()
		{
			return ((::RPG::Client::ClientInputData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTDATA_OFFSET))(this);
		}

		::System::Void set_InputData(::RPG::Client::ClientInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClientInputData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTDATA_OFFSET))(this, a1);
		}

		::System::Single get_ScreenWidthInInch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENWIDTHININCH_OFFSET))(this);
		}

		::System::Void set_ScreenWidthInInch(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENWIDTHININCH_OFFSET))(this, a1);
		}

		::System::Single get_ScreenHeightInInch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENHEIGHTININCH_OFFSET))(this);
		}

		::System::Void set_ScreenHeightInInch(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENHEIGHTININCH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanCameraZoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAZOOM_OFFSET))(this);
		}

		::System::Void set_IsCanCameraZoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAZOOM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanCameraRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAROTATION_OFFSET))(this);
		}

		::System::Void set_IsCanCameraRotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAROTATION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsForceWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORCEWALK_OFFSET))(this);
		}

		::System::Void set_IsForceWalk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORCEWALK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisallowPlayerRush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISDISALLOWPLAYERRUSH_OFFSET))(this);
		}

		::System::Boolean get_IsForbidRush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDRUSH_OFFSET))(this);
		}

		::System::Void set_IsForbidRush(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDRUSH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsForbidWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDWALK_OFFSET))(this);
		}

		::System::Void set_IsForbidWalk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDWALK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStoryForceWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSTORYFORCEWALK_OFFSET))(this);
		}

		::System::Void set_IsStoryForceWalk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSTORYFORCEWALK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSettingForceWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSETTINGFORCEWALK_OFFSET))(this);
		}

		::System::Void set_IsSettingForceWalk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSETTINGFORCEWALK_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterMotionFlag get_InputMotionFlag()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTMOTIONFLAG_OFFSET))(this);
		}

		::System::Void set_InputMotionFlag(::RPG::GameCore::CharacterMotionFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTMOTIONFLAG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISBLOCKED_OFFSET))(this);
		}

		::System::Void set_IsBlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISBLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPlayerMoveInputInLastFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_HASPLAYERMOVEINPUTINLASTFRAME_OFFSET))(this);
		}
	};
}

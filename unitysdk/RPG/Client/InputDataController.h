#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ClientInputData; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1; }

#define RPG_CLIENT_INPUTDATACONTROLLER_APPLYCAMERAROTATIONSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x994A290)
#define RPG_CLIENT_INPUTDATACONTROLLER_CLEARINPUTDATA_OFFSET UNITYSDK_OFFSET(0x99499C0)
#define RPG_CLIENT_INPUTDATACONTROLLER_CREATE_OFFSET UNITYSDK_OFFSET(0x9949700)
#define RPG_CLIENT_INPUTDATACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x994A990)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_HASPLAYERMOVEINPUTINLASTFRAME_OFFSET UNITYSDK_OFFSET(0x994B7B0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0x994B310)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTMOTIONFLAG_OFFSET UNITYSDK_OFFSET(0x994B770)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x994B790)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0x994B3D0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0x994B370)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISDISALLOWPLAYERRUSH_OFFSET UNITYSDK_OFFSET(0x994B480)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDRUSH_OFFSET UNITYSDK_OFFSET(0x994B510)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDWALK_OFFSET UNITYSDK_OFFSET(0x994B5A0)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORCEWALK_OFFSET UNITYSDK_OFFSET(0x9949E70)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSETTINGFORCEWALK_OFFSET UNITYSDK_OFFSET(0x994B760)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSTORYFORCEWALK_OFFSET UNITYSDK_OFFSET(0x994B750)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENHEIGHTININCH_OFFSET UNITYSDK_OFFSET(0x994B350)
#define RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENWIDTHININCH_OFFSET UNITYSDK_OFFSET(0x994B330)
#define RPG_CLIENT_INPUTDATACONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9949920)
#define RPG_CLIENT_INPUTDATACONTROLLER_RESETCAMERAROTATIONDATA_OFFSET UNITYSDK_OFFSET(0x9949F90)
#define RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERATOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x994A930)
#define RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERAZOOMINPUTDATA_OFFSET UNITYSDK_OFFSET(0x994A200)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0x994B320)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTMOTIONFLAG_OFFSET UNITYSDK_OFFSET(0x994B780)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x994B7A0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0x994B3E0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0x994B380)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDRUSH_OFFSET UNITYSDK_OFFSET(0x994B520)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDWALK_OFFSET UNITYSDK_OFFSET(0x994B5B0)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORCEWALK_OFFSET UNITYSDK_OFFSET(0x994B430)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSETTINGFORCEWALK_OFFSET UNITYSDK_OFFSET(0x994AB10)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSTORYFORCEWALK_OFFSET UNITYSDK_OFFSET(0x994B610)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENHEIGHTININCH_OFFSET UNITYSDK_OFFSET(0x994B360)
#define RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENWIDTHININCH_OFFSET UNITYSDK_OFFSET(0x994B340)
#define RPG_CLIENT_INPUTDATACONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0x9949ED0)
#define RPG_CLIENT_INPUTDATACONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x9949F30)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYRUN_OFFSET UNITYSDK_OFFSET(0x9949BB0)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAROTATIONINPUTDATA_OFFSET UNITYSDK_OFFSET(0x994A3D0)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAZOOMPINCHDELTA_OFFSET UNITYSDK_OFFSET(0x994A0C0)
#define RPG_CLIENT_INPUTDATACONTROLLER_TRYWALK_OFFSET UNITYSDK_OFFSET(0x9949A10)
#define RPG_CLIENT_INPUTDATACONTROLLER__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x994AC60)
#define RPG_CLIENT_INPUTDATACONTROLLER__CALCULATECACHEDATAWEIGHT_OFFSET UNITYSDK_OFFSET(0x994B270)
#define RPG_CLIENT_INPUTDATACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9949770)
#define RPG_CLIENT_INPUTDATACONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0x9949790)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x994ADA0)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x994AE90)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONRESETCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0x994B100)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0x994B040)
#define RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0x994AF80)
#define RPG_CLIENT_INPUTDATACONTROLLER__SETCAMERAROTATIONINPUTDATA_OFFSET UNITYSDK_OFFSET(0x994A6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int InputDataController_TypeDefinitionIndex = 49710;

	class InputDataController : public ::System::Object
	{
	public:
		// static const ::System::Single MOUSE_MOVING_X_SCALE_FACTOR; // 0x0
		// static const ::System::Single MOUSE_MOVING_Y_SCALE_FACTOR; // 0x0
		// static const ::System::Int32 _INPUT_CACHE_DATA_MAX_COUNT = 0xA; // 0x0
		// static const ::System::Single _DEFAULT_DPI; // 0x0
		::System::Collections::Generic::CacheLinkedList_1<::UnityEngine::Vector2>* _CameraRotationInputCache; // 0x10
		::RPG::Client::ClientInputData* _InputData_k__BackingField; // 0x18
		::System::Boolean bCanCameraZoom; // 0x20
		::System::Boolean bHasPlayerMoveInputInLastFrame; // 0x21
		::System::Boolean bPlayerMove; // 0x22
		::RPG::GameCore::CharacterMotionFlag _InputMotionFlag; // 0x24
		::System::Single _ScreenWidthInInch_k__BackingField; // 0x28
		::System::Single ZOOMING_SCALE_FACTOR; // 0x2C
		::System::Boolean bStoryForceWalk; // 0x30
		::System::Boolean bSettingForceWalk; // 0x31
		::System::Single _ScreenHeightInInch_k__BackingField; // 0x34
		::System::Boolean _bForbidWalk; // 0x38
		::System::Boolean bCanCameraRotation; // 0x39
		::System::Boolean _bForbidRush; // 0x3A
		::System::Boolean _IsBlocked_k__BackingField; // 0x3B

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

		::System::Void TryWalk(::System::Single fWorldAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYWALK_OFFSET))(this, fWorldAngle);
		}

		::System::Void TryRun(::System::Single fWorldAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYRUN_OFFSET))(this, fWorldAngle);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_STOP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ResetCameraRotationData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_RESETCAMERAROTATIONDATA_OFFSET))(this);
		}

		::System::Void TrySetCameraZoomPinchDelta(::System::Single fPinchDelta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAZOOMPINCHDELTA_OFFSET))(this, fPinchDelta);
		}

		static ::System::Void ApplyCameraRotationScaleFactor(::System::Single& deltaX, ::System::Single& deltaY, ::System::Boolean inputByController, ::System::Boolean inputByTouch)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_APPLYCAMERAROTATIONSCALEFACTOR_OFFSET))(deltaX, deltaY, inputByController, inputByTouch);
		}

		::System::Void TrySetCameraRotationInputData(::System::Single deltaX, ::System::Single deltaY, ::System::Boolean inputByController, ::System::Boolean inputByTouch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_TRYSETCAMERAROTATIONINPUTDATA_OFFSET))(this, deltaX, deltaY, inputByController, inputByTouch);
		}

		::System::Void SetCameraZoomInputData(::System::Single fZoomValue, ::System::Boolean bZoomByController)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERAZOOMINPUTDATA_OFFSET))(this, fZoomValue, bZoomByController);
		}

		::System::Void SetCameraTouchDown(::System::Boolean down)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SETCAMERATOUCHDOWN_OFFSET))(this, down);
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

		::System::Void _OnApplicationFocusChange(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONFOCUSCHANGE_OFFSET))(this, args);
		}

		::System::Void _OnApplicationPause(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONAPPLICATIONPAUSE_OFFSET))(this, args);
		}

		::System::Void _OnUnLockCameraZoom(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAZOOM_OFFSET))(this, args);
		}

		::System::Void _OnUnLockCameraRotation(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONUNLOCKCAMERAROTATION_OFFSET))(this, args);
		}

		::System::Void _OnResetCameraRotation(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__ONRESETCAMERAROTATION_OFFSET))(this, args);
		}

		::System::Void _SetCameraRotationInputData(::System::Single fDeltaX, ::System::Single fDeltaY, ::System::Boolean inputByController)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__SETCAMERAROTATIONINPUTDATA_OFFSET))(this, fDeltaX, fDeltaY, inputByController);
		}

		::System::Single _CalculateCacheDataWeight(::System::Single nCurrentCount, ::System::Single nMaxCount)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER__CALCULATECACHEDATAWEIGHT_OFFSET))(this, nCurrentCount, nMaxCount);
		}

		::RPG::Client::ClientInputData* get_InputData()
		{
			return ((::RPG::Client::ClientInputData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTDATA_OFFSET))(this);
		}

		::System::Void set_InputData(::RPG::Client::ClientInputData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClientInputData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTDATA_OFFSET))(this, value);
		}

		::System::Single get_ScreenWidthInInch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENWIDTHININCH_OFFSET))(this);
		}

		::System::Void set_ScreenWidthInInch(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENWIDTHININCH_OFFSET))(this, value);
		}

		::System::Single get_ScreenHeightInInch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_SCREENHEIGHTININCH_OFFSET))(this);
		}

		::System::Void set_ScreenHeightInInch(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_SCREENHEIGHTININCH_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanCameraZoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAZOOM_OFFSET))(this);
		}

		::System::Void set_IsCanCameraZoom(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAZOOM_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanCameraRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISCANCAMERAROTATION_OFFSET))(this);
		}

		::System::Void set_IsCanCameraRotation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISCANCAMERAROTATION_OFFSET))(this, value);
		}

		::System::Boolean get_IsForceWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORCEWALK_OFFSET))(this);
		}

		::System::Void set_IsForceWalk(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORCEWALK_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisallowPlayerRush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISDISALLOWPLAYERRUSH_OFFSET))(this);
		}

		::System::Boolean get_IsForbidRush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDRUSH_OFFSET))(this);
		}

		::System::Void set_IsForbidRush(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDRUSH_OFFSET))(this, value);
		}

		::System::Boolean get_IsForbidWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISFORBIDWALK_OFFSET))(this);
		}

		::System::Void set_IsForbidWalk(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISFORBIDWALK_OFFSET))(this, value);
		}

		::System::Boolean get_IsStoryForceWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSTORYFORCEWALK_OFFSET))(this);
		}

		::System::Void set_IsStoryForceWalk(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSTORYFORCEWALK_OFFSET))(this, value);
		}

		::System::Boolean get_IsSettingForceWalk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISSETTINGFORCEWALK_OFFSET))(this);
		}

		::System::Void set_IsSettingForceWalk(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISSETTINGFORCEWALK_OFFSET))(this, value);
		}

		::RPG::GameCore::CharacterMotionFlag get_InputMotionFlag()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_INPUTMOTIONFLAG_OFFSET))(this);
		}

		::System::Void set_InputMotionFlag(::RPG::GameCore::CharacterMotionFlag value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_INPUTMOTIONFLAG_OFFSET))(this, value);
		}

		::System::Boolean get_IsBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_ISBLOCKED_OFFSET))(this);
		}

		::System::Void set_IsBlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_SET_ISBLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_HasPlayerMoveInputInLastFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTDATACONTROLLER_GET_HASPLAYERMOVEINPUTINLASTFRAME_OFFSET))(this);
		}
	};
}

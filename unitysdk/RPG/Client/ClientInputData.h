#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CLIENTINPUTDATA_CLEARCACHERUSHMOVEFLAG_OFFSET UNITYSDK_OFFSET(0xA08EE80)
#define RPG_CLIENT_CLIENTINPUTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA08E4C0)
#define RPG_CLIENT_CLIENTINPUTDATA_GETCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xA08E920)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_CAMERAROTATIONSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xA08E060)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_ISCACHERUSHMOVEFLAG_OFFSET UNITYSDK_OFFSET(0xA08EE10)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PLAYERMOVECONTROLDIR_OFFSET UNITYSDK_OFFSET(0xA08E050)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSNORMALATKBTN_OFFSET UNITYSDK_OFFSET(0xA08EED0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSSKILLBTN_OFFSET UNITYSDK_OFFSET(0xA08EEE0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_RUSHFLAG_OFFSET UNITYSDK_OFFSET(0xA08ED90)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_USERECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xA08EEF0)
#define RPG_CLIENT_CLIENTINPUTDATA_RESETFLAGONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA08E640)
#define RPG_CLIENT_CLIENTINPUTDATA_RESETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xA08ED50)
#define RPG_CLIENT_CLIENTINPUTDATA_SETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xA08EB30)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PLAYERMOVECONTROLDIR_OFFSET UNITYSDK_OFFSET(0xA08DF50)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSNORMALATKBTN_OFFSET UNITYSDK_OFFSET(0xA08E5A0)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSSKILLBTN_OFFSET UNITYSDK_OFFSET(0xA08E5F0)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_RUSHFLAG_OFFSET UNITYSDK_OFFSET(0xA08EDA0)
#define RPG_CLIENT_CLIENTINPUTDATA_TRYRESETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xA08E720)
#define RPG_CLIENT_CLIENTINPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA08EF00)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientInputData_TypeDefinitionIndex = 56530;

	class ClientInputData : public ::System::Object
	{
	public:
		// static const ::System::Single _RecordPlayerInputDirLimit; // 0x0
		// static const ::System::Single CACHE_RUSH_MOVE_TIME; // 0x0
		::UnityEngine::Vector2 CameraRotationDelta; // 0x10
		::System::Boolean _PressSkillBtn; // 0x18
		::System::Boolean CameraReset; // 0x19
		::System::Boolean CameraRotationByController; // 0x1A
		::System::Boolean CameraZooming; // 0x1B
		::UnityEngine::Vector3 _RecordPlayerInputDir; // 0x1C
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x28
		::System::Boolean _PressNormalAtkBtn; // 0x2C
		::System::Boolean CameraTouchDown; // 0x2D
		::System::Boolean CameraRotation; // 0x2E
		::System::Boolean CameraZoomingByController; // 0x2F
		::System::Boolean PlayerMove; // 0x30
		::System::Boolean WalkFlag; // 0x31
		::System::Boolean _RushFlag; // 0x32
		::System::Boolean _UseRecordCameraForward; // 0x33
		::System::Single _PlayerMoveControlDir; // 0x34
		::UnityEngine::Vector3 MoveDirection; // 0x38
		::UnityEngine::Vector3 _RecordCameraForward; // 0x44
		::System::Single _LastRushMoveTime; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA__CTOR_OFFSET))(this);
		}

		::System::Void set_PlayerMoveControlDir(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PLAYERMOVECONTROLDIR_OFFSET))(this, value);
		}

		::System::Single get_PlayerMoveControlDir()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_PLAYERMOVECONTROLDIR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CameraRotationSpeedRatio()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_CAMERAROTATIONSPEEDRATIO_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_CLEAR_OFFSET))(this);
		}

		::System::Void ResetFlagOnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_RESETFLAGONLATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCameraForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GETCAMERAFORWARD_OFFSET))(this);
		}

		::System::Void SetRecordCameraForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SETRECORDCAMERAFORWARD_OFFSET))(this);
		}

		::System::Void ResetRecordCameraForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_RESETRECORDCAMERAFORWARD_OFFSET))(this);
		}

		::System::Void TryResetRecordCameraForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_TRYRESETRECORDCAMERAFORWARD_OFFSET))(this);
		}

		::System::Boolean get_RushFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_RUSHFLAG_OFFSET))(this);
		}

		::System::Void set_RushFlag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_RUSHFLAG_OFFSET))(this, value);
		}

		::System::Boolean get_IsCacheRushMoveFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_ISCACHERUSHMOVEFLAG_OFFSET))(this);
		}

		::System::Void ClearCacheRushMoveFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_CLEARCACHERUSHMOVEFLAG_OFFSET))(this);
		}

		::System::Boolean get_PressNormalAtkBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSNORMALATKBTN_OFFSET))(this);
		}

		::System::Void set_PressNormalAtkBtn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSNORMALATKBTN_OFFSET))(this, value);
		}

		::System::Boolean get_PressSkillBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSSKILLBTN_OFFSET))(this);
		}

		::System::Void set_PressSkillBtn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSSKILLBTN_OFFSET))(this, value);
		}

		::System::Boolean get_UseRecordCameraForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_USERECORDCAMERAFORWARD_OFFSET))(this);
		}
	};
}

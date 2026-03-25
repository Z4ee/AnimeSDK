#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CLIENTINPUTDATA_CLEARCACHERUSHMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x93E1390)
#define RPG_CLIENT_CLIENTINPUTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x93E09D0)
#define RPG_CLIENT_CLIENTINPUTDATA_GETCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x93E0E30)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_CAMERAROTATIONSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x93E0570)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_ISCACHERUSHMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x93E1320)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PLAYERMOVECONTROLDIR_OFFSET UNITYSDK_OFFSET(0x93E0560)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSNORMALATKBTN_OFFSET UNITYSDK_OFFSET(0x93E13E0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSSKILLBTN_OFFSET UNITYSDK_OFFSET(0x93E13F0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_RUSHFLAG_OFFSET UNITYSDK_OFFSET(0x93E12A0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_USERECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x93E1400)
#define RPG_CLIENT_CLIENTINPUTDATA_RESETFLAGONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x93E0B50)
#define RPG_CLIENT_CLIENTINPUTDATA_RESETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x93E1260)
#define RPG_CLIENT_CLIENTINPUTDATA_SETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x93E1040)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PLAYERMOVECONTROLDIR_OFFSET UNITYSDK_OFFSET(0x93E0470)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSNORMALATKBTN_OFFSET UNITYSDK_OFFSET(0x93E0AB0)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSSKILLBTN_OFFSET UNITYSDK_OFFSET(0x93E0B00)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_RUSHFLAG_OFFSET UNITYSDK_OFFSET(0x93E12B0)
#define RPG_CLIENT_CLIENTINPUTDATA_TRYRESETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x93E0C30)
#define RPG_CLIENT_CLIENTINPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93E1410)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientInputData_TypeDefinitionIndex = 49709;

	class ClientInputData : public ::System::Object
	{
	public:
		// static const ::System::Single _RecordPlayerInputDirLimit; // 0x0
		// static const ::System::Single CACHE_RUSH_MOVE_TIME; // 0x0
		::UnityEngine::Vector3 _RecordPlayerInputDir; // 0x10
		::System::Single _PlayerMoveControlDir; // 0x1C
		::System::Boolean CameraRotation; // 0x20
		::System::Boolean _PressSkillBtn; // 0x21
		::System::Boolean PlayerMove; // 0x22
		::System::Boolean CameraZooming; // 0x23
		::UnityEngine::Vector2 CameraRotationDelta; // 0x24
		::UnityEngine::Vector3 _RecordCameraForward; // 0x2C
		::System::Boolean CameraReset; // 0x38
		::System::Boolean _RushFlag; // 0x39
		::System::Boolean CameraTouchDown; // 0x3A
		::System::Boolean WalkFlag; // 0x3B
		::System::Boolean _UseRecordCameraForward; // 0x3C
		::System::Boolean _PressNormalAtkBtn; // 0x3D
		::System::Boolean CameraRotationByController; // 0x3E
		::System::Boolean CameraZoomingByController; // 0x3F
		::System::Single _LastRushMoveTime; // 0x40
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x44
		::UnityEngine::Vector3 MoveDirection; // 0x48

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

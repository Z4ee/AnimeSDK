#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CLIENTINPUTDATA_CLEARCACHERUSHMOVEFLAG_OFFSET UNITYSDK_OFFSET(0xB6CD5B0)
#define RPG_CLIENT_CLIENTINPUTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6CCBE0)
#define RPG_CLIENT_CLIENTINPUTDATA_GETCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xB6CD040)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_CAMERAROTATIONSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xB6CC780)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_ISCACHERUSHMOVEFLAG_OFFSET UNITYSDK_OFFSET(0xB6CD540)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PLAYERMOVECONTROLDIR_OFFSET UNITYSDK_OFFSET(0xB6CC770)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSNORMALATKBTN_OFFSET UNITYSDK_OFFSET(0xB6CD600)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSSKILLBTN_OFFSET UNITYSDK_OFFSET(0xB6CD610)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_RUSHFLAG_OFFSET UNITYSDK_OFFSET(0xB6CD4C0)
#define RPG_CLIENT_CLIENTINPUTDATA_GET_USERECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xB6CD620)
#define RPG_CLIENT_CLIENTINPUTDATA_RESETFLAGONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB6CCD60)
#define RPG_CLIENT_CLIENTINPUTDATA_RESETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xB6CD480)
#define RPG_CLIENT_CLIENTINPUTDATA_SETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xB6CD260)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PLAYERMOVECONTROLDIR_OFFSET UNITYSDK_OFFSET(0xB6CC680)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSNORMALATKBTN_OFFSET UNITYSDK_OFFSET(0xB6CCCC0)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSSKILLBTN_OFFSET UNITYSDK_OFFSET(0xB6CCD10)
#define RPG_CLIENT_CLIENTINPUTDATA_SET_RUSHFLAG_OFFSET UNITYSDK_OFFSET(0xB6CD4D0)
#define RPG_CLIENT_CLIENTINPUTDATA_TRYRESETRECORDCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xB6CCE40)
#define RPG_CLIENT_CLIENTINPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CD630)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientInputData_TypeDefinitionIndex = 57307;

	class ClientInputData : public ::System::Object
	{
	public:
		// static const ::System::Single _RecordPlayerInputDirLimit; // 0x0
		// static const ::System::Single CACHE_RUSH_MOVE_TIME; // 0x0
		::UnityEngine::Vector3 _RecordPlayerInputDir; // 0x10
		::System::Single _PlayerMoveControlDir; // 0x1C
		::System::Boolean CameraRotationByController; // 0x20
		::System::Boolean _RushFlag; // 0x21
		::System::Boolean WalkFlag; // 0x22
		::System::Boolean _PressSkillBtn; // 0x23
		::UnityEngine::Vector2 CameraRotationDelta; // 0x24
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x2C
		::System::Boolean CameraZooming; // 0x30
		::System::Boolean _UseRecordCameraForward; // 0x31
		::System::Boolean CameraTouchDown; // 0x32
		::System::Boolean _PressNormalAtkBtn; // 0x33
		::UnityEngine::Vector3 _RecordCameraForward; // 0x34
		::System::Single _LastRushMoveTime; // 0x40
		::System::Boolean CameraRotation; // 0x44
		::System::Boolean PlayerMove; // 0x45
		::System::Boolean CameraZoomingByController; // 0x46
		::System::Boolean CameraReset; // 0x47
		::UnityEngine::Vector3 MoveDirection; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA__CTOR_OFFSET))(this);
		}

		::System::Void set_PlayerMoveControlDir(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PLAYERMOVECONTROLDIR_OFFSET))(this, a1);
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

		::System::Void set_RushFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_RUSHFLAG_OFFSET))(this, a1);
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

		::System::Void set_PressNormalAtkBtn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSNORMALATKBTN_OFFSET))(this, a1);
		}

		::System::Boolean get_PressSkillBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_PRESSSKILLBTN_OFFSET))(this);
		}

		::System::Void set_PressSkillBtn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_SET_PRESSSKILLBTN_OFFSET))(this, a1);
		}

		::System::Boolean get_UseRecordCameraForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTINPUTDATA_GET_USERECORDCAMERAFORWARD_OFFSET))(this);
		}
	};
}

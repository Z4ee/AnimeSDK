#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_08EFA72FA9DBFD94.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_B2B6DA647A81FAD1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0E2DEFE2B11A9C71;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class AvatarLayoutCameraConfig; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_CLEARAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x16236E10)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_DOENTERAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x16238730)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_DOEXITAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x16238420)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ENTERAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x16237910)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_EXITAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x16238120)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x16237D50)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWROTATION_OFFSET UNITYSDK_OFFSET(0x16237F10)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GET_CAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x162369F0)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_INITDATA_OFFSET UNITYSDK_OFFSET(0x16236B80)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16236A00)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16236C90)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONENTERBATTLEPHOTOMODE_OFFSET UNITYSDK_OFFSET(0x16238A90)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16236F40)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16236EE0)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_REFRESHAVATARLAYOUTCAMERA_OFFSET UNITYSDK_OFFSET(0x16236FE0)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_SETLASTEXITCAMERABLENDOUT_OFFSET UNITYSDK_OFFSET(0x16237890)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_TRYPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0x16237730)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16238B00)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__DOENTERAVATARLAYOUTCAMERA_B__24_0_OFFSET UNITYSDK_OFFSET(0x16238B20)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__DOENTERAVATARLAYOUTCAMERA_B__24_1_OFFSET UNITYSDK_OFFSET(0x16238B70)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16238BB0)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16238C40)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16238CD0)
#define MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16238D70)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarLayoutCameraSubSystem_TypeDefinitionIndex = 78860;

	class AvatarLayoutCameraSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::AvatarLayoutCameraSubSystem*>
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_B2B6DA647A81FAD1>* _playDataList; // 0x10
		::System::String* _curCameraKey; // 0x18
		::Class_1_0E2DEFE2B11A9C71* _avatarLayoutCamera; // 0x20
		::MoleMole::Cameras::AvatarLayoutCameraConfig* _cameraConfig; // 0x28
		::MoleMole::EntityHandle _curFollowEntity; // 0x30
		::Class_3_C93CC3D2C2AC4067* _curModelComponent; // 0x40
		::Class_1_0E2DEFE2B11A9C71* _lastExitAvatarLayoutCamera; // 0x48
		::UnityEngine::Vector3 _lastCameraFollowPosition; // 0x50
		::UnityEngine::Quaternion _lastCameraFollowRotation; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__CTOR_OFFSET))(this);
		}

		::MoleMole::Cameras::AvatarLayoutCameraConfig* get_CameraConfig()
		{
			return ((::MoleMole::Cameras::AvatarLayoutCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GET_CAMERACONFIG_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetLastExitCameraBlendOut(::System::Single overrideBlendOutTime, ::System::String* overrideBlendOutCurveKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_SETLASTEXITCAMERABLENDOUT_OFFSET))(this, overrideBlendOutTime, overrideBlendOutCurveKey);
		}

		::System::Void EnterAvatarLayoutCamera(::System::String* key, ::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ENTERAVATARLAYOUTCAMERA_OFFSET))(this, key, entity);
		}

		::System::Void ExitAvatarLayoutCamera(::System::String* key, ::MoleMole::Battle::Entity* entity, ::Enum_3_08EFA72FA9DBFD94 blendOutType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::Enum_3_08EFA72FA9DBFD94))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_EXITAVATARLAYOUTCAMERA_OFFSET))(this, key, entity, blendOutType);
		}

		::System::Void ClearAvatarLayoutCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_CLEARAVATARLAYOUTCAMERA_OFFSET))(this);
		}

		::System::Void RefreshAvatarLayoutCamera(::Enum_3_08EFA72FA9DBFD94 blendOutType, ::System::Boolean enableOverrideBlendOut)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_08EFA72FA9DBFD94, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_REFRESHAVATARLAYOUTCAMERA_OFFSET))(this, blendOutType, enableOverrideBlendOut);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_INITDATA_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCameraMoveFollowPosition(::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET))(this, entity);
		}

		::UnityEngine::Quaternion GetCameraMoveFollowRotation(::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWROTATION_OFFSET))(this, entity);
		}

		::System::Void TryPlayDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_TRYPLAYDATALIST_OFFSET))(this);
		}

		::System::Void DoEnterAvatarLayoutCamera(::Struct_2_B2B6DA647A81FAD1 playData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_B2B6DA647A81FAD1))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_DOENTERAVATARLAYOUTCAMERA_OFFSET))(this, playData);
		}

		::System::Void DoExitAvatarLayoutCamera(::System::String* key, ::MoleMole::Battle::Entity* entity, ::Enum_3_08EFA72FA9DBFD94 blendOutType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::Enum_3_08EFA72FA9DBFD94))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_DOEXITAVATARLAYOUTCAMERA_OFFSET))(this, key, entity, blendOutType);
		}

		::System::Void OnEnterBattlePhotoMode(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM_ONENTERBATTLEPHOTOMODE_OFFSET))(this, obj);
		}

		::UnityEngine::Vector3 _DoEnterAvatarLayoutCamera_b__24_0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__DOENTERAVATARLAYOUTCAMERA_B__24_0_OFFSET))(this);
		}

		::UnityEngine::Quaternion _DoEnterAvatarLayoutCamera_b__24_1()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM__DOENTERAVATARLAYOUTCAMERA_B__24_1_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARLAYOUTCAMERASUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}

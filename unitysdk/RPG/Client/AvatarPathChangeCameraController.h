#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AvatarPathChangeVirtualCamera; }
namespace RPG::Client { class AvatarPathChangeVirtualCameraBlendConfig; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class UI3DCameraStateBase; }
namespace RPG::GameCore { class UI3DVirtualCameraComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x91513F0)
#define RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER_MOVECAMERA_OFFSET UNITYSDK_OFFSET(0x9151AF0)
#define RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9151910)
#define RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER_STARTBLEND_OFFSET UNITYSDK_OFFSET(0x9151CF0)
#define RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER__CHANGEAVATARIDTOMAN_OFFSET UNITYSDK_OFFSET(0x9151A50)
#define RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9152050)
#define RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER__GETENTITYMANAGER_OFFSET UNITYSDK_OFFSET(0x91516F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathChangeCameraController_TypeDefinitionIndex = 58454;

	class AvatarPathChangeCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 _DEFAULT_BLEND_ID = 0x1; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::AvatarPathChangeVirtualCamera*>* VirtualCameras; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AvatarPathChangeVirtualCameraBlendConfig*>* VirtualCameraBlendConfigs; // 0x20
		::RPG::GameCore::GameWorld* _GameWorld; // 0x28
		::RPG::GameCore::EntityManager* _EntityMgr; // 0x30
		::RPG::GameCore::GameEntity* _CameraEntity; // 0x38
		::RPG::GameCore::UI3DVirtualCameraComponent* _VirtualCameraCmpt; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::UI3DCameraStateBase*>* _AvatarCameraStates; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void _GetEntityManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER__GETENTITYMANAGER_OFFSET))(this);
		}

		::System::UInt32 _ChangeAvatarIDToMan(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER__CHANGEAVATARIDTOMAN_OFFSET))(this, avatarID);
		}

		::System::Void MoveCamera(::System::UInt32 avatarID, ::System::Single mainLightDirOffsetX, ::System::Single mainLightDirOffsetY)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER_MOVECAMERA_OFFSET))(this, avatarID, mainLightDirOffsetX, mainLightDirOffsetY);
		}

		::System::Void StartBlend(::System::UInt32 fromAvatarID, ::System::UInt32 toAvatarID, ::System::Single mainLightDirOffsetX, ::System::Single mainLightDirOffsetY)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECAMERACONTROLLER_STARTBLEND_OFFSET))(this, fromAvatarID, toAvatarID, mainLightDirOffsetX, mainLightDirOffsetY);
		}
	};
}

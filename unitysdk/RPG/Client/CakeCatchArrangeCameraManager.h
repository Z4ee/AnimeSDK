#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class CameraBlendCurve; }

#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEENTRANCECAMERASIDE_OFFSET UNITYSDK_OFFSET(0xC989E80)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEENTRANCECAMERA_OFFSET UNITYSDK_OFFSET(0xC989D30)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEFREEAREACAMERA_OFFSET UNITYSDK_OFFSET(0xC989FD0)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEINITCAMERA_OFFSET UNITYSDK_OFFSET(0xC989BE0)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC989980)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_GET__CINEMACHINEBRAIN_OFFSET UNITYSDK_OFFSET(0xC9899E0)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC989AD0)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC98A120)
#define RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER__DEACTIVATECAMERAS_OFFSET UNITYSDK_OFFSET(0xC989B30)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchArrangeCameraManager_TypeDefinitionIndex = 63043;

	class CakeCatchArrangeCameraManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* EntranceCamera; // 0x18
		::Cinemachine::CinemachineVirtualCamera* EntranceCameraSide; // 0x20
		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* FreeAreaCameras; // 0x28
		::Cinemachine::CinemachineBlendDefinition_Style InitBlendType; // 0x30
		::RPG::Client::CameraBlendCurve* CustomBlendCurve; // 0x38
		::System::Single BlendTime; // 0x40
		::Cinemachine::CinemachineBlendDefinition _OriginalBlend; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ActiveInitCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEINITCAMERA_OFFSET))(this);
		}

		::System::Void ActiveEntranceCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEENTRANCECAMERA_OFFSET))(this, a1);
		}

		::System::Void ActiveEntranceCameraSide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEENTRANCECAMERASIDE_OFFSET))(this);
		}

		::System::Void ActiveFreeAreaCamera(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_ACTIVEFREEAREACAMERA_OFFSET))(this, a1);
		}

		::System::Void _DeactivateCameras()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER__DEACTIVATECAMERAS_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* get__CinemachineBrain()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECAMERAMANAGER_GET__CINEMACHINEBRAIN_OFFSET))(this);
		}
	};
}

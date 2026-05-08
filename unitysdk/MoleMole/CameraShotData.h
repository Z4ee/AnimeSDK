#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Enum_3_95B09D25BBC8F884.h"
#include "unitysdk/MoleMole/CameraShotData_Enum_3_33803EA160C64B8E.h"
#include "unitysdk/MoleMole/CameraShotData_Enum_3_60063ED21D7DBAFB.h"
#include "unitysdk/MoleMole/CameraShotData_Enum_3_65B2566AD5EEE8AB.h"
#include "unitysdk/MoleMole/CameraShotData_Enum_3_7A9BE3F971E88471.h"
#include "unitysdk/MoleMole/CameraShotData_ShotAttachOffsetData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERASHOTDATA_GET_ADDTYPE_OFFSET UNITYSDK_OFFSET(0xECE8210)
#define MOLEMOLE_CAMERASHOTDATA_GET_APPLYENTITYTIMESCALE_OFFSET UNITYSDK_OFFSET(0xECE8260)
#define MOLEMOLE_CAMERASHOTDATA_GET_BLENDDEFINITIONENTER_OFFSET UNITYSDK_OFFSET(0xECE82B0)
#define MOLEMOLE_CAMERASHOTDATA_GET_BLENDDEFINITIONEXIT_OFFSET UNITYSDK_OFFSET(0xECE82C0)
#define MOLEMOLE_CAMERASHOTDATA_GET_CINEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xECE81D0)
#define MOLEMOLE_CAMERASHOTDATA_GET_DURATIONBYEVENT_OFFSET UNITYSDK_OFFSET(0xECE8240)
#define MOLEMOLE_CAMERASHOTDATA_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xECE8230)
#define MOLEMOLE_CAMERASHOTDATA_GET_FOLLOWROOTROT_OFFSET UNITYSDK_OFFSET(0xECE8290)
#define MOLEMOLE_CAMERASHOTDATA_GET_INGORECAMCOLLIDERDETECT_OFFSET UNITYSDK_OFFSET(0xECE8270)
#define MOLEMOLE_CAMERASHOTDATA_GET_INGORETIMESCALE_OFFSET UNITYSDK_OFFSET(0xECE8250)
#define MOLEMOLE_CAMERASHOTDATA_GET_LOOKATTYPE_OFFSET UNITYSDK_OFFSET(0xECE82A0)
#define MOLEMOLE_CAMERASHOTDATA_GET_LOOPINITTIME_OFFSET UNITYSDK_OFFSET(0xECE8220)
#define MOLEMOLE_CAMERASHOTDATA_GET_PARENTTYPE_OFFSET UNITYSDK_OFFSET(0xECE8280)
#define MOLEMOLE_CAMERASHOTDATA_GET_SKIPBANNERFADEIN_OFFSET UNITYSDK_OFFSET(0xECE81F0)
#define MOLEMOLE_CAMERASHOTDATA_GET_USEBANNER_OFFSET UNITYSDK_OFFSET(0xECE81E0)
#define MOLEMOLE_CAMERASHOTDATA_GET_VIDEOTYPE_OFFSET UNITYSDK_OFFSET(0xECE8200)
#define MOLEMOLE_CAMERASHOTDATA_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xECE83E0)
#define MOLEMOLE_CAMERASHOTDATA_METHOD_1_BE0C2A5B39FEF128_OFFSET UNITYSDK_OFFSET(0xECE8560)
#define MOLEMOLE_CAMERASHOTDATA_METHOD_1_CA8D2C39D135A2C2_OFFSET UNITYSDK_OFFSET(0xECE8460)
#define MOLEMOLE_CAMERASHOTDATA_METHOD_1_DB546B80269157CF_OFFSET UNITYSDK_OFFSET(0xECE85D0)
#define MOLEMOLE_CAMERASHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xECE82D0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraShotData_TypeDefinitionIndex = 42137;

	class CameraShotData : public ::System::Object
	{
	public:
		::System::String* _cinePrefab; // 0x10
		::System::Single cameraPlanNearClipping; // 0x18
		::System::Single cameraPlanFarClipping; // 0x1C
		::System::Boolean _useBanner; // 0x20
		::System::Boolean _skipBannerFadeIn; // 0x21
		::Enum_3_95B09D25BBC8F884 _videoType; // 0x24
		::MoleMole::CameraShotData_Enum_3_33803EA160C64B8E _addType; // 0x28
		::MoleMole::CameraShotData_Enum_3_7A9BE3F971E88471 playWarpMode; // 0x2C
		::System::Single _loopInitTime; // 0x30
		::System::Single startPolarAngle; // 0x34
		::System::Single _duration; // 0x38
		::System::Boolean _ingoreTimeScale; // 0x3C
		::System::Boolean _applyEntityTimeScale; // 0x3D
		::System::Boolean _ingoreCamColliderDetect; // 0x3E
		::System::Boolean EnableCameraShake; // 0x3F
		::System::Boolean LightDirectionFromCamera; // 0x40
		::UnityEngine::AnimationCurve* LightDirectionFromCameraCurve; // 0x48
		::System::Boolean IsAllowQTEPass; // 0x50
		::System::String* AllowQTEPassTag; // 0x58
		::System::Boolean IsAllowSwitchAvatarInterrupt; // 0x60
		::System::Boolean IsAllowLevelEndPerformInterrupt; // 0x61
		::System::Boolean ForceInstantApply; // 0x62
		::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB _parentType; // 0x64
		::System::Boolean _followRootRot; // 0x68
		::UnityEngine::Vector3 baseFollowDeltaOffset; // 0x6C
		::MoleMole::CameraShotData_ShotAttachOffsetData followXZOffsetData; // 0x78
		::MoleMole::CameraShotData_ShotAttachOffsetData followYOffsetData; // 0x98
		::UnityEngine::Quaternion shotOffsetRotation; // 0xB8
		::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB _lookAtType; // 0xC8
		::UnityEngine::Vector3 baseLookDeltaOffset; // 0xCC
		::MoleMole::CameraShotData_ShotAttachOffsetData lookAtXZOffsetData; // 0xD8
		::MoleMole::CameraShotData_ShotAttachOffsetData lookAtYOffsetData; // 0xF8
		::System::Boolean applyOnTransitionYRatio; // 0x118
		::MoleMole::CameraShotData_Enum_3_65B2566AD5EEE8AB camPosRecoverType; // 0x11C
		::System::Single fOnTransitionYRatioValue; // 0x120
		::System::Single fOnTransitionPolarAngle; // 0x124
		::System::Boolean muteCameraDither; // 0x128
		::System::Boolean muteAllCameraDither; // 0x129
		::System::Boolean muteSelfCameraDither; // 0x12A
		::System::Boolean muteLocalAvatarCameraDither; // 0x12B
		::System::Boolean muteAvatarCameraDither; // 0x12C
		::System::Boolean muteMonsterCameraDither; // 0x12D
		::System::Boolean muteBuddyCameraDither; // 0x12E
		::System::Boolean muteCustomAbilityTarget; // 0x12F
		::System::Collections::Generic::List_1<::System::String*>* CustomAbilityTargetKeyList; // 0x130
		::System::Boolean overrideGlobalMuteDither; // 0x138
		::System::Boolean enableSceneObjDither; // 0x139
		::System::Boolean muteBattleScreenEffect; // 0x13A
		::System::Boolean disableLightDistanceCulling; // 0x13B
		::Cinemachine::CinemachineBlendDefinition _blendDefinitionEnter; // 0x140
		::System::Boolean useDeltaBlendIn; // 0x150
		::Cinemachine::CinemachineBlendDefinition _blendDefinitionExit; // 0x158
		::System::Boolean useDeltaBlendOut; // 0x168
		::System::Boolean setAdvancedBlendOutFlag; // 0x169
		::PipelineCamera::WorldBasicCameraDataDeltaFlag advancedBlendOutFlag; // 0x16C
		::System::Boolean BlendWithIgnoreLookAtTarget; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_cinePrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_CINEPREFABPATH_OFFSET))(this);
		}

		::System::Boolean get_useBanner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_USEBANNER_OFFSET))(this);
		}

		::System::Boolean get_skipBannerFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_SKIPBANNERFADEIN_OFFSET))(this);
		}

		::Enum_3_95B09D25BBC8F884 get_videoType()
		{
			return ((::Enum_3_95B09D25BBC8F884(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_VIDEOTYPE_OFFSET))(this);
		}

		::MoleMole::CameraShotData_Enum_3_33803EA160C64B8E get_addType()
		{
			return ((::MoleMole::CameraShotData_Enum_3_33803EA160C64B8E(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_ADDTYPE_OFFSET))(this);
		}

		::System::Single get_loopInitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_LOOPINITTIME_OFFSET))(this);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_DURATION_OFFSET))(this);
		}

		::System::Boolean get_durationByEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_DURATIONBYEVENT_OFFSET))(this);
		}

		::System::Boolean get_ingoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_INGORETIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_applyEntityTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_APPLYENTITYTIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_ingoreCamColliderDetect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_INGORECAMCOLLIDERDETECT_OFFSET))(this);
		}

		::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB get_parentType()
		{
			return ((::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_PARENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_followRootRot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_FOLLOWROOTROT_OFFSET))(this);
		}

		::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB get_lookAtType()
		{
			return ((::MoleMole::CameraShotData_Enum_3_60063ED21D7DBAFB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_LOOKATTYPE_OFFSET))(this);
		}

		::Cinemachine::CinemachineBlendDefinition get_BlendDefinitionEnter()
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_BLENDDEFINITIONENTER_OFFSET))(this);
		}

		::Cinemachine::CinemachineBlendDefinition get_BlendDefinitionExit()
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_GET_BLENDDEFINITIONEXIT_OFFSET))(this);
		}

		::System::Void Method_1_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_METHOD_1_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_1_CA8D2C39D135A2C2(::System::String* a1, ::System::Boolean a2, ::Enum_3_95B09D25BBC8F884 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Enum_3_95B09D25BBC8F884, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_METHOD_1_CA8D2C39D135A2C2_OFFSET))(this, a1, a2, a3, a4);
		}

		::PipelineCamera::WorldBasicCameraDataDeltaFlag Method_1_BE0C2A5B39FEF128()
		{
			return ((::PipelineCamera::WorldBasicCameraDataDeltaFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_METHOD_1_BE0C2A5B39FEF128_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraDataDeltaFlag Method_1_DB546B80269157CF()
		{
			return ((::PipelineCamera::WorldBasicCameraDataDeltaFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERASHOTDATA_METHOD_1_DB546B80269157CF_OFFSET))(this);
		}
	};
}

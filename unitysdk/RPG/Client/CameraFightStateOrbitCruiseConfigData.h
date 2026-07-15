#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_CAMERAFIGHTSTATEORBITCRUISECONFIGDATA_METHOD_1_0B6FE14071C5DE0B_OFFSET UNITYSDK_OFFSET(0x1AC59970)
#define RPG_CLIENT_CAMERAFIGHTSTATEORBITCRUISECONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC59930)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateOrbitCruiseConfigData_TypeDefinitionIndex = 66453;

	class CameraFightStateOrbitCruiseConfigData : public ::System::Object
	{
	public:
		::System::Boolean EnableScreenDamp; // 0x10
		::System::String* EntityDetectFollowAttachPoint; // 0x18
		::System::Single EntityDetectRadius; // 0x20
		::System::Single VirtualScreenFrameTopHeightRatio; // 0x24
		::System::Single VirtualScreenFrameDownWidthRatio; // 0x28
		::System::Single VirtualScreenFrameWidthRatio; // 0x2C
		::System::Single VirtualNearFrustumDistance; // 0x30
		::System::Single VirtualFarFrustumDistance; // 0x34
		::System::Single VirtualScreenInsideXYFollowDamp; // 0x38
		::System::Single VirtualScreenOutsideXYFollowDamp; // 0x3C
		::System::Single VirtualXYDampTransitionSpeed; // 0x40
		::System::Single VirtualScreenInsideZFollowDamp; // 0x44
		::System::Single VirtualScreenOutsideZFollowDamp; // 0x48
		::System::Single VirtualZDampTransitionSpeed; // 0x4C
		::System::Boolean DrawScreenFrame; // 0x50
		::System::Boolean DebugAlwaysUpdateAssetCommonConfig; // 0x51
		::System::Boolean DebugAlwaysUpdateAssetOrbitCruiseConfig; // 0x52
		::System::Single CurrentXYDampValue; // 0x54
		::System::Single CurrentZDampValue; // 0x58
		::UnityEngine::Vector3 CurrentAnchorOffset; // 0x5C
		::UnityEngine::Vector3 CurrentAimOffset; // 0x68
		::UnityEngine::Vector3 DynamicOffset; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATEORBITCRUISECONFIGDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateOrbitCruiseConfigData* Method_1_0B6FE14071C5DE0B()
		{
			return ((::RPG::Client::CameraFightStateOrbitCruiseConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATEORBITCRUISECONFIGDATA_METHOD_1_0B6FE14071C5DE0B_OFFSET))(this);
		}
	};
}

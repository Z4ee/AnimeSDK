#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class FullBodyBipedIK; }

#define ROOTMOTION_FINALIK_FBBIKARMBENDING_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C138F10)
#define ROOTMOTION_FINALIK_FBBIKARMBENDING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C13A350)
#define ROOTMOTION_FINALIK_FBBIKARMBENDING_ONPOSTFBBIK_OFFSET UNITYSDK_OFFSET(0x1C139DE0)
#define ROOTMOTION_FINALIK_FBBIKARMBENDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C13A510)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FBBIKArmBending_TypeDefinitionIndex = 36593;

	class FBBIKArmBending : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedIK* ik; // 0x18
		::UnityEngine::Vector3 bendDirectionOffsetLeft; // 0x20
		::UnityEngine::Vector3 bendDirectionOffsetRight; // 0x2C
		::UnityEngine::Vector3 characterSpaceBendOffsetLeft; // 0x38
		::UnityEngine::Vector3 characterSpaceBendOffsetRight; // 0x44
		::UnityEngine::Quaternion leftHandTargetRotation; // 0x50
		::UnityEngine::Quaternion rightHandTargetRotation; // 0x60
		::System::Boolean initiated; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKARMBENDING__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKARMBENDING_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnPostFBBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKARMBENDING_ONPOSTFBBIK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKARMBENDING_ONDESTROY_OFFSET))(this);
		}
	};
}

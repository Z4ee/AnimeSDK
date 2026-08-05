#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedChain.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class FullBodyBipedIK; }
namespace RootMotion::FinalIK { class IKMapping_BoneMap; }

#define ROOTMOTION_FINALIK_SHOULDERROTATOR_GETPARENTBONEMAP_OFFSET UNITYSDK_OFFSET(0x1F29DE00)
#define ROOTMOTION_FINALIK_SHOULDERROTATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F29DE40)
#define ROOTMOTION_FINALIK_SHOULDERROTATOR_ROTATESHOULDERS_OFFSET UNITYSDK_OFFSET(0x1F29D5A0)
#define ROOTMOTION_FINALIK_SHOULDERROTATOR_ROTATESHOULDER_OFFSET UNITYSDK_OFFSET(0x1F29D7A0)
#define ROOTMOTION_FINALIK_SHOULDERROTATOR_START_OFFSET UNITYSDK_OFFSET(0x1F29D470)
#define ROOTMOTION_FINALIK_SHOULDERROTATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F29E000)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int ShoulderRotator_TypeDefinitionIndex = 38779;

	class ShoulderRotator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single weight; // 0x18
		::System::Single offset; // 0x1C
		::RootMotion::FinalIK::FullBodyBipedIK* ik; // 0x20
		::System::Boolean skip; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SHOULDERROTATOR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SHOULDERROTATOR_START_OFFSET))(this);
		}

		::System::Void RotateShoulders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SHOULDERROTATOR_ROTATESHOULDERS_OFFSET))(this);
		}

		::System::Void RotateShoulder(::RootMotion::FinalIK::FullBodyBipedChain chain, ::System::Single weight, ::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedChain, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SHOULDERROTATOR_ROTATESHOULDER_OFFSET))(this, chain, weight, offset);
		}

		::RootMotion::FinalIK::IKMapping_BoneMap* GetParentBoneMap(::RootMotion::FinalIK::FullBodyBipedChain chain)
		{
			return ((::RootMotion::FinalIK::IKMapping_BoneMap*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedChain))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SHOULDERROTATOR_GETPARENTBONEMAP_OFFSET))(this, chain);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_SHOULDERROTATOR_ONDESTROY_OFFSET))(this);
		}
	};
}

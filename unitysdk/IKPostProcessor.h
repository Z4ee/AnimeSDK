#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/StringIDWrapper.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class ArmIK; }
namespace UnityEngine { class AnimageComponent; }
namespace UnityEngine { class Transform; }

#define IKPOSTPROCESSOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x162E3660)
#define IKPOSTPROCESSOR_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x162E3F20)
#define IKPOSTPROCESSOR_ONLATEANIMAGEIK_OFFSET UNITYSDK_OFFSET(0x162E4000)
#define IKPOSTPROCESSOR_START_OFFSET UNITYSDK_OFFSET(0x162E3510)
#define IKPOSTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x162E45B0)

inline static constexpr unsigned int IKPostProcessor_TypeDefinitionIndex = 80877;

class IKPostProcessor : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* Hand; // 0x18
	::UnityEngine::Transform* FollowBone; // 0x20
	::System::Single HandRotScale; // 0x28
	::UnityEngine::Quaternion FollowBoneBindRot; // 0x2C
	::RootMotion::FinalIK::ArmIK* armIk; // 0x40
	::UnityEngine::AnimageComponent* animageComponent; // 0x48
	::UnityEngine::StringIDWrapper handNameWrapper; // 0x50
	::UnityEngine::StringIDWrapper followBoneNameWrapper; // 0x54
	::UnityEngine::Vector3 handToFollowBoneOffset; // 0x58
	::UnityEngine::Quaternion followBoneAnimRot; // 0x64
	::System::Boolean initialized; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPOSTPROCESSOR__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPOSTPROCESSOR_START_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPOSTPROCESSOR_INITIALIZE_OFFSET))(this);
	}

	::System::Void OnAnimatorIK(::System::Int32 layerIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IKPOSTPROCESSOR_ONANIMATORIK_OFFSET))(this, layerIndex);
	}

	::System::Void OnLateAnimageIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPOSTPROCESSOR_ONLATEANIMAGEIK_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifier.h"
#include "unitysdk/RootMotion/FinalIK/Recoil_Handedness.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class AimIK; }
namespace RootMotion::FinalIK { class IKEffector; }
namespace RootMotion::FinalIK { class Recoil_RecoilOffset; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_RECOIL_AFTERAIMIK_OFFSET UNITYSDK_OFFSET(0x1DA89490)
#define ROOTMOTION_FINALIK_RECOIL_AFTERFBBIK_OFFSET UNITYSDK_OFFSET(0x1DA89160)
#define ROOTMOTION_FINALIK_RECOIL_FIRE_OFFSET UNITYSDK_OFFSET(0x1DA87250)
#define ROOTMOTION_FINALIK_RECOIL_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1DA87210)
#define ROOTMOTION_FINALIK_RECOIL_GET_PRIMARYHANDEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1DA89020)
#define ROOTMOTION_FINALIK_RECOIL_GET_PRIMARYHAND_OFFSET UNITYSDK_OFFSET(0x1DA88EC0)
#define ROOTMOTION_FINALIK_RECOIL_GET_SECONDARYHANDEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1DA890C0)
#define ROOTMOTION_FINALIK_RECOIL_GET_SECONDARYHAND_OFFSET UNITYSDK_OFFSET(0x1DA88F70)
#define ROOTMOTION_FINALIK_RECOIL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DA89680)
#define ROOTMOTION_FINALIK_RECOIL_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1DA874B0)
#define ROOTMOTION_FINALIK_RECOIL_SETHANDROTATIONS_OFFSET UNITYSDK_OFFSET(0x1DA87230)
#define ROOTMOTION_FINALIK_RECOIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA899D0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Recoil_TypeDefinitionIndex = 38141;

	class Recoil : public ::RootMotion::FinalIK::OffsetModifier
	{
	public:
		::RootMotion::FinalIK::AimIK* aimIK; // 0x30
		::RootMotion::FinalIK::AimIK* headIK; // 0x38
		::System::Boolean aimIKSolvedLast; // 0x40
		::RootMotion::FinalIK::Recoil_Handedness handedness; // 0x44
		::System::Boolean twoHanded; // 0x48
		::UnityEngine::AnimationCurve* recoilWeight; // 0x50
		::System::Single magnitudeRandom; // 0x58
		::UnityEngine::Vector3 rotationRandom; // 0x5C
		::UnityEngine::Vector3 handRotationOffset; // 0x68
		::System::Single blendTime; // 0x74
		::Il2CppArray<::RootMotion::FinalIK::Recoil_RecoilOffset*>* offsets; // 0x78
		::UnityEngine::Quaternion rotationOffset; // 0x80
		::System::Single magnitudeMlp; // 0x90
		::System::Single endTime; // 0x94
		::UnityEngine::Quaternion handRotation; // 0x98
		::UnityEngine::Quaternion secondaryHandRelativeRotation; // 0xA8
		::UnityEngine::Quaternion randomRotation; // 0xB8
		::System::Single length; // 0xC8
		::System::Boolean initiated; // 0xCC
		::System::Single blendWeight; // 0xD0
		::System::Single w; // 0xD4
		::UnityEngine::Quaternion primaryHandRotation; // 0xD8
		::System::Boolean handRotationsSet; // 0xE8
		::UnityEngine::Vector3 aimIKAxis; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void SetHandRotations(::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_SETHANDROTATIONS_OFFSET))(this, leftHandRotation, rightHandRotation);
		}

		::System::Void Fire(::System::Single magnitude)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_FIRE_OFFSET))(this, magnitude);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_ONMODIFYOFFSET_OFFSET))(this);
		}

		::System::Void AfterFBBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_AFTERFBBIK_OFFSET))(this);
		}

		::System::Void AfterAimIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_AFTERAIMIK_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* get_primaryHandEffector()
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_GET_PRIMARYHANDEFFECTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKEffector* get_secondaryHandEffector()
		{
			return ((::RootMotion::FinalIK::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_GET_SECONDARYHANDEFFECTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_primaryHand()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_GET_PRIMARYHAND_OFFSET))(this);
		}

		::UnityEngine::Transform* get_secondaryHand()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_GET_SECONDARYHAND_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RECOIL_ONDESTROY_OFFSET))(this);
		}
	};
}

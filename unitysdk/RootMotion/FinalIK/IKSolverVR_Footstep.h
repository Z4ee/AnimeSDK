#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/InterpolationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Events { class UnityEvent; }

#define ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_GET_ISSTEPPING_OFFSET UNITYSDK_OFFSET(0x1C1EB5C0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_GET_STEPPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C1EB5D0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_RESET_OFFSET UNITYSDK_OFFSET(0x1C1EB780)
#define ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_SET_STEPPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C1EB5E0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_STEPTO_OFFSET UNITYSDK_OFFSET(0x1C1EB7C0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_UPDATESTANDING_OFFSET UNITYSDK_OFFSET(0x1C1EBB80)
#define ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_UPDATESTEPPING_OFFSET UNITYSDK_OFFSET(0x1C1EB980)
#define ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C1EBE00)
#define ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1EB5F0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_Footstep_TypeDefinitionIndex = 36638;

	class IKSolverVR_Footstep : public ::System::Object
	{
	public:
		::System::Single stepSpeed; // 0x10
		::UnityEngine::Vector3 characterSpaceOffset; // 0x14
		::UnityEngine::Vector3 position; // 0x20
		::UnityEngine::Quaternion rotation; // 0x2C
		::UnityEngine::Quaternion stepToRootRot; // 0x3C
		::System::Boolean isSupportLeg; // 0x4C
		::System::Boolean relaxFlag; // 0x4D
		::System::Single _stepProgress_k__BackingField; // 0x50
		::UnityEngine::Vector3 stepFrom; // 0x54
		::UnityEngine::Vector3 stepTo; // 0x60
		::UnityEngine::Quaternion stepFromRot; // 0x6C
		::UnityEngine::Quaternion stepToRot; // 0x7C
		::UnityEngine::Quaternion footRelativeToRoot; // 0x8C
		::System::Single supportLegW; // 0x9C
		::System::Single supportLegWV; // 0xA0

		::System::Void _ctor(::UnityEngine::Quaternion rootRotation, ::UnityEngine::Vector3 footPosition, ::UnityEngine::Quaternion footRotation, ::UnityEngine::Vector3 characterSpaceOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP__CTOR_OFFSET))(this, rootRotation, footPosition, footRotation, characterSpaceOffset);
		}

		::System::Boolean get_isStepping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_GET_ISSTEPPING_OFFSET))(this);
		}

		::System::Single get_stepProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_GET_STEPPROGRESS_OFFSET))(this);
		}

		::System::Void set_stepProgress(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_SET_STEPPROGRESS_OFFSET))(this, value);
		}

		::System::Void Reset(::UnityEngine::Quaternion rootRotation, ::UnityEngine::Vector3 footPosition, ::UnityEngine::Quaternion footRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_RESET_OFFSET))(this, rootRotation, footPosition, footRotation);
		}

		::System::Void StepTo(::UnityEngine::Vector3 p, ::UnityEngine::Quaternion rootRotation, ::System::Single stepThreshold)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_STEPTO_OFFSET))(this, p, rootRotation, stepThreshold);
		}

		::System::Void UpdateStepping(::UnityEngine::Vector3 p, ::UnityEngine::Quaternion rootRotation, ::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_UPDATESTEPPING_OFFSET))(this, p, rootRotation, speed, deltaTime);
		}

		::System::Void UpdateStanding(::UnityEngine::Quaternion rootRotation, ::System::Single minAngle, ::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_UPDATESTANDING_OFFSET))(this, rootRotation, minAngle, speed, deltaTime);
		}

		::System::Void Update(::RootMotion::InterpolationMode interpolation, ::UnityEngine::Events::UnityEvent* onStep, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::InterpolationMode, ::UnityEngine::Events::UnityEvent*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_FOOTSTEP_UPDATE_OFFSET))(this, interpolation, onStep, deltaTime);
		}
	};
}

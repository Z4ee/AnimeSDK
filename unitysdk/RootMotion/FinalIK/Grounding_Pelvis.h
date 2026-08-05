#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Grounding; }

#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_GET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1EEDC850)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_GET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x1EEDC820)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_INITIATE_OFFSET UNITYSDK_OFFSET(0x1EEDC870)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EEDC900)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_PROCESS_OFFSET UNITYSDK_OFFSET(0x1EEDCB60)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_RESET_OFFSET UNITYSDK_OFFSET(0x1EEDC990)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_SET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1EEDC860)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_SET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x1EEDC840)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEDCE20)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Pelvis_TypeDefinitionIndex = 38814;

	class Grounding_Pelvis : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::Grounding* grounding; // 0x10
		::System::Boolean initiated; // 0x18
		::System::Single _heightOffset_k__BackingField; // 0x1C
		::UnityEngine::Vector3 lastRootPosition; // 0x20
		::UnityEngine::Vector3 _IKOffset_k__BackingField; // 0x2C
		::System::Single damperF; // 0x38
		::System::Single lastTime; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_IKOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_GET_IKOFFSET_OFFSET))(this);
		}

		::System::Void set_IKOffset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_SET_IKOFFSET_OFFSET))(this, value);
		}

		::System::Single get_heightOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_GET_HEIGHTOFFSET_OFFSET))(this);
		}

		::System::Void set_heightOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_SET_HEIGHTOFFSET_OFFSET))(this, value);
		}

		::System::Void Initiate(::RootMotion::FinalIK::Grounding* grounding)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::Grounding*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_INITIATE_OFFSET))(this, grounding);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_ONENABLE_OFFSET))(this);
		}

		::System::Void Process(::System::Single lowestOffset, ::System::Single highestOffset, ::System::Boolean isGrounded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_PROCESS_OFFSET))(this, lowestOffset, highestOffset, isGrounded);
		}
	};
}

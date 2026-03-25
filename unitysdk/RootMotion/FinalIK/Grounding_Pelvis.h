#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Pelvis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Grounding; }

#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_COPYFROM_OFFSET UNITYSDK_OFFSET(0x85DF0C0)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_COPYTO_OFFSET UNITYSDK_OFFSET(0x85DEEE0)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_GET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x85E4410)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_GET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x85E43E0)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_INITIATE_OFFSET UNITYSDK_OFFSET(0x85DFF80)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x85DF3B0)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_PROCESS_OFFSET UNITYSDK_OFFSET(0x85E17F0)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x85DF440)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_RESET_OFFSET UNITYSDK_OFFSET(0x85E1AE0)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_SET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x85E4420)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_SET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x85E4400)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS__CTOR_OFFSET UNITYSDK_OFFSET(0x85DFD40)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Pelvis_TypeDefinitionIndex = 35199;

	class Grounding_Pelvis : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::Grounding* grounding; // 0x10
		::System::Single _heightOffset_k__BackingField; // 0x18
		::System::Single damperF; // 0x1C
		::UnityEngine::Vector3 _IKOffset_k__BackingField; // 0x20
		::System::Boolean initiated; // 0x2C
		::System::Single lastTime; // 0x30
		::UnityEngine::Vector3 lastRootPosition; // 0x34

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

		::System::Void CopyTo(::RootMotion::FinalIK::GroundingThread_Pelvis& pelvis)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread_Pelvis&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_COPYTO_OFFSET))(this, pelvis);
		}

		::System::Void CopyFrom(::RootMotion::FinalIK::GroundingThread_Pelvis& pelvis)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread_Pelvis&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_COPYFROM_OFFSET))(this, pelvis);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_RESET_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_RESETPOSITION_OFFSET))(this);
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

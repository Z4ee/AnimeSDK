#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Pelvis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Grounding; }

#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA262850)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_COPYTO_OFFSET UNITYSDK_OFFSET(0xA262670)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_GET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0xA267EC0)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_GET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0xA267E90)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_INITIATE_OFFSET UNITYSDK_OFFSET(0xA263780)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA262B40)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_PROCESS_OFFSET UNITYSDK_OFFSET(0xA2650A0)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0xA262BD0)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_RESET_OFFSET UNITYSDK_OFFSET(0xA265390)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_SET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0xA267ED0)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS_SET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0xA267EB0)
#define ROOTMOTION_FINALIK_GROUNDING_PELVIS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2634B0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Pelvis_TypeDefinitionIndex = 41828;

	class Grounding_Pelvis : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::Grounding* grounding; // 0x10
		::System::Boolean initiated; // 0x18
		::System::Single damperF; // 0x1C
		::UnityEngine::Vector3 lastRootPosition; // 0x20
		::UnityEngine::Vector3 _IKOffset_k__BackingField; // 0x2C
		::System::Single _heightOffset_k__BackingField; // 0x38
		::System::Single lastTime; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_IKOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_GET_IKOFFSET_OFFSET))(this);
		}

		::System::Void set_IKOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_SET_IKOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_heightOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_GET_HEIGHTOFFSET_OFFSET))(this);
		}

		::System::Void set_heightOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_SET_HEIGHTOFFSET_OFFSET))(this, a1);
		}

		::System::Void Initiate(::RootMotion::FinalIK::Grounding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::Grounding*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_INITIATE_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::RootMotion::FinalIK::GroundingThread_Pelvis& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread_Pelvis&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_COPYTO_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::RootMotion::FinalIK::GroundingThread_Pelvis& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread_Pelvis&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_COPYFROM_OFFSET))(this, a1);
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

		::System::Void Process(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_PELVIS_PROCESS_OFFSET))(this, a1, a2, a3);
		}
	};
}

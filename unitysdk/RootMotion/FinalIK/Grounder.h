#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Grounder_GrounderDelegate; }
namespace RootMotion::FinalIK { class Grounding; }
namespace RootMotion::FinalIK { class Grounding_Leg; }
namespace System { class String; }

#define ROOTMOTION_FINALIK_GROUNDER_GETLEGSPINEBENDVECTOR_OFFSET UNITYSDK_OFFSET(0x1E4713E0)
#define ROOTMOTION_FINALIK_GROUNDER_GETLEGSPINETANGENT_OFFSET UNITYSDK_OFFSET(0x1E4717E0)
#define ROOTMOTION_FINALIK_GROUNDER_GETSPINEOFFSETTARGET_OFFSET UNITYSDK_OFFSET(0x1E471320)
#define ROOTMOTION_FINALIK_GROUNDER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1E471300)
#define ROOTMOTION_FINALIK_GROUNDER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1E471760)
#define ROOTMOTION_FINALIK_GROUNDER_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1E471310)
#define ROOTMOTION_FINALIK_GROUNDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E471BD0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounder_TypeDefinitionIndex = 38355;

	class Grounder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single weight; // 0x18
		::RootMotion::FinalIK::Grounding* solver; // 0x20
		::RootMotion::FinalIK::Grounder_GrounderDelegate* OnPreGrounder; // 0x28
		::RootMotion::FinalIK::Grounder_GrounderDelegate* OnPostGrounder; // 0x30
		::RootMotion::FinalIK::Grounder_GrounderDelegate* OnLastGrounder; // 0x38
		::RootMotion::FinalIK::Grounder_GrounderDelegate* OnPostIK; // 0x40
		::System::Boolean _initiated_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_SET_INITIATED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 GetSpineOffsetTarget()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GETSPINEOFFSETTARGET_OFFSET))(this);
		}

		::System::Void LogWarning(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_LOGWARNING_OFFSET))(this, message);
		}

		::UnityEngine::Vector3 GetLegSpineBendVector(::RootMotion::FinalIK::Grounding_Leg* leg)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::Grounding_Leg*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GETLEGSPINEBENDVECTOR_OFFSET))(this, leg);
		}

		::UnityEngine::Vector3 GetLegSpineTangent(::RootMotion::FinalIK::Grounding_Leg* leg)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::Grounding_Leg*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GETLEGSPINETANGENT_OFFSET))(this, leg);
		}
	};
}

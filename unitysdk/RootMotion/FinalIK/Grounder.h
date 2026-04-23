#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Grounding; }
namespace RootMotion::FinalIK { class Grounding_Leg; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define ROOTMOTION_FINALIK_GROUNDER_GETLEGSPINEBENDVECTOR_OFFSET UNITYSDK_OFFSET(0x8E0A540)
#define ROOTMOTION_FINALIK_GROUNDER_GETLEGSPINETANGENT_OFFSET UNITYSDK_OFFSET(0x8E0A8E0)
#define ROOTMOTION_FINALIK_GROUNDER_GETSPINEOFFSETTARGET_OFFSET UNITYSDK_OFFSET(0x8E0A480)
#define ROOTMOTION_FINALIK_GROUNDER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x8E0A470)
#define ROOTMOTION_FINALIK_GROUNDER_GET_ISIKENABLED_OFFSET UNITYSDK_OFFSET(0x8E0A3D0)
#define ROOTMOTION_FINALIK_GROUNDER_GET_ISIKUPDATEENABLED_OFFSET UNITYSDK_OFFSET(0x8E0A450)
#define ROOTMOTION_FINALIK_GROUNDER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x8E0A8B0)
#define ROOTMOTION_FINALIK_GROUNDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x8E0AD40)
#define ROOTMOTION_FINALIK_GROUNDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x8E0ACE0)
#define ROOTMOTION_FINALIK_GROUNDER_ONSTARTIK_OFFSET UNITYSDK_OFFSET(0x8E0AD90)
#define ROOTMOTION_FINALIK_GROUNDER_ONSTOPIK_OFFSET UNITYSDK_OFFSET(0x8E0ADE0)
#define ROOTMOTION_FINALIK_GROUNDER_REFRESHIKSTATE_OFFSET UNITYSDK_OFFSET(0x8E0AE30)
#define ROOTMOTION_FINALIK_GROUNDER_REFRESH_OFFSET UNITYSDK_OFFSET(0x8E0A460)
#define ROOTMOTION_FINALIK_GROUNDER_SET_ISIKENABLED_OFFSET UNITYSDK_OFFSET(0x8E0A3E0)
#define ROOTMOTION_FINALIK_GROUNDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E0B030)
#define ROOTMOTION_FINALIK_GROUNDER__CTOR_OFFSET UNITYSDK_OFFSET(0x8E0AF10)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounder_TypeDefinitionIndex = 41006;

	class Grounder : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_QualitySettingEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Grounder_TypeDefinitionIndex)->GetStaticField(0x5630);
		}
		::System::Single weight; // 0x18
		::RootMotion::FinalIK::Grounding* solver; // 0x20
		::System::Boolean isManualUpdate; // 0x28
		::System::Boolean initiated; // 0x29
		::System::Boolean isIKEnabled; // 0x2A
		::UnityEngine::Coroutine* _coroutineIK; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsIKEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GET_ISIKENABLED_OFFSET))(this);
		}

		::System::Void set_IsIKEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_SET_ISIKENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsIKUpdateEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GET_ISIKUPDATEENABLED_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_REFRESH_OFFSET))(this);
		}

		::System::Boolean get_Initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GET_INITIATED_OFFSET))(this);
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

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_ONDISABLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* OnStartIK()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_ONSTARTIK_OFFSET))(this);
		}

		::System::Collections::IEnumerator* OnStopIK()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_ONSTOPIK_OFFSET))(this);
		}

		::System::Void RefreshIKState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_REFRESHIKSTATE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Grounding; }
namespace RootMotion::FinalIK { class Grounding_Leg; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define ROOTMOTION_FINALIK_GROUNDER_GETLEGSPINEBENDVECTOR_OFFSET UNITYSDK_OFFSET(0xB2FA2F0)
#define ROOTMOTION_FINALIK_GROUNDER_GETLEGSPINETANGENT_OFFSET UNITYSDK_OFFSET(0xB2FA6B0)
#define ROOTMOTION_FINALIK_GROUNDER_GETSPINEOFFSETTARGET_OFFSET UNITYSDK_OFFSET(0xB2FA230)
#define ROOTMOTION_FINALIK_GROUNDER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0xB2FA220)
#define ROOTMOTION_FINALIK_GROUNDER_GET_ISIKENABLED_OFFSET UNITYSDK_OFFSET(0xB2FA0B0)
#define ROOTMOTION_FINALIK_GROUNDER_GET_ISIKUPDATEENABLED_OFFSET UNITYSDK_OFFSET(0xB2FA190)
#define ROOTMOTION_FINALIK_GROUNDER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xB2FA680)
#define ROOTMOTION_FINALIK_GROUNDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB2FAAC0)
#define ROOTMOTION_FINALIK_GROUNDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB2FAAB0)
#define ROOTMOTION_FINALIK_GROUNDER_ONSTARTIK_OFFSET UNITYSDK_OFFSET(0xB2FAAD0)
#define ROOTMOTION_FINALIK_GROUNDER_ONSTOPIK_OFFSET UNITYSDK_OFFSET(0xB2FAB20)
#define ROOTMOTION_FINALIK_GROUNDER_REFRESHIKSTATE_OFFSET UNITYSDK_OFFSET(0xB2FAB70)
#define ROOTMOTION_FINALIK_GROUNDER_REFRESH_OFFSET UNITYSDK_OFFSET(0xB2FA1A0)
#define ROOTMOTION_FINALIK_GROUNDER_SET_ISIKENABLED_OFFSET UNITYSDK_OFFSET(0xB2FA0C0)
#define ROOTMOTION_FINALIK_GROUNDER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2FAF00)
#define ROOTMOTION_FINALIK_GROUNDER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2FACF0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounder_TypeDefinitionIndex = 44852;

	class Grounder : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_QualitySettingEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Grounder_TypeDefinitionIndex)->GetStaticField(0xBFB0);
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

		::System::Void set_IsIKEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_SET_ISIKENABLED_OFFSET))(this, a1);
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

		::System::Void LogWarning(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_LOGWARNING_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetLegSpineBendVector(::RootMotion::FinalIK::Grounding_Leg* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::Grounding_Leg*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GETLEGSPINEBENDVECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetLegSpineTangent(::RootMotion::FinalIK::Grounding_Leg* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::Grounding_Leg*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDER_GETLEGSPINETANGENT_OFFSET))(this, a1);
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

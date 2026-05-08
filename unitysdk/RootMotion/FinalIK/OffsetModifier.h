#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class FullBodyBipedIK; }
namespace RootMotion::FinalIK { class OffsetModifier_OffsetLimits; }
namespace System::Collections { class IEnumerator; }

#define ROOTMOTION_FINALIK_OFFSETMODIFIER_APPLYLIMITS_OFFSET UNITYSDK_OFFSET(0x1BF8DF20)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1BF8DC50)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER_INITIATE_OFFSET UNITYSDK_OFFSET(0x1BF8DD30)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER_MODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1BF8DD80)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BF8E030)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER_START_OFFSET UNITYSDK_OFFSET(0x1BF8DC70)
#define ROOTMOTION_FINALIK_OFFSETMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF8E1F0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int OffsetModifier_TypeDefinitionIndex = 36713;

	class OffsetModifier : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single weight; // 0x18
		::RootMotion::FinalIK::FullBodyBipedIK* ik; // 0x20
		::System::Single lastTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Single get_deltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER_GET_DELTATIME_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Initiate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER_INITIATE_OFFSET))(this);
		}

		::System::Void ModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER_MODIFYOFFSET_OFFSET))(this);
		}

		::System::Void ApplyLimits(::Il2CppArray<::RootMotion::FinalIK::OffsetModifier_OffsetLimits*>* limits)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::OffsetModifier_OffsetLimits*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER_APPLYLIMITS_OFFSET))(this, limits);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIER_ONDESTROY_OFFSET))(this);
		}
	};
}

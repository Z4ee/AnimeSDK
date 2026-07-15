#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_METHOD_5_6755F4083B6A7E2B_OFFSET UNITYSDK_OFFSET(0x19D091E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19D09040)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_START_OFFSET UNITYSDK_OFFSET(0x19D08D20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERBUTTERFLYANIM_1_OFFSET UNITYSDK_OFFSET(0x19D09170)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERBUTTERFLYANIM_2_OFFSET UNITYSDK_OFFSET(0x19D09280)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLYEND_OFFSET UNITYSDK_OFFSET(0x19D09390)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLY_1_OFFSET UNITYSDK_OFFSET(0x19D092F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLY_2_OFFSET UNITYSDK_OFFSET(0x19D09340)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D093F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D093E0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int MonoHipplenButterflyAnimHelper_TypeDefinitionIndex = 71995;

	class MonoHipplenButterflyAnimHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoHipplenButterflyAnimHelper_TypeDefinitionIndex)->GetStaticField(0x3BBF0);
		}
		::UnityEngine::Transform* Butterfly_1; // 0x18
		::UnityEngine::Transform* Butterfly_2; // 0x20
		::UnityEngine::SkinnedMeshRenderer* ButterflyMeshRenderer_1; // 0x28
		::UnityEngine::SkinnedMeshRenderer* ButterflyMeshRenderer_2; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_5; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_ONDESTROY_OFFSET))(this);
		}

		::System::Void TriggerButterflyAnim_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERBUTTERFLYANIM_1_OFFSET))(this);
		}

		::System::Void TriggerButterflyAnim_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERBUTTERFLYANIM_2_OFFSET))(this);
		}

		::System::Void TriggerLookAtButterfly_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLY_1_OFFSET))(this);
		}

		::System::Void TriggerLookAtButterfly_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLY_2_OFFSET))(this);
		}

		::System::Void TriggerLookAtButterflyEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLYEND_OFFSET))(this);
		}

		::UnityEngine::Material* Method_5_6755F4083B6A7E2B()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_METHOD_5_6755F4083B6A7E2B_OFFSET))(this);
		}
	};
}

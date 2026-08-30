#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3DA3494D1BA5B564.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_BEGINBATCHANIMCLIPOVERRIDE_OFFSET UNITYSDK_OFFSET(0xC7671B0)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_CLEANUPOVERRIDE_OFFSET UNITYSDK_OFFSET(0xC765FA0)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_ENDBATCHANIMCLIPOVERRIDE_OFFSET UNITYSDK_OFFSET(0xC767210)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_ISINBATCHANIMCLIPOVERRIDE_OFFSET UNITYSDK_OFFSET(0xC767160)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_METHOD_5_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0xC766480)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xC767290)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC765F50)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_SETANIMCLIPOVERRIDE_OFFSET UNITYSDK_OFFSET(0xC766D00)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_SETREPLACEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC766150)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC7673B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorOverrideManager_TypeDefinitionIndex = 68322;

	class AnimatorOverrideManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x18
		::UnityEngine::RuntimeAnimatorController* MDHBDDNKPPE; // 0x20
		::System::Collections::Generic::List_1<::Struct_2_3DA3494D1BA5B564>* NALMPCHLJBE; // 0x28
		::System::Boolean PHNHAFGFJLM; // 0x30
		::UnityEngine::AnimatorOverrideController* KENAPFGJKOM; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* DEFLKIEBJKI; // 0x40
		::System::Collections::Generic::HashSet_1<::System::String*>* NHJJIPHIPAM; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* NIEFCGPJMOJ; // 0x50
		::RPG::PoolList_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* FMBGCOOGGIK; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATOROVERRIDEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATOROVERRIDEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void CleanupOverride()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATOROVERRIDEMANAGER_CLEANUPOVERRIDE_OFFSET))(this);
		}

		::System::Void SetReplaceAnimatorController(::UnityEngine::RuntimeAnimatorController* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATOROVERRIDEMANAGER_SETREPLACEANIMATORCONTROLLER_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnimClipOverride(::System::String* a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATOROVERRIDEMANAGER_SETANIMCLIPOVERRIDE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInBatchAnimClipOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATOROVERRIDEMANAGER_ISINBATCHANIMCLIPOVERRIDE_OFFSET))(this);
		}

		::System::Void BeginBatchAnimClipOverride()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATOROVERRIDEMANAGER_BEGINBATCHANIMCLIPOVERRIDE_OFFSET))(this);
		}

		::System::Void EndBatchAnimClipOverride()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATOROVERRIDEMANAGER_ENDBATCHANIMCLIPOVERRIDE_OFFSET))(this);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATOROVERRIDEMANAGER_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_5_93E6B8A6D29521ED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATOROVERRIDEMANAGER_METHOD_5_93E6B8A6D29521ED_OFFSET))(this);
		}
	};
}

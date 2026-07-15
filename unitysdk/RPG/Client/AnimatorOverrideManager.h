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

#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_BEGINBATCHANIMCLIPOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19B19980)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_CLEANUPOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19B18770)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_ENDBATCHANIMCLIPOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19B199E0)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_ISINBATCHANIMCLIPOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19B19930)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_METHOD_5_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0x19B18C50)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x19B19A60)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19B18720)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_SETANIMCLIPOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19B194D0)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER_SETREPLACEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x19B18920)
#define RPG_CLIENT_ANIMATOROVERRIDEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B19B80)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorOverrideManager_TypeDefinitionIndex = 65310;

	class AnimatorOverrideManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Field_5_0; // 0x18
		::UnityEngine::RuntimeAnimatorController* Field_5_1; // 0x20
		::System::Collections::Generic::List_1<::Struct_2_3DA3494D1BA5B564>* Field_5_2; // 0x28
		::System::Boolean Field_5_3; // 0x30
		::UnityEngine::AnimatorOverrideController* Field_5_4; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* Field_5_5; // 0x40
		::System::Collections::Generic::HashSet_1<::System::String*>* Field_5_6; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* Field_5_7; // 0x50
		::RPG::PoolList_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Field_5_8; // 0x58

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

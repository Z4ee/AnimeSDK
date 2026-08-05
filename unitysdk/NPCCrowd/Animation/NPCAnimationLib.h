#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCAnimationLib___c__DisplayClass10_0.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/NapAnimator_GenericCurveID.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class NPCAnimationLib_AccessoryAnimatorCache; }
namespace NPCCrowd::Animation { class NPCAnimationLib_AvatarAnimatorCache; }
namespace NPCCrowd::Animation { class NPCAnimationLib_NonArchetypeAvatarAnimatorCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class NapAnimator; }

#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ADDACCESSORY_OFFSET UNITYSDK_OFFSET(0x9541850)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ADDAVATAR_OFFSET UNITYSDK_OFFSET(0x9541480)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ADDNONARCHETYPEAVATAR_OFFSET UNITYSDK_OFFSET(0x9541BC0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_BUILDBONEINDEXLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x9540390)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_BUILDCLIPLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x95405C0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_BUILDCURVELOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x9540F60)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_CLEARNONARCHETYPEDATA_OFFSET UNITYSDK_OFFSET(0x9542840)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_EMPTY_OFFSET UNITYSDK_OFFSET(0x95424F0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ENSUREACCESSORY_OFFSET UNITYSDK_OFFSET(0x95420A0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ENSUREAVATAR_1_OFFSET UNITYSDK_OFFSET(0x95422C0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_ENSUREAVATAR_OFFSET UNITYSDK_OFFSET(0x953B300)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDACCESSORYINDEX_OFFSET UNITYSDK_OFFSET(0x95412E0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDAVATARINDEX_OFFSET UNITYSDK_OFFSET(0x9541190)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDNONARCHETYPEAVATARINDEX_OFFSET UNITYSDK_OFFSET(0x95413B0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDORADDACCESSORY_OFFSET UNITYSDK_OFFSET(0x9541FC0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDORADDAVATAR_OFFSET UNITYSDK_OFFSET(0x9541F40)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDORADDNONARCHETYPEAVATAR_OFFSET UNITYSDK_OFFSET(0x9542030)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_GETNONARCHETYPEAVATAR_OFFSET UNITYSDK_OFFSET(0x95424E0)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x952EF70)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB__BUILDCLIPLOOKUPTABLE_G__ADDCLIP_10_0_OFFSET UNITYSDK_OFFSET(0x9540D60)
#define NPCCROWD_ANIMATION_NPCANIMATIONLIB__CTOR_OFFSET UNITYSDK_OFFSET(0x95429C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationLib_TypeDefinitionIndex = 61821;

	class NPCAnimationLib : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::NPCCrowd::Animation::NPCAnimationLib** StaticGet__instance()
		{
			return (::NPCCrowd::Animation::NPCAnimationLib**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationLib_TypeDefinitionIndex)->GetStaticField(0x511D0);
		}
		// static const ::System::String* InstanceName; // 0x0
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*>* _avatars; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCAnimationLib_AccessoryAnimatorCache*>* _accessories; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCAnimationLib_NonArchetypeAvatarAnimatorCache*>* _nonArchetypeAvatar; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* BuildBoneIndexLookupTable(::UnityEngine::Avatar* avatar, ::System::Int32 boneCount)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::UnityEngine::Avatar*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_BUILDBONEINDEXLOOKUPTABLE_OFFSET))(avatar, boneCount);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationClip*, ::System::Int32>* BuildClipLookupTable(::UnityEngine::NapAnimator* animator, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationClip*, ::System::Int32>*(*)(::UnityEngine::NapAnimator*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_BUILDCLIPLOOKUPTABLE_OFFSET))(animator, config);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::NapAnimator_GenericCurveID, ::System::Int32>* BuildCurveLookupTable(::UnityEngine::NapAnimator* animator)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::NapAnimator_GenericCurveID, ::System::Int32>*(*)(::UnityEngine::NapAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_BUILDCURVELOOKUPTABLE_OFFSET))(animator);
		}

		::System::Int32 FindAvatarIndex(::UnityEngine::Avatar* avatar, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Avatar*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDAVATARINDEX_OFFSET))(this, avatar, config);
		}

		::System::Int32 FindAccessoryIndex(::UnityEngine::Avatar* avatar)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDACCESSORYINDEX_OFFSET))(this, avatar);
		}

		::System::Int32 FindNonArchetypeAvatarIndex(::UnityEngine::Avatar* avatar)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDNONARCHETYPEAVATARINDEX_OFFSET))(this, avatar);
		}

		::System::Int32 AddAvatar(::UnityEngine::Avatar* avatar, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Avatar*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ADDAVATAR_OFFSET))(this, avatar, config);
		}

		::System::Int32 AddAccessory(::UnityEngine::Avatar* avatar)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ADDACCESSORY_OFFSET))(this, avatar);
		}

		::System::Int32 AddNonArchetypeAvatar(::UnityEngine::Avatar* avatar)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ADDNONARCHETYPEAVATAR_OFFSET))(this, avatar);
		}

		::System::Int32 FindOrAddAvatar(::UnityEngine::Avatar* avatar, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Avatar*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDORADDAVATAR_OFFSET))(this, avatar, config);
		}

		::System::Int32 FindOrAddAccessory(::UnityEngine::Avatar* avatar)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDORADDACCESSORY_OFFSET))(this, avatar);
		}

		::System::Int32 FindOrAddNonArchetypeAvatar(::UnityEngine::Avatar* avatar)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_FINDORADDNONARCHETYPEAVATAR_OFFSET))(this, avatar);
		}

		::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* EnsureAvatar(::UnityEngine::Avatar* avatar, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*(*)(::PVOID, ::UnityEngine::Avatar*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ENSUREAVATAR_OFFSET))(this, avatar, config);
		}

		::NPCCrowd::Animation::NPCAnimationLib_AccessoryAnimatorCache* EnsureAccessory(::UnityEngine::Avatar* avatar)
		{
			return ((::NPCCrowd::Animation::NPCAnimationLib_AccessoryAnimatorCache*(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ENSUREACCESSORY_OFFSET))(this, avatar);
		}

		::NPCCrowd::Animation::NPCAnimationLib_NonArchetypeAvatarAnimatorCache* EnsureAvatar_1(::UnityEngine::Avatar* avatar)
		{
			return ((::NPCCrowd::Animation::NPCAnimationLib_NonArchetypeAvatarAnimatorCache*(*)(::PVOID, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_ENSUREAVATAR_1_OFFSET))(this, avatar);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCAnimationLib_NonArchetypeAvatarAnimatorCache*>* GetNonArchetypeAvatar()
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCAnimationLib_NonArchetypeAvatarAnimatorCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_GETNONARCHETYPEAVATAR_OFFSET))(this);
		}

		::System::Void Empty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_EMPTY_OFFSET))(this);
		}

		static ::NPCCrowd::Animation::NPCAnimationLib* get_Instance()
		{
			return ((::NPCCrowd::Animation::NPCAnimationLib*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_GET_INSTANCE_OFFSET))();
		}

		::System::Void ClearNonArchetypeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB_CLEARNONARCHETYPEDATA_OFFSET))(this);
		}

		static ::System::Void _BuildClipLookupTable_g__AddClip_10_0(::UnityEngine::AnimationClip* clip, ::NPCCrowd::Animation::NPCAnimationLib___c__DisplayClass10_0& a2)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationClip*, ::NPCCrowd::Animation::NPCAnimationLib___c__DisplayClass10_0&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONLIB__BUILDCLIPLOOKUPTABLE_G__ADDCLIP_10_0_OFFSET))(clip, a2);
		}
	};
}

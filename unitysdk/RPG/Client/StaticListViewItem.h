#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class StaticListView; }
namespace SuperScrollView { class LoopListViewItem2_CanvasFadeInHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_STATICLISTVIEWITEM_GET_ALIGNRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE0FA520)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0xE0FDCA0)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_BUTTONOBJECT_OFFSET UNITYSDK_OFFSET(0xE0FDC40)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_CACHEANIMATORBUTTON_OFFSET UNITYSDK_OFFSET(0xE0FA150)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_CACHEANIMATOR_OFFSET UNITYSDK_OFFSET(0xE0FDEF0)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_CACHEDRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE0FA040)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_ITEMTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE0FDBF0)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_PREFABINDEX_OFFSET UNITYSDK_OFFSET(0xE0F95D0)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xE0FDBB0)
#define RPG_CLIENT_STATICLISTVIEWITEM_ONNEW_OFFSET UNITYSDK_OFFSET(0xE0FA110)
#define RPG_CLIENT_STATICLISTVIEWITEM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xE0FA260)
#define RPG_CLIENT_STATICLISTVIEWITEM_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xE0FCF60)
#define RPG_CLIENT_STATICLISTVIEWITEM_SETALIGNRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE0FDD50)
#define RPG_CLIENT_STATICLISTVIEWITEM_SET_PREFABINDEX_OFFSET UNITYSDK_OFFSET(0xE0F93A0)
#define RPG_CLIENT_STATICLISTVIEWITEM_SET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xE0F65F0)
#define RPG_CLIENT_STATICLISTVIEWITEM_START_OFFSET UNITYSDK_OFFSET(0xE0FDDA0)
#define RPG_CLIENT_STATICLISTVIEWITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE0FE030)
#define RPG_CLIENT_STATICLISTVIEWITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xE0FDEA0)
#define RPG_CLIENT_STATICLISTVIEWITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE0FE260)

namespace RPG::Client
{
	inline static constexpr unsigned int StaticListViewItem_TypeDefinitionIndex = 72585;

	class StaticListViewItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Object* mUserObjectData; // 0x18
		::System::Int32 mPrefabIndex; // 0x20
		::RPG::Client::StaticListView* ParentListView; // 0x28
		::System::Int32 ItemIndex; // 0x30
		::UnityEngine::AnimationClip* FadeInAnimationClip; // 0x38
		::RPG::Client::AnimatorButton* mAnimatorButton; // 0x40
		::UnityEngine::RectTransform* mCachedRectTransform; // 0x48
		::UnityEngine::RectTransform* mAlignRectTransform; // 0x50
		::UnityEngine::Animation* _Animation; // 0x58
		::SuperScrollView::LoopListViewItem2_CanvasFadeInHandler* _fadeInHandler; // 0x60
		::UnityEngine::Animator* mAnimator; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM__CTOR_OFFSET))(this);
		}

		::System::Object* get_UserObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_GET_USEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_UserObjectData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_SET_USEROBJECTDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_PrefabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_GET_PREFABINDEX_OFFSET))(this);
		}

		::System::Void set_PrefabIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_SET_PREFABINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_ItemTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_GET_ITEMTRANSFORM_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_CacheAnimatorButton()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_GET_CACHEANIMATORBUTTON_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ButtonObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_GET_BUTTONOBJECT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_CachedRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_GET_CACHEDRECTTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Animation* get_Animation()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_GET_ANIMATION_OFFSET))(this);
		}

		::System::Void SetAlignRectTransform(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_SETALIGNRECTTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_AlignRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_GET_ALIGNRECTTRANSFORM_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_UPDATE_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_PLAYFADEIN_OFFSET))(this, a1, a2);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_ONRECYCLE_OFFSET))(this);
		}

		::UnityEngine::Animator* get_CacheAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_GET_CACHEANIMATOR_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_ONNEW_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_TOSTRING_OFFSET))(this);
		}
	};
}

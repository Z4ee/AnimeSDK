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

#define RPG_CLIENT_STATICLISTVIEWITEM_GET_ALIGNRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA4E5750)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0xA4E8280)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_BUTTONOBJECT_OFFSET UNITYSDK_OFFSET(0xA4E8220)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_CACHEANIMATORBUTTON_OFFSET UNITYSDK_OFFSET(0xA4E5380)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_CACHEANIMATOR_OFFSET UNITYSDK_OFFSET(0xA4E84E0)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_CACHEDRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA4E5270)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_ITEMTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA4E8210)
#define RPG_CLIENT_STATICLISTVIEWITEM_GET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xA4E81F0)
#define RPG_CLIENT_STATICLISTVIEWITEM_ONNEW_OFFSET UNITYSDK_OFFSET(0xA4E5340)
#define RPG_CLIENT_STATICLISTVIEWITEM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xA4E5490)
#define RPG_CLIENT_STATICLISTVIEWITEM_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xA4E7B50)
#define RPG_CLIENT_STATICLISTVIEWITEM_SETALIGNRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA4E8340)
#define RPG_CLIENT_STATICLISTVIEWITEM_SET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xA4E8200)
#define RPG_CLIENT_STATICLISTVIEWITEM_START_OFFSET UNITYSDK_OFFSET(0xA4E8390)
#define RPG_CLIENT_STATICLISTVIEWITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4E8620)
#define RPG_CLIENT_STATICLISTVIEWITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xA4E8490)
#define RPG_CLIENT_STATICLISTVIEWITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E8850)
#define RPG_CLIENT_STATICLISTVIEWITEM___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4E8860)

namespace RPG::Client
{
	inline static constexpr unsigned int StaticListViewItem_TypeDefinitionIndex = 59554;

	class StaticListViewItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Object* mUserObjectData; // 0x18
		::RPG::Client::StaticListView* ParentListView; // 0x20
		::System::Int32 ItemIndex; // 0x28
		::UnityEngine::AnimationClip* FadeInAnimationClip; // 0x30
		::RPG::Client::AnimatorButton* mAnimatorButton; // 0x38
		::UnityEngine::RectTransform* mCachedRectTransform; // 0x40
		::UnityEngine::RectTransform* mAlignRectTransform; // 0x48
		::UnityEngine::Animation* _Animation; // 0x50
		::SuperScrollView::LoopListViewItem2_CanvasFadeInHandler* _fadeInHandler; // 0x58
		::UnityEngine::Animator* mAnimator; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM__CTOR_OFFSET))(this);
		}

		::System::Object* get_UserObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_GET_USEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_UserObjectData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_SET_USEROBJECTDATA_OFFSET))(this, value);
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

		::System::Void SetAlignRectTransform(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_SETALIGNRECTTRANSFORM_OFFSET))(this, rectTransform);
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

		::System::Void PlayFadeIn(::System::Single beginStamp, ::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM_PLAYFADEIN_OFFSET))(this, beginStamp, length);
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

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEWITEM___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

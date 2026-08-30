#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopListViewItem2_CanvasFadeInHandler; }
namespace SuperScrollView { class OnRecycleChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_CLEARFADEIN_OFFSET UNITYSDK_OFFSET(0x1980BD00)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_BUTTONOBJECT_OFFSET UNITYSDK_OFFSET(0x197F6DC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_CACHEANIMATORBUTTON_OFFSET UNITYSDK_OFFSET(0x197F76D0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_CACHEDRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x197F74E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_COLUMN_OFFSET UNITYSDK_OFFSET(0x1980FB10)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_FADEINANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x198100C0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0x1980C470)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISINITHANDLERCALLED_OFFSET UNITYSDK_OFFSET(0x1980FB70)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0x19810130)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISUSEANIMATION_OFFSET UNITYSDK_OFFSET(0x1980C400)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1980FAB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1980FB50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1980FB30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1980FAD0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_NEXTITEM_OFFSET UNITYSDK_OFFSET(0x1980FBD0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_PARENTGRIDVIEW_OFFSET UNITYSDK_OFFSET(0x1980FB90)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_PREVITEM_OFFSET UNITYSDK_OFFSET(0x1980FBB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1980FAF0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERINTDATA1_OFFSET UNITYSDK_OFFSET(0x1980FA30)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERINTDATA2_OFFSET UNITYSDK_OFFSET(0x1980FA50)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1980FA10)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERSTRINGDATA1_OFFSET UNITYSDK_OFFSET(0x1980FA70)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERSTRINGDATA2_OFFSET UNITYSDK_OFFSET(0x1980FA90)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_INITFADEHANDLER_OFFSET UNITYSDK_OFFSET(0x1980FCB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x198100E0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19810040)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONNEW_OFFSET UNITYSDK_OFFSET(0x1980CCC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1980C7A0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1980C4D0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETHEIGHT_OFFSET UNITYSDK_OFFSET(0x19808610)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETHIDE_OFFSET UNITYSDK_OFFSET(0x1980CDA0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETSHOW_OFFSET UNITYSDK_OFFSET(0x1980CE40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETWIDTH_OFFSET UNITYSDK_OFFSET(0x19808560)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_COLUMN_OFFSET UNITYSDK_OFFSET(0x1980FB20)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_FADEINANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x198100D0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ISINITHANDLERCALLED_OFFSET UNITYSDK_OFFSET(0x1980FB80)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0x19810140)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1980FAC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1980FB60)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1980FB40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1980FAE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_NEXTITEM_OFFSET UNITYSDK_OFFSET(0x1980FBE0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_PARENTGRIDVIEW_OFFSET UNITYSDK_OFFSET(0x1980FBA0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_PREVITEM_OFFSET UNITYSDK_OFFSET(0x1980FBC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1980FB00)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERINTDATA1_OFFSET UNITYSDK_OFFSET(0x1980FA40)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERINTDATA2_OFFSET UNITYSDK_OFFSET(0x1980FA60)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1980FA20)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERSTRINGDATA1_OFFSET UNITYSDK_OFFSET(0x1980FA80)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERSTRINGDATA2_OFFSET UNITYSDK_OFFSET(0x1980FAA0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_START_OFFSET UNITYSDK_OFFSET(0x1980FBF0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1980FE10)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1980FDB0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19810150)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridViewItem_TypeDefinitionIndex = 48119;

	class LoopGridViewItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 mItemIndex; // 0x18
		::System::Int32 mRow; // 0x1C
		::System::Int32 mColumn; // 0x20
		::System::Int32 mItemId; // 0x24
		::SuperScrollView::LoopGridView* mParentGridView; // 0x28
		::System::Boolean mIsInitHandlerCalled; // 0x30
		::System::String* mItemPrefabName; // 0x38
		::UnityEngine::RectTransform* mCachedRectTransform; // 0x40
		::System::Int32 mItemCreatedCheckFrameCount; // 0x48
		::System::Object* mUserObjectData; // 0x50
		::System::Int32 mUserIntData1; // 0x58
		::System::Int32 mUserIntData2; // 0x5C
		::System::String* mUserStringData1; // 0x60
		::System::String* mUserStringData2; // 0x68
		::SuperScrollView::LoopGridViewItem* mPrevItem; // 0x70
		::SuperScrollView::LoopGridViewItem* mNextItem; // 0x78
		::RPG::Client::AnimatorButton* mAnimatorButton; // 0x80
		::SuperScrollView::LoopListViewItem2_CanvasFadeInHandler* _fadeInHandler; // 0x88
		::UnityEngine::AnimationClip* m_FadeInAnimationClip; // 0x90
		::UnityEngine::Animation* _animation; // 0x98
		::System::Boolean IsFromPreview; // 0xA0
		::System::Boolean _IsRecycled_k__BackingField; // 0xA1
		::SuperScrollView::OnRecycleChanged* onRecycleChanged; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM__CTOR_OFFSET))(this);
		}

		::System::Object* get_UserObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_UserObjectData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USEROBJECTDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_UserIntData1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERINTDATA1_OFFSET))(this);
		}

		::System::Void set_UserIntData1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERINTDATA1_OFFSET))(this, a1);
		}

		::System::Int32 get_UserIntData2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERINTDATA2_OFFSET))(this);
		}

		::System::Void set_UserIntData2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERINTDATA2_OFFSET))(this, a1);
		}

		::System::String* get_UserStringData1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERSTRINGDATA1_OFFSET))(this);
		}

		::System::Void set_UserStringData1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERSTRINGDATA1_OFFSET))(this, a1);
		}

		::System::String* get_UserStringData2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_USERSTRINGDATA2_OFFSET))(this);
		}

		::System::Void set_UserStringData2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_USERSTRINGDATA2_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemCreatedCheckFrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCreatedCheckFrameCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_CachedRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_CACHEDRECTTRANSFORM_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_CacheAnimatorButton()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_CACHEANIMATORBUTTON_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ButtonObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_BUTTONOBJECT_OFFSET))(this);
		}

		::System::Void SetHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETHEIGHT_OFFSET))(this, a1);
		}

		::System::Void SetWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETWIDTH_OFFSET))(this, a1);
		}

		::System::String* get_ItemPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMPREFABNAME_OFFSET))(this);
		}

		::System::Void set_ItemPrefabName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMPREFABNAME_OFFSET))(this, a1);
		}

		::System::Int32 get_Row()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ROW_OFFSET))(this, a1);
		}

		::System::Int32 get_Column()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_COLUMN_OFFSET))(this);
		}

		::System::Void set_Column(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_COLUMN_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMINDEX_OFFSET))(this);
		}

		::System::Void set_ItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInitHandlerCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISINITHANDLERCALLED_OFFSET))(this);
		}

		::System::Void set_IsInitHandlerCalled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ISINITHANDLERCALLED_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridView* get_ParentGridView()
		{
			return ((::SuperScrollView::LoopGridView*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_PARENTGRIDVIEW_OFFSET))(this);
		}

		::System::Void set_ParentGridView(::SuperScrollView::LoopGridView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_PARENTGRIDVIEW_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* get_PrevItem()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_PREVITEM_OFFSET))(this);
		}

		::System::Void set_PrevItem(::SuperScrollView::LoopGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_PREVITEM_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* get_NextItem()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_NEXTITEM_OFFSET))(this);
		}

		::System::Void set_NextItem(::SuperScrollView::LoopGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_NEXTITEM_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_UPDATE_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_PLAYFADEIN_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_TOSTRING_OFFSET))(this);
		}

		::System::Void initFadeHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_INITFADEHANDLER_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONNEW_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONRECYCLE_OFFSET))(this);
		}

		::System::Void SetHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETHIDE_OFFSET))(this);
		}

		::System::Void SetShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SETSHOW_OFFSET))(this);
		}

		::System::Void ClearFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_CLEARFADEIN_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_FadeInAnimationClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_FADEINANIMATIONCLIP_OFFSET))(this);
		}

		::System::Void set_FadeInAnimationClip(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_FADEINANIMATIONCLIP_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsUseAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISUSEANIMATION_OFFSET))(this);
		}

		::System::Single get_FadeInLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_FADEINLENGTH_OFFSET))(this);
		}

		::System::Boolean get_IsRecycled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_GET_ISRECYCLED_OFFSET))(this);
		}

		::System::Void set_IsRecycled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWITEM_SET_ISRECYCLED_OFFSET))(this, a1);
		}
	};
}

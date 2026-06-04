#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2_CanvasFadeInHandler; }
namespace SuperScrollView { class OnRecycleChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::UI { class Selectable; }

#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANCELFADEIN_OFFSET UNITYSDK_OFFSET(0xD0CCF20)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GETFOLDITEM_OFFSET UNITYSDK_OFFSET(0xD0D0DB0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_BOTTOMY_OFFSET UNITYSDK_OFFSET(0xD0CC640)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_BUTTONOBJECT_OFFSET UNITYSDK_OFFSET(0xD0A16A0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_CACHEANIMATORBUTTON_OFFSET UNITYSDK_OFFSET(0xD0A21E0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_CACHEDRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD0A1AE0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_DISTANCEWITHVIEWPORTSNAPCENTER_OFFSET UNITYSDK_OFFSET(0xD0D3720)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_FADEINANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xD0D4030)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0xD0D40C0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISEXPAND_OFFSET UNITYSDK_OFFSET(0xD0D3E00)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISINITHANDLERCALLED_OFFSET UNITYSDK_OFFSET(0xD0D3800)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0xD0D4460)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISSIZEDIRTY_OFFSET UNITYSDK_OFFSET(0xD0D3DF0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISUSEANIMATION_OFFSET UNITYSDK_OFFSET(0xD0D4050)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xD0D3760)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xD0D37E0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xD0D37C0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMPREFABNAME_OFFSET UNITYSDK_OFFSET(0xD0D37A0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMSIZEWITHPADDING_OFFSET UNITYSDK_OFFSET(0xD0C7A10)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMSIZE_OFFSET UNITYSDK_OFFSET(0xD0C7A60)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_LEFTX_OFFSET UNITYSDK_OFFSET(0xD0BD1E0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_PADDING_OFFSET UNITYSDK_OFFSET(0xD0D3780)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_PARENTLISTVIEW_OFFSET UNITYSDK_OFFSET(0xD0D3820)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RAWHEIGHT_OFFSET UNITYSDK_OFFSET(0xD0D3840)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RAWWIDTH_OFFSET UNITYSDK_OFFSET(0xD0D3860)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RIGHTX_OFFSET UNITYSDK_OFFSET(0xD0BD080)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_STARTPOSOFFSET_OFFSET UNITYSDK_OFFSET(0xD0D3740)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_SUBSTATICLIST_OFFSET UNITYSDK_OFFSET(0xD0D3EA0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_TOPY_OFFSET UNITYSDK_OFFSET(0xD0CC4D0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERINTDATA1_OFFSET UNITYSDK_OFFSET(0xD0D36A0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERINTDATA2_OFFSET UNITYSDK_OFFSET(0xD0D36C0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xD0D3680)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERSTRINGDATA1_OFFSET UNITYSDK_OFFSET(0xD0D36E0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERSTRINGDATA2_OFFSET UNITYSDK_OFFSET(0xD0D3700)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_INITFADEHANDLER_OFFSET UNITYSDK_OFFSET(0xD0D38D0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD0D4350)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD0D3C60)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONEXPAND_OFFSET UNITYSDK_OFFSET(0xD0D0370)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONFOLDLISTONNAVI_OFFSET UNITYSDK_OFFSET(0xD0D3F90)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONFOLD_OFFSET UNITYSDK_OFFSET(0xD0D0040)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONNEW_OFFSET UNITYSDK_OFFSET(0xD0CE050)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xD0CE890)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xD0CCFF0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETFOLDLIST_OFFSET UNITYSDK_OFFSET(0xD0D3EB0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETHEIGHT_OFFSET UNITYSDK_OFFSET(0xD0CDEC0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETHIDE_OFFSET UNITYSDK_OFFSET(0xD0D3BC0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETSUBLIST_OFFSET UNITYSDK_OFFSET(0xD0D3F20)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETWIDTH_OFFSET UNITYSDK_OFFSET(0xD0CDE10)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_DISTANCEWITHVIEWPORTSNAPCENTER_OFFSET UNITYSDK_OFFSET(0xD0D3730)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_FADEINANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xD0D4040)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISINITHANDLERCALLED_OFFSET UNITYSDK_OFFSET(0xD0D3810)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0xD0D4470)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISSIZEDIRTY_OFFSET UNITYSDK_OFFSET(0xD0D3CE0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xD0D3770)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xD0D37F0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMINDEX_OFFSET UNITYSDK_OFFSET(0xD0D37D0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMPREFABNAME_OFFSET UNITYSDK_OFFSET(0xD0D37B0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_PADDING_OFFSET UNITYSDK_OFFSET(0xD0D3790)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_PARENTLISTVIEW_OFFSET UNITYSDK_OFFSET(0xD0D3830)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_RAWHEIGHT_OFFSET UNITYSDK_OFFSET(0xD0D3850)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_RAWWIDTH_OFFSET UNITYSDK_OFFSET(0xD0D3870)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_STARTPOSOFFSET_OFFSET UNITYSDK_OFFSET(0xD0D3750)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERINTDATA1_OFFSET UNITYSDK_OFFSET(0xD0D36B0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERINTDATA2_OFFSET UNITYSDK_OFFSET(0xD0D36D0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xD0D3690)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERSTRINGDATA1_OFFSET UNITYSDK_OFFSET(0xD0D36F0)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERSTRINGDATA2_OFFSET UNITYSDK_OFFSET(0xD0D3710)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_START_OFFSET UNITYSDK_OFFSET(0xD0D3880)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD0D4120)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_UPDATE_OFFSET UNITYSDK_OFFSET(0xD0D3A70)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2__CTOR_OFFSET UNITYSDK_OFFSET(0xD0D4480)
#define SUPERSCROLLVIEW_LOOPLISTVIEWITEM2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD0D44A0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListViewItem2_TypeDefinitionIndex = 44959;

	class LoopListViewItem2 : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 mItemIndex; // 0x18
		::System::Int32 mItemId; // 0x1C
		::SuperScrollView::LoopListView2* mParentListView; // 0x20
		::System::Boolean mIsInitHandlerCalled; // 0x28
		::System::String* mItemPrefabName; // 0x30
		::UnityEngine::RectTransform* mCachedRectTransform; // 0x38
		::System::Single mPadding; // 0x40
		::System::Single mDistanceWithViewPortSnapCenter; // 0x44
		::System::Int32 mItemCreatedCheckFrameCount; // 0x48
		::System::Single mStartPosOffset; // 0x4C
		::System::Object* mUserObjectData; // 0x50
		::System::Int32 mUserIntData1; // 0x58
		::System::Int32 mUserIntData2; // 0x5C
		::System::String* mUserStringData1; // 0x60
		::System::String* mUserStringData2; // 0x68
		::System::Int32 LeftNaviIndex; // 0x70
		::System::Int32 RightNaviIndex; // 0x74
		::RPG::Client::AnimatorButton* mAnimatorButton; // 0x78
		::System::Boolean IsFromPreview; // 0x80
		::System::Boolean WidthDefined; // 0x81
		::System::Boolean HeightDefined; // 0x82
		::System::Boolean FromObjPool; // 0x83
		::System::Single _RawHeight_k__BackingField; // 0x84
		::System::Single _RawWidth_k__BackingField; // 0x88
		::SuperScrollView::LoopListViewItem2_CanvasFadeInHandler* _fadeInHandler; // 0x90
		::System::Boolean m_isSizeDirty; // 0x98
		::System::Single tmpSize; // 0x9C
		::RPG::Client::StaticListView* foldStaticList; // 0xA0
		::RPG::Client::StaticListView* subStaticList; // 0xA8
		::UnityEngine::AnimationClip* m_FadeInAnimationClip; // 0xB0
		::UnityEngine::Animation* _animation; // 0xB8
		::UnityEngine::Component* cachedComponent; // 0xC0
		::System::Boolean cacheCompnentIsFind; // 0xC8
		::System::Boolean _IsRecycled_k__BackingField; // 0xC9
		::SuperScrollView::OnRecycleChanged* onRecycleChanged; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2__CTOR_OFFSET))(this);
		}

		::System::Object* get_UserObjectData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_UserObjectData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USEROBJECTDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_UserIntData1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERINTDATA1_OFFSET))(this);
		}

		::System::Void set_UserIntData1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERINTDATA1_OFFSET))(this, a1);
		}

		::System::Int32 get_UserIntData2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERINTDATA2_OFFSET))(this);
		}

		::System::Void set_UserIntData2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERINTDATA2_OFFSET))(this, a1);
		}

		::System::String* get_UserStringData1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERSTRINGDATA1_OFFSET))(this);
		}

		::System::Void set_UserStringData1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERSTRINGDATA1_OFFSET))(this, a1);
		}

		::System::String* get_UserStringData2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_USERSTRINGDATA2_OFFSET))(this);
		}

		::System::Void set_UserStringData2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_USERSTRINGDATA2_OFFSET))(this, a1);
		}

		::System::Single get_DistanceWithViewPortSnapCenter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_DISTANCEWITHVIEWPORTSNAPCENTER_OFFSET))(this);
		}

		::System::Void set_DistanceWithViewPortSnapCenter(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_DISTANCEWITHVIEWPORTSNAPCENTER_OFFSET))(this, a1);
		}

		::System::Single get_StartPosOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_STARTPOSOFFSET_OFFSET))(this);
		}

		::System::Void set_StartPosOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_STARTPOSOFFSET_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemCreatedCheckFrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCreatedCheckFrameCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMCREATEDCHECKFRAMECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_Padding()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_Padding(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_PADDING_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_CachedRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_CACHEDRECTTRANSFORM_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_CacheAnimatorButton()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_CACHEANIMATORBUTTON_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ButtonObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_BUTTONOBJECT_OFFSET))(this);
		}

		::System::String* get_ItemPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMPREFABNAME_OFFSET))(this);
		}

		::System::Void set_ItemPrefabName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMPREFABNAME_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMINDEX_OFFSET))(this);
		}

		::System::Void set_ItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInitHandlerCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISINITHANDLERCALLED_OFFSET))(this);
		}

		::System::Void set_IsInitHandlerCalled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISINITHANDLERCALLED_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListView2* get_ParentListView()
		{
			return ((::SuperScrollView::LoopListView2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_PARENTLISTVIEW_OFFSET))(this);
		}

		::System::Void set_ParentListView(::SuperScrollView::LoopListView2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_PARENTLISTVIEW_OFFSET))(this, a1);
		}

		::System::Single get_TopY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_TOPY_OFFSET))(this);
		}

		::System::Single get_BottomY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_BOTTOMY_OFFSET))(this);
		}

		::System::Single get_LeftX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_LEFTX_OFFSET))(this);
		}

		::System::Single get_RightX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RIGHTX_OFFSET))(this);
		}

		::System::Single get_ItemSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMSIZE_OFFSET))(this);
		}

		::System::Single get_ItemSizeWithPadding()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ITEMSIZEWITHPADDING_OFFSET))(this);
		}

		::System::Single get_RawHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RAWHEIGHT_OFFSET))(this);
		}

		::System::Void set_RawHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_RAWHEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_RawWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_RAWWIDTH_OFFSET))(this);
		}

		::System::Void set_RawWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_RAWWIDTH_OFFSET))(this, a1);
		}

		::System::Void SetHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETHEIGHT_OFFSET))(this, a1);
		}

		::System::Void SetWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETWIDTH_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_UPDATE_OFFSET))(this);
		}

		::System::Void initFadeHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_INITFADEHANDLER_OFFSET))(this);
		}

		::System::Void SetHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETHIDE_OFFSET))(this);
		}

		::System::Void PlayFadeIn(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_PLAYFADEIN_OFFSET))(this, a1, a2);
		}

		::System::Void CancelFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_CANCELFADEIN_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONNEW_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONRECYCLE_OFFSET))(this);
		}

		::System::Boolean get_IsSizeDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISSIZEDIRTY_OFFSET))(this);
		}

		::System::Void set_IsSizeDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISSIZEDIRTY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISEXPAND_OFFSET))(this);
		}

		::RPG::Client::StaticListView* get_SubStaticList()
		{
			return ((::RPG::Client::StaticListView*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_SUBSTATICLIST_OFFSET))(this);
		}

		::System::Void OnExpand(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONEXPAND_OFFSET))(this, a1);
		}

		::System::Void SetFoldList(::RPG::Client::StaticListView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListView*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETFOLDLIST_OFFSET))(this, a1);
		}

		::System::Void SetSubList(::RPG::Client::StaticListView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListView*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SETSUBLIST_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* GetFoldItem(::UnityEngine::EventSystems::MoveDirection a1)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GETFOLDITEM_OFFSET))(this, a1);
		}

		::System::Void OnFold()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONFOLD_OFFSET))(this);
		}

		::System::Void OnFoldListOnNavi(::UnityEngine::EventSystems::AxisEventData* a1, ::UnityEngine::UI::Selectable* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONFOLDLISTONNAVI_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationClip* get_FadeInAnimationClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_FADEINANIMATIONCLIP_OFFSET))(this);
		}

		::System::Void set_FadeInAnimationClip(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_FADEINANIMATIONCLIP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUseAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISUSEANIMATION_OFFSET))(this);
		}

		::System::Single get_FadeInLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_FADEINLENGTH_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_TOSTRING_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsRecycled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_GET_ISRECYCLED_OFFSET))(this);
		}

		::System::Void set_IsRecycled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2_SET_ISRECYCLED_OFFSET))(this, a1);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWITEM2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

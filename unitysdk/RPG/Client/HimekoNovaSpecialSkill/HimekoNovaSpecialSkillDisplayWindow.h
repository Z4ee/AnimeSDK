#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_43BD383C98B4C0C5_212;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::HimekoNovaSpecialSkill { class HimekoNovaSpecialSkillDisplayViewModel; }
namespace Sofa { class ShortCutHintControl; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { class Object; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17955C60)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x17954270)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONAVATARSCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x17957230)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17954FC0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x17956BC0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x179569A0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONGETAVATARITEM_OFFSET UNITYSDK_OFFSET(0x17957650)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONGETTABITEM_OFFSET UNITYSDK_OFFSET(0x17957290)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x17954350)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x17956C50)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHARROWBUTTON_OFFSET UNITYSDK_OFFSET(0x17957020)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHAVATARLIST_OFFSET UNITYSDK_OFFSET(0x17956750)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHBUTTONHINT_OFFSET UNITYSDK_OFFSET(0x179566D0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x17956450)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHLOCALIZEDTEXTS_OFFSET UNITYSDK_OFFSET(0x17955D40)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHPAGEINFO_OFFSET UNITYSDK_OFFSET(0x17956110)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x17956F70)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHTABLIST_OFFSET UNITYSDK_OFFSET(0x17956500)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW___ONGETAVATARITEM_B__16_0_OFFSET UNITYSDK_OFFSET(0x17957AD0)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillDisplayWindow_TypeDefinitionIndex = 75555;

	class HimekoNovaSpecialSkillDisplayWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::LocalizedText* _TxtDesc; // 0x40
		::Sofa::ShortCutHintControl* _ShortCutHintControl; // 0x48
		::UnityEngine::RectTransform* _NodeBtnArrowExpand; // 0x50
		::RPG::Client::AnimatorButton* _BtnDesc; // 0x58
		::RPG::Client::LocalizedText* _TxtMainSkillName; // 0x60
		::RPG::Client::PrefabLoadMeta* _BtnArrowLoader; // 0x68
		::SuperScrollView::LoopListView2* _TabListView; // 0x70
		::RPG::Client::LocalizedText* _TxtSkillName; // 0x78
		::RPG::Client::MonoInControlButton* _InControlBtn; // 0x80
		::RPG::Client::AnimatorButton* _BtnClose; // 0x88
		::UnityEngine::RectTransform* _NodeBtnArrowCollapse; // 0x90
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x98
		::RPG::Client::AnimatorButton* _BtnToggleDesc; // 0xA0
		::UnityEngine::UI::Image* _PathIcon; // 0xA8
		::RPG::Client::AnimatorButton* _BtnArrow; // 0xB0
		::SuperScrollView::LoopListView2* _AvatarListView; // 0xB8
		::UnityEngine::UI::ScrollRect* _ScrollRectAvatarList; // 0xC0
		::RPG::Client::UIStateCtrl* _UiStateCtrl; // 0xC8
		::RPG::Client::LocalizedText* _TxtAvatarName; // 0xD0

		::System::Void _ctor(::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillDisplayViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillDisplayViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnCloseMessage(::Class_1_43BD383C98B4C0C5_212* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_212*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONCLOSEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshButtonHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHBUTTONHINT_OFFSET))(this);
		}

		::System::Void _RefreshButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void _RefreshLocalizedTexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHLOCALIZEDTEXTS_OFFSET))(this);
		}

		::System::Void _RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHSTATE_OFFSET))(this);
		}

		::System::Void _RefreshArrowButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHARROWBUTTON_OFFSET))(this);
		}

		::System::Void _RefreshPageInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHPAGEINFO_OFFSET))(this);
		}

		::System::Void _OnAvatarsCollectionChanged(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONAVATARSCOLLECTIONCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshTabList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHTABLIST_OFFSET))(this);
		}

		::System::Void _RefreshAvatarList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__REFRESHAVATARLIST_OFFSET))(this);
		}

		::SuperScrollView::LoopListViewItem2* _OnGetTabItem(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONGETTABITEM_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopListViewItem2* _OnGetAvatarItem(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW__ONGETAVATARITEM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillDisplayViewModel* get__ViewModel()
		{
			return ((::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillDisplayViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __OnGetAvatarItem_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDISPLAYWINDOW___ONGETAVATARITEM_B__16_0_OFFSET))(this);
		}
	};
}

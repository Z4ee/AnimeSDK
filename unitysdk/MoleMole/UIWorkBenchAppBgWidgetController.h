#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIWorkBenchAppBgWidgetController___c__DisplayClass4_0.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_52BF5A8E97668B1D;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ADD__ONAFTERIMGRECTCHANGE_OFFSET UNITYSDK_OFFSET(0x12EA33C0)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x12EA44D0)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_GET_ANCHOREDPOSITIONFOREXPANDANIM_OFFSET UNITYSDK_OFFSET(0x12EA5140)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_GET_ANCHOREDPOSITIONFORSCROLLITEM_OFFSET UNITYSDK_OFFSET(0x12EA5130)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_GET_WIDTHFOREXPANDANIM_OFFSET UNITYSDK_OFFSET(0x12EA5120)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_GET_WIDTHFORSCROLLITEM_OFFSET UNITYSDK_OFFSET(0x12EA5110)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONAFTEREXPANDCONTROLLERWIDTHCHANGE_OFFSET UNITYSDK_OFFSET(0x12EA3A20)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONAFTERIMGRECTCHANGE_OFFSET UNITYSDK_OFFSET(0x12EA4FE0)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12EA3440)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12EA3580)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONSCROLLVIEWITEMMOVE_OFFSET UNITYSDK_OFFSET(0x12EA3910)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12EA34D0)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12EA3280)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_PLAYEXPANDANIM_OFFSET UNITYSDK_OFFSET(0x12EA4560)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_PLAYSHRINKANIM_OFFSET UNITYSDK_OFFSET(0x12EA48C0)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_REFRESHSIZE_OFFSET UNITYSDK_OFFSET(0x12EA3F20)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_REMOVE__ONAFTERIMGRECTCHANGE_OFFSET UNITYSDK_OFFSET(0x12EA4B80)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_RESETANIM_OFFSET UNITYSDK_OFFSET(0x12EA4C00)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_SET_ANCHOREDPOSITIONFOREXPANDANIM_OFFSET UNITYSDK_OFFSET(0x12EA39B0)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_SET_ANCHOREDPOSITIONFORSCROLLITEM_OFFSET UNITYSDK_OFFSET(0x12EA4EF0)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_SET_WIDTHFOREXPANDANIM_OFFSET UNITYSDK_OFFSET(0x12EA4840)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_SET_WIDTHFORSCROLLITEM_OFFSET UNITYSDK_OFFSET(0x12EA4F60)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA5150)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER__ONSCROLLITEMUPDATE_G__GETBGCOLORNAME_4_0_OFFSET UNITYSDK_OFFSET(0x12EA3890)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER__PLAYEXPANDANIM_B__7_0_OFFSET UNITYSDK_OFFSET(0x12EA5160)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER__PLAYEXPANDANIM_B__7_1_OFFSET UNITYSDK_OFFSET(0x12EA5170)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12EA51F0)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12EA5280)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER___BASE_ONSCROLLVIEWITEMMOVE_OFFSET UNITYSDK_OFFSET(0x12EA5320)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12EA53B0)
#define MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12EA5440)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchAppBgWidgetController_TypeDefinitionIndex = 48404;

	class UIWorkBenchAppBgWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_52BF5A8E97668B1D* _view; // 0x2E8
		::System::Single _widthForScrollItem; // 0x2F0
		::System::Single _widthForExpandAnim; // 0x2F4
		::UnityEngine::Vector2 _anchoredPositionForScrollItem; // 0x2F8
		::UnityEngine::Vector2 _anchoredPositionForExpandAnim; // 0x300
		::System::Action* _onAfterImgRectChange; // 0x308
		::MoleMole::UIWorkBenchAppBgWidgetController* _expandController; // 0x310
		::DG::Tweening::Tweener* _tweener; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnScrollViewItemMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONSCROLLVIEWITEMMOVE_OFFSET))(this);
		}

		::UnityEngine::Color GetColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_GETCOLOR_OFFSET))(this);
		}

		::System::Void PlayExpandAnim(::System::Single duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_PLAYEXPANDANIM_OFFSET))(this, duration, curve);
		}

		::System::Void PlayShrinkAnim(::MoleMole::UIWorkBenchAppBgWidgetController* expandController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWorkBenchAppBgWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_PLAYSHRINKANIM_OFFSET))(this, expandController);
		}

		::System::Void ResetAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_RESETANIM_OFFSET))(this);
		}

		::System::Void RefreshSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_REFRESHSIZE_OFFSET))(this);
		}

		::System::Void OnAfterImgRectChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONAFTERIMGRECTCHANGE_OFFSET))(this);
		}

		::System::Void OnAfterExpandControllerWidthChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ONAFTEREXPANDCONTROLLERWIDTHCHANGE_OFFSET))(this);
		}

		::System::Single get_widthForScrollItem()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_GET_WIDTHFORSCROLLITEM_OFFSET))(this);
		}

		::System::Void set_widthForScrollItem(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_SET_WIDTHFORSCROLLITEM_OFFSET))(this, value);
		}

		::System::Single get_widthForExpandAnim()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_GET_WIDTHFOREXPANDANIM_OFFSET))(this);
		}

		::System::Void set_widthForExpandAnim(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_SET_WIDTHFOREXPANDANIM_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_anchoredPositionForScrollItem()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_GET_ANCHOREDPOSITIONFORSCROLLITEM_OFFSET))(this);
		}

		::System::Void set_anchoredPositionForScrollItem(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_SET_ANCHOREDPOSITIONFORSCROLLITEM_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_anchoredPositionForExpandAnim()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_GET_ANCHOREDPOSITIONFOREXPANDANIM_OFFSET))(this);
		}

		::System::Void set_anchoredPositionForExpandAnim(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_SET_ANCHOREDPOSITIONFOREXPANDANIM_OFFSET))(this, value);
		}

		::System::Void add__onAfterImgRectChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_ADD__ONAFTERIMGRECTCHANGE_OFFSET))(this, value);
		}

		::System::Void remove__onAfterImgRectChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER_REMOVE__ONAFTERIMGRECTCHANGE_OFFSET))(this, value);
		}

		static ::System::String* _OnScrollItemUpdate_g__GetBgColorName_4_0(::MoleMole::UIWorkBenchAppBgWidgetController___c__DisplayClass4_0& a1)
		{
			return ((::System::String*(*)(::MoleMole::UIWorkBenchAppBgWidgetController___c__DisplayClass4_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER__ONSCROLLITEMUPDATE_G__GETBGCOLORNAME_4_0_OFFSET))(a1);
		}

		::System::Single _PlayExpandAnim_b__7_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER__PLAYEXPANDANIM_B__7_0_OFFSET))(this);
		}

		::System::Void _PlayExpandAnim_b__7_1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER__PLAYEXPANDANIM_B__7_1_OFFSET))(this, value);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnScrollViewItemMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER___BASE_ONSCROLLVIEWITEMMOVE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHAPPBGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

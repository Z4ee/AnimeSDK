#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_AAB024DAC549A2AF;
class Class_2_28BDF4B69EE93815_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIYorozuyaRallyQuestItemWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x116BC2F0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x116BB8E0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x116BAF20)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x116BB970)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x116BAD90)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHNEW_OFFSET UNITYSDK_OFFSET(0x116BC160)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHSCROLLVIEWCONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x116BC4E0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHSHOWSUBITEMS_OFFSET UNITYSDK_OFFSET(0x116BBAC0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x116BB040)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REGISTERONCLICKRALLYQUEST_OFFSET UNITYSDK_OFFSET(0x116BB9F0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_RESELECTRALLYQUEST_OFFSET UNITYSDK_OFFSET(0x116BBE00)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SELECTRALLYCHAPTER_OFFSET UNITYSDK_OFFSET(0x116BBA40)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SELECTRALLYQUEST_OFFSET UNITYSDK_OFFSET(0x116BBCC0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SETNAME_OFFSET UNITYSDK_OFFSET(0x116BBEB0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x116BC560)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x116BC600)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__REFRESHSHOWSUBITEMS_B__11_0_OFFSET UNITYSDK_OFFSET(0x116BC670)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x116BC610)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x116BC6A0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x116BC730)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x116BC7D0)
#define MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x116BC860)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaRallyRowWidgetController_TypeDefinitionIndex = 77156;

	class UIYorozuyaRallyRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_28BDF4B69EE93815_2* _view; // 0x2F0
		::Class_1_AAB024DAC549A2AF* _chapterData; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaRallyQuestItemWidgetController*>* _questItemWidgets; // 0x300
		::System::Action_2<::System::Int32, ::System::Int32>* _onClickRallyQuest; // 0x308
		::System::Int32 _index; // 0x310
		::System::Boolean _showSubItems; // 0x314
		::System::Int32 _curSelectQuestIndex; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RegisterOnClickRallyQuest(::System::Action_2<::System::Int32, ::System::Int32>* onSelectRallyQuest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REGISTERONCLICKRALLYQUEST_OFFSET))(this, onSelectRallyQuest);
		}

		::System::Void SelectRallyChapter(::System::Boolean select, ::System::Boolean delayPlayFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SELECTRALLYCHAPTER_OFFSET))(this, select, delayPlayFadeIn);
		}

		::System::Void SelectRallyQuest(::System::Int32 questIndex, ::System::Boolean isDefaultSelect, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SELECTRALLYQUEST_OFFSET))(this, questIndex, isDefaultSelect, force);
		}

		::System::Void ReSelectRallyQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_RESELECTRALLYQUEST_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_ONBTNCLICK_OFFSET))(this);
		}

		::System::Void RefreshShowSubItems(::System::Boolean showSubItems, ::System::Boolean delayPlayFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHSHOWSUBITEMS_OFFSET))(this, showSubItems, delayPlayFadeIn);
		}

		::System::Void RefreshScrollViewContentActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHSCROLLVIEWCONTENTACTIVE_OFFSET))(this);
		}

		::System::Void SetName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_SETNAME_OFFSET))(this);
		}

		::System::Void RefreshNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER_REFRESHNEW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, args);
		}

		::System::Void _RefreshView_b__9_0(::System::Int32 questIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__REFRESHVIEW_B__9_0_OFFSET))(this, questIndex);
		}

		::System::Void _RefreshShowSubItems_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER__REFRESHSHOWSUBITEMS_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYARALLYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

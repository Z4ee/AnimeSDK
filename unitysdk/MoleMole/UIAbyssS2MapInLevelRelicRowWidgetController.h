#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_183;
class Class_2_208CC9941471731A_477;
class Class_2_208CC9941471731A_684;
class Class_2_4F91D0D25F52B783_10;
class Class_2_AC1B1CB16C488BEC;
class Class_3_11BD32F0529C01D3;
namespace MoleMole { class GradientColor; }
namespace MoleMole { class UIAbyssS2GeneralItemIconWidgetController; }
namespace MoleMole { class UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase; }
namespace MoleMole { class UIAbyssS2InLevelMapDialogPageController_UIInLevelRelicPackageInfo; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET UNITYSDK_OFFSET(0x199A7AD0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_CHANGEEXPAND_OFFSET UNITYSDK_OFFSET(0x199A57E0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_CLEANDYNAMICINFO_OFFSET UNITYSDK_OFFSET(0x199A60F0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITBACKAGEROLEVIEW_OFFSET UNITYSDK_OFFSET(0x199A84E0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITICONVIEW_OFFSET UNITYSDK_OFFSET(0x199A83C0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITRELICVIEW_OFFSET UNITYSDK_OFFSET(0x199A5AA0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITTAROTCARD_OFFSET UNITYSDK_OFFSET(0x199A6430)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INSERTRELICLEVELVIEW_OFFSET UNITYSDK_OFFSET(0x199A70E0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INSERTRELICSKILLVIEW_OFFSET UNITYSDK_OFFSET(0x199A6BD0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x199A5700)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x199A8C40)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199A5270)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x199A5380)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x199A8990)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199A5300)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199A50C0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_REFRESHICONVIEW_OFFSET UNITYSDK_OFFSET(0x199A8A10)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x199A5420)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_SETEXPAND_OFFSET UNITYSDK_OFFSET(0x199A5840)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x199A8C90)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199A8EC0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x199A8F50)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199A8FB0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199A9040)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapInLevelRelicRowWidgetController_TypeDefinitionIndex = 64921;

	class UIAbyssS2MapInLevelRelicRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_4F91D0D25F52B783_10* _view; // 0x2F0
		::MoleMole::UIGeneralIconCardRarityWidgetController* _cardIcon; // 0x2F8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _cacheDynamic; // 0x300
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _cacheText; // 0x308
		::System::Int32 _cardCount; // 0x310
		::System::Action_1<::MoleMole::UIAbyssS2MapInLevelRelicRowWidgetController*>* ClickHandle; // 0x318
		::MoleMole::UIAbyssS2InLevelMapDialogPageController_UIInLevelRelicPackageInfo* _info; // 0x320
		::Class_3_11BD32F0529C01D3* _relicData; // 0x328
		::Class_2_208CC9941471731A_183* _relicConfig; // 0x330
		::Class_2_208CC9941471731A_477* _itemConfig; // 0x338
		::MoleMole::UIAbyssS2GeneralItemIconWidgetController* _iconWidget; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONBTNCLICKED_OFFSET))(this);
		}

		::System::Void ChangeExpand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_CHANGEEXPAND_OFFSET))(this);
		}

		::System::Void SetExpand(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_SETEXPAND_OFFSET))(this, b);
		}

		::System::Void InitRelicView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITRELICVIEW_OFFSET))(this);
		}

		::System::Void InitTarotCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITTAROTCARD_OFFSET))(this);
		}

		::System::Void InsertRelicSkillView(::System::String* toString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INSERTRELICSKILLVIEW_OFFSET))(this, toString);
		}

		::System::Void CleanDynamicInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_CLEANDYNAMICINFO_OFFSET))(this);
		}

		::System::Void InsertRelicLevelView(::Class_2_208CC9941471731A_684* levelConfig, ::System::Boolean divide, ::System::Boolean light, ::System::Boolean hideLevel, ::System::Int32 upgradeCardCount, ::System::String* cardIconPath, ::System::Boolean briefDesc)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_684*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INSERTRELICLEVELVIEW_OFFSET))(this, levelConfig, divide, light, hideLevel, upgradeCardCount, cardIconPath, briefDesc);
		}

		::System::String* BuildLevelDesc(::Class_2_208CC9941471731A_684* levelConfig, ::MoleMole::GradientColor* gradientColor, ::System::Boolean light, ::System::Boolean hideLevel, ::System::Boolean briefDesc)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_684*, ::MoleMole::GradientColor*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET))(this, levelConfig, gradientColor, light, hideLevel, briefDesc);
		}

		::System::Void RefreshInfo(::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase* info)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, info);
		}

		::System::Void InitIconView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITICONVIEW_OFFSET))(this);
		}

		::System::Void InitBackageRoleView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_INITBACKAGEROLEVIEW_OFFSET))(this);
		}

		::System::Void RefreshIconView(::Class_2_AC1B1CB16C488BEC* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AC1B1CB16C488BEC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_REFRESHICONVIEW_OFFSET))(this, data);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER_ONSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELRELICROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

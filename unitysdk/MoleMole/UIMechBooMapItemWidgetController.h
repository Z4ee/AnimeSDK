#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_E9529ED64113E4E9;
class Class_2_31D08DC027B35B8F;
class Class_2_60638234271CCDB8_14;
class Class_2_AC1B1CB16C488BEC;
namespace MoleMole { class UIAbyssS2GeneralItemIconWidgetController; }
namespace MoleMole { class UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase; }
namespace MoleMole { class UIAbyssS2InLevelMapDialogPageController_UIInLevelItemPackageInfo; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace MoleMole { class UIInLevelPauseCommandItemWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_CHANGEEXPAND_OFFSET UNITYSDK_OFFSET(0x1574A5F0)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x1574BBA0)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_INITITEMVIEW_OFFSET UNITYSDK_OFFSET(0x1574AAA0)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1574A310)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1574A2C0)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1574BC60)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1574B8C0)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1574B840)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1574BCF0)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1574A390)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1574A780)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_REFRESHICONVIEW_OFFSET UNITYSDK_OFFSET(0x1574B990)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x1574A7F0)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_SETEXPAND_OFFSET UNITYSDK_OFFSET(0x1574A650)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1574BDD0)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1574BDE0)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1574BE70)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1574BF10)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1574BFA0)
#define MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1574C030)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooMapItemWidgetController_TypeDefinitionIndex = 51665;

	class UIMechBooMapItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_14* _view; // 0x2F0
		::MoleMole::UIGeneralIconCardRarityWidgetController* _cardIcon; // 0x2F8
		::Class_1_E9529ED64113E4E9* _playerHelper; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseCommandItemWidgetController*>* _skillListItemList; // 0x308
		::MoleMole::UIAbyssS2InLevelMapDialogPageController_UIInLevelItemPackageInfo* _info; // 0x310
		::MoleMole::UIAbyssS2GeneralItemIconWidgetController* _iconWidget; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONBTNCLICKED_OFFSET))(this);
		}

		::System::Void ChangeExpand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_CHANGEEXPAND_OFFSET))(this);
		}

		::System::Void SetExpand(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_SETEXPAND_OFFSET))(this, b);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshInfo(::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase* info)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, info);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void InitItemView(::UnityEngine::UI::Extension::UILocalizationText* viewDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_INITITEMVIEW_OFFSET))(this, viewDesc);
		}

		::Class_2_31D08DC027B35B8F* get_Model()
		{
			return ((::Class_2_31D08DC027B35B8F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONSELECT_OFFSET))(this, isSelect);
		}

		::System::Void RefreshIconView(::Class_2_AC1B1CB16C488BEC* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AC1B1CB16C488BEC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_REFRESHICONVIEW_OFFSET))(this, data);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMAPITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

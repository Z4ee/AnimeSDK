#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_477;
class Class_2_208CC9941471731A_684;
class Class_2_4F91D0D25F52B783_4;
class Class_2_AC1B1CB16C488BEC;
class Class_2_B6EA3DC396CEB9E9;
class Class_2_FEB0042A043413D3;
class Class_3_11BD32F0529C01D3;
class Class_3_EEF4E8CAD4E8CF37;
namespace MoleMole { class GradientColor; }
namespace MoleMole { class UIAbyssS2GeneralItemIconWidgetController; }
namespace MoleMole { class UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase; }
namespace MoleMole { class UIAbyssS2InLevelMapDialogPageController_UIInLevelItemPackageInfo; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_BUILDBRANCHDESC_OFFSET UNITYSDK_OFFSET(0x1B23AFA0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET UNITYSDK_OFFSET(0x1B23A6B0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_CHANGEEXPAND_OFFSET UNITYSDK_OFFSET(0x1B237CF0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_CLEANDYNAMICINFO_OFFSET UNITYSDK_OFFSET(0x1B2388B0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_GETARTIFACTDESC_OFFSET UNITYSDK_OFFSET(0x1B238E10)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_GETCARDDESC_OFFSET UNITYSDK_OFFSET(0x1B23B820)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITBANGBOODREAMITEMVIEW_OFFSET UNITYSDK_OFFSET(0x1B238E70)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITCOOPEQUIPVIEW_OFFSET UNITYSDK_OFFSET(0x1B239120)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITITEMVIEW_OFFSET UNITYSDK_OFFSET(0x1B238490)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITRELICVIEW_1_OFFSET UNITYSDK_OFFSET(0x1B2391D0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITRELICVIEW_2_OFFSET UNITYSDK_OFFSET(0x1B239530)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITRELICVIEW_OFFSET UNITYSDK_OFFSET(0x1B238CC0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INSERTBRANCHVIEW_OFFSET UNITYSDK_OFFSET(0x1B23A010)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INSERTLEVELVIEW_OFFSET UNITYSDK_OFFSET(0x1B239B60)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INSERTRELICSKILLVIEW_OFFSET UNITYSDK_OFFSET(0x1B239760)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B237C10)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1B23B970)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B237FA0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1B2380B0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1B23B8F0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B238030)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1B237A60)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1B237F30)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_REFRESHICONVIEW_OFFSET UNITYSDK_OFFSET(0x1B238A90)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x1B238150)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_SETEXPAND_OFFSET UNITYSDK_OFFSET(0x1B237D50)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B23B9C0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B23BA50)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1B23BAE0)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B23BB80)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1B23BC10)
#define MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1B23BCA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapInLevelItemRowWidgetController_TypeDefinitionIndex = 69789;

	class UIAbyssS2MapInLevelItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_4F91D0D25F52B783_4* _view; // 0x2F0
		::MoleMole::UIGeneralIconCardRarityWidgetController* _cardIcon; // 0x2F8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _cacheDyncmic; // 0x300
		::System::Action_1<::MoleMole::UIAbyssS2MapInLevelItemRowWidgetController*>* ClickHandle; // 0x308
		::MoleMole::UIAbyssS2InLevelMapDialogPageController_UIInLevelItemPackageInfo* _info; // 0x310
		::Class_1_0D6706375CDAAE8C* _itemData; // 0x318
		::Class_2_208CC9941471731A_477* _itemConfig; // 0x320
		::MoleMole::UIAbyssS2GeneralItemIconWidgetController* _iconWidget; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONBTNCLICKED_OFFSET))(this);
		}

		::System::Void ChangeExpand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_CHANGEEXPAND_OFFSET))(this);
		}

		::System::Void SetExpand(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_SETEXPAND_OFFSET))(this, b);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void InitItemView(::UnityEngine::UI::Extension::UILocalizationText* viewDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITITEMVIEW_OFFSET))(this, viewDesc);
		}

		::System::Void InitRelicView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITRELICVIEW_OFFSET))(this);
		}

		::System::Void InitRelicView_1(::Class_3_11BD32F0529C01D3* relicData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_11BD32F0529C01D3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITRELICVIEW_1_OFFSET))(this, relicData);
		}

		::System::Void InitRelicView_2(::Class_3_EEF4E8CAD4E8CF37* relicData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_EEF4E8CAD4E8CF37*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITRELICVIEW_2_OFFSET))(this, relicData);
		}

		::System::Void InitCoopEquipView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITCOOPEQUIPVIEW_OFFSET))(this);
		}

		::System::Void InitBangbooDreamItemView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INITBANGBOODREAMITEMVIEW_OFFSET))(this);
		}

		::System::Void InsertRelicSkillView(::System::String* toString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INSERTRELICSKILLVIEW_OFFSET))(this, toString);
		}

		::System::Void CleanDynamicInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_CLEANDYNAMICINFO_OFFSET))(this);
		}

		::System::Void InsertLevelView(::Class_2_208CC9941471731A_684* levelConfig, ::System::Boolean divide, ::System::Boolean light, ::System::Boolean hideLevel, ::System::Boolean briefDesc)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_684*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INSERTLEVELVIEW_OFFSET))(this, levelConfig, divide, light, hideLevel, briefDesc);
		}

		::System::Void InsertBranchView(::Class_2_FEB0042A043413D3* branchConfig, ::System::Boolean divide, ::System::Boolean light, ::System::Boolean hideBranch, ::System::Boolean briefDesc, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FEB0042A043413D3*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_INSERTBRANCHVIEW_OFFSET))(this, branchConfig, divide, light, hideBranch, briefDesc, index);
		}

		::System::String* BuildLevelDesc(::Class_2_208CC9941471731A_684* levelConfig, ::MoleMole::GradientColor* gradientColor, ::System::Boolean light, ::System::Boolean hideLevel, ::System::Boolean briefDesc)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_684*, ::MoleMole::GradientColor*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_BUILDLEVELDESC_OFFSET))(this, levelConfig, gradientColor, light, hideLevel, briefDesc);
		}

		::System::String* BuildBranchDesc(::Class_2_FEB0042A043413D3* branchConfig, ::MoleMole::GradientColor* gradientColor, ::System::Boolean light, ::System::Boolean hideBranch, ::System::Boolean briefDesc, ::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_FEB0042A043413D3*, ::MoleMole::GradientColor*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_BUILDBRANCHDESC_OFFSET))(this, branchConfig, gradientColor, light, hideBranch, briefDesc, index);
		}

		::System::String* GetArtifactDesc(::Class_2_B6EA3DC396CEB9E9* data, ::System::Boolean brief)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_B6EA3DC396CEB9E9*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_GETARTIFACTDESC_OFFSET))(this, data, brief);
		}

		::System::String* GetCardDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_GETCARDDESC_OFFSET))(this);
		}

		::System::Void RefreshInfo(::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase* info)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2InLevelMapDialogPageController_IUIInLevelItemPackageInfoBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, info);
		}

		::System::Void RefreshIconView(::Class_2_AC1B1CB16C488BEC* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AC1B1CB16C488BEC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_REFRESHICONVIEW_OFFSET))(this, data);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER_ONSELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPINLEVELITEMROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

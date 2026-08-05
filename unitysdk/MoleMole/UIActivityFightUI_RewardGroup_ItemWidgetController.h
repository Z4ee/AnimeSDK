#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_7C9750B14DD9C4E5;
namespace MoleMole { class UIActivityFightUI_RewardGroup_ItemWidgetController_Data; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11DA2240)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11DA22B0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSCROLLITEMREUSE_OFFSET UNITYSDK_OFFSET(0x11DA2540)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11DA2370)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11DA2750)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11DA2820)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA2870)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11DA2880)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMREUSE_OFFSET UNITYSDK_OFFSET(0x11DA2920)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11DA29B0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11DA2A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFightUI_RewardGroup_ItemWidgetController_TypeDefinitionIndex = 65060;

	class UIActivityFightUI_RewardGroup_ItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_7C9750B14DD9C4E5* get__viewModel()
		{
			return ((::Class_2_7C9750B14DD9C4E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnScrollItemReUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSCROLLITEMREUSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::MoleMole::UIActivityFightUI_RewardGroup_ItemWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityFightUI_RewardGroup_ItemWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemReUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMREUSE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_REWARDGROUP_ITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}

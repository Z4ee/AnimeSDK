#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011.h"
#include "unitysdk/Class_2_31D08DC027B35B8F_Enum_3_BCA662D3210575AB.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_31D08DC027B35B8F;
class Class_2_35EE3F274435ACD1;
class Class_2_8600CAA49EEC9D0F;
class Class_3_54181161AD221142;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMechBooReformItemWidgetControllerContext; }
namespace MoleMole { class UIMechBooReformTaskRowWidgetController; }
namespace MoleMole { class UIMechBooTabWidgetController; }
namespace MoleMole::Project::Config { class MechaConfigTemplateExt; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_GETCOMPONENTSBYTABINDEX_OFFSET UNITYSDK_OFFSET(0x17864E20)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x17865090)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_GET_M_ALLCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x17864F90)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17863790)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_INITTABS_OFFSET UNITYSDK_OFFSET(0x17863E90)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ISTABSELECTED_OFFSET UNITYSDK_OFFSET(0x178659C0)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONCLICKREFORM_OFFSET UNITYSDK_OFFSET(0x17864C90)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONCLICKSETASTARGET_OFFSET UNITYSDK_OFFSET(0x17864DE0)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x178656B0)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178637A0)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONSELECTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x17864F10)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONSERVERDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x178645E0)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17865A10)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17863830)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17863880)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x17864A80)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_REFRESHPERFORMENCE_OFFSET UNITYSDK_OFFSET(0x17865580)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_REFRESHPROPERTIES_OFFSET UNITYSDK_OFFSET(0x17865150)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_REFRESHTABSELECTED_OFFSET UNITYSDK_OFFSET(0x17865850)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x17864640)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17865A80)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER__ONCLICKTAB_B__22_0_OFFSET UNITYSDK_OFFSET(0x17865C50)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17865D00)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17865D90)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17865DA0)
#define MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17865DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooReformPageController_TypeDefinitionIndex = 84453;

	class UIMechBooReformPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_8600CAA49EEC9D0F* _view; // 0x318
		::System::Int32 m_scriptID; // 0x320
		::MoleMole::Project::Config::MechaConfigTemplateExt* m_scriptCfg; // 0x328
		::Class_3_54181161AD221142* m_levelInfo; // 0x330
		::Class_2_35EE3F274435ACD1* m_curComponent; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIMechBooReformTaskRowWidgetController*>* m_propertyCtrlList; // 0x340
		::System::Collections::Generic::List_1<::Class_2_31D08DC027B35B8F_Enum_3_BCA662D3210575AB>* m_propertyTypeList; // 0x348
		::Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011 m_curTabIndex; // 0x350
		::System::Collections::Generic::Dictionary_2<::Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011, ::Il2CppArray<::Class_2_35EE3F274435ACD1*>*>* m_allComponentsDict; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UIMechBooTabWidgetController*>* m_tabs; // 0x360
		::Class_2_31D08DC027B35B8F* _model; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnServerDataUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONSERVERDATAUPDATE_OFFSET))(this, args);
		}

		::System::Void OnClickReform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONCLICKREFORM_OFFSET))(this);
		}

		::System::Void OnClickSetAsTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONCLICKSETASTARGET_OFFSET))(this);
		}

		::System::Void InitTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_INITTABS_OFFSET))(this);
		}

		::Il2CppArray<::Class_2_35EE3F274435ACD1*>* GetComponentsByTabIndex(::Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011 index)
		{
			return ((::Il2CppArray<::Class_2_35EE3F274435ACD1*>*(*)(::PVOID, ::Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_GETCOMPONENTSBYTABINDEX_OFFSET))(this, index);
		}

		::System::Void OnSelectComponent(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONSELECTCOMPONENT_OFFSET))(this, index);
		}

		::System::Void RefreshUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_REFRESHUI_OFFSET))(this);
		}

		::System::Void RefreshPerformence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_REFRESHPERFORMENCE_OFFSET))(this);
		}

		::System::Void RefreshProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_REFRESHPROPERTIES_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 tabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONCLICKTAB_OFFSET))(this, tabIndex);
		}

		::System::Void RefreshItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_REFRESHITEMS_OFFSET))(this);
		}

		::System::Boolean IsTabSelected(::Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_31D08DC027B35B8F_Enum_3_94F3E8DA9C14F011))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ISTABSELECTED_OFFSET))(this, index);
		}

		::System::Void RefreshTabSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_REFRESHTABSELECTED_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Il2CppArray<::Class_2_35EE3F274435ACD1*>* get_m_allComponents()
		{
			return ((::Il2CppArray<::Class_2_35EE3F274435ACD1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_GET_M_ALLCOMPONENTS_OFFSET))(this);
		}

		::Class_2_31D08DC027B35B8F* get_Model()
		{
			return ((::Class_2_31D08DC027B35B8F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::MoleMole::UIMechBooReformItemWidgetControllerContext* _OnClickTab_b__22_0(::Class_2_35EE3F274435ACD1* x)
		{
			return ((::MoleMole::UIMechBooReformItemWidgetControllerContext*(*)(::PVOID, ::Class_2_35EE3F274435ACD1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER__ONCLICKTAB_B__22_0_OFFSET))(this, x);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

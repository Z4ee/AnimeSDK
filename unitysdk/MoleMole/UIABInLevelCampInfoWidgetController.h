#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_A969C4A108E8A78F;
class Class_2_A969C4A108E8A78F_Class_2_E3085A286707C63B;
class Class_2_CE3D9FA6CFDF456D;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBangBooAutoBattleInLevelPageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_CANCELSELECT_OFFSET UNITYSDK_OFFSET(0x17E2A330)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E29380)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17E294C0)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E29410)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E29140)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E29310)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x17E29770)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_RESETCAMP_OFFSET UNITYSDK_OFFSET(0x17E29720)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2A570)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E2A670)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17E2A700)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E2A730)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E2A7C0)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E2A850)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelCampInfoWidgetController_TypeDefinitionIndex = 75654;

	class UIABInLevelCampInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_A969C4A108E8A78F* _view; // 0x2B8
		::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_A969C4A108E8A78F_Class_2_E3085A286707C63B*>*>* _iconWidgetList; // 0x2C0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _campCache; // 0x2C8
		::System::Int32 _campId; // 0x2D0
		::MoleMole::MonoGamepadCustomList* _iconList; // 0x2D8
		::MoleMole::UIBangBooAutoBattleInLevelPageController* _parent; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void ResetCamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_RESETCAMP_OFFSET))(this);
		}

		::System::Void RefreshInfo(::System::Int32 campId, ::Class_2_CE3D9FA6CFDF456D* inLevelData, ::System::Boolean isAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_CE3D9FA6CFDF456D*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, campId, inLevelData, isAdd);
		}

		::System::Void CancelSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_CANCELSELECT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

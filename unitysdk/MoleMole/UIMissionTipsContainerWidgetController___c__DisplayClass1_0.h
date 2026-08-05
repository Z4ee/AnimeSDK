#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182E8560)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS1_0__REFRESHEXPLOREQUESTAREACHECKTIP_B__0_OFFSET UNITYSDK_OFFSET(0x182E8570)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS1_0__REFRESHEXPLOREQUESTAREACHECKTIP_B__1_OFFSET UNITYSDK_OFFSET(0x182E8710)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS1_0__REFRESHEXPLOREQUESTAREACHECKTIP_B__2_OFFSET UNITYSDK_OFFSET(0x182E8C60)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS1_0__REFRESHEXPLOREQUESTAREACHECKTIP_B__3_OFFSET UNITYSDK_OFFSET(0x182E8820)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass1_0_TypeDefinitionIndex = 91189;

	class UIMissionTipsContainerWidgetController___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* list; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x20
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshExploreQuestAreaCheckTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS1_0__REFRESHEXPLOREQUESTAREACHECKTIP_B__0_OFFSET))(this);
		}

		::System::Void _RefreshExploreQuestAreaCheckTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS1_0__REFRESHEXPLOREQUESTAREACHECKTIP_B__1_OFFSET))(this);
		}

		::System::Void _RefreshExploreQuestAreaCheckTip_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS1_0__REFRESHEXPLOREQUESTAREACHECKTIP_B__3_OFFSET))(this);
		}

		::System::Void _RefreshExploreQuestAreaCheckTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS1_0__REFRESHEXPLOREQUESTAREACHECKTIP_B__2_OFFSET))(this);
		}
	};
}

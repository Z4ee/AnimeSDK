#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralItemUsePopWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186BA4D0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__SHOWSPECIALBTNPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x186BA4E0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__SHOWSPECIALBTNPANEL_B__1_OFFSET UNITYSDK_OFFSET(0x186BA550)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemUsePopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 80930;

	class UIGeneralItemUsePopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralItemUsePopWindowController* __4__this; // 0x10
		::System::Action_1<::System::Int32>* onClickBtn01; // 0x18
		::System::Action* onClickBtn02; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSpecialBtnPanel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__SHOWSPECIALBTNPANEL_B__0_OFFSET))(this);
		}

		::System::Void _ShowSpecialBtnPanel_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__SHOWSPECIALBTNPANEL_B__1_OFFSET))(this);
		}
	};
}

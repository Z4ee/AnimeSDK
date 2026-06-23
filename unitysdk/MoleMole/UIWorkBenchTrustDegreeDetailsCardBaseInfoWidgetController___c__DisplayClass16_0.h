#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AA32EAE205D9293B_1;
namespace MoleMole { class UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBASEINFOWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1089D440)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBASEINFOWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHPROGRESSBARITEMS_G__CONTAINSCURLEVELQUEST_0_OFFSET UNITYSDK_OFFSET(0x1089D450)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 60925;

	class UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Class_3_AA32EAE205D9293B_1* partner; // 0x10
		::MoleMole::UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBASEINFOWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshProgressBarItems_g__ContainsCurLevelQuest_0(::System::Int32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBASEINFOWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHPROGRESSBARITEMS_G__CONTAINSCURLEVELQUEST_0_OFFSET))(this, level);
		}
	};
}

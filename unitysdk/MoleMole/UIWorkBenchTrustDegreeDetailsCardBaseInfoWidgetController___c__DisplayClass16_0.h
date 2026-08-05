#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AE02BC8285203464_38;
namespace MoleMole { class UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBASEINFOWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x112C8DE0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBASEINFOWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHPROGRESSBARITEMS_G__CONTAINSCURLEVELQUEST_0_OFFSET UNITYSDK_OFFSET(0x112C8DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 48154;

	class UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController* __4__this; // 0x10
		::Class_3_AE02BC8285203464_38* partner; // 0x18

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

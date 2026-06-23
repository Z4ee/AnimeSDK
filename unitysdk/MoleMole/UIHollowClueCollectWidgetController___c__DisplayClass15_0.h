#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6F9C507D2BC133_Class_2_B57A8ED4EE569CA0;

#define MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18256190)
#define MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS15_0__ONCLICKGOTOAGENCY_B__0_OFFSET UNITYSDK_OFFSET(0x182561A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowClueCollectWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 65155;

	class UIHollowClueCollectWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::Class_1_0D6F9C507D2BC133_Class_2_B57A8ED4EE569CA0* runningParas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickGotoAgency_b__0(::System::Boolean succ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCLUECOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS15_0__ONCLICKGOTOAGENCY_B__0_OFFSET))(this, succ);
		}
	};
}

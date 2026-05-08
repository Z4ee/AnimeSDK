#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_3_AE02BC8285203464_7;

#define MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE_SETDAYDATA_OFFSET UNITYSDK_OFFSET(0x167F0940)
#define MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x167F0470)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInWidgetBase_TypeDefinitionIndex = 80974;

	class UIActivitySignInWidgetBase : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE__CTOR_OFFSET))(this);
		}

		::System::Void SetDayData(::Class_3_AE02BC8285203464_7* task, ::Class_1_D375C91CCE5D3999* activityData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_7*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE_SETDAYDATA_OFFSET))(this, task, activityData);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_3_AE02BC8285203464_18;

#define MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE_SETDAYDATA_OFFSET UNITYSDK_OFFSET(0x18E24F70)
#define MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E24AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInWidgetBase_TypeDefinitionIndex = 48052;

	class UIActivitySignInWidgetBase : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE__CTOR_OFFSET))(this);
		}

		::System::Void SetDayData(::Class_3_AE02BC8285203464_18* task, ::Class_1_D375C91CCE5D3999* activityData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_18*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE_SETDAYDATA_OFFSET))(this, task, activityData);
		}
	};
}

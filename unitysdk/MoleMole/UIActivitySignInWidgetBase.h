#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_3_BD954AEAE8F1A57B;

#define MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE_SETDAYDATA_OFFSET UNITYSDK_OFFSET(0x173DA260)
#define MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x173D9D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInWidgetBase_TypeDefinitionIndex = 49373;

	class UIActivitySignInWidgetBase : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE__CTOR_OFFSET))(this);
		}

		::System::Void SetDayData(::Class_3_BD954AEAE8F1A57B* task, ::Class_1_D375C91CCE5D3999* activityData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_BD954AEAE8F1A57B*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINWIDGETBASE_SETDAYDATA_OFFSET))(this, task, activityData);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityBigCatProgressBarWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18937BF0)
#define MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS9_0__GETREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x18937C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBigCatProgressBarWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 79400;

	class UIActivityBigCatProgressBarWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* rewardList; // 0x10
		::MoleMole::UIActivityBigCatProgressBarWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetReward_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS9_0__GETREWARD_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityFishProgressBarWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11E299E0)
#define MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS11_0__GETREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x11E299F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishProgressBarWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 52138;

	class UIActivityFishProgressBarWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityFishProgressBarWidgetController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* rewardList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetReward_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS11_0__GETREWARD_B__0_OFFSET))(this);
		}
	};
}

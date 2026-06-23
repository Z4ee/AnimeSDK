#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityCheckinProgressBarWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYCHECKINPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17320C00)
#define MOLEMOLE_UIACTIVITYCHECKINPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__GETREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x17320C10)
#define MOLEMOLE_UIACTIVITYCHECKINPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__GETREWARD_B__1_OFFSET UNITYSDK_OFFSET(0x17320C40)
#define MOLEMOLE_UIACTIVITYCHECKINPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__GETREWARD_B__2_OFFSET UNITYSDK_OFFSET(0x17320C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCheckinProgressBarWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 80568;

	class UIActivityCheckinProgressBarWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* canGetReward; // 0x10
		::MoleMole::UIActivityCheckinProgressBarWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetReward_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__GETREWARD_B__0_OFFSET))(this);
		}

		::System::Void _GetReward_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__GETREWARD_B__1_OFFSET))(this);
		}

		::System::Void _GetReward_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINPROGRESSBARWIDGETCONTROLLER___C__DISPLAYCLASS10_0__GETREWARD_B__2_OFFSET))(this);
		}
	};
}

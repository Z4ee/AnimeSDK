#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIRABInLevelBottomWidgetController_SFilterKeyText.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5E100)
#define MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS43_0__INITSORTFILTER_B__10_OFFSET UNITYSDK_OFFSET(0x15F5E130)
#define MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS43_0__INITSORTFILTER_B__4_OFFSET UNITYSDK_OFFSET(0x15F5E110)
#define MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS43_0__INITSORTFILTER_B__7_OFFSET UNITYSDK_OFFSET(0x15F5E120)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelBottomWidgetController___c__DisplayClass43_0_TypeDefinitionIndex = 78460;

	class UIRABInLevelBottomWidgetController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIRABInLevelBottomWidgetController_SFilterKeyText>* campOptions; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::UIRABInLevelBottomWidgetController_SFilterKeyText>* qualityOptions; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::UIRABInLevelBottomWidgetController_SFilterKeyText>* starOptions; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::MoleMole::UIRABInLevelBottomWidgetController_SFilterKeyText>* _InitSortFilter_b__4()
		{
			return ((::System::Collections::Generic::IList_1<::MoleMole::UIRABInLevelBottomWidgetController_SFilterKeyText>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS43_0__INITSORTFILTER_B__4_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::MoleMole::UIRABInLevelBottomWidgetController_SFilterKeyText>* _InitSortFilter_b__7()
		{
			return ((::System::Collections::Generic::IList_1<::MoleMole::UIRABInLevelBottomWidgetController_SFilterKeyText>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS43_0__INITSORTFILTER_B__7_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::MoleMole::UIRABInLevelBottomWidgetController_SFilterKeyText>* _InitSortFilter_b__10()
		{
			return ((::System::Collections::Generic::IList_1<::MoleMole::UIRABInLevelBottomWidgetController_SFilterKeyText>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS43_0__INITSORTFILTER_B__10_OFFSET))(this);
		}
	};
}

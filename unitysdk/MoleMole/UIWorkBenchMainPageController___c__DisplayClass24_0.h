#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_310;
namespace MoleMole { class UIWorkBenchMainPageController; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1276F1B0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__SELECTEDAPPICON_G__TRANSITION_0_OFFSET UNITYSDK_OFFSET(0x1276F1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMainPageController___c__DisplayClass24_0_TypeDefinitionIndex = 56328;

	class UIWorkBenchMainPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIWorkBenchMainPageController* __4__this; // 0x10
		::Class_2_208CC9941471731A_310* templateData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _SelectedAppIcon_g__Transition_0()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__SELECTEDAPPICON_G__TRANSITION_0_OFFSET))(this);
		}
	};
}

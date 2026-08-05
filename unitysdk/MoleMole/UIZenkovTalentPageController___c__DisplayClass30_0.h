#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839;
namespace MoleMole { class UIZenkovTalentPageController; }
namespace MoleMole { class UIZenkovTalentPageController_TalentConnectionLine; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x112E3260)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS30_0__ONNODESTATECHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x112E3270)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentPageController___c__DisplayClass30_0_TypeDefinitionIndex = 84330;

	class UIZenkovTalentPageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovTalentPageController* __4__this; // 0x10
		::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839* node; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovTalentPageController_TalentConnectionLine*>* value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnNodeStateChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS30_0__ONNODESTATECHANGED_B__0_OFFSET))(this);
		}
	};
}

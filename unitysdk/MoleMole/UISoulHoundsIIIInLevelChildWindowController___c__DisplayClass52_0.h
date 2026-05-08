#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoSoulHoundScore; }
namespace MoleMole { class UISoulHoundsIIIInLevelChildWindowController; }

#define MOLEMOLE_UISOULHOUNDSIIIINLEVELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D71470)
#define MOLEMOLE_UISOULHOUNDSIIIINLEVELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS52_0__ONGETSCORE_B__0_OFFSET UNITYSDK_OFFSET(0x14D71480)

namespace MoleMole
{
	inline static constexpr unsigned int UISoulHoundsIIIInLevelChildWindowController___c__DisplayClass52_0_TypeDefinitionIndex = 80229;

	class UISoulHoundsIIIInLevelChildWindowController___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::MoleMole::UISoulHoundsIIIInLevelChildWindowController* __4__this; // 0x10
		::MoleMole::MonoSoulHoundScore* scoreComponent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOULHOUNDSIIIINLEVELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetScore_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOULHOUNDSIIIINLEVELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS52_0__ONGETSCORE_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Other { class SRTab; }
namespace SRDebugger::UI::Other { class SRTabController; }

#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__DISPLAYCLASS18_0__ADDTAB_B__0_OFFSET UNITYSDK_OFFSET(0x1E69D430)
#define SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E69D0D0)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int SRTabController___c__DisplayClass18_0_TypeDefinitionIndex = 37321;

	class SRTabController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::SRDebugger::UI::Other::SRTab* tab; // 0x10
		::SRDebugger::UI::Other::SRTabController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddTab_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SRTABCONTROLLER___C__DISPLAYCLASS18_0__ADDTAB_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBossChallengeInfoWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED1610)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS38_0__OPENBUFFDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x15ED1620)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS38_0__OPENBUFFDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x15ED1900)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS38_0__OPENBUFFDIALOG_B__2_OFFSET UNITYSDK_OFFSET(0x15ED1920)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeInfoWidgetController___c__DisplayClass38_0_TypeDefinitionIndex = 45920;

	class UIBossChallengeInfoWidgetController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::UIBossChallengeInfoWidgetController* __4__this; // 0x18
		::System::Action* buffSelectCallback; // 0x20
		::System::Action* __9__1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenBuffDialog_b__0(::System::Int32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS38_0__OPENBUFFDIALOG_B__0_OFFSET))(this, buffID);
		}

		::System::Void _OpenBuffDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS38_0__OPENBUFFDIALOG_B__1_OFFSET))(this);
		}

		::System::Void _OpenBuffDialog_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS38_0__OPENBUFFDIALOG_B__2_OFFSET))(this);
		}
	};
}

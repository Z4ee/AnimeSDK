#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
namespace MoleMole { class UIBossChallengeInfoWidgetController; }
namespace MoleMole { class UILineupSelectContext; }
namespace System { class Action; }

#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED0CF0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS34_0__OPENSELECTROLEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x15ED1270)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS34_0__OPENSELECTROLEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x15ED0D00)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS34_0__OPENSELECTROLEPAGE_B__2_OFFSET UNITYSDK_OFFSET(0x15ED0FE0)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS34_0__OPENSELECTROLEPAGE_B__3_OFFSET UNITYSDK_OFFSET(0x15ED11B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeInfoWidgetController___c__DisplayClass34_0_TypeDefinitionIndex = 45917;

	class UIBossChallengeInfoWidgetController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBossChallengeInfoWidgetController* __4__this; // 0x10
		::MoleMole::UILineupSelectContext* lineupSelectPageContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenSelectRolePage_b__1(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS34_0__OPENSELECTROLEPAGE_B__1_OFFSET))(this, data);
		}

		::System::Void _OpenSelectRolePage_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS34_0__OPENSELECTROLEPAGE_B__2_OFFSET))(this);
		}

		::System::Void _OpenSelectRolePage_b__3(::System::Action* realGoFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS34_0__OPENSELECTROLEPAGE_B__3_OFFSET))(this, realGoFunc);
		}

		::System::Void _OpenSelectRolePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__DISPLAYCLASS34_0__OPENSELECTROLEPAGE_B__0_OFFSET))(this);
		}
	};
}

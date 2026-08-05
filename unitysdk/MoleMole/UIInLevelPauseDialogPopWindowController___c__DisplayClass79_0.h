#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FDE200)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS79_0__ONCLICKQUITBATTLEBTN_B__0_OFFSET UNITYSDK_OFFSET(0x18FDE210)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c__DisplayClass79_0_TypeDefinitionIndex = 59725;

	class UIInLevelPauseDialogPopWindowController___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Action*, ::System::Action*>* networkCall; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickQuitBattleBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS79_0__ONCLICKQUITBATTLEBTN_B__0_OFFSET))(this);
		}
	};
}

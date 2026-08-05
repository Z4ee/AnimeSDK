#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_21B962BB0A8CF0AA;
namespace MoleMole { class UIABInLevelBangbooInfoWidgetController; }

#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19781590)
#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__OPENBANGBOOINFO_B__0_OFFSET UNITYSDK_OFFSET(0x197815A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooAutoBattleInLevelPageController___c__DisplayClass100_0_TypeDefinitionIndex = 71092;

	class UIBangBooAutoBattleInLevelPageController___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::Class_2_21B962BB0A8CF0AA* slotData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenBangBooInfo_b__0(::MoleMole::UIABInLevelBangbooInfoWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABInLevelBangbooInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__OPENBANGBOOINFO_B__0_OFFSET))(this, widget);
		}
	};
}

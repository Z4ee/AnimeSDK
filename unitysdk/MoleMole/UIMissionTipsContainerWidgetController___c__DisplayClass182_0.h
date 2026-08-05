#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182E7B10)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__PLAYMISSIONFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x182E7B20)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__PLAYMISSIONFADEOUT_B__1_OFFSET UNITYSDK_OFFSET(0x182E7E20)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__PLAYMISSIONFADEOUT_B__2_OFFSET UNITYSDK_OFFSET(0x182E8000)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__PLAYMISSIONFADEOUT_B__3_OFFSET UNITYSDK_OFFSET(0x182E7F60)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__PLAYMISSIONFADEOUT_B__4_OFFSET UNITYSDK_OFFSET(0x182E81F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass182_0_TypeDefinitionIndex = 91194;

	class UIMissionTipsContainerWidgetController___c__DisplayClass182_0 : public ::System::Object
	{
	public:
		::System::Action* __9__4; // 0x10
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x18
		::System::Action* __9__3; // 0x20
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x28
		::System::Action* doClose; // 0x30
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x38
		::System::Boolean isMain; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMissionFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__PLAYMISSIONFADEOUT_B__0_OFFSET))(this);
		}

		::System::Void _PlayMissionFadeOut_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__PLAYMISSIONFADEOUT_B__1_OFFSET))(this);
		}

		::System::Void _PlayMissionFadeOut_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__PLAYMISSIONFADEOUT_B__3_OFFSET))(this);
		}

		::System::Void _PlayMissionFadeOut_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__PLAYMISSIONFADEOUT_B__2_OFFSET))(this);
		}

		::System::Void _PlayMissionFadeOut_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS182_0__PLAYMISSIONFADEOUT_B__4_OFFSET))(this);
		}
	};
}

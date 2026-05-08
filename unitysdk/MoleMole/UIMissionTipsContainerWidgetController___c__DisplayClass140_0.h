#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__CTOR_OFFSET UNITYSDK_OFFSET(0x145305A0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x145305B0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONFADEOUT_B__1_OFFSET UNITYSDK_OFFSET(0x14530910)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONFADEOUT_B__2_OFFSET UNITYSDK_OFFSET(0x145306C0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONFADEOUT_B__3_OFFSET UNITYSDK_OFFSET(0x14530A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass140_0_TypeDefinitionIndex = 55062;

	class UIMissionTipsContainerWidgetController___c__DisplayClass140_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Action* __9__3; // 0x20
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x28
		::System::Boolean isMain; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMissionFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONFADEOUT_B__0_OFFSET))(this);
		}

		::System::Void _PlayMissionFadeOut_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONFADEOUT_B__2_OFFSET))(this);
		}

		::System::Void _PlayMissionFadeOut_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONFADEOUT_B__1_OFFSET))(this);
		}

		::System::Void _PlayMissionFadeOut_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS140_0__PLAYMISSIONFADEOUT_B__3_OFFSET))(this);
		}
	};
}

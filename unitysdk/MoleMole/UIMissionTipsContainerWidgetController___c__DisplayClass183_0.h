#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS183_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182E8290)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS183_0__PLAYMISSIONWIDGETUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x182E82A0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS183_0__PLAYMISSIONWIDGETUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x182E83B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass183_0_TypeDefinitionIndex = 91218;

	class UIMissionTipsContainerWidgetController___c__DisplayClass183_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x10
		::System::Action* __9__1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS183_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMissionWidgetUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS183_0__PLAYMISSIONWIDGETUPDATE_B__0_OFFSET))(this);
		}

		::System::Void _PlayMissionWidgetUpdate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS183_0__PLAYMISSIONWIDGETUPDATE_B__1_OFFSET))(this);
		}
	};
}

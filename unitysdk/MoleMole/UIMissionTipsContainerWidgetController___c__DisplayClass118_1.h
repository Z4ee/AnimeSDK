#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass118_0; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS118_1__CTOR_OFFSET UNITYSDK_OFFSET(0x174E3C30)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS118_1__PLAYINTERKNOTTIP_B__2_OFFSET UNITYSDK_OFFSET(0x174E3C40)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS118_1__PLAYINTERKNOTTIP_B__3_OFFSET UNITYSDK_OFFSET(0x174E3D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass118_1_TypeDefinitionIndex = 69597;

	class UIMissionTipsContainerWidgetController___c__DisplayClass118_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowWidgetController* oldTips; // 0x10
		::System::Action* __9__3; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass118_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS118_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayInterKnotTip_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS118_1__PLAYINTERKNOTTIP_B__2_OFFSET))(this);
		}

		::System::Void _PlayInterKnotTip_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS118_1__PLAYINTERKNOTTIP_B__3_OFFSET))(this);
		}
	};
}

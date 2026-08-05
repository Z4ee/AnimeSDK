#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass176_0; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS176_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15163AA0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS176_1__PLAYMISSIONSYNC_B__0_OFFSET UNITYSDK_OFFSET(0x15163B00)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS176_1__PLAYMISSIONSYNC_B__2_OFFSET UNITYSDK_OFFSET(0x15163AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass176_1_TypeDefinitionIndex = 91182;

	class UIMissionTipsContainerWidgetController___c__DisplayClass176_1 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass176_0* CS___8__locals1; // 0x18
		::MoleMole::UIMissionTipsRowMultiWidgetController* tmp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS176_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMissionSync_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS176_1__PLAYMISSIONSYNC_B__2_OFFSET))(this);
		}

		::System::Void _PlayMissionSync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS176_1__PLAYMISSIONSYNC_B__0_OFFSET))(this);
		}
	};
}

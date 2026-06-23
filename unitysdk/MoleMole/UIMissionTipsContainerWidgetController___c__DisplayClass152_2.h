#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController___c__DisplayClass152_1; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS152_2__CTOR_OFFSET UNITYSDK_OFFSET(0x152FA780)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS152_2__PLAYMISSIONSYNC_B__1_OFFSET UNITYSDK_OFFSET(0x152FA790)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass152_2_TypeDefinitionIndex = 69627;

	class UIMissionTipsContainerWidgetController___c__DisplayClass152_2 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController___c__DisplayClass152_1* CS___8__locals2; // 0x10
		::System::Single height; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS152_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMissionSync_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS152_2__PLAYMISSIONSYNC_B__1_OFFSET))(this);
		}
	};
}

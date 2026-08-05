#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
namespace MoleMole { class UIBangkovItemInfoWidgetController; }

#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1930FD20)
#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS55_0__REFRESHREWARDINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1930FD30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovItemInfoWidgetController___c__DisplayClass55_0_TypeDefinitionIndex = 56438;

	class UIBangkovItemInfoWidgetController___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovItemInfoWidgetController* __4__this; // 0x10
		::System::Int32 previewId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRewardInfo_b__0(::Class_0_16E4307DCC419505_175* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS55_0__REFRESHREWARDINFO_B__0_OFFSET))(this, ctrl);
		}
	};
}

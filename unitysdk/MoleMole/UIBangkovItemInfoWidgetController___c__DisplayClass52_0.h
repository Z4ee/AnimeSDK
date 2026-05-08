#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovItemInfoWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }

#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4BCC0)
#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS52_0__REFRESHREWARDINFO_B__0_OFFSET UNITYSDK_OFFSET(0x13E4BCD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovItemInfoWidgetController___c__DisplayClass52_0_TypeDefinitionIndex = 77029;

	class UIBangkovItemInfoWidgetController___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovItemInfoWidgetController* __4__this; // 0x10
		::System::Int32 previewId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRewardInfo_b__0(::MoleMole::UIItemIconBtnWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS52_0__REFRESHREWARDINFO_B__0_OFFSET))(this, ctrl);
		}
	};
}

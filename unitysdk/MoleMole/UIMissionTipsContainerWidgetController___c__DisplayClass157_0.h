#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS157_0__CTOR_OFFSET UNITYSDK_OFFSET(0x168D4E60)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS157_0__FORCEFADEOUTRECOMMENDTIP_B__0_OFFSET UNITYSDK_OFFSET(0x168D4E70)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS157_0__FORCEFADEOUTRECOMMENDTIP_B__1_OFFSET UNITYSDK_OFFSET(0x168D4F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass157_0_TypeDefinitionIndex = 91197;

	class UIMissionTipsContainerWidgetController___c__DisplayClass157_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowMultiWidgetController* trackWidget; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS157_0__CTOR_OFFSET))(this);
		}

		::System::Void _ForceFadeoutRecommendTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS157_0__FORCEFADEOUTRECOMMENDTIP_B__0_OFFSET))(this);
		}

		::System::Void _ForceFadeoutRecommendTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS157_0__FORCEFADEOUTRECOMMENDTIP_B__1_OFFSET))(this);
		}
	};
}

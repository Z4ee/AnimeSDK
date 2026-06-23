#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F038F0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_0__FORCEFADEOUTRECOMMENDTIP_B__0_OFFSET UNITYSDK_OFFSET(0x15F03900)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_0__FORCEFADEOUTRECOMMENDTIP_B__1_OFFSET UNITYSDK_OFFSET(0x15F03A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass133_0_TypeDefinitionIndex = 69603;

	class UIMissionTipsContainerWidgetController___c__DisplayClass133_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsRowMultiWidgetController* trackWidget; // 0x10
		::System::Action* __9__1; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_0__CTOR_OFFSET))(this);
		}

		::System::Void _ForceFadeoutRecommendTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_0__FORCEFADEOUTRECOMMENDTIP_B__0_OFFSET))(this);
		}

		::System::Void _ForceFadeoutRecommendTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS133_0__FORCEFADEOUTRECOMMENDTIP_B__1_OFFSET))(this);
		}
	};
}

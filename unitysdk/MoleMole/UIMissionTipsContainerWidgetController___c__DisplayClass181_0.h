#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182E6F90)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_0__PLAYFINISHANIM_B__0_OFFSET UNITYSDK_OFFSET(0x182E76E0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_0__PLAYFINISHANIM_B__1_OFFSET UNITYSDK_OFFSET(0x182E7620)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_0__PLAYFINISHANIM_B__2_OFFSET UNITYSDK_OFFSET(0x182E6FA0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_0__PLAYFINISHANIM_B__6_OFFSET UNITYSDK_OFFSET(0x182E7150)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass181_0_TypeDefinitionIndex = 91198;

	class UIMissionTipsContainerWidgetController___c__DisplayClass181_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x10
		::System::Action* __9__6; // 0x18
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x20
		::System::Int32 newQuest; // 0x28
		::System::Boolean fromResume; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__2(::System::Boolean sound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_0__PLAYFINISHANIM_B__2_OFFSET))(this, sound);
		}

		::System::Void _PlayFinishAnim_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_0__PLAYFINISHANIM_B__6_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_0__PLAYFINISHANIM_B__1_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS181_0__PLAYFINISHANIM_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS139_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCA140)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS139_0__PLAYFINISHANIM_B__0_OFFSET UNITYSDK_OFFSET(0x15DCA410)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS139_0__PLAYFINISHANIM_B__1_OFFSET UNITYSDK_OFFSET(0x15DCA350)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS139_0__PLAYFINISHANIM_B__2_OFFSET UNITYSDK_OFFSET(0x15DCA150)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS139_0__PLAYFINISHANIM_B__5_OFFSET UNITYSDK_OFFSET(0x15DCA260)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass139_0_TypeDefinitionIndex = 55051;

	class UIMissionTipsContainerWidgetController___c__DisplayClass139_0 : public ::System::Object
	{
	public:
		::System::Action* __9__5; // 0x10
		::MoleMole::UIMissionTipsRowMultiWidgetController* widget; // 0x18
		::System::Boolean fromResume; // 0x20
		::System::Int32 newQuest; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS139_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__2(::System::Boolean sound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS139_0__PLAYFINISHANIM_B__2_OFFSET))(this, sound);
		}

		::System::Void _PlayFinishAnim_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS139_0__PLAYFINISHANIM_B__5_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS139_0__PLAYFINISHANIM_B__1_OFFSET))(this);
		}

		::System::Void _PlayFinishAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS139_0__PLAYFINISHANIM_B__0_OFFSET))(this);
		}
	};
}

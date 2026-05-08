#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMiniscapeEntrustBtnWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIMINISCAPEENTRUSTBTNWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC8580)
#define MOLEMOLE_UIMINISCAPEENTRUSTBTNWIDGETCONTROLLER___C__DISPLAYCLASS6_0__PLAYREFRESHANIM_B__0_OFFSET UNITYSDK_OFFSET(0x15DC8590)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeEntrustBtnWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 57882;

	class UIMiniscapeEntrustBtnWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* rootAnim; // 0x10
		::System::Action* onRefreshOutFinish; // 0x18
		::MoleMole::UIMiniscapeEntrustBtnWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTBTNWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRefreshAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTBTNWIDGETCONTROLLER___C__DISPLAYCLASS6_0__PLAYREFRESHANIM_B__0_OFFSET))(this);
		}
	};
}

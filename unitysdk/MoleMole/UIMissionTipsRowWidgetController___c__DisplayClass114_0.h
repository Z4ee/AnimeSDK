#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CD6915EC12D64B9;
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS114_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D5AA10)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS114_0__PLAYCHANGETRACKTIPSFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x15D5AA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass114_0_TypeDefinitionIndex = 39248;

	class UIMissionTipsRowWidgetController___c__DisplayClass114_0 : public ::System::Object
	{
	public:
		::Class_1_2CD6915EC12D64B9* animResetHelper; // 0x10
		::MoleMole::UIMissionTipsRowWidgetController* __4__this; // 0x18
		::UnityEngine::Animation* tipAni; // 0x20
		::System::Action* callback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS114_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayChangeTrackTipsFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS114_0__PLAYCHANGETRACKTIPSFADEOUT_B__0_OFFSET))(this);
		}
	};
}

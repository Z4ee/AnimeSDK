#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CD6915EC12D64B9;
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS145_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC6FB0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS145_0__PLAYCHANGETRACKTIPSFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x19CC6FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass145_0_TypeDefinitionIndex = 75869;

	class UIMissionTipsRowWidgetController___c__DisplayClass145_0 : public ::System::Object
	{
	public:
		::Class_1_2CD6915EC12D64B9* animResetHelper; // 0x10
		::MoleMole::UIMissionTipsRowWidgetController* __4__this; // 0x18
		::System::Action* callback; // 0x20
		::UnityEngine::Animation* tipAni; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS145_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayChangeTrackTipsFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS145_0__PLAYCHANGETRACKTIPSFADEOUT_B__0_OFFSET))(this);
		}
	};
}

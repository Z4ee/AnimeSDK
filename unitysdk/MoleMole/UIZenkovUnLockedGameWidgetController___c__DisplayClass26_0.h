#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x112E38A0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___C__DISPLAYCLASS26_0__SHOWHITRESULT_B__0_OFFSET UNITYSDK_OFFSET(0x112E38B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovUnLockedGameWidgetController___c__DisplayClass26_0_TypeDefinitionIndex = 46267;

	class UIZenkovUnLockedGameWidgetController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action* onAnimFinished; // 0x10
		::System::Int32 remaining; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowHitResult_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___C__DISPLAYCLASS26_0__SHOWHITRESULT_B__0_OFFSET))(this);
		}
	};
}

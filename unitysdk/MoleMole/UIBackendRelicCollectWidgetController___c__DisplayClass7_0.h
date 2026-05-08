#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;

#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13E44A50)
#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__MATCHFUNCCOLLECTED_B__0_OFFSET UNITYSDK_OFFSET(0x13E46100)

namespace MoleMole
{
	inline static constexpr unsigned int UIBackendRelicCollectWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 75969;

	class UIBackendRelicCollectWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Class_1_0D6706375CDAAE8C* arg1; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _MatchFuncCollected_b__0(::Class_1_0D6706375CDAAE8C* relic)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__MATCHFUNCCOLLECTED_B__0_OFFSET))(this, relic);
		}
	};
}

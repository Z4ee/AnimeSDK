#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;

#define MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14B532F0)
#define MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__MATCHFUNCCOLLECTED_B__0_OFFSET UNITYSDK_OFFSET(0x14B53300)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowWeaponCollectWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 54733;

	class UIHollowWeaponCollectWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_1_0D6706375CDAAE8C* arg1; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _MatchFuncCollected_b__0(::Class_1_0D6706375CDAAE8C* relic)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__MATCHFUNCCOLLECTED_B__0_OFFSET))(this, relic);
		}
	};
}

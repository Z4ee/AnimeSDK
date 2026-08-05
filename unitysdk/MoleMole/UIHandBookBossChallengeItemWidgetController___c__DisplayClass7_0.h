#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIHANDBOOKBOSSCHALLENGEITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3242C0)
#define MOLEMOLE_UIHANDBOOKBOSSCHALLENGEITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__ONJUMPCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x1A3242D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookBossChallengeItemWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 61205;

	class UIHandBookBossChallengeItemWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Int32 zoneID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSCHALLENGEITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnJumpClick_b__0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSCHALLENGEITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__ONJUMPCLICK_B__0_OFFSET))(this, success);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x136B2FA0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS38_0__POSTSCREENEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x136B62A0)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c__DisplayClass38_0_TypeDefinitionIndex = 57113;

	class HackControllableSubsystem___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Action* endEffectAction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _PostScreenEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__DISPLAYCLASS38_0__POSTSCREENEFFECT_B__0_OFFSET))(this);
		}
	};
}

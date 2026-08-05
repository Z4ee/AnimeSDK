#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HackerGameBaseDamage.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"

#define MOLEMOLE_HACKERGAMESTUNDAMAGE_APPLY_OFFSET UNITYSDK_OFFSET(0x136B9DD0)
#define MOLEMOLE_HACKERGAMESTUNDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x136B9F00)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameStunDamage_TypeDefinitionIndex = 57473;

	class HackerGameStunDamage : public ::MoleMole::HackerGameBaseDamage
	{
	public:
		::System::Single Duration; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMESTUNDAMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::MoleMole::HackerGameDamageData damageData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackerGameDamageData))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMESTUNDAMAGE_APPLY_OFFSET))(this, damageData);
		}
	};
}

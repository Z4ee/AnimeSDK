#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShowInLevelDamageTextType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_SHOWINLEVELDAMAGETEXTSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1703F8E0)

namespace MoleMole
{
	inline static constexpr unsigned int ShowInLevelDamageTextSettingContext_TypeDefinitionIndex = 65618;

	class ShowInLevelDamageTextSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::ShowInLevelDamageTextType DamageTextType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOWINLEVELDAMAGETEXTSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

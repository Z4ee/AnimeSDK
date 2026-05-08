#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_HACKERGAMEBASEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D4B120)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameBaseDamage_TypeDefinitionIndex = 74546;

	class HackerGameBaseDamage : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEBASEDAMAGE__CTOR_OFFSET))(this);
		}
	};
}

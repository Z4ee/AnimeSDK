#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGSPECIALDAMAGETEXT_ISVALID_OFFSET UNITYSDK_OFFSET(0x70AEE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigSpecialDamageText_TypeDefinitionIndex = 42545;

	struct alignas(8) ConfigSpecialDamageText
	{
		::System::String* Text; // 0x10
		::MoleMole::Config::DamageElementType ElementType; // 0x18

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSPECIALDAMAGETEXT_ISVALID_OFFSET))(this);
		}
	};
}

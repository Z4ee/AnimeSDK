#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x8A5DC0)
#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8A5E20)

namespace MoleMole
{
	inline static constexpr unsigned int TeamPropertyEnumComparer_TypeDefinitionIndex = 74518;

	struct alignas(1) TeamPropertyEnumComparer
	{
		::System::Boolean Equals(::MoleMole::Config::TeamProperty x, ::MoleMole::Config::TeamProperty y)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::TeamProperty, ::MoleMole::Config::TeamProperty))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::MoleMole::Config::TeamProperty obj)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::TeamProperty))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}

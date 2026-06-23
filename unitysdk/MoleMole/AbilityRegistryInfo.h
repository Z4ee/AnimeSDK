#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_ABILITYREGISTRYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x162785A0)

namespace MoleMole
{
	inline static constexpr unsigned int AbilityRegistryInfo_TypeDefinitionIndex = 61771;

	class AbilityRegistryInfo : public ::System::Object
	{
	public:
		::System::String* registryName; // 0x10
		::System::Int32 indexOfList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABILITYREGISTRYINFO__CTOR_OFFSET))(this);
		}
	};
}

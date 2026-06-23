#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_DEVICESETTINGPREDICATEBASE_PREDICATE_OFFSET UNITYSDK_OFFSET(0x190D4B90)
#define MOLEMOLE_DEVICESETTINGPREDICATEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x190D4BE0)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingPredicateBase_TypeDefinitionIndex = 80416;

	class DeviceSettingPredicateBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGPREDICATEBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate(::System::String*& deviceProfileKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGPREDICATEBASE_PREDICATE_OFFSET))(this, deviceProfileKey);
		}
	};
}

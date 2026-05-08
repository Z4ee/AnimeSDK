#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DeviceSettingPredicateBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DEVICESETTINGWHITELISTPREDICATEBASE_GETPREDICATESTRING_OFFSET UNITYSDK_OFFSET(0x14265CA0)
#define MOLEMOLE_DEVICESETTINGWHITELISTPREDICATEBASE_PREDICATE_OFFSET UNITYSDK_OFFSET(0x14265A40)
#define MOLEMOLE_DEVICESETTINGWHITELISTPREDICATEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x14265CF0)
#define MOLEMOLE_DEVICESETTINGWHITELISTPREDICATEBASE___BASE_PREDICATE_OFFSET UNITYSDK_OFFSET(0x14265D70)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingWhiteListPredicateBase_TypeDefinitionIndex = 74216;

	class DeviceSettingWhiteListPredicateBase : public ::MoleMole::DeviceSettingPredicateBase
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* RegexKeyList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGWHITELISTPREDICATEBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate(::System::String*& deviceProfileKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGWHITELISTPREDICATEBASE_PREDICATE_OFFSET))(this, deviceProfileKey);
		}

		::System::String* GetPredicateString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGWHITELISTPREDICATEBASE_GETPREDICATESTRING_OFFSET))(this);
		}

		::System::Boolean __base_Predicate(::System::String*& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGWHITELISTPREDICATEBASE___BASE_PREDICATE_OFFSET))(this, P0);
		}
	};
}

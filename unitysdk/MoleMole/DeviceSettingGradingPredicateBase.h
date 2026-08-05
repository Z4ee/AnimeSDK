#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DeviceSettingPredicateBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DEVICESETTINGGRADINGPREDICATEBASE_GETPREDICATEFLOAT_OFFSET UNITYSDK_OFFSET(0x1A94ED10)
#define MOLEMOLE_DEVICESETTINGGRADINGPREDICATEBASE_PREDICATE_OFFSET UNITYSDK_OFFSET(0x1A94EB90)
#define MOLEMOLE_DEVICESETTINGGRADINGPREDICATEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94ED50)
#define MOLEMOLE_DEVICESETTINGGRADINGPREDICATEBASE___BASE_PREDICATE_OFFSET UNITYSDK_OFFSET(0x1A94EDD0)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingGradingPredicateBase_TypeDefinitionIndex = 75798;

	class DeviceSettingGradingPredicateBase : public ::MoleMole::DeviceSettingPredicateBase
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* GradingKeyList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGGRADINGPREDICATEBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean Predicate(::System::String*& deviceProfileKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGGRADINGPREDICATEBASE_PREDICATE_OFFSET))(this, deviceProfileKey);
		}

		::System::Int32 GetPredicateFloat()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGGRADINGPREDICATEBASE_GETPREDICATEFLOAT_OFFSET))(this);
		}

		::System::Boolean __base_Predicate(::System::String*& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGGRADINGPREDICATEBASE___BASE_PREDICATE_OFFSET))(this, P0);
		}
	};
}

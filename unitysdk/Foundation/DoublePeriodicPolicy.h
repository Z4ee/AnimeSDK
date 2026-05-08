#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_DOUBLEPERIODICPOLICY_FOUNDATION_IPERIODICPOLICY_SYSTEM_DOUBLE__INVOKE_OFFSET UNITYSDK_OFFSET(0x1C0A30C0)
#define FOUNDATION_DOUBLEPERIODICPOLICY_FOUNDATION_IPERIODICPOLICY_SYSTEM_DOUBLE__ISVALIDPERIOD_OFFSET UNITYSDK_OFFSET(0x1C0A3240)
#define FOUNDATION_DOUBLEPERIODICPOLICY_FOUNDATION_IPLUSFUNC_SYSTEM_DOUBLE__PLUS_OFFSET UNITYSDK_OFFSET(0x1C0A3250)
#define FOUNDATION_DOUBLEPERIODICPOLICY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0A3260)
#define FOUNDATION_DOUBLEPERIODICPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A30B0)

namespace Foundation
{
	inline static constexpr unsigned int DoublePeriodicPolicy_TypeDefinitionIndex = 8890;

	class DoublePeriodicPolicy : public ::System::Object
	{
	public:
		static ::Foundation::DoublePeriodicPolicy** StaticGet_Instance()
		{
			return (::Foundation::DoublePeriodicPolicy**)Il2CppClass::FromTypeDefinitionIndex(DoublePeriodicPolicy_TypeDefinitionIndex)->GetStaticField(0x7EE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOUBLEPERIODICPOLICY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DOUBLEPERIODICPOLICY__CCTOR_OFFSET))();
		}

		::System::Double Foundation_IPeriodicPolicy_System_Double__Invoke(::System::Double& value, ::System::Double& period, ::System::Double& minValue)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double&, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + FOUNDATION_DOUBLEPERIODICPOLICY_FOUNDATION_IPERIODICPOLICY_SYSTEM_DOUBLE__INVOKE_OFFSET))(this, value, period, minValue);
		}

		::System::Boolean Foundation_IPeriodicPolicy_System_Double__IsValidPeriod(::System::Double& period)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double&))((::PBYTE)hIl2Cpp + FOUNDATION_DOUBLEPERIODICPOLICY_FOUNDATION_IPERIODICPOLICY_SYSTEM_DOUBLE__ISVALIDPERIOD_OFFSET))(this, period);
		}

		::System::Double Foundation_IPlusFunc_System_Double__Plus(::System::Double left, ::System::Double right)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_DOUBLEPERIODICPOLICY_FOUNDATION_IPLUSFUNC_SYSTEM_DOUBLE__PLUS_OFFSET))(this, left, right);
		}
	};
}

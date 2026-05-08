#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_FLOATPERIODICPOLICY_FOUNDATION_IPERIODICPOLICY_SYSTEM_SINGLE__INVOKE_OFFSET UNITYSDK_OFFSET(0x1BFE3210)
#define FOUNDATION_FLOATPERIODICPOLICY_FOUNDATION_IPERIODICPOLICY_SYSTEM_SINGLE__ISVALIDPERIOD_OFFSET UNITYSDK_OFFSET(0x1BFE33A0)
#define FOUNDATION_FLOATPERIODICPOLICY_FOUNDATION_IPLUSFUNC_SYSTEM_SINGLE__PLUS_OFFSET UNITYSDK_OFFSET(0x1BFE33B0)
#define FOUNDATION_FLOATPERIODICPOLICY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFE33C0)
#define FOUNDATION_FLOATPERIODICPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE3200)

namespace Foundation
{
	inline static constexpr unsigned int FloatPeriodicPolicy_TypeDefinitionIndex = 8835;

	class FloatPeriodicPolicy : public ::System::Object
	{
	public:
		static ::Foundation::FloatPeriodicPolicy** StaticGet_Instance()
		{
			return (::Foundation::FloatPeriodicPolicy**)Il2CppClass::FromTypeDefinitionIndex(FloatPeriodicPolicy_TypeDefinitionIndex)->GetStaticField(0x7F30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FLOATPERIODICPOLICY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FLOATPERIODICPOLICY__CCTOR_OFFSET))();
		}

		::System::Single Foundation_IPeriodicPolicy_System_Single__Invoke(::System::Single& value, ::System::Single& period, ::System::Single& minValue)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_FLOATPERIODICPOLICY_FOUNDATION_IPERIODICPOLICY_SYSTEM_SINGLE__INVOKE_OFFSET))(this, value, period, minValue);
		}

		::System::Boolean Foundation_IPeriodicPolicy_System_Single__IsValidPeriod(::System::Single& period)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_FLOATPERIODICPOLICY_FOUNDATION_IPERIODICPOLICY_SYSTEM_SINGLE__ISVALIDPERIOD_OFFSET))(this, period);
		}

		::System::Single Foundation_IPlusFunc_System_Single__Plus(::System::Single left, ::System::Single right)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FLOATPERIODICPOLICY_FOUNDATION_IPLUSFUNC_SYSTEM_SINGLE__PLUS_OFFSET))(this, left, right);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DE82CB74D2B71B9D_RuntimeDisableBudgetReason.h"
#include "unitysdk/RPG/Client/FrameTimeBudgetType.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DE82CB74D2B71B9D_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xBA41AE0)
#define CLASS_1_DE82CB74D2B71B9D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBA41A00)
#define CLASS_1_DE82CB74D2B71B9D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBA41A70)
#define CLASS_1_DE82CB74D2B71B9D_METHOD_1_4D08D747061A6637_OFFSET UNITYSDK_OFFSET(0xBA41B50)
#define CLASS_1_DE82CB74D2B71B9D__CTOR_OFFSET UNITYSDK_OFFSET(0xBA41BE0)

inline static constexpr unsigned int Class_1_DE82CB74D2B71B9D_TypeDefinitionIndex = 60276;

class Class_1_DE82CB74D2B71B9D : public ::System::Object
{
public:
	// static const ::RPG::Client::FrameTimeBudgetType IJNOFNELMLE; // 0x0
	// static const ::System::Boolean CFHJINHPDJA; // 0x0
	::RPG::Client::ReasonBool_1<::Class_1_DE82CB74D2B71B9D_RuntimeDisableBudgetReason> JFNBENKMKPO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE82CB74D2B71B9D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE82CB74D2B71B9D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE82CB74D2B71B9D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE82CB74D2B71B9D_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_4D08D747061A6637(::System::Boolean a1, ::Class_1_DE82CB74D2B71B9D_RuntimeDisableBudgetReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_DE82CB74D2B71B9D_RuntimeDisableBudgetReason))((::PBYTE)hIl2Cpp + CLASS_1_DE82CB74D2B71B9D_METHOD_1_4D08D747061A6637_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1506;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_E53D03144907E50F_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB2DA9A0)
#define CLASS_1_E53D03144907E50F_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0xB2DA710)
#define CLASS_1_E53D03144907E50F_METHOD_1_8D0432BB13E06AE7_OFFSET UNITYSDK_OFFSET(0xB2DA780)
#define CLASS_1_E53D03144907E50F_METHOD_1_A497B3ECFD0EA55C_OFFSET UNITYSDK_OFFSET(0xB2DA680)
#define CLASS_1_E53D03144907E50F__CTOR_OFFSET UNITYSDK_OFFSET(0xB2DA620)

inline static constexpr unsigned int Class_1_E53D03144907E50F_TypeDefinitionIndex = 79710;

class Class_1_E53D03144907E50F : public ::System::Object
{
public:
	::System::Action* EGMGFMKIOHL; // 0x10
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_1506*>* CGHLCFIBABI; // 0x18
	::System::Int32 BPCHPFGKCHF; // 0x20
	::System::Boolean DMBFJAEAGPL; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E53D03144907E50F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A497B3ECFD0EA55C(::Class_0_16E4307DCC419505_1506* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1506*))((::PBYTE)hIl2Cpp + CLASS_1_E53D03144907E50F_METHOD_1_A497B3ECFD0EA55C_OFFSET))(this, a1);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E53D03144907E50F_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E53D03144907E50F_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_8D0432BB13E06AE7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E53D03144907E50F_METHOD_1_8D0432BB13E06AE7_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_DCB7F8B839F0C44B.h"

class Class_0_16E4307DCC419505_120;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_4_2084535B5371B4DA_METHOD_4_432603AE26FBB41E_1_OFFSET UNITYSDK_OFFSET(0x1C563F90)
#define CLASS_4_2084535B5371B4DA_METHOD_4_432603AE26FBB41E_OFFSET UNITYSDK_OFFSET(0x1C563E10)
#define CLASS_4_2084535B5371B4DA_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1C563DD0)
#define CLASS_4_2084535B5371B4DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C563B00)

inline static constexpr unsigned int Class_4_2084535B5371B4DA_TypeDefinitionIndex = 41760;

class Class_4_2084535B5371B4DA : public ::Class_3_DCB7F8B839F0C44B
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* OKFHNMEFELI; // 0x18
	::System::Int32 COEMCOBPMKD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2084535B5371B4DA__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2084535B5371B4DA_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_4_432603AE26FBB41E(::Class_0_16E4307DCC419505_120* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_120*))((::PBYTE)hIl2Cpp + CLASS_4_2084535B5371B4DA_METHOD_4_432603AE26FBB41E_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_432603AE26FBB41E_1(::Class_0_16E4307DCC419505_120* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_120*))((::PBYTE)hIl2Cpp + CLASS_4_2084535B5371B4DA_METHOD_4_432603AE26FBB41E_1_OFFSET))(this, a1);
	}
};

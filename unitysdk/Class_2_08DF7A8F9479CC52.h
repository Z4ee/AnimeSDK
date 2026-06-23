#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_365.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_487.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_08DF7A8F9479CC52_METHOD_2_D6D66F115F444A34_OFFSET UNITYSDK_OFFSET(0x14D66F90)
#define CLASS_2_08DF7A8F9479CC52__CTOR_OFFSET UNITYSDK_OFFSET(0x14D66CA0)

inline static constexpr unsigned int Class_2_08DF7A8F9479CC52_TypeDefinitionIndex = 15586;

class Class_2_08DF7A8F9479CC52 : public ::Class_1_5DA2E7556103D5A3_365
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_0; // 0x78

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_487 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_487, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_08DF7A8F9479CC52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D6D66F115F444A34(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_08DF7A8F9479CC52_METHOD_2_D6D66F115F444A34_OFFSET))(this, a1, a2);
	}
};

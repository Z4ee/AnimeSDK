#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_18.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_90.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_1EF6707C62AC94B6_METHOD_2_2CAAA58EB429FD63_OFFSET UNITYSDK_OFFSET(0x169628D0)
#define CLASS_2_1EF6707C62AC94B6__CTOR_OFFSET UNITYSDK_OFFSET(0x169627C0)

inline static constexpr unsigned int Class_2_1EF6707C62AC94B6_TypeDefinitionIndex = 15046;

class Class_2_1EF6707C62AC94B6 : public ::Class_1_5DA2E7556103D5A3_18
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x88

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_90 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_90, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_1EF6707C62AC94B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_2CAAA58EB429FD63()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EF6707C62AC94B6_METHOD_2_2CAAA58EB429FD63_OFFSET))(this);
	}
};

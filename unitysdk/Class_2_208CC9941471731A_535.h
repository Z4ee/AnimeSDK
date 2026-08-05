#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_131.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_547.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_208CC9941471731A_535_METHOD_2_A7B487E1F369B333_OFFSET UNITYSDK_OFFSET(0x1A18E030)
#define CLASS_2_208CC9941471731A_535__CTOR_OFFSET UNITYSDK_OFFSET(0x1A18E020)

inline static constexpr unsigned int Class_2_208CC9941471731A_535_TypeDefinitionIndex = 11612;

class Class_2_208CC9941471731A_535 : public ::Class_1_5DA2E7556103D5A3_131
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_547 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_547, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_535__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_A7B487E1F369B333()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_535_METHOD_2_A7B487E1F369B333_OFFSET))(this);
	}
};

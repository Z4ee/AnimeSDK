#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_308.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_29.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_12C7427695D73C29_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x1474A540)
#define CLASS_2_12C7427695D73C29__CTOR_OFFSET UNITYSDK_OFFSET(0x1474A430)

inline static constexpr unsigned int Class_2_12C7427695D73C29_TypeDefinitionIndex = 17329;

class Class_2_12C7427695D73C29 : public ::Class_1_5DA2E7556103D5A3_308
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_29 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_29, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_12C7427695D73C29__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12C7427695D73C29_METHOD_2_038349821F206DD5_OFFSET))(this);
	}
};

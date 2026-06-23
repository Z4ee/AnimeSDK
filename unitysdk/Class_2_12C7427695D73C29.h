#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_167.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_297.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_12C7427695D73C29_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x184B9E20)
#define CLASS_2_12C7427695D73C29__CTOR_OFFSET UNITYSDK_OFFSET(0x184B9D10)

inline static constexpr unsigned int Class_2_12C7427695D73C29_TypeDefinitionIndex = 12399;

class Class_2_12C7427695D73C29 : public ::Class_1_5DA2E7556103D5A3_167
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_297 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_297, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_12C7427695D73C29__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12C7427695D73C29_METHOD_2_038349821F206DD5_OFFSET))(this);
	}
};

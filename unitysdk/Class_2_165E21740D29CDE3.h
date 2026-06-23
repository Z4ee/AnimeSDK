#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_322.h"
#include "unitysdk/Struct_2_53EC6FFE9325B737_29.h"

class Class_0_16E4307DCC419505_7;
class Class_2_165E21740D29CDE3_Class_1_593B89773C2BA19D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_165E21740D29CDE3__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAD870)

inline static constexpr unsigned int Class_2_165E21740D29CDE3_TypeDefinitionIndex = 14259;

class Class_2_165E21740D29CDE3 : public ::Class_1_5DA2E7556103D5A3_322
{
public:
	::System::Collections::Generic::List_1<::Class_2_165E21740D29CDE3_Class_1_593B89773C2BA19D*>* Field_2_0; // 0x70

	::System::Void _ctor(::Struct_2_53EC6FFE9325B737_29 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_53EC6FFE9325B737_29, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_165E21740D29CDE3__CTOR_OFFSET))(this, a1, a2);
	}
};

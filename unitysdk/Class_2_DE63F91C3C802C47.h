#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_340.h"
#include "unitysdk/Class_2_DE63F91C3C802C47_Struct_2_03315CF1422390A1.h"
#include "unitysdk/Struct_2_53EC6FFE9325B737_25.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DE63F91C3C802C47_METHOD_2_F2686F98EA4891DC_OFFSET UNITYSDK_OFFSET(0x1AB1B9A0)
#define CLASS_2_DE63F91C3C802C47__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB1B990)

inline static constexpr unsigned int Class_2_DE63F91C3C802C47_TypeDefinitionIndex = 14679;

class Class_2_DE63F91C3C802C47 : public ::Class_1_5DA2E7556103D5A3_340
{
public:
	::System::Collections::Generic::List_1<::Class_2_DE63F91C3C802C47_Struct_2_03315CF1422390A1>* Field_2_0; // 0x88

	::System::Void _ctor(::Struct_2_53EC6FFE9325B737_25 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_53EC6FFE9325B737_25, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_DE63F91C3C802C47__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_DE63F91C3C802C47_Struct_2_03315CF1422390A1>* Method_2_F2686F98EA4891DC()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_DE63F91C3C802C47_Struct_2_03315CF1422390A1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE63F91C3C802C47_METHOD_2_F2686F98EA4891DC_OFFSET))(this);
	}
};

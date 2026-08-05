#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_258.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_368.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C7E76916F561CEB8_METHOD_2_4E39DBC77E3E0991_OFFSET UNITYSDK_OFFSET(0x1B380CD0)
#define CLASS_2_C7E76916F561CEB8__CTOR_OFFSET UNITYSDK_OFFSET(0x1B380CC0)

inline static constexpr unsigned int Class_2_C7E76916F561CEB8_TypeDefinitionIndex = 16290;

class Class_2_C7E76916F561CEB8 : public ::Class_1_5DA2E7556103D5A3_258
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x78

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_368 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_368, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_C7E76916F561CEB8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_4E39DBC77E3E0991()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7E76916F561CEB8_METHOD_2_4E39DBC77E3E0991_OFFSET))(this);
	}
};

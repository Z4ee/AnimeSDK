#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_287.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_225.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C7E76916F561CEB8_METHOD_2_4E39DBC77E3E0991_OFFSET UNITYSDK_OFFSET(0x1474F3D0)
#define CLASS_2_C7E76916F561CEB8__CTOR_OFFSET UNITYSDK_OFFSET(0x1474F3C0)

inline static constexpr unsigned int Class_2_C7E76916F561CEB8_TypeDefinitionIndex = 15969;

class Class_2_C7E76916F561CEB8 : public ::Class_1_5DA2E7556103D5A3_287
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x78

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_225 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_225, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_C7E76916F561CEB8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_4E39DBC77E3E0991()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7E76916F561CEB8_METHOD_2_4E39DBC77E3E0991_OFFSET))(this);
	}
};

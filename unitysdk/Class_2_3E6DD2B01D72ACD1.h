#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_86.h"
#include "unitysdk/Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_453.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3E6DD2B01D72ACD1_METHOD_2_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x13312780)
#define CLASS_2_3E6DD2B01D72ACD1_METHOD_2_E90E34E126AFD16F_OFFSET UNITYSDK_OFFSET(0x13312770)
#define CLASS_2_3E6DD2B01D72ACD1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13312210)
#define CLASS_2_3E6DD2B01D72ACD1__CTOR_OFFSET UNITYSDK_OFFSET(0x13311FE0)

inline static constexpr unsigned int Class_2_3E6DD2B01D72ACD1_TypeDefinitionIndex = 13208;

class Class_2_3E6DD2B01D72ACD1 : public ::Class_1_EBCA2A4357C4C8BF_86
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x48
	::System::String* Field_2_4; // 0x50
	::System::Char Field_2_3; // 0x58
	::Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65 Field_2_2; // 0x5C

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_453 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_453, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_3E6DD2B01D72ACD1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E6DD2B01D72ACD1_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_E90E34E126AFD16F(::Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65))((::PBYTE)hIl2Cpp + CLASS_2_3E6DD2B01D72ACD1_METHOD_2_E90E34E126AFD16F_OFFSET))(this, a1);
	}

	::Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65 Method_2_40C5968D970A15A2()
	{
		return ((::Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E6DD2B01D72ACD1_METHOD_2_40C5968D970A15A2_OFFSET))(this);
	}
};

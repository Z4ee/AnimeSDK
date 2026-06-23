#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_163.h"
#include "unitysdk/Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_286.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3E6DD2B01D72ACD1_METHOD_2_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x19E734D0)
#define CLASS_2_3E6DD2B01D72ACD1_METHOD_2_E90E34E126AFD16F_OFFSET UNITYSDK_OFFSET(0x19E734E0)
#define CLASS_2_3E6DD2B01D72ACD1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19E72F70)
#define CLASS_2_3E6DD2B01D72ACD1__CTOR_OFFSET UNITYSDK_OFFSET(0x19E72D40)

inline static constexpr unsigned int Class_2_3E6DD2B01D72ACD1_TypeDefinitionIndex = 14515;

class Class_2_3E6DD2B01D72ACD1 : public ::Class_1_EBCA2A4357C4C8BF_163
{
public:
	::System::String* Field_2_4; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x50
	::System::Char Field_2_3; // 0x58
	::Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65 Field_2_2; // 0x5C

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_286 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_286, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_3E6DD2B01D72ACD1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E6DD2B01D72ACD1_TOSTRING_OFFSET))(this);
	}

	::Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65 Method_2_40C5968D970A15A2()
	{
		return ((::Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E6DD2B01D72ACD1_METHOD_2_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Void Method_2_E90E34E126AFD16F(::Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3E6DD2B01D72ACD1_Enum_3_42680EF0330DCE65))((::PBYTE)hIl2Cpp + CLASS_2_3E6DD2B01D72ACD1_METHOD_2_E90E34E126AFD16F_OFFSET))(this, a1);
	}
};

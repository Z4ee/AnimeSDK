#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_904;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_4DB3461BB7817E68_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16A0FCE0)
#define CLASS_1_4DB3461BB7817E68_METHOD_1_B1BFE4E4C6C18445_OFFSET UNITYSDK_OFFSET(0x16A0FD50)
#define CLASS_1_4DB3461BB7817E68__CTOR_OFFSET UNITYSDK_OFFSET(0x16A102F0)

inline static constexpr unsigned int Class_1_4DB3461BB7817E68_TypeDefinitionIndex = 70011;

class Class_1_4DB3461BB7817E68 : public ::System::Object
{
public:
	::System::Text::RegularExpressions::Regex* Field_1_0; // 0x10
	::System::Text::RegularExpressions::Regex* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DB3461BB7817E68__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DB3461BB7817E68_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_B1BFE4E4C6C18445(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_904* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_904*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_4DB3461BB7817E68_METHOD_1_B1BFE4E4C6C18445_OFFSET))(this, a1, a2, a3, a4);
	}
};

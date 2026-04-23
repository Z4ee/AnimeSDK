#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextReader.h"

namespace System { class String; }

#define CLASS_3_C89B3D4EA4C40191_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1819C0B0)
#define CLASS_3_C89B3D4EA4C40191_PEEK_OFFSET UNITYSDK_OFFSET(0x1819C0C0)
#define CLASS_3_C89B3D4EA4C40191_READ_OFFSET UNITYSDK_OFFSET(0x1819C120)
#define CLASS_3_C89B3D4EA4C40191__CTOR_OFFSET UNITYSDK_OFFSET(0x1819C090)

inline static constexpr unsigned int Class_3_C89B3D4EA4C40191_TypeDefinitionIndex = 23571;

class Class_3_C89B3D4EA4C40191 : public ::System::IO::TextReader
{
public:
	::System::String* Field_3_0; // 0x18
	::System::Int32 Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C89B3D4EA4C40191__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_C89B3D4EA4C40191_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Int32 Peek()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C89B3D4EA4C40191_PEEK_OFFSET))(this);
	}

	::System::Int32 Read()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C89B3D4EA4C40191_READ_OFFSET))(this);
	}
};

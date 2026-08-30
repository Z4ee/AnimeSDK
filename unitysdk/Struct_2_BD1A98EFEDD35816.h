#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_BD1A98EFEDD35816_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x852B0)
#define STRUCT_2_BD1A98EFEDD35816_EQUALS_OFFSET UNITYSDK_OFFSET(0x851D0)
#define STRUCT_2_BD1A98EFEDD35816_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x852C0)
#define STRUCT_2_BD1A98EFEDD35816_METHOD_2_0C1B215949AF2451_1_OFFSET UNITYSDK_OFFSET(0xB9C7CC0)
#define STRUCT_2_BD1A98EFEDD35816_METHOD_2_0C1B215949AF2451_OFFSET UNITYSDK_OFFSET(0xB9C7B80)
#define STRUCT_2_BD1A98EFEDD35816_TOSTRING_OFFSET UNITYSDK_OFFSET(0x85410)
#define STRUCT_2_BD1A98EFEDD35816__CTOR_OFFSET UNITYSDK_OFFSET(0x85190)

inline static constexpr unsigned int Struct_2_BD1A98EFEDD35816_TypeDefinitionIndex = 73757;

struct alignas(8) Struct_2_BD1A98EFEDD35816
{
	::System::UInt32 FJDOOKALCBI; // 0x10
	::System::String* LFNJPJFJMOH; // 0x18
	::System::String* JFGKMOEEMBL; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_BD1A98EFEDD35816__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Equals(::Struct_2_BD1A98EFEDD35816 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + STRUCT_2_BD1A98EFEDD35816_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_BD1A98EFEDD35816_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BD1A98EFEDD35816_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_0C1B215949AF2451(::Struct_2_BD1A98EFEDD35816 a1, ::Struct_2_BD1A98EFEDD35816 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BD1A98EFEDD35816, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + STRUCT_2_BD1A98EFEDD35816_METHOD_2_0C1B215949AF2451_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_0C1B215949AF2451_1(::Struct_2_BD1A98EFEDD35816 a1, ::Struct_2_BD1A98EFEDD35816 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BD1A98EFEDD35816, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + STRUCT_2_BD1A98EFEDD35816_METHOD_2_0C1B215949AF2451_1_OFFSET))(a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BD1A98EFEDD35816_TOSTRING_OFFSET))(this);
	}
};

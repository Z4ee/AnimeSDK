#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_6655EE61601B0127_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x82DDC0)
#define STRUCT_2_6655EE61601B0127_EQUALS_OFFSET UNITYSDK_OFFSET(0x82DD00)
#define STRUCT_2_6655EE61601B0127_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x82DDD0)
#define STRUCT_2_6655EE61601B0127_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x82DF30)
#define STRUCT_2_6655EE61601B0127_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x82DEC0)
#define STRUCT_2_6655EE61601B0127_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x82DE60)
#define STRUCT_2_6655EE61601B0127_TOSTRING_OFFSET UNITYSDK_OFFSET(0x82DDE0)
#define STRUCT_2_6655EE61601B0127__CTOR_OFFSET UNITYSDK_OFFSET(0x82DCC0)

inline static constexpr unsigned int Struct_2_6655EE61601B0127_TypeDefinitionIndex = 48489;

struct alignas(8) Struct_2_6655EE61601B0127
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_6655EE61601B0127__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_6655EE61601B0127 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6655EE61601B0127))((::PBYTE)hIl2Cpp + STRUCT_2_6655EE61601B0127_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_6655EE61601B0127_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6655EE61601B0127_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6655EE61601B0127_TOSTRING_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6655EE61601B0127_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_6655EE61601B0127_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6655EE61601B0127_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};

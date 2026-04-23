#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define STRUCT_2_B9E6DC87D4879FCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22CD900)
#define STRUCT_2_B9E6DC87D4879FCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x22CD840)
#define STRUCT_2_B9E6DC87D4879FCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22CD910)
#define STRUCT_2_B9E6DC87D4879FCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22CD830)
#define STRUCT_2_B9E6DC87D4879FCD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22CD810)
#define STRUCT_2_B9E6DC87D4879FCD__CTOR_2_OFFSET UNITYSDK_OFFSET(0x22CD820)
#define STRUCT_2_B9E6DC87D4879FCD__CTOR_OFFSET UNITYSDK_OFFSET(0x22CD7F0)
#define STRUCT_2_B9E6DC87D4879FCD___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x22CDA90)
#define STRUCT_2_B9E6DC87D4879FCD___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22CDAE0)
#define STRUCT_2_B9E6DC87D4879FCD___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22CDA30)

inline static constexpr unsigned int Struct_2_B9E6DC87D4879FCD_TypeDefinitionIndex = 39840;

struct alignas(8) Struct_2_B9E6DC87D4879FCD
{
	::System::Type* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + STRUCT_2_B9E6DC87D4879FCD__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_B9E6DC87D4879FCD__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::System::Type* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_B9E6DC87D4879FCD__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B9E6DC87D4879FCD_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_B9E6DC87D4879FCD a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B9E6DC87D4879FCD))((::PBYTE)hIl2Cpp + STRUCT_2_B9E6DC87D4879FCD_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_B9E6DC87D4879FCD_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B9E6DC87D4879FCD_GETHASHCODE_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B9E6DC87D4879FCD___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_B9E6DC87D4879FCD___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B9E6DC87D4879FCD___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define STRUCT_2_B9E6DC87D4879FCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C52E40)
#define STRUCT_2_B9E6DC87D4879FCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C52D80)
#define STRUCT_2_B9E6DC87D4879FCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C52E50)
#define STRUCT_2_B9E6DC87D4879FCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C52D70)
#define STRUCT_2_B9E6DC87D4879FCD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C52D60)
#define STRUCT_2_B9E6DC87D4879FCD__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2F76A80)
#define STRUCT_2_B9E6DC87D4879FCD__CTOR_OFFSET UNITYSDK_OFFSET(0x3C52D40)

inline static constexpr unsigned int Struct_2_B9E6DC87D4879FCD_TypeDefinitionIndex = 44282;

struct alignas(8) Struct_2_B9E6DC87D4879FCD
{
	::System::Type* BBJDHCHNAKN; // 0x10
	::System::String* MBCACNKDMFG; // 0x18
	::System::Boolean AKCBGCGDPPB; // 0x20

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
};

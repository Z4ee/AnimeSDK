#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_92F7FAA765B365C9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x73F3D0)
#define STRUCT_2_92F7FAA765B365C9_EQUALS_OFFSET UNITYSDK_OFFSET(0x73F3C0)
#define STRUCT_2_92F7FAA765B365C9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x73F470)
#define STRUCT_2_92F7FAA765B365C9_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x11E56580)
#define STRUCT_2_92F7FAA765B365C9_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x73F5B0)
#define STRUCT_2_92F7FAA765B365C9_METHOD_2_724E778EF39A8746_OFFSET UNITYSDK_OFFSET(0x11E56600)
#define STRUCT_2_92F7FAA765B365C9_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x73F550)
#define STRUCT_2_92F7FAA765B365C9_METHOD_2_B8A11A68F6F54F08_OFFSET UNITYSDK_OFFSET(0x11E566E0)
#define STRUCT_2_92F7FAA765B365C9__CTOR_OFFSET UNITYSDK_OFFSET(0x3A4A20)

inline static constexpr unsigned int Struct_2_92F7FAA765B365C9_TypeDefinitionIndex = 51437;

struct alignas(8) Struct_2_92F7FAA765B365C9
{
	::System::UInt32 Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_92F7FAA765B365C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_92F7FAA765B365C9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_92F7FAA765B365C9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_92F7FAA765B365C9))((::PBYTE)hIl2Cpp + STRUCT_2_92F7FAA765B365C9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_92F7FAA765B365C9_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_92F7FAA765B365C9_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_92F7FAA765B365C9_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_92F7FAA765B365C9 a1, ::Struct_2_92F7FAA765B365C9 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_92F7FAA765B365C9, ::Struct_2_92F7FAA765B365C9))((::PBYTE)hIl2Cpp + STRUCT_2_92F7FAA765B365C9_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	static ::Struct_2_92F7FAA765B365C9 Method_2_B8A11A68F6F54F08(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::Struct_2_92F7FAA765B365C9(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_92F7FAA765B365C9_METHOD_2_B8A11A68F6F54F08_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_724E778EF39A8746(::Struct_2_92F7FAA765B365C9 a1, ::Struct_2_92F7FAA765B365C9 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_92F7FAA765B365C9, ::Struct_2_92F7FAA765B365C9))((::PBYTE)hIl2Cpp + STRUCT_2_92F7FAA765B365C9_METHOD_2_724E778EF39A8746_OFFSET))(a1, a2);
	}
};

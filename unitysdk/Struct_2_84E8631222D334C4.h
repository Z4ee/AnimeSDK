#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_84E8631222D334C4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20DD8D0)
#define STRUCT_2_84E8631222D334C4_EQUALS_OFFSET UNITYSDK_OFFSET(0x20DD860)
#define STRUCT_2_84E8631222D334C4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20DD8E0)
#define STRUCT_2_84E8631222D334C4_METHOD_2_46B919E408B0796B_OFFSET UNITYSDK_OFFSET(0x16537BB0)
#define STRUCT_2_84E8631222D334C4_METHOD_2_4FCB296A66368662_OFFSET UNITYSDK_OFFSET(0x16537CB0)
#define STRUCT_2_84E8631222D334C4_METHOD_2_512BE93F3A938825_OFFSET UNITYSDK_OFFSET(0x16537A50)
#define STRUCT_2_84E8631222D334C4_METHOD_2_D9271727AFC41EC6_OFFSET UNITYSDK_OFFSET(0x16537C10)
#define STRUCT_2_84E8631222D334C4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20DD850)
#define STRUCT_2_84E8631222D334C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x16537DD0)
#define STRUCT_2_84E8631222D334C4__CTOR_OFFSET UNITYSDK_OFFSET(0x29130)
#define STRUCT_2_84E8631222D334C4___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x20DD9D0)
#define STRUCT_2_84E8631222D334C4___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20DDA30)
#define STRUCT_2_84E8631222D334C4___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20DD950)

inline static constexpr unsigned int Struct_2_84E8631222D334C4_TypeDefinitionIndex = 31960;

struct alignas(4) Struct_2_84E8631222D334C4
{
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_84E8631222D334C4_TypeDefinitionIndex)->GetStaticField(0x2A00);
	}
	static ::Struct_2_84E8631222D334C4* StaticGet_Field_2_1()
	{
		return (::Struct_2_84E8631222D334C4*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_84E8631222D334C4_TypeDefinitionIndex)->GetStaticField(0x2A04);
	}
	::System::Int32 Field_2_2; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_84E8631222D334C4 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_84E8631222D334C4))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4_GETHASHCODE_OFFSET))(this);
	}

	static ::System::String* Method_2_512BE93F3A938825(::System::UInt64 a1)
	{
		return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4_METHOD_2_512BE93F3A938825_OFFSET))(a1);
	}

	static ::System::String* Method_2_46B919E408B0796B(::System::UInt64 a1)
	{
		return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4_METHOD_2_46B919E408B0796B_OFFSET))(a1);
	}

	static ::System::String* Method_2_D9271727AFC41EC6(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4_METHOD_2_D9271727AFC41EC6_OFFSET))(a1);
	}

	static ::System::String* Method_2_4FCB296A66368662(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4_METHOD_2_4FCB296A66368662_OFFSET))(a1);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_84E8631222D334C4___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};

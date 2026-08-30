#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_84E8631222D334C4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B1C000)
#define STRUCT_2_84E8631222D334C4_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B1BF90)
#define STRUCT_2_84E8631222D334C4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B1C010)
#define STRUCT_2_84E8631222D334C4_METHOD_2_46B919E408B0796B_OFFSET UNITYSDK_OFFSET(0x1A4B3290)
#define STRUCT_2_84E8631222D334C4_METHOD_2_4FCB296A66368662_OFFSET UNITYSDK_OFFSET(0x1A4B3390)
#define STRUCT_2_84E8631222D334C4_METHOD_2_512BE93F3A938825_OFFSET UNITYSDK_OFFSET(0x1A4B3130)
#define STRUCT_2_84E8631222D334C4_METHOD_2_D9271727AFC41EC6_OFFSET UNITYSDK_OFFSET(0x1A4B32F0)
#define STRUCT_2_84E8631222D334C4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B1BF80)
#define STRUCT_2_84E8631222D334C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B34B0)
#define STRUCT_2_84E8631222D334C4__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB0)

inline static constexpr unsigned int Struct_2_84E8631222D334C4_TypeDefinitionIndex = 40092;

struct alignas(4) Struct_2_84E8631222D334C4
{
	static ::System::Int32* StaticGet_BMCJKDMCDAL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_84E8631222D334C4_TypeDefinitionIndex)->GetStaticField(0x9470);
	}
	static ::Struct_2_84E8631222D334C4* StaticGet_DEKDDHBJLKP()
	{
		return (::Struct_2_84E8631222D334C4*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_84E8631222D334C4_TypeDefinitionIndex)->GetStaticField(0x9474);
	}
	::System::Int32 NLDLDIJHIBF; // 0x10

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
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_83634F04BFB437D1_CLEAR_OFFSET UNITYSDK_OFFSET(0xAB6E600)
#define CLASS_1_83634F04BFB437D1_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0xAB6EB10)
#define CLASS_1_83634F04BFB437D1_METHOD_1_4B3B6022D2400079_OFFSET UNITYSDK_OFFSET(0xAB6E650)
#define CLASS_1_83634F04BFB437D1_METHOD_1_8A2DC2957F6DD14A_OFFSET UNITYSDK_OFFSET(0xAB6E8A0)
#define CLASS_1_83634F04BFB437D1_METHOD_1_A10567177DDE0779_OFFSET UNITYSDK_OFFSET(0xAB6EAB0)
#define CLASS_1_83634F04BFB437D1_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xAB6E560)
#define CLASS_1_83634F04BFB437D1_SET_PRECISION_OFFSET UNITYSDK_OFFSET(0xAB6EB20)
#define CLASS_1_83634F04BFB437D1__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB6EB40)
#define CLASS_1_83634F04BFB437D1__CTOR_OFFSET UNITYSDK_OFFSET(0xAB6EB30)

inline static constexpr unsigned int Class_1_83634F04BFB437D1_TypeDefinitionIndex = 68532;

class Class_1_83634F04BFB437D1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83634F04BFB437D1_TypeDefinitionIndex)->GetStaticField(0xAA40);
	}
	::System::Int32 _Precision_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83634F04BFB437D1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83634F04BFB437D1__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83634F04BFB437D1_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83634F04BFB437D1_CLEAR_OFFSET))(this);
	}

	::System::String* Method_1_4B3B6022D2400079(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_83634F04BFB437D1_METHOD_1_4B3B6022D2400079_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_8A2DC2957F6DD14A(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83634F04BFB437D1_METHOD_1_8A2DC2957F6DD14A_OFFSET))(a1);
	}

	static ::System::String* Method_1_A10567177DDE0779(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83634F04BFB437D1_METHOD_1_A10567177DDE0779_OFFSET))(a1);
	}

	::System::Int32 get_Precision()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83634F04BFB437D1_GET_PRECISION_OFFSET))(this);
	}

	::System::Void set_Precision(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_83634F04BFB437D1_SET_PRECISION_OFFSET))(this, a1);
	}
};

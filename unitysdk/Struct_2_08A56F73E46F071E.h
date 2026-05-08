#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9FD26085F85DA330.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define STRUCT_2_08A56F73E46F071E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x740560)
#define STRUCT_2_08A56F73E46F071E_EQUALS_OFFSET UNITYSDK_OFFSET(0x740520)
#define STRUCT_2_08A56F73E46F071E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x740660)
#define STRUCT_2_08A56F73E46F071E_METHOD_2_0A38892E700E56A0_OFFSET UNITYSDK_OFFSET(0x740500)
#define STRUCT_2_08A56F73E46F071E_METHOD_2_5250B730F51739C3_OFFSET UNITYSDK_OFFSET(0x740670)
#define STRUCT_2_08A56F73E46F071E_METHOD_2_5E3E9C73AC450301_OFFSET UNITYSDK_OFFSET(0x7406F0)
#define STRUCT_2_08A56F73E46F071E_METHOD_2_A0C1DAA6261B1CB5_OFFSET UNITYSDK_OFFSET(0x740680)
#define STRUCT_2_08A56F73E46F071E_METHOD_2_AF653BD1860082C2_OFFSET UNITYSDK_OFFSET(0x11EC1DB0)
#define STRUCT_2_08A56F73E46F071E_METHOD_2_BB44312331E9BDA0_OFFSET UNITYSDK_OFFSET(0x740510)
#define STRUCT_2_08A56F73E46F071E_METHOD_2_BD4DDE41C2687AA5_OFFSET UNITYSDK_OFFSET(0x740420)
#define STRUCT_2_08A56F73E46F071E_METHOD_2_F0BE5B33543B9677_OFFSET UNITYSDK_OFFSET(0x11EC1D00)
#define STRUCT_2_08A56F73E46F071E__CCTOR_OFFSET UNITYSDK_OFFSET(0x11EC1A00)

inline static constexpr unsigned int Struct_2_08A56F73E46F071E_TypeDefinitionIndex = 69821;

struct alignas(4) Struct_2_08A56F73E46F071E
{
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_08A56F73E46F071E_TypeDefinitionIndex)->GetStaticField(0x3DBC0);
	}
	static ::Struct_2_9FD26085F85DA330* StaticGet_Field_2_15()
	{
		return (::Struct_2_9FD26085F85DA330*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_08A56F73E46F071E_TypeDefinitionIndex)->GetStaticField(0xF100);
	}
	static ::System::Int32* StaticGet_Field_2_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_08A56F73E46F071E_TypeDefinitionIndex)->GetStaticField(0xF1E4);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_08A56F73E46F071E_TypeDefinitionIndex)->GetStaticField(0xF1E8);
	}
	static ::System::Int32* StaticGet_Field_2_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_08A56F73E46F071E_TypeDefinitionIndex)->GetStaticField(0xF1EC);
	}
	static ::System::Boolean* StaticGet_Field_2_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_08A56F73E46F071E_TypeDefinitionIndex)->GetStaticField(0xF1F0);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_08A56F73E46F071E_TypeDefinitionIndex)->GetStaticField(0xF1F1);
	}
	static ::System::Boolean* StaticGet_Field_2_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_08A56F73E46F071E_TypeDefinitionIndex)->GetStaticField(0xF1F2);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_08A56F73E46F071E_TypeDefinitionIndex)->GetStaticField(0xF1F4);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_08A56F73E46F071E_TypeDefinitionIndex)->GetStaticField(0xF1F8);
	}
	::System::Boolean Field_2_5; // 0x10
	::System::Boolean Field_2_6; // 0x11
	::System::Int32 Field_2_7; // 0x14
	::System::Int32 Field_2_8; // 0x18
	::Struct_2_9FD26085F85DA330 Field_2_9; // 0x1C
	::Struct_2_9FD26085F85DA330 Field_2_10; // 0x100

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_BD4DDE41C2687AA5(::Struct_2_08A56F73E46F071E& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_08A56F73E46F071E&))((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E_METHOD_2_BD4DDE41C2687AA5_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A38892E700E56A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E_METHOD_2_0A38892E700E56A0_OFFSET))(this);
	}

	::System::Void Method_2_BB44312331E9BDA0(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E_METHOD_2_BB44312331E9BDA0_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_08A56F73E46F071E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_08A56F73E46F071E))((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E_GETHASHCODE_OFFSET))(this);
	}

	::System::Void Method_2_5250B730F51739C3(::Struct_2_08A56F73E46F071E& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_08A56F73E46F071E&))((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E_METHOD_2_5250B730F51739C3_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A0C1DAA6261B1CB5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E_METHOD_2_A0C1DAA6261B1CB5_OFFSET))(this);
	}

	::System::Boolean Method_2_5E3E9C73AC450301(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E_METHOD_2_5E3E9C73AC450301_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_F0BE5B33543B9677(::Struct_2_08A56F73E46F071E a1, ::Struct_2_08A56F73E46F071E a2)
	{
		return ((::System::Boolean(*)(::Struct_2_08A56F73E46F071E, ::Struct_2_08A56F73E46F071E))((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E_METHOD_2_F0BE5B33543B9677_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_AF653BD1860082C2(::Struct_2_08A56F73E46F071E a1, ::Struct_2_08A56F73E46F071E a2)
	{
		return ((::System::Boolean(*)(::Struct_2_08A56F73E46F071E, ::Struct_2_08A56F73E46F071E))((::PBYTE)hIl2Cpp + STRUCT_2_08A56F73E46F071E_METHOD_2_AF653BD1860082C2_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45C768A21A845C0D;
class Class_1_91B6D33FD5BD3A1D;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_456958B23DC020CE___C_METHOD_1_521FF42A136F3888_1_OFFSET UNITYSDK_OFFSET(0xD35B500)
#define CLASS_2_456958B23DC020CE___C_METHOD_1_521FF42A136F3888_OFFSET UNITYSDK_OFFSET(0xD35B4B0)
#define CLASS_2_456958B23DC020CE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD35B460)
#define CLASS_2_456958B23DC020CE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD35B4A0)

inline static constexpr unsigned int Class_2_456958B23DC020CE___c_TypeDefinitionIndex = 68247;

class Class_2_456958B23DC020CE___c : public ::System::Object
{
public:
	static ::System::Converter_2<::Class_1_45C768A21A845C0D*, ::System::String*>** StaticGet___9__18_1()
	{
		return (::System::Converter_2<::Class_1_45C768A21A845C0D*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_456958B23DC020CE___c_TypeDefinitionIndex)->GetStaticField(0x386A0);
	}
	static ::System::Converter_2<::Class_1_91B6D33FD5BD3A1D*, ::System::String*>** StaticGet___9__18_0()
	{
		return (::System::Converter_2<::Class_1_91B6D33FD5BD3A1D*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_456958B23DC020CE___c_TypeDefinitionIndex)->GetStaticField(0x386A8);
	}
	static ::Class_2_456958B23DC020CE___c** StaticGet___9()
	{
		return (::Class_2_456958B23DC020CE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_456958B23DC020CE___c_TypeDefinitionIndex)->GetStaticField(0x386B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_456958B23DC020CE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_456958B23DC020CE___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_521FF42A136F3888(::Class_1_45C768A21A845C0D* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_45C768A21A845C0D*))((::PBYTE)hIl2Cpp + CLASS_2_456958B23DC020CE___C_METHOD_1_521FF42A136F3888_OFFSET))(this, a1);
	}

	::System::String* Method_1_521FF42A136F3888_1(::Class_1_91B6D33FD5BD3A1D* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_91B6D33FD5BD3A1D*))((::PBYTE)hIl2Cpp + CLASS_2_456958B23DC020CE___C_METHOD_1_521FF42A136F3888_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45C768A21A845C0D;
class Class_1_91B6D33FD5BD3A1D;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_C57D8783DBBA3A62___C_METHOD_1_4782E5DF6E0B8246_1_OFFSET UNITYSDK_OFFSET(0x1CA127F0)
#define CLASS_2_C57D8783DBBA3A62___C_METHOD_1_4782E5DF6E0B8246_OFFSET UNITYSDK_OFFSET(0x1CA12790)
#define CLASS_2_C57D8783DBBA3A62___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA12740)
#define CLASS_2_C57D8783DBBA3A62___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA12780)

inline static constexpr unsigned int Class_2_C57D8783DBBA3A62___c_TypeDefinitionIndex = 28961;

class Class_2_C57D8783DBBA3A62___c : public ::System::Object
{
public:
	static ::Class_2_C57D8783DBBA3A62___c** StaticGet___9()
	{
		return (::Class_2_C57D8783DBBA3A62___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C57D8783DBBA3A62___c_TypeDefinitionIndex)->GetStaticField(0x23550);
	}
	static ::System::Converter_2<::Class_1_45C768A21A845C0D*, ::System::String*>** StaticGet___9__8_1()
	{
		return (::System::Converter_2<::Class_1_45C768A21A845C0D*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C57D8783DBBA3A62___c_TypeDefinitionIndex)->GetStaticField(0x23558);
	}
	static ::System::Converter_2<::Class_1_91B6D33FD5BD3A1D*, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Converter_2<::Class_1_91B6D33FD5BD3A1D*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C57D8783DBBA3A62___c_TypeDefinitionIndex)->GetStaticField(0x23560);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C57D8783DBBA3A62___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C57D8783DBBA3A62___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_4782E5DF6E0B8246(::Class_1_91B6D33FD5BD3A1D* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_91B6D33FD5BD3A1D*))((::PBYTE)hIl2Cpp + CLASS_2_C57D8783DBBA3A62___C_METHOD_1_4782E5DF6E0B8246_OFFSET))(this, a1);
	}

	::System::String* Method_1_4782E5DF6E0B8246_1(::Class_1_45C768A21A845C0D* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_45C768A21A845C0D*))((::PBYTE)hIl2Cpp + CLASS_2_C57D8783DBBA3A62___C_METHOD_1_4782E5DF6E0B8246_1_OFFSET))(this, a1);
	}
};

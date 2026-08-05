#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_E48E39CFE0C6D799___C_METHOD_1_228A74DC7FC07ED9_OFFSET UNITYSDK_OFFSET(0x145793F0)
#define CLASS_2_E48E39CFE0C6D799___C_METHOD_1_88BC207489961884_OFFSET UNITYSDK_OFFSET(0x145792F0)
#define CLASS_2_E48E39CFE0C6D799___C_METHOD_1_96D690BE5E0559B9_OFFSET UNITYSDK_OFFSET(0x14579540)
#define CLASS_2_E48E39CFE0C6D799___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145792A0)
#define CLASS_2_E48E39CFE0C6D799___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145792E0)

inline static constexpr unsigned int Class_2_E48E39CFE0C6D799___c_TypeDefinitionIndex = 89439;

class Class_2_E48E39CFE0C6D799___c : public ::System::Object
{
public:
	static ::Class_2_E48E39CFE0C6D799___c** StaticGet___9()
	{
		return (::Class_2_E48E39CFE0C6D799___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E48E39CFE0C6D799___c_TypeDefinitionIndex)->GetStaticField(0x44240);
	}
	static ::System::Func_2<::System::Int32, ::Class_1_1EA8435E138F2E03*>** StaticGet___9__10_5()
	{
		return (::System::Func_2<::System::Int32, ::Class_1_1EA8435E138F2E03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E48E39CFE0C6D799___c_TypeDefinitionIndex)->GetStaticField(0x44248);
	}
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__10_4()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E48E39CFE0C6D799___c_TypeDefinitionIndex)->GetStaticField(0x44250);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__10_3()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E48E39CFE0C6D799___c_TypeDefinitionIndex)->GetStaticField(0x44258);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E48E39CFE0C6D799___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E48E39CFE0C6D799___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_88BC207489961884(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E48E39CFE0C6D799___C_METHOD_1_88BC207489961884_OFFSET))(this, a1);
	}

	::Class_1_1EA8435E138F2E03* Method_1_228A74DC7FC07ED9(::System::Int32 a1)
	{
		return ((::Class_1_1EA8435E138F2E03*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E48E39CFE0C6D799___C_METHOD_1_228A74DC7FC07ED9_OFFSET))(this, a1);
	}

	::System::String* Method_1_96D690BE5E0559B9(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E48E39CFE0C6D799___C_METHOD_1_96D690BE5E0559B9_OFFSET))(this, a1);
	}
};

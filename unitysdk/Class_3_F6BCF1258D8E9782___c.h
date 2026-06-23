#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_F6BCF1258D8E9782___C_METHOD_1_40CC056FA3137681_OFFSET UNITYSDK_OFFSET(0x141D9A40)
#define CLASS_3_F6BCF1258D8E9782___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x141D9980)
#define CLASS_3_F6BCF1258D8E9782___C_METHOD_1_B34C1EF5D195AA30_OFFSET UNITYSDK_OFFSET(0x141D99A0)
#define CLASS_3_F6BCF1258D8E9782___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141D9930)
#define CLASS_3_F6BCF1258D8E9782___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141D9970)

inline static constexpr unsigned int Class_3_F6BCF1258D8E9782___c_TypeDefinitionIndex = 75507;

class Class_3_F6BCF1258D8E9782___c : public ::System::Object
{
public:
	static ::Class_3_F6BCF1258D8E9782___c** StaticGet___9()
	{
		return (::Class_3_F6BCF1258D8E9782___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F6BCF1258D8E9782___c_TypeDefinitionIndex)->GetStaticField(0x3BAD0);
	}
	static ::System::Action** StaticGet___9__35_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F6BCF1258D8E9782___c_TypeDefinitionIndex)->GetStaticField(0x3BAD8);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F6BCF1258D8E9782___c_TypeDefinitionIndex)->GetStaticField(0x3BAE0);
	}
	static ::System::Func_2<::Class_1_B7E341C5F1A6F199*, ::System::Boolean>** StaticGet___9__54_0()
	{
		return (::System::Func_2<::Class_1_B7E341C5F1A6F199*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F6BCF1258D8E9782___c_TypeDefinitionIndex)->GetStaticField(0x3BAE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B34C1EF5D195AA30(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782___C_METHOD_1_B34C1EF5D195AA30_OFFSET))(this, a1);
	}

	::System::Void Method_1_40CC056FA3137681()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6BCF1258D8E9782___C_METHOD_1_40CC056FA3137681_OFFSET))(this);
	}
};

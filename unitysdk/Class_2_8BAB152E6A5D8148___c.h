#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_8BAB152E6A5D8148___C_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x133C2FF0)
#define CLASS_2_8BAB152E6A5D8148___C_METHOD_1_71D3482E257A4261_OFFSET UNITYSDK_OFFSET(0x133C3000)
#define CLASS_2_8BAB152E6A5D8148___C_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x133C3020)
#define CLASS_2_8BAB152E6A5D8148___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x133C2FA0)
#define CLASS_2_8BAB152E6A5D8148___C__CTOR_OFFSET UNITYSDK_OFFSET(0x133C2FE0)

inline static constexpr unsigned int Class_2_8BAB152E6A5D8148___c_TypeDefinitionIndex = 53326;

class Class_2_8BAB152E6A5D8148___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8BAB152E6A5D8148___c_TypeDefinitionIndex)->GetStaticField(0x45F70);
	}
	static ::Class_2_8BAB152E6A5D8148___c** StaticGet___9()
	{
		return (::Class_2_8BAB152E6A5D8148___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8BAB152E6A5D8148___c_TypeDefinitionIndex)->GetStaticField(0x45F78);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__7_5()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8BAB152E6A5D8148___c_TypeDefinitionIndex)->GetStaticField(0x45F80);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8BAB152E6A5D8148___c_TypeDefinitionIndex)->GetStaticField(0x45F88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8BAB152E6A5D8148___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BAB152E6A5D8148___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BAB152E6A5D8148___C_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Boolean Method_1_71D3482E257A4261(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8BAB152E6A5D8148___C_METHOD_1_71D3482E257A4261_OFFSET))(this, a1);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BAB152E6A5D8148___C_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}
};

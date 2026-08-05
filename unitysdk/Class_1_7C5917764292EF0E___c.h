#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_1_7C5917764292EF0E___C_METHOD_1_AB603CA7D990D95A_OFFSET UNITYSDK_OFFSET(0x10B15A70)
#define CLASS_1_7C5917764292EF0E___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10B15A60)
#define CLASS_1_7C5917764292EF0E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B15A10)
#define CLASS_1_7C5917764292EF0E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B15A50)

inline static constexpr unsigned int Class_1_7C5917764292EF0E___c_TypeDefinitionIndex = 60117;

class Class_1_7C5917764292EF0E___c : public ::System::Object
{
public:
	static ::Class_1_7C5917764292EF0E___c** StaticGet___9()
	{
		return (::Class_1_7C5917764292EF0E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C5917764292EF0E___c_TypeDefinitionIndex)->GetStaticField(0x4C710);
	}
	static ::UnityEngine::Events::UnityAction_1<::System::Int32>** StaticGet___9__48_0()
	{
		return (::UnityEngine::Events::UnityAction_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C5917764292EF0E___c_TypeDefinitionIndex)->GetStaticField(0x4C718);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__50_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C5917764292EF0E___c_TypeDefinitionIndex)->GetStaticField(0x4C720);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C5917764292EF0E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C5917764292EF0E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C5917764292EF0E___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_AB603CA7D990D95A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7C5917764292EF0E___C_METHOD_1_AB603CA7D990D95A_OFFSET))(this, a1);
	}
};

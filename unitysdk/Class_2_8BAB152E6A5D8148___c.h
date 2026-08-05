#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_8BAB152E6A5D8148___C_METHOD_1_71D3482E257A4261_OFFSET UNITYSDK_OFFSET(0x14638D90)
#define CLASS_2_8BAB152E6A5D8148___C_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x14638D80)
#define CLASS_2_8BAB152E6A5D8148___C_METHOD_1_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x14638D50)
#define CLASS_2_8BAB152E6A5D8148___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14638D00)
#define CLASS_2_8BAB152E6A5D8148___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14638D40)

inline static constexpr unsigned int Class_2_8BAB152E6A5D8148___c_TypeDefinitionIndex = 78352;

class Class_2_8BAB152E6A5D8148___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8BAB152E6A5D8148___c_TypeDefinitionIndex)->GetStaticField(0x4A220);
	}
	static ::Class_2_8BAB152E6A5D8148___c** StaticGet___9()
	{
		return (::Class_2_8BAB152E6A5D8148___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8BAB152E6A5D8148___c_TypeDefinitionIndex)->GetStaticField(0x4A228);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8BAB152E6A5D8148___c_TypeDefinitionIndex)->GetStaticField(0x4A230);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__7_5()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8BAB152E6A5D8148___c_TypeDefinitionIndex)->GetStaticField(0x4A238);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8BAB152E6A5D8148___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BAB152E6A5D8148___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BAB152E6A5D8148___C_METHOD_1_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BAB152E6A5D8148___C_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Boolean Method_1_71D3482E257A4261(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8BAB152E6A5D8148___C_METHOD_1_71D3482E257A4261_OFFSET))(this, a1);
	}
};

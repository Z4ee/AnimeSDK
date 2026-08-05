#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E5DBED4C784DCB70;
namespace Foundation { class MyLogger; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_95F3660BF03C2263_METHOD_1_50E8968F71132C9A_OFFSET UNITYSDK_OFFSET(0x18CD0200)
#define CLASS_1_95F3660BF03C2263_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x18CD08C0)
#define CLASS_1_95F3660BF03C2263_METHOD_1_E5A4070510CA83D7_OFFSET UNITYSDK_OFFSET(0x18CD0630)
#define CLASS_1_95F3660BF03C2263__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CD0070)

inline static constexpr unsigned int Class_1_95F3660BF03C2263_TypeDefinitionIndex = 67697;

class Class_1_95F3660BF03C2263 : public ::System::Object
{
public:
	static ::Class_1_E5DBED4C784DCB70** StaticGet_Field_1_10()
	{
		return (::Class_1_E5DBED4C784DCB70**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x31410);
	}
	static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x31418);
	}
	static ::Class_1_E5DBED4C784DCB70** StaticGet_Field_1_4()
	{
		return (::Class_1_E5DBED4C784DCB70**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x31420);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x31428);
	}
	static ::Class_1_E5DBED4C784DCB70** StaticGet_Field_1_11()
	{
		return (::Class_1_E5DBED4C784DCB70**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x31430);
	}
	static ::Foundation::MyLogger** StaticGet_Field_1_0()
	{
		return (::Foundation::MyLogger**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x31438);
	}
	static ::Class_1_E5DBED4C784DCB70** StaticGet_Field_1_5()
	{
		return (::Class_1_E5DBED4C784DCB70**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0x31440);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0xA950);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_95F3660BF03C2263_TypeDefinitionIndex)->GetStaticField(0xA954);
	}
	// static const ::System::Int32 Field_1_1 = 0x3C; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_95F3660BF03C2263__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_50E8968F71132C9A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_95F3660BF03C2263_METHOD_1_50E8968F71132C9A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_E5A4070510CA83D7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_95F3660BF03C2263_METHOD_1_E5A4070510CA83D7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_95F3660BF03C2263_METHOD_1_60E1F7F58CCF739F_OFFSET))();
	}
};

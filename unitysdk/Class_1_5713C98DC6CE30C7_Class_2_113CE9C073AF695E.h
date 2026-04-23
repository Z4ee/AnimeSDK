#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5713C98DC6CE30C7_Class_1_413A93C6BBC780F1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5713C98DC6CE30C7_CLASS_2_113CE9C073AF695E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1288D680)
#define CLASS_1_5713C98DC6CE30C7_CLASS_2_113CE9C073AF695E_METHOD_2_7240807274B59CCB_OFFSET UNITYSDK_OFFSET(0x1288D730)
#define CLASS_1_5713C98DC6CE30C7_CLASS_2_113CE9C073AF695E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1288D890)
#define CLASS_1_5713C98DC6CE30C7_CLASS_2_113CE9C073AF695E__CTOR_OFFSET UNITYSDK_OFFSET(0x1288C240)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_Class_2_113CE9C073AF695E_TypeDefinitionIndex = 55514;

class Class_1_5713C98DC6CE30C7_Class_2_113CE9C073AF695E : public ::Class_1_5713C98DC6CE30C7_Class_1_413A93C6BBC780F1
{
public:
	static ::System::String** StaticGet_Field_2_8()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_Class_2_113CE9C073AF695E_TypeDefinitionIndex)->GetStaticField(0x62620);
	}
	static ::System::Single* StaticGet_Field_2_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_Class_2_113CE9C073AF695E_TypeDefinitionIndex)->GetStaticField(0x105D0);
	}
	::System::String* Field_2_6; // 0x38
	::UnityEngine::GameObject* Field_2_0; // 0x40
	::System::Single Field_2_4; // 0x48
	::System::Single Field_2_3; // 0x4C
	::UnityEngine::Vector3 Field_2_1; // 0x50
	::System::Single Field_2_5; // 0x5C
	::System::Single Field_2_2; // 0x60

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::UnityEngine::Transform* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::String* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_2_113CE9C073AF695E__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_2_113CE9C073AF695E__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_2_113CE9C073AF695E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7240807274B59CCB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_2_113CE9C073AF695E_METHOD_2_7240807274B59CCB_OFFSET))(this, a1);
	}
};

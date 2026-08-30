#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5713C98DC6CE30C7_Class_1_BF8BA8FF7344779F.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5713C98DC6CE30C7_CLASS_2_53B33F6E27333E09_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A799ED0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_2_53B33F6E27333E09_METHOD_2_7240807274B59CCB_OFFSET UNITYSDK_OFFSET(0x1A799F80)
#define CLASS_1_5713C98DC6CE30C7_CLASS_2_53B33F6E27333E09__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A79A0E0)
#define CLASS_1_5713C98DC6CE30C7_CLASS_2_53B33F6E27333E09__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7988D0)

inline static constexpr unsigned int Class_1_5713C98DC6CE30C7_Class_2_53B33F6E27333E09_TypeDefinitionIndex = 60321;

class Class_1_5713C98DC6CE30C7_Class_2_53B33F6E27333E09 : public ::Class_1_5713C98DC6CE30C7_Class_1_BF8BA8FF7344779F
{
public:
	static ::System::String** StaticGet_LOJFHLOCBPG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_Class_2_53B33F6E27333E09_TypeDefinitionIndex)->GetStaticField(0x552B0);
	}
	static ::System::Single* StaticGet_BEIBJFCCNMN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5713C98DC6CE30C7_Class_2_53B33F6E27333E09_TypeDefinitionIndex)->GetStaticField(0x117A0);
	}
	::UnityEngine::GameObject* PGKENBMKDKA; // 0x38
	::System::String* IJMGEMMNNPI; // 0x40
	::System::Single GLOIDCBECOG; // 0x48
	::System::Single PGMIOKKLHIE; // 0x4C
	::System::Single HBDJCFFDGDD; // 0x50
	::UnityEngine::Vector3 PDJBFBPEHFE; // 0x54
	::System::Single GHABAAOGBNO; // 0x60

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::UnityEngine::Transform* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::String* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_2_53B33F6E27333E09__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_2_53B33F6E27333E09__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_2_53B33F6E27333E09_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7240807274B59CCB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5713C98DC6CE30C7_CLASS_2_53B33F6E27333E09_METHOD_2_7240807274B59CCB_OFFSET))(this, a1);
	}
};

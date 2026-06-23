#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define STRUCT_2_CE79A3F738BC9FC9_METHOD_2_16B007C1CA9E2687_OFFSET UNITYSDK_OFFSET(0x796310)
#define STRUCT_2_CE79A3F738BC9FC9_METHOD_2_B8FF179514133CB1_OFFSET UNITYSDK_OFFSET(0x12846590)
#define STRUCT_2_CE79A3F738BC9FC9_METHOD_2_C816A8B642BDB141_OFFSET UNITYSDK_OFFSET(0x796320)
#define STRUCT_2_CE79A3F738BC9FC9_METHOD_2_CF647FC9B4CE97AA_OFFSET UNITYSDK_OFFSET(0x796330)
#define STRUCT_2_CE79A3F738BC9FC9__CCTOR_OFFSET UNITYSDK_OFFSET(0x128462E0)

inline static constexpr unsigned int Struct_2_CE79A3F738BC9FC9_TypeDefinitionIndex = 42048;

struct alignas(8) Struct_2_CE79A3F738BC9FC9
{
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_CE79A3F738BC9FC9_TypeDefinitionIndex)->GetStaticField(0xD470);
	}
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_4 = 0xD8; // 0x0
	::Struct_2_9E75F47F2670B678 Field_2_2; // 0x10
	::UnityEngine::Vector4 Field_2_3; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_CE79A3F738BC9FC9__CCTOR_OFFSET))();
	}

	::System::Void Method_2_16B007C1CA9E2687(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_CE79A3F738BC9FC9_METHOD_2_16B007C1CA9E2687_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C816A8B642BDB141(::UnityEngine::Renderer* a1, ::UnityEngine::MaterialPropertyBlock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + STRUCT_2_CE79A3F738BC9FC9_METHOD_2_C816A8B642BDB141_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_9E75F47F2670B678 Method_2_B8FF179514133CB1(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + STRUCT_2_CE79A3F738BC9FC9_METHOD_2_B8FF179514133CB1_OFFSET))(a1);
	}

	::System::Void Method_2_CF647FC9B4CE97AA(::UnityEngine::Renderer* a1, ::UnityEngine::MaterialPropertyBlock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + STRUCT_2_CE79A3F738BC9FC9_METHOD_2_CF647FC9B4CE97AA_OFFSET))(this, a1, a2);
	}
};

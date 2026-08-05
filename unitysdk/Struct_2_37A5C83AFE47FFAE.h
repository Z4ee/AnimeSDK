#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define STRUCT_2_37A5C83AFE47FFAE_METHOD_2_16B007C1CA9E2687_OFFSET UNITYSDK_OFFSET(0x85ABF0)
#define STRUCT_2_37A5C83AFE47FFAE_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x85AC20)
#define STRUCT_2_37A5C83AFE47FFAE_METHOD_2_DB479289358F927F_1_OFFSET UNITYSDK_OFFSET(0x85AC10)
#define STRUCT_2_37A5C83AFE47FFAE_METHOD_2_DB479289358F927F_OFFSET UNITYSDK_OFFSET(0x85AC00)
#define STRUCT_2_37A5C83AFE47FFAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DE26A0)
#define STRUCT_2_37A5C83AFE47FFAE__CTOR_OFFSET UNITYSDK_OFFSET(0x85AB80)

inline static constexpr unsigned int Struct_2_37A5C83AFE47FFAE_TypeDefinitionIndex = 85245;

struct alignas(8) Struct_2_37A5C83AFE47FFAE
{
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_37A5C83AFE47FFAE_TypeDefinitionIndex)->GetStaticField(0x12B40);
	}
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::Vector4 Field_2_7; // 0x10
	::UnityEngine::MaterialPropertyBlock* Field_2_6; // 0x20

	::System::Void _ctor(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + STRUCT_2_37A5C83AFE47FFAE__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_37A5C83AFE47FFAE__CCTOR_OFFSET))();
	}

	::System::Void Method_2_16B007C1CA9E2687(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_37A5C83AFE47FFAE_METHOD_2_16B007C1CA9E2687_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DB479289358F927F(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + STRUCT_2_37A5C83AFE47FFAE_METHOD_2_DB479289358F927F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB479289358F927F_1(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + STRUCT_2_37A5C83AFE47FFAE_METHOD_2_DB479289358F927F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_37A5C83AFE47FFAE_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}
};

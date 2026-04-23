#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"

class Class_1_A6CB7EFE0F92316C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_190E95D4FD324FA4_METHOD_1_17B5D66EFF54257B_OFFSET UNITYSDK_OFFSET(0xCD47330)
#define CLASS_1_190E95D4FD324FA4_METHOD_1_26F2ADE6CF3F0469_OFFSET UNITYSDK_OFFSET(0xCD475E0)
#define CLASS_1_190E95D4FD324FA4_METHOD_1_908CDC094010F209_OFFSET UNITYSDK_OFFSET(0xCD47960)
#define CLASS_1_190E95D4FD324FA4_METHOD_1_B5767AC2A0073025_OFFSET UNITYSDK_OFFSET(0xCD476E0)
#define CLASS_1_190E95D4FD324FA4__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD47BA0)

inline static constexpr unsigned int Class_1_190E95D4FD324FA4_TypeDefinitionIndex = 64694;

class Class_1_190E95D4FD324FA4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_A6CB7EFE0F92316C*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_A6CB7EFE0F92316C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_190E95D4FD324FA4_TypeDefinitionIndex)->GetStaticField(0x6B270);
	}
	static ::System::Collections::Generic::List_1<::Class_1_A6CB7EFE0F92316C*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_1_A6CB7EFE0F92316C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_190E95D4FD324FA4_TypeDefinitionIndex)->GetStaticField(0x6B278);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_190E95D4FD324FA4__CCTOR_OFFSET))();
	}

	static ::Class_1_A6CB7EFE0F92316C* Method_1_17B5D66EFF54257B(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5, ::System::Int32 a6, ::System::String* a7, ::UnityEngine::TextureWrapMode a8, ::UnityEngine::FilterMode a9)
	{
		return ((::Class_1_A6CB7EFE0F92316C*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::System::String*, ::UnityEngine::TextureWrapMode, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + CLASS_1_190E95D4FD324FA4_METHOD_1_17B5D66EFF54257B_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_1_26F2ADE6CF3F0469(::Class_1_A6CB7EFE0F92316C* a1)
	{
		return ((::System::Void(*)(::Class_1_A6CB7EFE0F92316C*))((::PBYTE)hIl2Cpp + CLASS_1_190E95D4FD324FA4_METHOD_1_26F2ADE6CF3F0469_OFFSET))(a1);
	}

	static ::System::Void Method_1_B5767AC2A0073025()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_190E95D4FD324FA4_METHOD_1_B5767AC2A0073025_OFFSET))();
	}

	static ::System::Void Method_1_908CDC094010F209()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_190E95D4FD324FA4_METHOD_1_908CDC094010F209_OFFSET))();
	}
};

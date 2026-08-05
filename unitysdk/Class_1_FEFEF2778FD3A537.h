#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IAssetPool; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FEFEF2778FD3A537_METHOD_1_0B6BFB8848D09C25_OFFSET UNITYSDK_OFFSET(0x17A8BE30)
#define CLASS_1_FEFEF2778FD3A537_METHOD_1_3E2CF0B8A578E1A0_OFFSET UNITYSDK_OFFSET(0x17A8C130)
#define CLASS_1_FEFEF2778FD3A537_METHOD_1_E0D08A8D6A5B084F_OFFSET UNITYSDK_OFFSET(0x17A8C5A0)
#define CLASS_1_FEFEF2778FD3A537__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A8BDF0)

inline static constexpr unsigned int Class_1_FEFEF2778FD3A537_TypeDefinitionIndex = 89014;

class Class_1_FEFEF2778FD3A537 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEFEF2778FD3A537_TypeDefinitionIndex)->GetStaticField(0x417B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEFEF2778FD3A537__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0B6BFB8848D09C25(::Foundation::IAssetPool* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::Foundation::IAssetPool*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_FEFEF2778FD3A537_METHOD_1_0B6BFB8848D09C25_OFFSET))(a1, a2);
	}

	static ::UnityEngine::RectTransform* Method_1_3E2CF0B8A578E1A0(::Foundation::IAssetPool* a1, ::UnityEngine::RectTransform* a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::RectTransform*(*)(::Foundation::IAssetPool*, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FEFEF2778FD3A537_METHOD_1_3E2CF0B8A578E1A0_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::GameObject* Method_1_E0D08A8D6A5B084F(::Foundation::IAssetPool* a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Int32 a4)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::IAssetPool*, ::System::String*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FEFEF2778FD3A537_METHOD_1_E0D08A8D6A5B084F_OFFSET))(a1, a2, a3, a4);
	}
};

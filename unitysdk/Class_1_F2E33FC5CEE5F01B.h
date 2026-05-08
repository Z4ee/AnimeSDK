#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IAssetPool; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F2E33FC5CEE5F01B_METHOD_1_2A4BFF9B63FE47AA_OFFSET UNITYSDK_OFFSET(0x114C0340)
#define CLASS_1_F2E33FC5CEE5F01B_METHOD_1_5849CC70431EBC50_OFFSET UNITYSDK_OFFSET(0x114C0040)
#define CLASS_1_F2E33FC5CEE5F01B_METHOD_1_93ACFC61D8B322E5_OFFSET UNITYSDK_OFFSET(0x114BFBD0)
#define CLASS_1_F2E33FC5CEE5F01B__CCTOR_OFFSET UNITYSDK_OFFSET(0x114BFB90)

inline static constexpr unsigned int Class_1_F2E33FC5CEE5F01B_TypeDefinitionIndex = 58207;

class Class_1_F2E33FC5CEE5F01B : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2E33FC5CEE5F01B_TypeDefinitionIndex)->GetStaticField(0x47CC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2E33FC5CEE5F01B__CCTOR_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_93ACFC61D8B322E5(::Foundation::IAssetPool* a1, ::UnityEngine::RectTransform* a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::RectTransform*(*)(::Foundation::IAssetPool*, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2E33FC5CEE5F01B_METHOD_1_93ACFC61D8B322E5_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::GameObject* Method_1_5849CC70431EBC50(::Foundation::IAssetPool* a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Int32 a4)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::IAssetPool*, ::System::String*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2E33FC5CEE5F01B_METHOD_1_5849CC70431EBC50_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_2A4BFF9B63FE47AA(::Foundation::IAssetPool* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::Foundation::IAssetPool*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_F2E33FC5CEE5F01B_METHOD_1_2A4BFF9B63FE47AA_OFFSET))(a1, a2);
	}
};

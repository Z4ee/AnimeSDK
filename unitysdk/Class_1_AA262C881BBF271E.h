#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PrimitiveType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_AA262C881BBF271E_METHOD_1_C93BC67F269AE424_OFFSET UNITYSDK_OFFSET(0x158C8D30)
#define CLASS_1_AA262C881BBF271E_METHOD_1_F22E7E7C9FC01A6F_OFFSET UNITYSDK_OFFSET(0x158C8F10)
#define CLASS_1_AA262C881BBF271E__CCTOR_OFFSET UNITYSDK_OFFSET(0x158C8FF0)

inline static constexpr unsigned int Class_1_AA262C881BBF271E_TypeDefinitionIndex = 52343;

class Class_1_AA262C881BBF271E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType, ::UnityEngine::Mesh*>** StaticGet_KPPFGAPLECI()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType, ::UnityEngine::Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA262C881BBF271E_TypeDefinitionIndex)->GetStaticField(0x61020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AA262C881BBF271E__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Mesh* Method_1_C93BC67F269AE424(::UnityEngine::PrimitiveType a1)
	{
		return ((::UnityEngine::Mesh*(*)(::UnityEngine::PrimitiveType))((::PBYTE)hIl2Cpp + CLASS_1_AA262C881BBF271E_METHOD_1_C93BC67F269AE424_OFFSET))(a1);
	}

	static ::UnityEngine::Mesh* Method_1_F22E7E7C9FC01A6F(::UnityEngine::PrimitiveType a1)
	{
		return ((::UnityEngine::Mesh*(*)(::UnityEngine::PrimitiveType))((::PBYTE)hIl2Cpp + CLASS_1_AA262C881BBF271E_METHOD_1_F22E7E7C9FC01A6F_OFFSET))(a1);
	}
};

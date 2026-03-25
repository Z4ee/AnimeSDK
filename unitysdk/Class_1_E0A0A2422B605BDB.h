#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PrimitiveType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_E0A0A2422B605BDB_METHOD_1_943A3CE8BB953879_OFFSET UNITYSDK_OFFSET(0x110BE4C0)
#define CLASS_1_E0A0A2422B605BDB_METHOD_1_F22E7E7C9FC01A6F_OFFSET UNITYSDK_OFFSET(0x110BE6A0)
#define CLASS_1_E0A0A2422B605BDB__CCTOR_OFFSET UNITYSDK_OFFSET(0x110BE780)

inline static constexpr unsigned int Class_1_E0A0A2422B605BDB_TypeDefinitionIndex = 42081;

class Class_1_E0A0A2422B605BDB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType, ::UnityEngine::Mesh*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType, ::UnityEngine::Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0A0A2422B605BDB_TypeDefinitionIndex)->GetStaticField(0x44F40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0A0A2422B605BDB__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Mesh* Method_1_943A3CE8BB953879(::UnityEngine::PrimitiveType a1)
	{
		return ((::UnityEngine::Mesh*(*)(::UnityEngine::PrimitiveType))((::PBYTE)hIl2Cpp + CLASS_1_E0A0A2422B605BDB_METHOD_1_943A3CE8BB953879_OFFSET))(a1);
	}

	static ::UnityEngine::Mesh* Method_1_F22E7E7C9FC01A6F(::UnityEngine::PrimitiveType a1)
	{
		return ((::UnityEngine::Mesh*(*)(::UnityEngine::PrimitiveType))((::PBYTE)hIl2Cpp + CLASS_1_E0A0A2422B605BDB_METHOD_1_F22E7E7C9FC01A6F_OFFSET))(a1);
	}
};

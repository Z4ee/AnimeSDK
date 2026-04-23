#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6CB44B189B9F7529_METHOD_1_4C4938F725C5A1E4_OFFSET UNITYSDK_OFFSET(0x90772D0)
#define CLASS_1_6CB44B189B9F7529_METHOD_1_6AFDC50424099C5A_OFFSET UNITYSDK_OFFSET(0x9077250)
#define CLASS_1_6CB44B189B9F7529_METHOD_1_773DBDCE721BC336_OFFSET UNITYSDK_OFFSET(0x9076930)
#define CLASS_1_6CB44B189B9F7529_METHOD_1_BB1F7901B999DBC8_OFFSET UNITYSDK_OFFSET(0x9076A10)
#define CLASS_1_6CB44B189B9F7529__CCTOR_OFFSET UNITYSDK_OFFSET(0x90774B0)

inline static constexpr unsigned int Class_1_6CB44B189B9F7529_TypeDefinitionIndex = 55435;

class Class_1_6CB44B189B9F7529 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CB44B189B9F7529_TypeDefinitionIndex)->GetStaticField(0x5AD90);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CB44B189B9F7529_TypeDefinitionIndex)->GetStaticField(0x10190);
	}
	static ::UnityEngine::SceneManagement::Scene* StaticGet_Field_1_0()
	{
		return (::UnityEngine::SceneManagement::Scene*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CB44B189B9F7529_TypeDefinitionIndex)->GetStaticField(0x10194);
	}
	// static const ::System::Int32 Field_1_2 = 0x64; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CB44B189B9F7529__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_773DBDCE721BC336(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_6CB44B189B9F7529_METHOD_1_773DBDCE721BC336_OFFSET))(a1, a2);
	}

	static ::UnityEngine::GameObject* Method_1_BB1F7901B999DBC8(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6CB44B189B9F7529_METHOD_1_BB1F7901B999DBC8_OFFSET))(a1);
	}

	static ::System::String* Method_1_6AFDC50424099C5A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6CB44B189B9F7529_METHOD_1_6AFDC50424099C5A_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_4C4938F725C5A1E4(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6CB44B189B9F7529_METHOD_1_4C4938F725C5A1E4_OFFSET))(a1, a2);
	}
};

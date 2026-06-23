#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_5AFC416DEBD47889_DELETE_OFFSET UNITYSDK_OFFSET(0x1079A940)
#define CLASS_1_5AFC416DEBD47889_METHOD_1_98CF8AB437E26D43_OFFSET UNITYSDK_OFFSET(0x1079AC00)
#define CLASS_1_5AFC416DEBD47889__CCTOR_OFFSET UNITYSDK_OFFSET(0x1079AB10)

inline static constexpr unsigned int Class_1_5AFC416DEBD47889_TypeDefinitionIndex = 47313;

class Class_1_5AFC416DEBD47889 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5AFC416DEBD47889_TypeDefinitionIndex)->GetStaticField(0x4BA00);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5AFC416DEBD47889_TypeDefinitionIndex)->GetStaticField(0x4BA08);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5AFC416DEBD47889_TypeDefinitionIndex)->GetStaticField(0x11F60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5AFC416DEBD47889__CCTOR_OFFSET))();
	}

	static ::System::Void Delete(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_5AFC416DEBD47889_DELETE_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_98CF8AB437E26D43()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5AFC416DEBD47889_METHOD_1_98CF8AB437E26D43_OFFSET))();
	}
};

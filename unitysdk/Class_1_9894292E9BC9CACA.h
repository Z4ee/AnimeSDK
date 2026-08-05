#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ModifiableContactPair.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_9894292E9BC9CACA_METHOD_1_77FCB03405082CD6_OFFSET UNITYSDK_OFFSET(0x15C25BA0)
#define CLASS_1_9894292E9BC9CACA__CTOR_OFFSET UNITYSDK_OFFSET(0x15C25A70)

inline static constexpr unsigned int Class_1_9894292E9BC9CACA_TypeDefinitionIndex = 54010;

class Class_1_9894292E9BC9CACA : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9894292E9BC9CACA_TypeDefinitionIndex)->GetStaticField(0x3C340);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9894292E9BC9CACA_TypeDefinitionIndex)->GetStaticField(0xE1F0);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_1_5; // 0x18
	::System::Boolean Field_1_11; // 0x20
	::System::Boolean Field_1_4; // 0x21
	::System::Single Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9894292E9BC9CACA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_77FCB03405082CD6(::UnityEngine::PhysicsScene a1, ::System::Int32 a2, ::UnityEngine::ModifiableContactPair a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair))((::PBYTE)hIl2Cpp + CLASS_1_9894292E9BC9CACA_METHOD_1_77FCB03405082CD6_OFFSET))(this, a1, a2, a3);
	}
};

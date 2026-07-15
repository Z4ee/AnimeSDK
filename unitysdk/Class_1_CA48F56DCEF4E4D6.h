#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_CA48F56DCEF4E4D6_METHOD_1_41BC24A428359045_OFFSET UNITYSDK_OFFSET(0x17A7E010)
#define CLASS_1_CA48F56DCEF4E4D6_METHOD_1_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0x17A7DFC0)
#define CLASS_1_CA48F56DCEF4E4D6__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7DF40)

inline static constexpr unsigned int Class_1_CA48F56DCEF4E4D6_TypeDefinitionIndex = 63017;

class Class_1_CA48F56DCEF4E4D6 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831* Field_1_1; // 0x18
	::RPG::Client::UIPrefabLoader* Field_1_2; // 0x20
	::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* Field_1_3; // 0x28

	::System::Void _ctor(::System::String* a1, ::Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831*))((::PBYTE)hIl2Cpp + CLASS_1_CA48F56DCEF4E4D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_763B70E1B527E566()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA48F56DCEF4E4D6_METHOD_1_763B70E1B527E566_OFFSET))(this);
	}

	::System::Void Method_1_41BC24A428359045(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_CA48F56DCEF4E4D6_METHOD_1_41BC24A428359045_OFFSET))(this, a1);
	}
};

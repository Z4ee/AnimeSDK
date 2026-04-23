#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_3_1A92845FAFA5EC77;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C6B8824523E2E150_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AE4050)
#define CLASS_1_C6B8824523E2E150_METHOD_1_11918C4FCCDB3936_OFFSET UNITYSDK_OFFSET(0x12AE4170)
#define CLASS_1_C6B8824523E2E150_METHOD_1_C1186FA6CD230006_OFFSET UNITYSDK_OFFSET(0x12AE4090)
#define CLASS_1_C6B8824523E2E150__CTOR_OFFSET UNITYSDK_OFFSET(0x12AE4040)

inline static constexpr unsigned int Class_1_C6B8824523E2E150_TypeDefinitionIndex = 70583;

class Class_1_C6B8824523E2E150 : public ::System::Object
{
public:
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_C6B8824523E2E150__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6B8824523E2E150_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C1186FA6CD230006(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_C6B8824523E2E150_METHOD_1_C1186FA6CD230006_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_11918C4FCCDB3936(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C6B8824523E2E150_METHOD_1_11918C4FCCDB3936_OFFSET))(this, a1, a2);
	}
};

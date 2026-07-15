#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DEBCF596D13A3389;
class Class_2_9C4E0E0141829F67;
class Class_3_E7D29F43FB80184D;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5E75F2569395C346_METHOD_1_572C872A7AC127C9_OFFSET UNITYSDK_OFFSET(0x146F44C0)
#define CLASS_1_5E75F2569395C346_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x146F4900)
#define CLASS_1_5E75F2569395C346_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x146F4810)
#define CLASS_1_5E75F2569395C346_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x146F49E0)
#define CLASS_1_5E75F2569395C346__CTOR_OFFSET UNITYSDK_OFFSET(0x146F4480)

inline static constexpr unsigned int Class_1_5E75F2569395C346_TypeDefinitionIndex = 75122;

class Class_1_5E75F2569395C346 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_DEBCF596D13A3389* Field_1_1; // 0x18
	::Class_2_9C4E0E0141829F67* Field_1_2; // 0x20
	::UnityEngine::Transform* Field_1_3; // 0x28
	::UnityEngine::GameObject* Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x38
	::UnityEngine::Vector3 Field_1_6; // 0x44
	::System::Single Field_1_7; // 0x50

	::System::Void _ctor(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Transform* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5E75F2569395C346__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_572C872A7AC127C9(::Class_3_E7D29F43FB80184D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*))((::PBYTE)hIl2Cpp + CLASS_1_5E75F2569395C346_METHOD_1_572C872A7AC127C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5E75F2569395C346_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E75F2569395C346_METHOD_1_5E72916301E347E2_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E75F2569395C346_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}
};

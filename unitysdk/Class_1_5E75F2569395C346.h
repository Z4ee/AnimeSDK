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

#define CLASS_1_5E75F2569395C346_METHOD_1_572C872A7AC127C9_OFFSET UNITYSDK_OFFSET(0x1624A710)
#define CLASS_1_5E75F2569395C346_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x1624AB50)
#define CLASS_1_5E75F2569395C346_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x1624AA60)
#define CLASS_1_5E75F2569395C346_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1624AC30)
#define CLASS_1_5E75F2569395C346__CTOR_OFFSET UNITYSDK_OFFSET(0x1624A6D0)

inline static constexpr unsigned int Class_1_5E75F2569395C346_TypeDefinitionIndex = 78620;

class Class_1_5E75F2569395C346 : public ::System::Object
{
public:
	::UnityEngine::Transform* GKNBCPMJHMN; // 0x10
	::Class_1_DEBCF596D13A3389* OLNEEDIAGBF; // 0x18
	::UnityEngine::GameObject* LBNBPMIFDHI; // 0x20
	::Class_2_9C4E0E0141829F67* EPKIDMNCGAA; // 0x28
	::System::String* OINCGJJMAEF; // 0x30
	::UnityEngine::Vector3 BNMMHILFJDD; // 0x38
	::System::Single HBDJCFFDGDD; // 0x44
	::UnityEngine::Vector3 AOBKAEDDOBC; // 0x48

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

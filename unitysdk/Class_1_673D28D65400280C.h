#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimageComponent; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine::Rendering::Universal { class OceanFloatObject; }

#define CLASS_1_673D28D65400280C_METHOD_1_CEF79EFCACAFAA04_OFFSET UNITYSDK_OFFSET(0x17A368A0)
#define CLASS_1_673D28D65400280C_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x17A372A0)
#define CLASS_1_673D28D65400280C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A36630)

inline static constexpr unsigned int Class_1_673D28D65400280C_TypeDefinitionIndex = 55745;

class Class_1_673D28D65400280C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::OceanFloatObject*, ::System::Boolean>* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::MdbComponent*, ::System::Boolean>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rigidbody*, ::System::Boolean>* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimageComponent*, ::System::Boolean>* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::UnityEngine::CapsuleCollider*, ::System::Boolean>* Field_1_0; // 0x30

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_673D28D65400280C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_673D28D65400280C_METHOD_1_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Method_1_CEF79EFCACAFAA04(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_673D28D65400280C_METHOD_1_CEF79EFCACAFAA04_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D35B5D4865AF7021_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x12572F30)
#define CLASS_1_D35B5D4865AF7021_METHOD_1_FFC478F2036EA29C_OFFSET UNITYSDK_OFFSET(0x12573010)
#define CLASS_1_D35B5D4865AF7021__CTOR_OFFSET UNITYSDK_OFFSET(0x12572E00)

inline static constexpr unsigned int Class_1_D35B5D4865AF7021_TypeDefinitionIndex = 75332;

class Class_1_D35B5D4865AF7021 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::UnityEngine::RectTransform* Field_1_3; // 0x10
	::System::Action* Field_1_5; // 0x18
	::UnityEngine::GameObject* Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_4; // 0x28

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector2 a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D35B5D4865AF7021__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D35B5D4865AF7021_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_FFC478F2036EA29C(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D35B5D4865AF7021_METHOD_1_FFC478F2036EA29C_OFFSET))(this, a1);
	}
};

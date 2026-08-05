#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_3773F938AA2C6232;
class Class_2_51B971E69E38047E;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_51B971E69E38047E_CLASS_1_1F17313412C7293C_METHOD_1_399B06733B0B46A7_OFFSET UNITYSDK_OFFSET(0x137DA8B0)
#define CLASS_2_51B971E69E38047E_CLASS_1_1F17313412C7293C__CTOR_OFFSET UNITYSDK_OFFSET(0x137DA8A0)

inline static constexpr unsigned int Class_2_51B971E69E38047E_Class_1_1F17313412C7293C_TypeDefinitionIndex = 90563;

class Class_2_51B971E69E38047E_Class_1_1F17313412C7293C : public ::System::Object
{
public:
	::Class_2_51B971E69E38047E* Field_1_1; // 0x10
	::Class_1_3773F938AA2C6232* Field_1_2; // 0x18
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_1F17313412C7293C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_399B06733B0B46A7(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_1F17313412C7293C_METHOD_1_399B06733B0B46A7_OFFSET))(this, a1, a2);
	}
};

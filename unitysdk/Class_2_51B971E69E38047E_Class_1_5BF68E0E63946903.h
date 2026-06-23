#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_3773F938AA2C6232;
class Class_2_51B971E69E38047E;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_51B971E69E38047E_CLASS_1_5BF68E0E63946903_METHOD_1_C7F22EA1478BCAD9_OFFSET UNITYSDK_OFFSET(0x13072FB0)
#define CLASS_2_51B971E69E38047E_CLASS_1_5BF68E0E63946903__CTOR_OFFSET UNITYSDK_OFFSET(0x13072FA0)

inline static constexpr unsigned int Class_2_51B971E69E38047E_Class_1_5BF68E0E63946903_TypeDefinitionIndex = 84888;

class Class_2_51B971E69E38047E_Class_1_5BF68E0E63946903 : public ::System::Object
{
public:
	::Class_2_51B971E69E38047E* Field_1_1; // 0x10
	::System::Action* Field_1_2; // 0x18
	::Class_1_3773F938AA2C6232* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_5BF68E0E63946903__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C7F22EA1478BCAD9(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_5BF68E0E63946903_METHOD_1_C7F22EA1478BCAD9_OFFSET))(this, a1, a2);
	}
};

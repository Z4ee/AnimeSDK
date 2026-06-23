#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4865323EE33E9248;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DD9F5680A0B38846_METHOD_1_45D24B768818E73D_OFFSET UNITYSDK_OFFSET(0x123B7260)
#define CLASS_1_DD9F5680A0B38846_METHOD_1_4EE101B0805504FF_OFFSET UNITYSDK_OFFSET(0x123B7750)
#define CLASS_1_DD9F5680A0B38846_METHOD_1_C58793D9D6FBCA00_OFFSET UNITYSDK_OFFSET(0x123B73F0)
#define CLASS_1_DD9F5680A0B38846__CTOR_OFFSET UNITYSDK_OFFSET(0x123B7250)

inline static constexpr unsigned int Class_1_DD9F5680A0B38846_TypeDefinitionIndex = 67493;

class Class_1_DD9F5680A0B38846 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD9F5680A0B38846__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::GameObject* Method_1_45D24B768818E73D(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_DD9F5680A0B38846_METHOD_1_45D24B768818E73D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C58793D9D6FBCA00()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD9F5680A0B38846_METHOD_1_C58793D9D6FBCA00_OFFSET))();
	}

	static ::System::Boolean Method_1_4EE101B0805504FF(::Class_1_4865323EE33E9248* a1)
	{
		return ((::System::Boolean(*)(::Class_1_4865323EE33E9248*))((::PBYTE)hIl2Cpp + CLASS_1_DD9F5680A0B38846_METHOD_1_4EE101B0805504FF_OFFSET))(a1);
	}
};

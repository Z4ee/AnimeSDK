#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4865323EE33E9248;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DD9F5680A0B38846_METHOD_1_307ACF1AB0D1EF19_OFFSET UNITYSDK_OFFSET(0x133B4810)
#define CLASS_1_DD9F5680A0B38846_METHOD_1_45D24B768818E73D_OFFSET UNITYSDK_OFFSET(0x133B4680)
#define CLASS_1_DD9F5680A0B38846_METHOD_1_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0x133B4850)
#define CLASS_1_DD9F5680A0B38846__CTOR_OFFSET UNITYSDK_OFFSET(0x133B4670)

inline static constexpr unsigned int Class_1_DD9F5680A0B38846_TypeDefinitionIndex = 55973;

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

	static ::System::Boolean Method_1_307ACF1AB0D1EF19(::Class_1_4865323EE33E9248* a1)
	{
		return ((::System::Boolean(*)(::Class_1_4865323EE33E9248*))((::PBYTE)hIl2Cpp + CLASS_1_DD9F5680A0B38846_METHOD_1_307ACF1AB0D1EF19_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A0433AB55CC45192()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD9F5680A0B38846_METHOD_1_A0433AB55CC45192_OFFSET))();
	}
};

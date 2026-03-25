#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_9D56D7839902A26C_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x116C9F70)
#define CLASS_1_9D56D7839902A26C_METHOD_1_862293464D7343A8_OFFSET UNITYSDK_OFFSET(0x116C9FB0)
#define CLASS_1_9D56D7839902A26C__CTOR_OFFSET UNITYSDK_OFFSET(0x116C9FF0)

inline static constexpr unsigned int Class_1_9D56D7839902A26C_TypeDefinitionIndex = 38448;

class Class_1_9D56D7839902A26C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D56D7839902A26C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D56D7839902A26C_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_862293464D7343A8(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_9D56D7839902A26C_METHOD_1_862293464D7343A8_OFFSET))(a1);
	}
};

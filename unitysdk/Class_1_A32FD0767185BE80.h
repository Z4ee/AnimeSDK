#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_A32FD0767185BE80_METHOD_1_9133714F3CC7EBD9_OFFSET UNITYSDK_OFFSET(0x9912DA0)
#define CLASS_1_A32FD0767185BE80_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9912F80)
#define CLASS_1_A32FD0767185BE80__CTOR_OFFSET UNITYSDK_OFFSET(0x9912F70)

inline static constexpr unsigned int Class_1_A32FD0767185BE80_TypeDefinitionIndex = 62913;

class Class_1_A32FD0767185BE80 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A32FD0767185BE80__CTOR_OFFSET))(this);
	}

	static ::Class_1_A32FD0767185BE80* Method_1_9133714F3CC7EBD9(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_A32FD0767185BE80*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A32FD0767185BE80_METHOD_1_9133714F3CC7EBD9_OFFSET))(a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A32FD0767185BE80_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};

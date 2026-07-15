#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_39155512A8777971;
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_1_A7B2F9B4CEFBFFE1_METHOD_1_5073FF3B8D1722B3_OFFSET UNITYSDK_OFFSET(0x17A310C0)
#define CLASS_1_A7B2F9B4CEFBFFE1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A31120)

inline static constexpr unsigned int Class_1_A7B2F9B4CEFBFFE1_TypeDefinitionIndex = 47690;

class Class_1_A7B2F9B4CEFBFFE1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7B2F9B4CEFBFFE1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5073FF3B8D1722B3(::UnityEngine::Rendering::CommandBuffer* a1, ::Class_1_39155512A8777971* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::Class_1_39155512A8777971*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A7B2F9B4CEFBFFE1_METHOD_1_5073FF3B8D1722B3_OFFSET))(this, a1, a2, a3);
	}
};

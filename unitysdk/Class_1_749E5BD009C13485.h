#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_749E5BD009C13485__CTOR_OFFSET UNITYSDK_OFFSET(0x112D8020)

inline static constexpr unsigned int Class_1_749E5BD009C13485_TypeDefinitionIndex = 67738;

class Class_1_749E5BD009C13485 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_749E5BD009C13485__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define CLASS_1_7F1DB6872B2FD69B_METHOD_1_81E6D7CAEC54CF5E_OFFSET UNITYSDK_OFFSET(0x95A5B10)
#define CLASS_1_7F1DB6872B2FD69B__CTOR_OFFSET UNITYSDK_OFFSET(0x95A5BD0)

inline static constexpr unsigned int Class_1_7F1DB6872B2FD69B_TypeDefinitionIndex = 68225;

class Class_1_7F1DB6872B2FD69B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F1DB6872B2FD69B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_81E6D7CAEC54CF5E(::RPG::Client::ActivityAlley::AlleyPackComponent* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::RPG::Client::ActivityAlley::AlleyPackComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7F1DB6872B2FD69B_METHOD_1_81E6D7CAEC54CF5E_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define CLASS_1_1C85C027A02C2AFB_METHOD_1_46453AD25705C5B7_OFFSET UNITYSDK_OFFSET(0x1608ACC0)
#define CLASS_1_1C85C027A02C2AFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1608AD80)

inline static constexpr unsigned int Class_1_1C85C027A02C2AFB_TypeDefinitionIndex = 70720;

class Class_1_1C85C027A02C2AFB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C85C027A02C2AFB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_46453AD25705C5B7(::RPG::Client::ActivityAlley::AlleyPackComponent* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::RPG::Client::ActivityAlley::AlleyPackComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1C85C027A02C2AFB_METHOD_1_46453AD25705C5B7_OFFSET))(a1, a2);
	}
};

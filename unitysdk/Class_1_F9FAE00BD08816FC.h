#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define CLASS_1_F9FAE00BD08816FC_METHOD_1_88027BBF7AB64173_OFFSET UNITYSDK_OFFSET(0xBF31AD0)
#define CLASS_1_F9FAE00BD08816FC__CTOR_OFFSET UNITYSDK_OFFSET(0xBF31B90)

inline static constexpr unsigned int Class_1_F9FAE00BD08816FC_TypeDefinitionIndex = 69199;

class Class_1_F9FAE00BD08816FC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FAE00BD08816FC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_88027BBF7AB64173(::RPG::Client::ActivityAlley::AlleyPackComponent* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::RPG::Client::ActivityAlley::AlleyPackComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F9FAE00BD08816FC_METHOD_1_88027BBF7AB64173_OFFSET))(a1, a2);
	}
};

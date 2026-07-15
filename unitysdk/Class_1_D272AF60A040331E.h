#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::AI { class RVOAgent; }

#define CLASS_1_D272AF60A040331E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1640F0)

inline static constexpr unsigned int Class_1_D272AF60A040331E_TypeDefinitionIndex = 39611;

class Class_1_D272AF60A040331E : public ::System::Object
{
public:
	::UnityEngine::AI::RVOAgent* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D272AF60A040331E__CTOR_OFFSET))(this);
	}
};

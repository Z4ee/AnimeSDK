#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_EFA39E0DDB743805__CTOR_OFFSET UNITYSDK_OFFSET(0x122069B0)

inline static constexpr unsigned int Class_1_EFA39E0DDB743805_TypeDefinitionIndex = 57360;

class Class_1_EFA39E0DDB743805 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::UnityEngine::GameObject* BOIICKMDBFH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFA39E0DDB743805__CTOR_OFFSET))(this);
	}
};

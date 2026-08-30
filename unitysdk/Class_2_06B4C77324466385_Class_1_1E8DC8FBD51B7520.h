#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_06B4C77324466385_CLASS_1_1E8DC8FBD51B7520__CTOR_OFFSET UNITYSDK_OFFSET(0x11B81820)

inline static constexpr unsigned int Class_2_06B4C77324466385_Class_1_1E8DC8FBD51B7520_TypeDefinitionIndex = 71436;

class Class_2_06B4C77324466385_Class_1_1E8DC8FBD51B7520 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::UnityEngine::Transform* EGJIOFMAHGK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385_CLASS_1_1E8DC8FBD51B7520__CTOR_OFFSET))(this);
	}
};

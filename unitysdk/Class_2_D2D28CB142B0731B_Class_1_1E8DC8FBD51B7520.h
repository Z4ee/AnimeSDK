#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D2D28CB142B0731B_CLASS_1_1E8DC8FBD51B7520__CTOR_OFFSET UNITYSDK_OFFSET(0x14696580)

inline static constexpr unsigned int Class_2_D2D28CB142B0731B_Class_1_1E8DC8FBD51B7520_TypeDefinitionIndex = 68254;

class Class_2_D2D28CB142B0731B_Class_1_1E8DC8FBD51B7520 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_CLASS_1_1E8DC8FBD51B7520__CTOR_OFFSET))(this);
	}
};

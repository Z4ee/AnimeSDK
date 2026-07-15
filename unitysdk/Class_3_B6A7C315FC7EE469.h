#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdvSetDynamicValueByTargetDistance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B6A7C315FC7EE469_METHOD_3_4D047432F8151DA0_OFFSET UNITYSDK_OFFSET(0x16242740)
#define CLASS_3_B6A7C315FC7EE469_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16242110)
#define CLASS_3_B6A7C315FC7EE469__CTOR_OFFSET UNITYSDK_OFFSET(0x162420E0)

inline static constexpr unsigned int Class_3_B6A7C315FC7EE469_TypeDefinitionIndex = 55315;

class Class_3_B6A7C315FC7EE469 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetDynamicValueByTargetDistance*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance*))((::PBYTE)hIl2Cpp + CLASS_3_B6A7C315FC7EE469__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B6A7C315FC7EE469_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_4D047432F8151DA0(::RPG::GameCore::GameEntity* a1, ::System::Single& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_B6A7C315FC7EE469_METHOD_3_4D047432F8151DA0_OFFSET))(this, a1, a2, a3);
	}
};

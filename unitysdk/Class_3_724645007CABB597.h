#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HideWaypoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_724645007CABB597_METHOD_3_C6E59C759625C00E_OFFSET UNITYSDK_OFFSET(0x18BD8FE0)
#define CLASS_3_724645007CABB597_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BD8EF0)
#define CLASS_3_724645007CABB597__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD8EC0)

inline static constexpr unsigned int Class_3_724645007CABB597_TypeDefinitionIndex = 58307;

class Class_3_724645007CABB597 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideWaypoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideWaypoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideWaypoint*))((::PBYTE)hIl2Cpp + CLASS_3_724645007CABB597__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_724645007CABB597_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_C6E59C759625C00E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_724645007CABB597_METHOD_3_C6E59C759625C00E_OFFSET))(a1);
	}
};

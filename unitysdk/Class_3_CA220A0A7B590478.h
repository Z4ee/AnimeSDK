#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEnableButtons; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA220A0A7B590478_METHOD_3_DB6AE91A68719504_OFFSET UNITYSDK_OFFSET(0x10AC69A0)
#define CLASS_3_CA220A0A7B590478_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AC6A50)
#define CLASS_3_CA220A0A7B590478__CTOR_OFFSET UNITYSDK_OFFSET(0x10AC6970)

inline static constexpr unsigned int Class_3_CA220A0A7B590478_TypeDefinitionIndex = 42366;

class Class_3_CA220A0A7B590478 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEnableButtons*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableButtons* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableButtons*))((::PBYTE)hIl2Cpp + CLASS_3_CA220A0A7B590478__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_3_DB6AE91A68719504()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA220A0A7B590478_METHOD_3_DB6AE91A68719504_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA220A0A7B590478_ONTASKBEGIN_OFFSET))(this);
	}
};

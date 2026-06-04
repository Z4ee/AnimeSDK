#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerStanceCountDown; }

#define CLASS_3_00853C6CDF008F92_METHOD_3_59ECDF80042811BA_OFFSET UNITYSDK_OFFSET(0x13C3C1E0)
#define CLASS_3_00853C6CDF008F92_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C3BFB0)
#define CLASS_3_00853C6CDF008F92__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3BF80)

inline static constexpr unsigned int Class_3_00853C6CDF008F92_TypeDefinitionIndex = 52084;

class Class_3_00853C6CDF008F92 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerStanceCountDown*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerStanceCountDown* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerStanceCountDown*))((::PBYTE)hIl2Cpp + CLASS_3_00853C6CDF008F92__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00853C6CDF008F92_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_59ECDF80042811BA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_00853C6CDF008F92_METHOD_3_59ECDF80042811BA_OFFSET))(this, a1, a2);
	}
};

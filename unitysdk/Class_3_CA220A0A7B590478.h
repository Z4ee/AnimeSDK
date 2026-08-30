#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEnableButtons; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA220A0A7B590478_METHOD_3_65DFBC6F8001491F_OFFSET UNITYSDK_OFFSET(0x157D5FC0)
#define CLASS_3_CA220A0A7B590478_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157D6160)
#define CLASS_3_CA220A0A7B590478__CTOR_OFFSET UNITYSDK_OFFSET(0x157D5F90)

inline static constexpr unsigned int Class_3_CA220A0A7B590478_TypeDefinitionIndex = 52626;

class Class_3_CA220A0A7B590478 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEnableButtons*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableButtons* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableButtons*))((::PBYTE)hIl2Cpp + CLASS_3_CA220A0A7B590478__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_3_65DFBC6F8001491F()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA220A0A7B590478_METHOD_3_65DFBC6F8001491F_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA220A0A7B590478_ONTASKBEGIN_OFFSET))(this);
	}
};

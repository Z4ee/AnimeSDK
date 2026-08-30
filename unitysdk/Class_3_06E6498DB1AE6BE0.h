#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetControlSkillMapping; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_06E6498DB1AE6BE0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15FFA160)
#define CLASS_3_06E6498DB1AE6BE0__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFA130)

inline static constexpr unsigned int Class_3_06E6498DB1AE6BE0_TypeDefinitionIndex = 55577;

class Class_3_06E6498DB1AE6BE0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetControlSkillMapping*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetControlSkillMapping* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetControlSkillMapping*))((::PBYTE)hIl2Cpp + CLASS_3_06E6498DB1AE6BE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E6498DB1AE6BE0_ONTASKBEGIN_OFFSET))(this);
	}
};

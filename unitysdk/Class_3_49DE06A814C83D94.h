#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtSkillFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_49DE06A814C83D94_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B27380)
#define CLASS_3_49DE06A814C83D94__CTOR_OFFSET UNITYSDK_OFFSET(0x13B27350)

inline static constexpr unsigned int Class_3_49DE06A814C83D94_TypeDefinitionIndex = 50381;

class Class_3_49DE06A814C83D94 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtSkillFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSkillFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSkillFinish*))((::PBYTE)hIl2Cpp + CLASS_3_49DE06A814C83D94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49DE06A814C83D94_ONTASKBEGIN_OFFSET))(this);
	}
};

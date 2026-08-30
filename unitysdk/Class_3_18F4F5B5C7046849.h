#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureTargetUseSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_18F4F5B5C7046849_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DB2510)
#define CLASS_3_18F4F5B5C7046849__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB24E0)

inline static constexpr unsigned int Class_3_18F4F5B5C7046849_TypeDefinitionIndex = 58069;

class Class_3_18F4F5B5C7046849 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureTargetUseSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTargetUseSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTargetUseSkill*))((::PBYTE)hIl2Cpp + CLASS_3_18F4F5B5C7046849__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18F4F5B5C7046849_ONTASKBEGIN_OFFSET))(this);
	}
};

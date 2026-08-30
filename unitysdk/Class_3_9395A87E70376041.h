#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableLocalPlayerIgnoreTimeRewindCollision; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9395A87E70376041_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179A71C0)
#define CLASS_3_9395A87E70376041__CTOR_OFFSET UNITYSDK_OFFSET(0x179A7190)

inline static constexpr unsigned int Class_3_9395A87E70376041_TypeDefinitionIndex = 53629;

class Class_3_9395A87E70376041 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision*))((::PBYTE)hIl2Cpp + CLASS_3_9395A87E70376041__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9395A87E70376041_ONTASKBEGIN_OFFSET))(this);
	}
};

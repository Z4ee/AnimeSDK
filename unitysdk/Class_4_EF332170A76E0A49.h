#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AddMazeBuffBaseTask_1.h"

namespace RPG::GameCore { class AddMazeBuff; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_EF332170A76E0A49_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160F9C10)
#define CLASS_4_EF332170A76E0A49__CTOR_OFFSET UNITYSDK_OFFSET(0x160F9C00)

inline static constexpr unsigned int Class_4_EF332170A76E0A49_TypeDefinitionIndex = 55291;

class Class_4_EF332170A76E0A49 : public ::RPG::GameCore::AddMazeBuffBaseTask_1<::RPG::GameCore::AddMazeBuff*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddMazeBuff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddMazeBuff*))((::PBYTE)hIl2Cpp + CLASS_4_EF332170A76E0A49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EF332170A76E0A49_ONTASKBEGIN_OFFSET))(this);
	}
};

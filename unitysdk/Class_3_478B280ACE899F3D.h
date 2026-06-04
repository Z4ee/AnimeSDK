#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StackCrazyAIBehavior; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_478B280ACE899F3D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144FCAB0)
#define CLASS_3_478B280ACE899F3D__CTOR_OFFSET UNITYSDK_OFFSET(0x144FCA80)

inline static constexpr unsigned int Class_3_478B280ACE899F3D_TypeDefinitionIndex = 51966;

class Class_3_478B280ACE899F3D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackCrazyAIBehavior*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackCrazyAIBehavior* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackCrazyAIBehavior*))((::PBYTE)hIl2Cpp + CLASS_3_478B280ACE899F3D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_478B280ACE899F3D_ONTASKBEGIN_OFFSET))(this);
	}
};

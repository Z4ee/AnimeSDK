#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BindTimeRewindParent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_242C927EB64FD95F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1649CA80)
#define CLASS_3_242C927EB64FD95F__CTOR_OFFSET UNITYSDK_OFFSET(0x1649CA50)

inline static constexpr unsigned int Class_3_242C927EB64FD95F_TypeDefinitionIndex = 50936;

class Class_3_242C927EB64FD95F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BindTimeRewindParent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindTimeRewindParent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindTimeRewindParent*))((::PBYTE)hIl2Cpp + CLASS_3_242C927EB64FD95F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_242C927EB64FD95F_ONTASKBEGIN_OFFSET))(this);
	}
};

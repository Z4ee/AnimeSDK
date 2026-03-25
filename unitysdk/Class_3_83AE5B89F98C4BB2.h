#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAfterImageEffect; }

#define CLASS_3_83AE5B89F98C4BB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C7CB70)
#define CLASS_3_83AE5B89F98C4BB2__CTOR_OFFSET UNITYSDK_OFFSET(0x10C7CB40)

inline static constexpr unsigned int Class_3_83AE5B89F98C4BB2_TypeDefinitionIndex = 45400;

class Class_3_83AE5B89F98C4BB2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerAfterImageEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAfterImageEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAfterImageEffect*))((::PBYTE)hIl2Cpp + CLASS_3_83AE5B89F98C4BB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83AE5B89F98C4BB2_ONTASKBEGIN_OFFSET))(this);
	}
};

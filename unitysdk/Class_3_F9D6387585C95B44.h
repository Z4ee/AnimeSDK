#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindControllerInteract; }

#define CLASS_3_F9D6387585C95B44_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117BF6A0)
#define CLASS_3_F9D6387585C95B44__CTOR_OFFSET UNITYSDK_OFFSET(0x117BF670)

inline static constexpr unsigned int Class_3_F9D6387585C95B44_TypeDefinitionIndex = 49227;

class Class_3_F9D6387585C95B44 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TimeRewindControllerInteract*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindControllerInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindControllerInteract*))((::PBYTE)hIl2Cpp + CLASS_3_F9D6387585C95B44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9D6387585C95B44_ONTASKBEGIN_OFFSET))(this);
	}
};

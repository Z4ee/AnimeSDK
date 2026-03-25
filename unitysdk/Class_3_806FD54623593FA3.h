#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PauseEntityFollowAttach; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_806FD54623593FA3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9EE63B0)
#define CLASS_3_806FD54623593FA3__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE6380)

inline static constexpr unsigned int Class_3_806FD54623593FA3_TypeDefinitionIndex = 44231;

class Class_3_806FD54623593FA3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PauseEntityFollowAttach*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseEntityFollowAttach* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseEntityFollowAttach*))((::PBYTE)hIl2Cpp + CLASS_3_806FD54623593FA3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_806FD54623593FA3_ONTASKBEGIN_OFFSET))(this);
	}
};

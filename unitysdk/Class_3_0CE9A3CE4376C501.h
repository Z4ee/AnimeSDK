#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MoveTeam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0CE9A3CE4376C501_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x167164D0)
#define CLASS_3_0CE9A3CE4376C501__CTOR_OFFSET UNITYSDK_OFFSET(0x167164A0)

inline static constexpr unsigned int Class_3_0CE9A3CE4376C501_TypeDefinitionIndex = 52728;

class Class_3_0CE9A3CE4376C501 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MoveTeam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveTeam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveTeam*))((::PBYTE)hIl2Cpp + CLASS_3_0CE9A3CE4376C501__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0CE9A3CE4376C501_ONTASKBEGIN_OFFSET))(this);
	}
};

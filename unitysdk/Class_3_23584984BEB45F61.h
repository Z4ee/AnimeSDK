#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroTeleportTiming; }

#define CLASS_3_23584984BEB45F61_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E1A280)
#define CLASS_3_23584984BEB45F61__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1A250)

inline static constexpr unsigned int Class_3_23584984BEB45F61_TypeDefinitionIndex = 56332;

class Class_3_23584984BEB45F61 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroTeleportTiming*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroTeleportTiming* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroTeleportTiming*))((::PBYTE)hIl2Cpp + CLASS_3_23584984BEB45F61__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23584984BEB45F61_ONTASKBEGIN_OFFSET))(this);
	}
};

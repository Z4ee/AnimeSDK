#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddChallengeBossInfoPanelState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AC517A017B7FAD98_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12A4C510)
#define CLASS_3_AC517A017B7FAD98__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4C4E0)

inline static constexpr unsigned int Class_3_AC517A017B7FAD98_TypeDefinitionIndex = 51336;

class Class_3_AC517A017B7FAD98 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddChallengeBossInfoPanelState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddChallengeBossInfoPanelState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + CLASS_3_AC517A017B7FAD98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC517A017B7FAD98_ONTASKBEGIN_OFFSET))(this);
	}
};

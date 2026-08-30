#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RoadRashGameAbility_UltimateV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7F9694EEAE5C159C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12EA0090)
#define CLASS_3_7F9694EEAE5C159C__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA0060)

inline static constexpr unsigned int Class_3_7F9694EEAE5C159C_TypeDefinitionIndex = 58560;

class Class_3_7F9694EEAE5C159C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::RoadRashGameAbility_UltimateV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_UltimateV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_UltimateV2*))((::PBYTE)hIl2Cpp + CLASS_3_7F9694EEAE5C159C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F9694EEAE5C159C_ONTASKBEGIN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RoadRashGameAbility_ReleaseCharging; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_436E38899A75A5AB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1916B020)
#define CLASS_3_436E38899A75A5AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1916AFF0)

inline static constexpr unsigned int Class_3_436E38899A75A5AB_TypeDefinitionIndex = 58556;

class Class_3_436E38899A75A5AB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::RoadRashGameAbility_ReleaseCharging*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_ReleaseCharging* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_ReleaseCharging*))((::PBYTE)hIl2Cpp + CLASS_3_436E38899A75A5AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_436E38899A75A5AB_ONTASKBEGIN_OFFSET))(this);
	}
};

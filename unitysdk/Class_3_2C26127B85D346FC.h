#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RoadRashGameAbility_Ultimate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2C26127B85D346FC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4871A0)
#define CLASS_3_2C26127B85D346FC__CTOR_OFFSET UNITYSDK_OFFSET(0xC487170)

inline static constexpr unsigned int Class_3_2C26127B85D346FC_TypeDefinitionIndex = 58559;

class Class_3_2C26127B85D346FC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::RoadRashGameAbility_Ultimate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_Ultimate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_Ultimate*))((::PBYTE)hIl2Cpp + CLASS_3_2C26127B85D346FC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C26127B85D346FC_ONTASKBEGIN_OFFSET))(this);
	}
};

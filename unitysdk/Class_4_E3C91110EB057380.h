#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureTriggerMoveTaskBase_1.h"

namespace RPG::GameCore { class AdventureTriggerMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_E3C91110EB057380__CTOR_OFFSET UNITYSDK_OFFSET(0x967F110)

inline static constexpr unsigned int Class_4_E3C91110EB057380_TypeDefinitionIndex = 53420;

class Class_4_E3C91110EB057380 : public ::RPG::GameCore::AdventureTriggerMoveTaskBase_1<::RPG::GameCore::AdventureTriggerMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerMove*))((::PBYTE)hIl2Cpp + CLASS_4_E3C91110EB057380__CTOR_OFFSET))(this, a1, a2);
	}
};

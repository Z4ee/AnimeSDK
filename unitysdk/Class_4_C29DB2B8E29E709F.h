#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureTriggerMoveTaskBase_1.h"

namespace RPG::GameCore { class AdventureTriggerMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_C29DB2B8E29E709F__CTOR_OFFSET UNITYSDK_OFFSET(0x1808B5F0)

inline static constexpr unsigned int Class_4_C29DB2B8E29E709F_TypeDefinitionIndex = 58080;

class Class_4_C29DB2B8E29E709F : public ::RPG::GameCore::AdventureTriggerMoveTaskBase_1<::RPG::GameCore::AdventureTriggerMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerMove*))((::PBYTE)hIl2Cpp + CLASS_4_C29DB2B8E29E709F__CTOR_OFFSET))(this, a1, a2);
	}
};

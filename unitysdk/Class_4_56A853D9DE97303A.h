#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureTriggerMoveTaskBase_1.h"

namespace RPG::GameCore { class AdventureTriggerMoveApplyRunSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_56A853D9DE97303A__CTOR_OFFSET UNITYSDK_OFFSET(0xB210180)

inline static constexpr unsigned int Class_4_56A853D9DE97303A_TypeDefinitionIndex = 53419;

class Class_4_56A853D9DE97303A : public ::RPG::GameCore::AdventureTriggerMoveTaskBase_1<::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed*))((::PBYTE)hIl2Cpp + CLASS_4_56A853D9DE97303A__CTOR_OFFSET))(this, a1, a2);
	}
};

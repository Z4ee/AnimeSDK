#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvGameplayCounterRecover; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9EEC94E1928EE102_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8858290)
#define CLASS_3_9EEC94E1928EE102__CTOR_OFFSET UNITYSDK_OFFSET(0x8858260)

inline static constexpr unsigned int Class_3_9EEC94E1928EE102_TypeDefinitionIndex = 42392;

class Class_3_9EEC94E1928EE102 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvGameplayCounterRecover*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGameplayCounterRecover* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGameplayCounterRecover*))((::PBYTE)hIl2Cpp + CLASS_3_9EEC94E1928EE102__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EEC94E1928EE102_ONTASKBEGIN_OFFSET))(this);
	}
};

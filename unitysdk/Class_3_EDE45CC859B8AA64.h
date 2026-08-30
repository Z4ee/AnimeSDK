#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_2.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StatisticEventType.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBattleStatisticEvent; }

#define CLASS_3_EDE45CC859B8AA64_METHOD_3_8050951FA39C7AE6_OFFSET UNITYSDK_OFFSET(0x17EA5EB0)
#define CLASS_3_EDE45CC859B8AA64_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EA5B90)
#define CLASS_3_EDE45CC859B8AA64__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA5B60)

inline static constexpr unsigned int Class_3_EDE45CC859B8AA64_TypeDefinitionIndex = 55910;

class Class_3_EDE45CC859B8AA64 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerBattleStatisticEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBattleStatisticEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBattleStatisticEvent*))((::PBYTE)hIl2Cpp + CLASS_3_EDE45CC859B8AA64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDE45CC859B8AA64_ONTASKBEGIN_OFFSET))(this);
	}

	::Enum_3_F80BFD5B986D5503_2 Method_3_8050951FA39C7AE6(::RPG::GameCore::StatisticEventType a1)
	{
		return ((::Enum_3_F80BFD5B986D5503_2(*)(::PVOID, ::RPG::GameCore::StatisticEventType))((::PBYTE)hIl2Cpp + CLASS_3_EDE45CC859B8AA64_METHOD_3_8050951FA39C7AE6_OFFSET))(this, a1);
	}
};

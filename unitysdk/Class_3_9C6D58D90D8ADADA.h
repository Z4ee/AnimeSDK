#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvLogisticsRobotReachEnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9C6D58D90D8ADADA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162BF8F0)
#define CLASS_3_9C6D58D90D8ADADA__CTOR_OFFSET UNITYSDK_OFFSET(0x162BF8C0)

inline static constexpr unsigned int Class_3_9C6D58D90D8ADADA_TypeDefinitionIndex = 52669;

class Class_3_9C6D58D90D8ADADA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvLogisticsRobotReachEnd*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLogisticsRobotReachEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLogisticsRobotReachEnd*))((::PBYTE)hIl2Cpp + CLASS_3_9C6D58D90D8ADADA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C6D58D90D8ADADA_ONTASKBEGIN_OFFSET))(this);
	}
};

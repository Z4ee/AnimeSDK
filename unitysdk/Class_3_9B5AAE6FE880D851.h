#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvLogisticsRobotBlockByDoor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9B5AAE6FE880D851_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17BC66D0)
#define CLASS_3_9B5AAE6FE880D851__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC66A0)

inline static constexpr unsigned int Class_3_9B5AAE6FE880D851_TypeDefinitionIndex = 52667;

class Class_3_9B5AAE6FE880D851 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvLogisticsRobotBlockByDoor*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor*))((::PBYTE)hIl2Cpp + CLASS_3_9B5AAE6FE880D851__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B5AAE6FE880D851_ONTASKBEGIN_OFFSET))(this);
	}
};

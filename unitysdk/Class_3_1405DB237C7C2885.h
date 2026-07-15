#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvLogisticsRobotDoorOpen; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1405DB237C7C2885_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x142866B0)
#define CLASS_3_1405DB237C7C2885__CTOR_OFFSET UNITYSDK_OFFSET(0x14286680)

inline static constexpr unsigned int Class_3_1405DB237C7C2885_TypeDefinitionIndex = 50007;

class Class_3_1405DB237C7C2885 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvLogisticsRobotDoorOpen*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLogisticsRobotDoorOpen* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLogisticsRobotDoorOpen*))((::PBYTE)hIl2Cpp + CLASS_3_1405DB237C7C2885__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1405DB237C7C2885_ONTASKBEGIN_OFFSET))(this);
	}
};

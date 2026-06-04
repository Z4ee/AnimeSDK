#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DronesSwitchDynamicCollider; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EBA0335A18625977_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7246A0)
#define CLASS_3_EBA0335A18625977__CTOR_OFFSET UNITYSDK_OFFSET(0xC724670)

inline static constexpr unsigned int Class_3_EBA0335A18625977_TypeDefinitionIndex = 54290;

class Class_3_EBA0335A18625977 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DronesSwitchDynamicCollider*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DronesSwitchDynamicCollider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DronesSwitchDynamicCollider*))((::PBYTE)hIl2Cpp + CLASS_3_EBA0335A18625977__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBA0335A18625977_ONTASKBEGIN_OFFSET))(this);
	}
};

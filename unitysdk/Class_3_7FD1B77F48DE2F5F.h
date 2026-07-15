#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvChaseBailuSetDoor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7FD1B77F48DE2F5F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18393150)
#define CLASS_3_7FD1B77F48DE2F5F__CTOR_OFFSET UNITYSDK_OFFSET(0x18393120)

inline static constexpr unsigned int Class_3_7FD1B77F48DE2F5F_TypeDefinitionIndex = 49955;

class Class_3_7FD1B77F48DE2F5F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvChaseBailuSetDoor*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvChaseBailuSetDoor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvChaseBailuSetDoor*))((::PBYTE)hIl2Cpp + CLASS_3_7FD1B77F48DE2F5F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FD1B77F48DE2F5F_ONTASKBEGIN_OFFSET))(this);
	}
};

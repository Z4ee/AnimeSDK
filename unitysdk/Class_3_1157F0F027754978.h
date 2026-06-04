#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEntitySyncFreeStyleWithSound; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1157F0F027754978_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2A5AE0)
#define CLASS_3_1157F0F027754978__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A5AB0)

inline static constexpr unsigned int Class_3_1157F0F027754978_TypeDefinitionIndex = 48973;

class Class_3_1157F0F027754978 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEntitySyncFreeStyleWithSound*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound*))((::PBYTE)hIl2Cpp + CLASS_3_1157F0F027754978__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1157F0F027754978_ONTASKBEGIN_OFFSET))(this);
	}
};

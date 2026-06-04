#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SyncDitherWithTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_23C1EE5C3C6C04E3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13FE2740)
#define CLASS_3_23C1EE5C3C6C04E3__CTOR_OFFSET UNITYSDK_OFFSET(0x13FE2710)

inline static constexpr unsigned int Class_3_23C1EE5C3C6C04E3_TypeDefinitionIndex = 54901;

class Class_3_23C1EE5C3C6C04E3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SyncDitherWithTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SyncDitherWithTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SyncDitherWithTarget*))((::PBYTE)hIl2Cpp + CLASS_3_23C1EE5C3C6C04E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23C1EE5C3C6C04E3_ONTASKBEGIN_OFFSET))(this);
	}
};

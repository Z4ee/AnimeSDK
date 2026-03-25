#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetLocalOffsetAsMoveTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4CE8E635EE45EDB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99E2870)
#define CLASS_3_4CE8E635EE45EDB2__CTOR_OFFSET UNITYSDK_OFFSET(0x99E2840)

inline static constexpr unsigned int Class_3_4CE8E635EE45EDB2_TypeDefinitionIndex = 44472;

class Class_3_4CE8E635EE45EDB2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetLocalOffsetAsMoveTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLocalOffsetAsMoveTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLocalOffsetAsMoveTarget*))((::PBYTE)hIl2Cpp + CLASS_3_4CE8E635EE45EDB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CE8E635EE45EDB2_ONTASKBEGIN_OFFSET))(this);
	}
};

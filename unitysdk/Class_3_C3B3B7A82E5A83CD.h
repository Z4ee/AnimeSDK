#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAutoLayoutTransferPerform; }

#define CLASS_3_C3B3B7A82E5A83CD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19182830)
#define CLASS_3_C3B3B7A82E5A83CD__CTOR_OFFSET UNITYSDK_OFFSET(0x19182800)

inline static constexpr unsigned int Class_3_C3B3B7A82E5A83CD_TypeDefinitionIndex = 55907;

class Class_3_C3B3B7A82E5A83CD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerAutoLayoutTransferPerform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAutoLayoutTransferPerform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAutoLayoutTransferPerform*))((::PBYTE)hIl2Cpp + CLASS_3_C3B3B7A82E5A83CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3B3B7A82E5A83CD_ONTASKBEGIN_OFFSET))(this);
	}
};

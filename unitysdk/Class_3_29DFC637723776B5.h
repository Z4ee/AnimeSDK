#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDeadHandler; }

#define CLASS_3_29DFC637723776B5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E60450)
#define CLASS_3_29DFC637723776B5__CTOR_OFFSET UNITYSDK_OFFSET(0x18E60420)

inline static constexpr unsigned int Class_3_29DFC637723776B5_TypeDefinitionIndex = 56651;

class Class_3_29DFC637723776B5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerDeadHandler*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerDeadHandler* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerDeadHandler*))((::PBYTE)hIl2Cpp + CLASS_3_29DFC637723776B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29DFC637723776B5_ONTASKBEGIN_OFFSET))(this);
	}
};

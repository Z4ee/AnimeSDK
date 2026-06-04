#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AttachPreshowDamageTypeForSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C7D9505904F46A33_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13BB5EF0)
#define CLASS_3_C7D9505904F46A33__CTOR_OFFSET UNITYSDK_OFFSET(0x13BB5EC0)

inline static constexpr unsigned int Class_3_C7D9505904F46A33_TypeDefinitionIndex = 51275;

class Class_3_C7D9505904F46A33 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AttachPreshowDamageTypeForSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachPreshowDamageTypeForSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachPreshowDamageTypeForSkill*))((::PBYTE)hIl2Cpp + CLASS_3_C7D9505904F46A33__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7D9505904F46A33_ONTASKBEGIN_OFFSET))(this);
	}
};

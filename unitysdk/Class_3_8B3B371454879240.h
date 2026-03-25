#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetPropInteractTriggerState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8B3B371454879240_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B5C5F0)
#define CLASS_3_8B3B371454879240__CTOR_OFFSET UNITYSDK_OFFSET(0x8B5C5C0)

inline static constexpr unsigned int Class_3_8B3B371454879240_TypeDefinitionIndex = 47264;

class Class_3_8B3B371454879240 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPropInteractTriggerState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPropInteractTriggerState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPropInteractTriggerState*))((::PBYTE)hIl2Cpp + CLASS_3_8B3B371454879240__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B3B371454879240_ONTASKBEGIN_OFFSET))(this);
	}
};

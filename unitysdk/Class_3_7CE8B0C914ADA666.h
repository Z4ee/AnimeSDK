#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetTriggerSkipFakeAvatar; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7CE8B0C914ADA666_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C6EBF0)
#define CLASS_3_7CE8B0C914ADA666__CTOR_OFFSET UNITYSDK_OFFSET(0x10C6EBC0)

inline static constexpr unsigned int Class_3_7CE8B0C914ADA666_TypeDefinitionIndex = 42516;

class Class_3_7CE8B0C914ADA666 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetTriggerSkipFakeAvatar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar*))((::PBYTE)hIl2Cpp + CLASS_3_7CE8B0C914ADA666__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7CE8B0C914ADA666_ONTASKBEGIN_OFFSET))(this);
	}
};

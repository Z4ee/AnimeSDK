#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GlobalModifyInsertAbilityPriority; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A21AC2E7E40783E9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B3F680)
#define CLASS_3_A21AC2E7E40783E9__CTOR_OFFSET UNITYSDK_OFFSET(0x11B3F650)

inline static constexpr unsigned int Class_3_A21AC2E7E40783E9_TypeDefinitionIndex = 50778;

class Class_3_A21AC2E7E40783E9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GlobalModifyInsertAbilityPriority*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalModifyInsertAbilityPriority* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalModifyInsertAbilityPriority*))((::PBYTE)hIl2Cpp + CLASS_3_A21AC2E7E40783E9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A21AC2E7E40783E9_ONTASKBEGIN_OFFSET))(this);
	}
};

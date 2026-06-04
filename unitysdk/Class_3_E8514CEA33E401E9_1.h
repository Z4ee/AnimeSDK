#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NpcToPlayerDistanceTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E8514CEA33E401E9_1_METHOD_3_1680DDAD93EFD151_OFFSET UNITYSDK_OFFSET(0xBA117B0)
#define CLASS_3_E8514CEA33E401E9_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA112F0)
#define CLASS_3_E8514CEA33E401E9_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBA112C0)

inline static constexpr unsigned int Class_3_E8514CEA33E401E9_1_TypeDefinitionIndex = 49575;

class Class_3_E8514CEA33E401E9_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::NpcToPlayerDistanceTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NpcToPlayerDistanceTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NpcToPlayerDistanceTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_E8514CEA33E401E9_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8514CEA33E401E9_1_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_1680DDAD93EFD151(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E8514CEA33E401E9_1_METHOD_3_1680DDAD93EFD151_OFFSET))(this, a1, a2);
	}
};

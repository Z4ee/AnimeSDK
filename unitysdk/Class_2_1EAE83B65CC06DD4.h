#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapEnemyTeamEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1EAE83B65CC06DD4_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x8CC1F40)
#define CLASS_2_1EAE83B65CC06DD4__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC1F20)

inline static constexpr unsigned int Class_2_1EAE83B65CC06DD4_TypeDefinitionIndex = 47900;

class Class_2_1EAE83B65CC06DD4 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapEnemyTeamEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapEnemyTeamEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapEnemyTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1EAE83B65CC06DD4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_1EAE83B65CC06DD4_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

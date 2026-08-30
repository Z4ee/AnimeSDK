#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapEnemyTeamEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BA146D283E03D93E_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x182299E0)
#define CLASS_2_BA146D283E03D93E__CTOR_OFFSET UNITYSDK_OFFSET(0x182299C0)

inline static constexpr unsigned int Class_2_BA146D283E03D93E_TypeDefinitionIndex = 59389;

class Class_2_BA146D283E03D93E : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapEnemyTeamEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapEnemyTeamEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapEnemyTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BA146D283E03D93E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_BA146D283E03D93E_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

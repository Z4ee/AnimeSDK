#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTurnOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F757809A9F6BA2D1_3_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD9F4A60)
#define CLASS_3_F757809A9F6BA2D1_3__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F49E0)

inline static constexpr unsigned int Class_3_F757809A9F6BA2D1_3_TypeDefinitionIndex = 54516;

class Class_3_F757809A9F6BA2D1_3 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchTurnOwnerEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchTurnOwnerEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F757809A9F6BA2D1_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_F757809A9F6BA2D1_3_EVALUATE_OFFSET))(this, a1, a2);
	}
};

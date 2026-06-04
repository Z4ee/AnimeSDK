#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNextTurnOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_22F97BE0E1C8B973_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA613A20)
#define CLASS_3_22F97BE0E1C8B973__CTOR_OFFSET UNITYSDK_OFFSET(0xA6139D0)

inline static constexpr unsigned int Class_3_22F97BE0E1C8B973_TypeDefinitionIndex = 55311;

class Class_3_22F97BE0E1C8B973 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchNextTurnOwnerEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchNextTurnOwnerEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*))((::PBYTE)hIl2Cpp + CLASS_3_22F97BE0E1C8B973__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_22F97BE0E1C8B973_EVALUATE_OFFSET))(this, a1, a2);
	}
};

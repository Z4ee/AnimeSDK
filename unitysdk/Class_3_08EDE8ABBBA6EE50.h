#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentGroupNPCMonsters; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_08EDE8ABBBA6EE50_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1380F2D0)
#define CLASS_3_08EDE8ABBBA6EE50__CTOR_OFFSET UNITYSDK_OFFSET(0x1380F280)

inline static constexpr unsigned int Class_3_08EDE8ABBBA6EE50_TypeDefinitionIndex = 55215;

class Class_3_08EDE8ABBBA6EE50 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + CLASS_3_08EDE8ABBBA6EE50__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_08EDE8ABBBA6EE50_EVALUATE_OFFSET))(this, a1, a2);
	}
};

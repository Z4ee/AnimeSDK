#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCallBackModifierCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FC707D110C22881B_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x121D5C40)
#define CLASS_3_FC707D110C22881B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x121D5BF0)

inline static constexpr unsigned int Class_3_FC707D110C22881B_1_TypeDefinitionIndex = 59369;

class Class_3_FC707D110C22881B_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCallBackModifierCaster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCallBackModifierCaster* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + CLASS_3_FC707D110C22881B_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_FC707D110C22881B_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

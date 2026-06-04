#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCallBackModifierCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5190B377668F98AE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10618590)
#define CLASS_3_5190B377668F98AE__CTOR_OFFSET UNITYSDK_OFFSET(0x10618540)

inline static constexpr unsigned int Class_3_5190B377668F98AE_TypeDefinitionIndex = 55348;

class Class_3_5190B377668F98AE : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCallBackModifierCaster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCallBackModifierCaster* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + CLASS_3_5190B377668F98AE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5190B377668F98AE_EVALUATE_OFFSET))(this, a1, a2);
	}
};

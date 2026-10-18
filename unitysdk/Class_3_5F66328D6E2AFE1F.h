#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentInsertAbilityTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5F66328D6E2AFE1F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15595490)
#define CLASS_3_5F66328D6E2AFE1F_METHOD_3_CD537C1D549B889A_OFFSET UNITYSDK_OFFSET(0x15595680)
#define CLASS_3_5F66328D6E2AFE1F__CTOR_OFFSET UNITYSDK_OFFSET(0x15595420)

inline static constexpr unsigned int Class_3_5F66328D6E2AFE1F_TypeDefinitionIndex = 59121;

class Class_3_5F66328D6E2AFE1F : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*))((::PBYTE)hIl2Cpp + CLASS_3_5F66328D6E2AFE1F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5F66328D6E2AFE1F_EVALUATE_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_CD537C1D549B889A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5F66328D6E2AFE1F_METHOD_3_CD537C1D549B889A_OFFSET))(a1, a2);
	}
};

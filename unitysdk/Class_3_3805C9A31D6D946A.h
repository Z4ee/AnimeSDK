#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTrailblazer; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3805C9A31D6D946A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15974920)
#define CLASS_3_3805C9A31D6D946A__CTOR_OFFSET UNITYSDK_OFFSET(0x159748D0)

inline static constexpr unsigned int Class_3_3805C9A31D6D946A_TypeDefinitionIndex = 59299;

class Class_3_3805C9A31D6D946A : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchTrailblazer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchTrailblazer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + CLASS_3_3805C9A31D6D946A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3805C9A31D6D946A_EVALUATE_OFFSET))(this, a1, a2);
	}
};

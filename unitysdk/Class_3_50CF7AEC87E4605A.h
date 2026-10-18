#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAnchorByName; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_50CF7AEC87E4605A_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCF3F760)
#define CLASS_3_50CF7AEC87E4605A__CTOR_OFFSET UNITYSDK_OFFSET(0xCF3F710)

inline static constexpr unsigned int Class_3_50CF7AEC87E4605A_TypeDefinitionIndex = 59093;

class Class_3_50CF7AEC87E4605A : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAnchorByName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAnchorByName* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + CLASS_3_50CF7AEC87E4605A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_50CF7AEC87E4605A_EVALUATE_OFFSET))(this, a1, a2);
	}
};

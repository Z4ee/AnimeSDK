#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvLineup; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_10DFED7DE5F0A220_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x98C5F60)
#define CLASS_3_10DFED7DE5F0A220_1__CTOR_OFFSET UNITYSDK_OFFSET(0x98C5EE0)

inline static constexpr unsigned int Class_3_10DFED7DE5F0A220_1_TypeDefinitionIndex = 54617;

class Class_3_10DFED7DE5F0A220_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvLineup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvLineup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + CLASS_3_10DFED7DE5F0A220_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_10DFED7DE5F0A220_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

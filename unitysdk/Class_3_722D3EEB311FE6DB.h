#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchBloodLinkTargets; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_722D3EEB311FE6DB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13B3CF70)
#define CLASS_3_722D3EEB311FE6DB__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3CF20)

inline static constexpr unsigned int Class_3_722D3EEB311FE6DB_TypeDefinitionIndex = 55268;

class Class_3_722D3EEB311FE6DB : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchBloodLinkTargets*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchBloodLinkTargets* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + CLASS_3_722D3EEB311FE6DB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_722D3EEB311FE6DB_EVALUATE_OFFSET))(this, a1, a2);
	}
};

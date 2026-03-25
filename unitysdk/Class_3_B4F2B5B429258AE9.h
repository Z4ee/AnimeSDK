#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAllCustomUnselectable; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B4F2B5B429258AE9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x89B62E0)
#define CLASS_3_B4F2B5B429258AE9__CTOR_OFFSET UNITYSDK_OFFSET(0x89B6260)

inline static constexpr unsigned int Class_3_B4F2B5B429258AE9_TypeDefinitionIndex = 47805;

class Class_3_B4F2B5B429258AE9 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAllCustomUnselectable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAllCustomUnselectable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + CLASS_3_B4F2B5B429258AE9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_B4F2B5B429258AE9_EVALUATE_OFFSET))(this, a1, a2);
	}
};

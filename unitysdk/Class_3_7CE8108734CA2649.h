#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLastSearchEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7CE8108734CA2649_EVALUATE_OFFSET UNITYSDK_OFFSET(0x92B1CD0)
#define CLASS_3_7CE8108734CA2649__CTOR_OFFSET UNITYSDK_OFFSET(0x92B1C30)

inline static constexpr unsigned int Class_3_7CE8108734CA2649_TypeDefinitionIndex = 54500;

class Class_3_7CE8108734CA2649 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchLastSearchEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchLastSearchEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7CE8108734CA2649__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_7CE8108734CA2649_EVALUATE_OFFSET))(this, a1, a2);
	}
};

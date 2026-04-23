#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchParamEntityByIndex; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7CE8108734CA2649_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9BC4180)
#define CLASS_3_7CE8108734CA2649_2__CTOR_OFFSET UNITYSDK_OFFSET(0x9BC40E0)

inline static constexpr unsigned int Class_3_7CE8108734CA2649_2_TypeDefinitionIndex = 54622;

class Class_3_7CE8108734CA2649_2 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchParamEntityByIndex*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchParamEntityByIndex* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + CLASS_3_7CE8108734CA2649_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_7CE8108734CA2649_2_EVALUATE_OFFSET))(this, a1, a2);
	}
};

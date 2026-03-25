#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchMonsterByID; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7AE755AC98891878_EVALUATE_OFFSET UNITYSDK_OFFSET(0x87FA560)
#define CLASS_3_7AE755AC98891878__CTOR_OFFSET UNITYSDK_OFFSET(0x87FA4E0)

inline static constexpr unsigned int Class_3_7AE755AC98891878_TypeDefinitionIndex = 47893;

class Class_3_7AE755AC98891878 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchMonsterByID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchMonsterByID* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + CLASS_3_7AE755AC98891878__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_7AE755AC98891878_EVALUATE_OFFSET))(this, a1, a2);
	}
};

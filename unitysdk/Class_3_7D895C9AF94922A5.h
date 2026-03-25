#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvProp; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7D895C9AF94922A5_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBEB89D0)
#define CLASS_3_7D895C9AF94922A5__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB8950)

inline static constexpr unsigned int Class_3_7D895C9AF94922A5_TypeDefinitionIndex = 47751;

class Class_3_7D895C9AF94922A5 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + CLASS_3_7D895C9AF94922A5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_7D895C9AF94922A5_EVALUATE_OFFSET))(this, a1, a2);
	}
};

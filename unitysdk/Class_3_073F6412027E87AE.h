#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvProp; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_073F6412027E87AE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14308870)
#define CLASS_3_073F6412027E87AE__CTOR_OFFSET UNITYSDK_OFFSET(0x14308820)

inline static constexpr unsigned int Class_3_073F6412027E87AE_TypeDefinitionIndex = 55216;

class Class_3_073F6412027E87AE : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + CLASS_3_073F6412027E87AE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_073F6412027E87AE_EVALUATE_OFFSET))(this, a1, a2);
	}
};

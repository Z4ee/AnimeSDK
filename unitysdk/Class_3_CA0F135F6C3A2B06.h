#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchElationTimeSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_CA0F135F6C3A2B06_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1595AF50)
#define CLASS_3_CA0F135F6C3A2B06__CTOR_OFFSET UNITYSDK_OFFSET(0x1595AEE0)

inline static constexpr unsigned int Class_3_CA0F135F6C3A2B06_TypeDefinitionIndex = 59336;

class Class_3_CA0F135F6C3A2B06 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchElationTimeSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchElationTimeSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + CLASS_3_CA0F135F6C3A2B06__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_CA0F135F6C3A2B06_EVALUATE_OFFSET))(this, a1, a2);
	}
};

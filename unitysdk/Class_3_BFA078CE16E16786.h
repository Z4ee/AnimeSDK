#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTrailblazer; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BFA078CE16E16786_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA548410)
#define CLASS_3_BFA078CE16E16786__CTOR_OFFSET UNITYSDK_OFFSET(0xA548390)

inline static constexpr unsigned int Class_3_BFA078CE16E16786_TypeDefinitionIndex = 54551;

class Class_3_BFA078CE16E16786 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchTrailblazer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchTrailblazer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + CLASS_3_BFA078CE16E16786__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_BFA078CE16E16786_EVALUATE_OFFSET))(this, a1, a2);
	}
};

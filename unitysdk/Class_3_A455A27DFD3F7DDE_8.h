#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLevelEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A455A27DFD3F7DDE_8_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA6FA960)
#define CLASS_3_A455A27DFD3F7DDE_8__CTOR_OFFSET UNITYSDK_OFFSET(0xA6FA910)

inline static constexpr unsigned int Class_3_A455A27DFD3F7DDE_8_TypeDefinitionIndex = 55353;

class Class_3_A455A27DFD3F7DDE_8 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchLevelEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchLevelEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A455A27DFD3F7DDE_8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_A455A27DFD3F7DDE_8_EVALUATE_OFFSET))(this, a1, a2);
	}
};

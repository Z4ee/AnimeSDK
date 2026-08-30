#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentDamageDefender; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A455A27DFD3F7DDE_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A02C3A0)
#define CLASS_3_A455A27DFD3F7DDE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02C330)

inline static constexpr unsigned int Class_3_A455A27DFD3F7DDE_1_TypeDefinitionIndex = 59266;

class Class_3_A455A27DFD3F7DDE_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCurrentDamageDefender*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentDamageDefender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentDamageDefender*))((::PBYTE)hIl2Cpp + CLASS_3_A455A27DFD3F7DDE_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_A455A27DFD3F7DDE_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

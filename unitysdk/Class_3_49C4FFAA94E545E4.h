#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNone; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_49C4FFAA94E545E4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19CB29A0)
#define CLASS_3_49C4FFAA94E545E4__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB2950)

inline static constexpr unsigned int Class_3_49C4FFAA94E545E4_TypeDefinitionIndex = 59356;

class Class_3_49C4FFAA94E545E4 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchNone*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchNone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + CLASS_3_49C4FFAA94E545E4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_49C4FFAA94E545E4_EVALUATE_OFFSET))(this, a1, a2);
	}
};

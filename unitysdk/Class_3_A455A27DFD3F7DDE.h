#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvFakeAvatar; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A455A27DFD3F7DDE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10B52330)
#define CLASS_3_A455A27DFD3F7DDE__CTOR_OFFSET UNITYSDK_OFFSET(0x10B522B0)

inline static constexpr unsigned int Class_3_A455A27DFD3F7DDE_TypeDefinitionIndex = 47760;

class Class_3_A455A27DFD3F7DDE : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvFakeAvatar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvFakeAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvFakeAvatar*))((::PBYTE)hIl2Cpp + CLASS_3_A455A27DFD3F7DDE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_A455A27DFD3F7DDE_EVALUATE_OFFSET))(this, a1, a2);
	}
};

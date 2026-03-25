#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPassiveEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_67D097641DC5EBAA_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x99B4780)
#define CLASS_3_67D097641DC5EBAA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x99B4700)

inline static constexpr unsigned int Class_3_67D097641DC5EBAA_1_TypeDefinitionIndex = 47879;

class Class_3_67D097641DC5EBAA_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchPassiveEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchPassiveEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + CLASS_3_67D097641DC5EBAA_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_67D097641DC5EBAA_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

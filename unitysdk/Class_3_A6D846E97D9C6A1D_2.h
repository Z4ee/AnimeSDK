#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPassiveEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A6D846E97D9C6A1D_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19BD8AE0)
#define CLASS_3_A6D846E97D9C6A1D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD8A90)

inline static constexpr unsigned int Class_3_A6D846E97D9C6A1D_2_TypeDefinitionIndex = 59368;

class Class_3_A6D846E97D9C6A1D_2 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchPassiveEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchPassiveEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A6D846E97D9C6A1D_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_A6D846E97D9C6A1D_2_EVALUATE_OFFSET))(this, a1, a2);
	}
};

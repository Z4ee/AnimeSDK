#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentInsertTurnSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A6D846E97D9C6A1D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18AF5440)
#define CLASS_3_A6D846E97D9C6A1D__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF53F0)

inline static constexpr unsigned int Class_3_A6D846E97D9C6A1D_TypeDefinitionIndex = 56523;

class Class_3_A6D846E97D9C6A1D : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCurrentInsertTurnSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + CLASS_3_A6D846E97D9C6A1D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_A6D846E97D9C6A1D_EVALUATE_OFFSET))(this, a1, a2);
	}
};

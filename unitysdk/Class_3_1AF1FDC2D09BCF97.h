#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentInsertTurnSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1AF1FDC2D09BCF97_EVALUATE_OFFSET UNITYSDK_OFFSET(0x118FE760)
#define CLASS_3_1AF1FDC2D09BCF97__CTOR_OFFSET UNITYSDK_OFFSET(0x118FE6E0)

inline static constexpr unsigned int Class_3_1AF1FDC2D09BCF97_TypeDefinitionIndex = 47820;

class Class_3_1AF1FDC2D09BCF97 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCurrentInsertTurnSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + CLASS_3_1AF1FDC2D09BCF97__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_1AF1FDC2D09BCF97_EVALUATE_OFFSET))(this, a1, a2);
	}
};

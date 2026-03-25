#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNormalPam; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F757809A9F6BA2D1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10BDFE90)
#define CLASS_3_F757809A9F6BA2D1__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDFDF0)

inline static constexpr unsigned int Class_3_F757809A9F6BA2D1_TypeDefinitionIndex = 47755;

class Class_3_F757809A9F6BA2D1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchNormalPam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchNormalPam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + CLASS_3_F757809A9F6BA2D1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_F757809A9F6BA2D1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvPropEx; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B28FBE92D837311B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1706EDC0)
#define CLASS_3_B28FBE92D837311B__CTOR_OFFSET UNITYSDK_OFFSET(0x1706ED70)

inline static constexpr unsigned int Class_3_B28FBE92D837311B_TypeDefinitionIndex = 56450;

class Class_3_B28FBE92D837311B : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvPropEx*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvPropEx* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvPropEx*))((::PBYTE)hIl2Cpp + CLASS_3_B28FBE92D837311B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_B28FBE92D837311B_EVALUATE_OFFSET))(this, a1, a2);
	}
};

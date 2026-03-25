#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchElationTimeSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_10DFED7DE5F0A220_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10A142B0)
#define CLASS_3_10DFED7DE5F0A220_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10A14210)

inline static constexpr unsigned int Class_3_10DFED7DE5F0A220_1_TypeDefinitionIndex = 47847;

class Class_3_10DFED7DE5F0A220_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchElationTimeSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchElationTimeSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + CLASS_3_10DFED7DE5F0A220_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_10DFED7DE5F0A220_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

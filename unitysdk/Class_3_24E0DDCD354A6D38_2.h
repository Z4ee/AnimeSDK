#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchElationTimeAllTargets; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_24E0DDCD354A6D38_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17A8FC50)
#define CLASS_3_24E0DDCD354A6D38_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17A8FC00)

inline static constexpr unsigned int Class_3_24E0DDCD354A6D38_2_TypeDefinitionIndex = 56551;

class Class_3_24E0DDCD354A6D38_2 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchElationTimeAllTargets*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchElationTimeAllTargets* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchElationTimeAllTargets*))((::PBYTE)hIl2Cpp + CLASS_3_24E0DDCD354A6D38_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_24E0DDCD354A6D38_2_EVALUATE_OFFSET))(this, a1, a2);
	}
};

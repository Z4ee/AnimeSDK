#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchParamEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_50B6A97F3A707BD2_3_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF8DB30)
#define CLASS_3_50B6A97F3A707BD2_3__CTOR_OFFSET UNITYSDK_OFFSET(0xBF8DAE0)

inline static constexpr unsigned int Class_3_50B6A97F3A707BD2_3_TypeDefinitionIndex = 59367;

class Class_3_50B6A97F3A707BD2_3 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchParamEntityList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchParamEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchParamEntityList*))((::PBYTE)hIl2Cpp + CLASS_3_50B6A97F3A707BD2_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_50B6A97F3A707BD2_3_EVALUATE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchParamEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_67D097641DC5EBAA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB27BF30)
#define CLASS_3_67D097641DC5EBAA__CTOR_OFFSET UNITYSDK_OFFSET(0xB27BEB0)

inline static constexpr unsigned int Class_3_67D097641DC5EBAA_TypeDefinitionIndex = 47877;

class Class_3_67D097641DC5EBAA : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchParamEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchParamEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchParamEntity*))((::PBYTE)hIl2Cpp + CLASS_3_67D097641DC5EBAA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_67D097641DC5EBAA_EVALUATE_OFFSET))(this, a1, a2);
	}
};

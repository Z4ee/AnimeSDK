#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPropFarmElement; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_CA0F135F6C3A2B06_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE020F30)
#define CLASS_3_CA0F135F6C3A2B06__CTOR_OFFSET UNITYSDK_OFFSET(0xE020E90)

inline static constexpr unsigned int Class_3_CA0F135F6C3A2B06_TypeDefinitionIndex = 54616;

class Class_3_CA0F135F6C3A2B06 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchPropFarmElement*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchPropFarmElement* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPropFarmElement*))((::PBYTE)hIl2Cpp + CLASS_3_CA0F135F6C3A2B06__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_CA0F135F6C3A2B06_EVALUATE_OFFSET))(this, a1, a2);
	}
};

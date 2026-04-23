#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAidDefender; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4B524506463A9510_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12B3B650)
#define CLASS_3_4B524506463A9510_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3B5D0)

inline static constexpr unsigned int Class_3_4B524506463A9510_1_TypeDefinitionIndex = 54535;

class Class_3_4B524506463A9510_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAidDefender*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAidDefender* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + CLASS_3_4B524506463A9510_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_4B524506463A9510_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

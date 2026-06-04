#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSelector; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FCF85BC39C6EEB35_EVALUATE_OFFSET UNITYSDK_OFFSET(0x134C5A10)
#define CLASS_3_FCF85BC39C6EEB35__CTOR_OFFSET UNITYSDK_OFFSET(0x134C59C0)

inline static constexpr unsigned int Class_3_FCF85BC39C6EEB35_TypeDefinitionIndex = 55327;

class Class_3_FCF85BC39C6EEB35 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetSelector*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetSelector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + CLASS_3_FCF85BC39C6EEB35__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_FCF85BC39C6EEB35_EVALUATE_OFFSET))(this, a1, a2);
	}
};

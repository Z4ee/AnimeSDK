#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAnchorByName; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_21BC9A7DBB3A6D42_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1609D7E0)
#define CLASS_3_21BC9A7DBB3A6D42__CTOR_OFFSET UNITYSDK_OFFSET(0x1609D770)

inline static constexpr unsigned int Class_3_21BC9A7DBB3A6D42_TypeDefinitionIndex = 56457;

class Class_3_21BC9A7DBB3A6D42 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAnchorByName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAnchorByName* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + CLASS_3_21BC9A7DBB3A6D42__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_21BC9A7DBB3A6D42_EVALUATE_OFFSET))(this, a1, a2);
	}
};

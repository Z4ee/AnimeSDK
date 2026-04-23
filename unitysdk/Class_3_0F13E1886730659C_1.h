#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAnchorByName; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0F13E1886730659C_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8F952F0)
#define CLASS_3_0F13E1886730659C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8F95250)

inline static constexpr unsigned int Class_3_0F13E1886730659C_1_TypeDefinitionIndex = 54497;

class Class_3_0F13E1886730659C_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAnchorByName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAnchorByName* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + CLASS_3_0F13E1886730659C_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_0F13E1886730659C_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

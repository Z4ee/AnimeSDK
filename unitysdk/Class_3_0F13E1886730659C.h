#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAnchor; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0F13E1886730659C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11E112A0)
#define CLASS_3_0F13E1886730659C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E11200)

inline static constexpr unsigned int Class_3_0F13E1886730659C_TypeDefinitionIndex = 54496;

class Class_3_0F13E1886730659C : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAnchor*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAnchor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + CLASS_3_0F13E1886730659C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_0F13E1886730659C_EVALUATE_OFFSET))(this, a1, a2);
	}
};

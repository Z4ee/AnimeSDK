#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPropFarmElement; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FFFC13742245BAA2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1808D7C0)
#define CLASS_3_FFFC13742245BAA2__CTOR_OFFSET UNITYSDK_OFFSET(0x1808D750)

inline static constexpr unsigned int Class_3_FFFC13742245BAA2_TypeDefinitionIndex = 59364;

class Class_3_FFFC13742245BAA2 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchPropFarmElement*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchPropFarmElement* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPropFarmElement*))((::PBYTE)hIl2Cpp + CLASS_3_FFFC13742245BAA2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_FFFC13742245BAA2_EVALUATE_OFFSET))(this, a1, a2);
	}
};

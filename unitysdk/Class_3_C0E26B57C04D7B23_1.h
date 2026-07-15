#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAbilityGroup; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C0E26B57C04D7B23_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x183F39D0)
#define CLASS_3_C0E26B57C04D7B23_1__CTOR_OFFSET UNITYSDK_OFFSET(0x183F3980)

inline static constexpr unsigned int Class_3_C0E26B57C04D7B23_1_TypeDefinitionIndex = 56578;

class Class_3_C0E26B57C04D7B23_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAbilityGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAbilityGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAbilityGroup*))((::PBYTE)hIl2Cpp + CLASS_3_C0E26B57C04D7B23_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_C0E26B57C04D7B23_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

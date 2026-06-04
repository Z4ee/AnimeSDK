#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchContextDialogueTalkTrigger; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E595AF08019D5ACD_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13BD27C0)
#define CLASS_3_E595AF08019D5ACD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD2750)

inline static constexpr unsigned int Class_3_E595AF08019D5ACD_1_TypeDefinitionIndex = 55230;

class Class_3_E595AF08019D5ACD_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_E595AF08019D5ACD_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_E595AF08019D5ACD_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

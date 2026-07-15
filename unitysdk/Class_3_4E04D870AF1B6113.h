#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

class Class_0_16E4307DCC419505_515;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetAlias; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4E04D870AF1B6113_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16DBD9F0)
#define CLASS_3_4E04D870AF1B6113__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBD890)

inline static constexpr unsigned int Class_3_4E04D870AF1B6113_TypeDefinitionIndex = 56560;

class Class_3_4E04D870AF1B6113 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetAlias*>
{
public:
	::Class_0_16E4307DCC419505_515* Field_3_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetAlias* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetAlias*))((::PBYTE)hIl2Cpp + CLASS_3_4E04D870AF1B6113__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_4E04D870AF1B6113_EVALUATE_OFFSET))(this, a1, a2);
	}
};

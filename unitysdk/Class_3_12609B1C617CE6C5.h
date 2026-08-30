#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillSubTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_12609B1C617CE6C5_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC7BF810)
#define CLASS_3_12609B1C617CE6C5__CTOR_OFFSET UNITYSDK_OFFSET(0xC7BF7C0)

inline static constexpr unsigned int Class_3_12609B1C617CE6C5_TypeDefinitionIndex = 59280;

class Class_3_12609B1C617CE6C5 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*))((::PBYTE)hIl2Cpp + CLASS_3_12609B1C617CE6C5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_12609B1C617CE6C5_EVALUATE_OFFSET))(this, a1, a2);
	}
};

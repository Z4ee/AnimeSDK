#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchChessSkillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_68C8912459B4FA7E_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x118A7C40)
#define CLASS_3_68C8912459B4FA7E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x118A7BC0)

inline static constexpr unsigned int Class_3_68C8912459B4FA7E_1_TypeDefinitionIndex = 45188;

class Class_3_68C8912459B4FA7E_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchChessSkillTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchChessSkillTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchChessSkillTarget*))((::PBYTE)hIl2Cpp + CLASS_3_68C8912459B4FA7E_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_68C8912459B4FA7E_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

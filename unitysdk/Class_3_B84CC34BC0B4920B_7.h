#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchProjectileHitEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B84CC34BC0B4920B_7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x153CB330)
#define CLASS_3_B84CC34BC0B4920B_7__CTOR_OFFSET UNITYSDK_OFFSET(0x153CB2E0)

inline static constexpr unsigned int Class_3_B84CC34BC0B4920B_7_TypeDefinitionIndex = 59371;

class Class_3_B84CC34BC0B4920B_7 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchProjectileHitEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchProjectileHitEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B84CC34BC0B4920B_7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_B84CC34BC0B4920B_7_EVALUATE_OFFSET))(this, a1, a2);
	}
};

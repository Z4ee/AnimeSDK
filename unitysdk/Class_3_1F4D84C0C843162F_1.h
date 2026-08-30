#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNpcMonsterWithMazeBuff; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1F4D84C0C843162F_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18E1F790)
#define CLASS_3_1F4D84C0C843162F_1_METHOD_3_E8EE1F900069BEC0_OFFSET UNITYSDK_OFFSET(0x18E1F8C0)
#define CLASS_3_1F4D84C0C843162F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18E1F720)

inline static constexpr unsigned int Class_3_1F4D84C0C843162F_1_TypeDefinitionIndex = 59254;

class Class_3_1F4D84C0C843162F_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + CLASS_3_1F4D84C0C843162F_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_1F4D84C0C843162F_1_EVALUATE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_E8EE1F900069BEC0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_1F4D84C0C843162F_1_METHOD_3_E8EE1F900069BEC0_OFFSET))(this, a1);
	}
};

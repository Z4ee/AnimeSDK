#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNpcMonsterWithMazeBuff; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D28F7C1462BDB847_EVALUATE_OFFSET UNITYSDK_OFFSET(0x907F790)
#define CLASS_3_D28F7C1462BDB847_METHOD_3_E8EE1F900069BEC0_OFFSET UNITYSDK_OFFSET(0x907F890)
#define CLASS_3_D28F7C1462BDB847__CTOR_OFFSET UNITYSDK_OFFSET(0x907F6F0)

inline static constexpr unsigned int Class_3_D28F7C1462BDB847_TypeDefinitionIndex = 54510;

class Class_3_D28F7C1462BDB847 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + CLASS_3_D28F7C1462BDB847__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_D28F7C1462BDB847_EVALUATE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_E8EE1F900069BEC0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D28F7C1462BDB847_METHOD_3_E8EE1F900069BEC0_OFFSET))(this, a1);
	}
};

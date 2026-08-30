#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentGroupNPCMonsters; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D3674B494677ADEF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x190F7A70)
#define CLASS_3_D3674B494677ADEF__CTOR_OFFSET UNITYSDK_OFFSET(0x190F7A20)

inline static constexpr unsigned int Class_3_D3674B494677ADEF_TypeDefinitionIndex = 59232;

class Class_3_D3674B494677ADEF : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + CLASS_3_D3674B494677ADEF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_D3674B494677ADEF_EVALUATE_OFFSET))(this, a1, a2);
	}
};

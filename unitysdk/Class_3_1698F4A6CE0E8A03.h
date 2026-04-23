#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvAllNPCMonsters; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1698F4A6CE0E8A03_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11E64FD0)
#define CLASS_3_1698F4A6CE0E8A03__CTOR_OFFSET UNITYSDK_OFFSET(0x11E64F50)

inline static constexpr unsigned int Class_3_1698F4A6CE0E8A03_TypeDefinitionIndex = 54487;

class Class_3_1698F4A6CE0E8A03 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvAllNPCMonsters*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + CLASS_3_1698F4A6CE0E8A03__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_1698F4A6CE0E8A03_EVALUATE_OFFSET))(this, a1, a2);
	}
};

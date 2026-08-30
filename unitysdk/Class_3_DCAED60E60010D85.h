#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvAllNPCMonsters; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DCAED60E60010D85_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A79BE50)
#define CLASS_3_DCAED60E60010D85__CTOR_OFFSET UNITYSDK_OFFSET(0x1A79BE00)

inline static constexpr unsigned int Class_3_DCAED60E60010D85_TypeDefinitionIndex = 59231;

class Class_3_DCAED60E60010D85 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvAllNPCMonsters*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + CLASS_3_DCAED60E60010D85__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DCAED60E60010D85_EVALUATE_OFFSET))(this, a1, a2);
	}
};

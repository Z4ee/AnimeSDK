#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvNpcEx; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3F1A27CAAFB6A942_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA6D36E0)
#define CLASS_3_3F1A27CAAFB6A942__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D3660)

inline static constexpr unsigned int Class_3_3F1A27CAAFB6A942_TypeDefinitionIndex = 47754;

class Class_3_3F1A27CAAFB6A942 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvNpcEx*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvNpcEx* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + CLASS_3_3F1A27CAAFB6A942__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F1A27CAAFB6A942_EVALUATE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNone; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D8E9A6B2D1C63568_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD185100)
#define CLASS_3_D8E9A6B2D1C63568__CTOR_OFFSET UNITYSDK_OFFSET(0xD185080)

inline static constexpr unsigned int Class_3_D8E9A6B2D1C63568_TypeDefinitionIndex = 47867;

class Class_3_D8E9A6B2D1C63568 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchNone*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchNone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + CLASS_3_D8E9A6B2D1C63568__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_D8E9A6B2D1C63568_EVALUATE_OFFSET))(this, a1, a2);
	}
};

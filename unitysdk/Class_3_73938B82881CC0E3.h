#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchMonsterByID; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_73938B82881CC0E3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14B0F900)
#define CLASS_3_73938B82881CC0E3__CTOR_OFFSET UNITYSDK_OFFSET(0x14B0F8B0)

inline static constexpr unsigned int Class_3_73938B82881CC0E3_TypeDefinitionIndex = 56598;

class Class_3_73938B82881CC0E3 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchMonsterByID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchMonsterByID* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + CLASS_3_73938B82881CC0E3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_73938B82881CC0E3_EVALUATE_OFFSET))(this, a1, a2);
	}
};

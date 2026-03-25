#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPartner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A8F2E6E5D7EF8C1C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8D466B0)
#define CLASS_3_A8F2E6E5D7EF8C1C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D46630)

inline static constexpr unsigned int Class_3_A8F2E6E5D7EF8C1C_TypeDefinitionIndex = 47891;

class Class_3_A8F2E6E5D7EF8C1C : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchPartner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchPartner* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + CLASS_3_A8F2E6E5D7EF8C1C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_A8F2E6E5D7EF8C1C_EVALUATE_OFFSET))(this, a1, a2);
	}
};

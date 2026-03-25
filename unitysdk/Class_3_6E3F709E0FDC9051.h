#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvTeamLeader; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6E3F709E0FDC9051_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9EF28A0)
#define CLASS_3_6E3F709E0FDC9051__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF2820)

inline static constexpr unsigned int Class_3_6E3F709E0FDC9051_TypeDefinitionIndex = 47747;

class Class_3_6E3F709E0FDC9051 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvTeamLeader*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvTeamLeader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + CLASS_3_6E3F709E0FDC9051__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_6E3F709E0FDC9051_EVALUATE_OFFSET))(this, a1, a2);
	}
};

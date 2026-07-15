#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class AdvGroupFetchTargetByStringList; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5E05AA97054F8DBB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15893E50)
#define CLASS_3_5E05AA97054F8DBB__CTOR_OFFSET UNITYSDK_OFFSET(0x15893DE0)

inline static constexpr unsigned int Class_3_5E05AA97054F8DBB_TypeDefinitionIndex = 56467;

class Class_3_5E05AA97054F8DBB : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::AdvGroupFetchTargetByStringList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::AdvGroupFetchTargetByStringList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + CLASS_3_5E05AA97054F8DBB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5E05AA97054F8DBB_EVALUATE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTemplateEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_288BDB95A7B49D0D_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB8B4770)
#define CLASS_3_288BDB95A7B49D0D__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B4720)

inline static constexpr unsigned int Class_3_288BDB95A7B49D0D_TypeDefinitionIndex = 59296;

class Class_3_288BDB95A7B49D0D : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchTemplateEntityList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchTemplateEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTemplateEntityList*))((::PBYTE)hIl2Cpp + CLASS_3_288BDB95A7B49D0D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_288BDB95A7B49D0D_EVALUATE_OFFSET))(this, a1, a2);
	}
};

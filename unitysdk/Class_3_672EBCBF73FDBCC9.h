#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAllUnselectable; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_672EBCBF73FDBCC9_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAB6EEB0)
#define CLASS_3_672EBCBF73FDBCC9__CTOR_OFFSET UNITYSDK_OFFSET(0xAB6EE60)

inline static constexpr unsigned int Class_3_672EBCBF73FDBCC9_TypeDefinitionIndex = 55270;

class Class_3_672EBCBF73FDBCC9 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAllUnselectable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAllUnselectable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + CLASS_3_672EBCBF73FDBCC9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_672EBCBF73FDBCC9_EVALUATE_OFFSET))(this, a1, a2);
	}
};

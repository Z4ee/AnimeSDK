#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvProp; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BBE6797FBF1862B3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16723B00)
#define CLASS_3_BBE6797FBF1862B3__CTOR_OFFSET UNITYSDK_OFFSET(0x16723AB0)

inline static constexpr unsigned int Class_3_BBE6797FBF1862B3_TypeDefinitionIndex = 56449;

class Class_3_BBE6797FBF1862B3 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + CLASS_3_BBE6797FBF1862B3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_BBE6797FBF1862B3_EVALUATE_OFFSET))(this, a1, a2);
	}
};

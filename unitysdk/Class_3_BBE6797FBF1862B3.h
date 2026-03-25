#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAvatarByID; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BBE6797FBF1862B3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x104FE2F0)
#define CLASS_3_BBE6797FBF1862B3__CTOR_OFFSET UNITYSDK_OFFSET(0x104FE270)

inline static constexpr unsigned int Class_3_BBE6797FBF1862B3_TypeDefinitionIndex = 47894;

class Class_3_BBE6797FBF1862B3 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAvatarByID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAvatarByID* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + CLASS_3_BBE6797FBF1862B3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_BBE6797FBF1862B3_EVALUATE_OFFSET))(this, a1, a2);
	}
};

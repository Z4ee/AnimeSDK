#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvLocalPlayer; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_81D00BE53BFBFFD0_EVALUATE_OFFSET UNITYSDK_OFFSET(0x143F9E80)
#define CLASS_3_81D00BE53BFBFFD0__CTOR_OFFSET UNITYSDK_OFFSET(0x143F9E30)

inline static constexpr unsigned int Class_3_81D00BE53BFBFFD0_TypeDefinitionIndex = 55211;

class Class_3_81D00BE53BFBFFD0 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvLocalPlayer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvLocalPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_81D00BE53BFBFFD0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_81D00BE53BFBFFD0_EVALUATE_OFFSET))(this, a1, a2);
	}
};

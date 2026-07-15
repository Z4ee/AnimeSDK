#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetFetchTrigger; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_62661095177DCC75_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17025B10)
#define CLASS_3_62661095177DCC75__CTOR_OFFSET UNITYSDK_OFFSET(0x17025AA0)

inline static constexpr unsigned int Class_3_62661095177DCC75_TypeDefinitionIndex = 51326;

class Class_3_62661095177DCC75 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::RtTargetFetchTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetFetchTrigger* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_62661095177DCC75__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_62661095177DCC75_EVALUATE_OFFSET))(this, a1, a2);
	}
};

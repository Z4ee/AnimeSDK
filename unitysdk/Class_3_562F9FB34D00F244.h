#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetFetchPosWithMaxTargetCount; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_562F9FB34D00F244_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15548B30)
#define CLASS_3_562F9FB34D00F244__CTOR_OFFSET UNITYSDK_OFFSET(0x15548AC0)

inline static constexpr unsigned int Class_3_562F9FB34D00F244_TypeDefinitionIndex = 54011;

class Class_3_562F9FB34D00F244 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + CLASS_3_562F9FB34D00F244__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_562F9FB34D00F244_EVALUATE_OFFSET))(this, a1, a2);
	}
};

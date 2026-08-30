#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLastKillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_24E0DDCD354A6D38_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBE6EAC0)
#define CLASS_3_24E0DDCD354A6D38_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBE6EA50)

inline static constexpr unsigned int Class_3_24E0DDCD354A6D38_1_TypeDefinitionIndex = 59272;

class Class_3_24E0DDCD354A6D38_1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchLastKillTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchLastKillTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + CLASS_3_24E0DDCD354A6D38_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_24E0DDCD354A6D38_1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTurnOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DDFA1A60612B94D1_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19BD28A0)
#define CLASS_3_DDFA1A60612B94D1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD2850)

inline static constexpr unsigned int Class_3_DDFA1A60612B94D1_2_TypeDefinitionIndex = 59260;

class Class_3_DDFA1A60612B94D1_2 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchTurnOwnerEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchTurnOwnerEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DDFA1A60612B94D1_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DDFA1A60612B94D1_2_EVALUATE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillMainTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5183E2DCA9BD849D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x169A7B10)
#define CLASS_3_5183E2DCA9BD849D__CTOR_OFFSET UNITYSDK_OFFSET(0x169A7AC0)

inline static constexpr unsigned int Class_3_5183E2DCA9BD849D_TypeDefinitionIndex = 56495;

class Class_3_5183E2DCA9BD849D : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*))((::PBYTE)hIl2Cpp + CLASS_3_5183E2DCA9BD849D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_5183E2DCA9BD849D_EVALUATE_OFFSET))(this, a1, a2);
	}
};

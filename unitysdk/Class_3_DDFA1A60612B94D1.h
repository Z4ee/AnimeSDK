#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtBattleTargetCameraFocusTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DDFA1A60612B94D1_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB9C9FF0)
#define CLASS_3_DDFA1A60612B94D1__CTOR_OFFSET UNITYSDK_OFFSET(0xB9C9F80)

inline static constexpr unsigned int Class_3_DDFA1A60612B94D1_TypeDefinitionIndex = 54012;

class Class_3_DDFA1A60612B94D1 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::RtBattleTargetCameraFocusTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtBattleTargetCameraFocusTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*))((::PBYTE)hIl2Cpp + CLASS_3_DDFA1A60612B94D1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DDFA1A60612B94D1_EVALUATE_OFFSET))(this, a1, a2);
	}
};

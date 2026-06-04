#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapCreatedBattleEvent; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_520C20DA9DD5FCB2_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x13C42260)
#define CLASS_2_520C20DA9DD5FCB2__CTOR_OFFSET UNITYSDK_OFFSET(0x13C42240)

inline static constexpr unsigned int Class_2_520C20DA9DD5FCB2_TypeDefinitionIndex = 55358;

class Class_2_520C20DA9DD5FCB2 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapCreatedBattleEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapCreatedBattleEvent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapCreatedBattleEvent*))((::PBYTE)hIl2Cpp + CLASS_2_520C20DA9DD5FCB2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_520C20DA9DD5FCB2_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

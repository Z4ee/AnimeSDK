#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapBattleEventCreator; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8AC45920A0B8E16D_1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x11AE74A0)
#define CLASS_2_8AC45920A0B8E16D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE7480)

inline static constexpr unsigned int Class_2_8AC45920A0B8E16D_1_TypeDefinitionIndex = 54630;

class Class_2_8AC45920A0B8E16D_1 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapBattleEventCreator*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapBattleEventCreator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapBattleEventCreator*))((::PBYTE)hIl2Cpp + CLASS_2_8AC45920A0B8E16D_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_8AC45920A0B8E16D_1_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

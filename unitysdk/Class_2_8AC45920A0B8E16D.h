#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapBattleEventCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8AC45920A0B8E16D_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x8C55A90)
#define CLASS_2_8AC45920A0B8E16D__CTOR_OFFSET UNITYSDK_OFFSET(0x8C55A70)

inline static constexpr unsigned int Class_2_8AC45920A0B8E16D_TypeDefinitionIndex = 47888;

class Class_2_8AC45920A0B8E16D : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapBattleEventCaster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapBattleEventCaster* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapBattleEventCaster*))((::PBYTE)hIl2Cpp + CLASS_2_8AC45920A0B8E16D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_8AC45920A0B8E16D_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

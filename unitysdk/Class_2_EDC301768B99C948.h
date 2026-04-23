#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFilterAliveState; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EDC301768B99C948_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x9025BA0)
#define CLASS_2_EDC301768B99C948__CTOR_OFFSET UNITYSDK_OFFSET(0x9025B80)

inline static constexpr unsigned int Class_2_EDC301768B99C948_TypeDefinitionIndex = 54655;

class Class_2_EDC301768B99C948 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetFilterAliveState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFilterAliveState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + CLASS_2_EDC301768B99C948__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_EDC301768B99C948_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

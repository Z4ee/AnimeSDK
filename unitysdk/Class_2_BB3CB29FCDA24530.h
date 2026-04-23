#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapBetweenEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BB3CB29FCDA24530_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x12995FD0)
#define CLASS_2_BB3CB29FCDA24530__CTOR_OFFSET UNITYSDK_OFFSET(0x12995FB0)

inline static constexpr unsigned int Class_2_BB3CB29FCDA24530_TypeDefinitionIndex = 54525;

class Class_2_BB3CB29FCDA24530 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapBetweenEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapBetweenEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapBetweenEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BB3CB29FCDA24530__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_BB3CB29FCDA24530_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

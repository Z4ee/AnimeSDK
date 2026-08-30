#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapMoveTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_90946633088A8494_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x16944C40)
#define CLASS_2_90946633088A8494__CTOR_OFFSET UNITYSDK_OFFSET(0x16944C20)

inline static constexpr unsigned int Class_2_90946633088A8494_TypeDefinitionIndex = 54022;

class Class_2_90946633088A8494 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapMoveTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapMoveTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapMoveTarget*))((::PBYTE)hIl2Cpp + CLASS_2_90946633088A8494__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_90946633088A8494_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

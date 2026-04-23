#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapLockTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_90946633088A8494_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x99FF4A0)
#define CLASS_2_90946633088A8494__CTOR_OFFSET UNITYSDK_OFFSET(0x99FF480)

inline static constexpr unsigned int Class_2_90946633088A8494_TypeDefinitionIndex = 49584;

class Class_2_90946633088A8494 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapLockTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapLockTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapLockTarget*))((::PBYTE)hIl2Cpp + CLASS_2_90946633088A8494__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_90946633088A8494_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

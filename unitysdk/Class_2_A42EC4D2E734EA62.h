#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSnapshotEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A42EC4D2E734EA62_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC101530)
#define CLASS_2_A42EC4D2E734EA62__CTOR_OFFSET UNITYSDK_OFFSET(0xC101510)

inline static constexpr unsigned int Class_2_A42EC4D2E734EA62_TypeDefinitionIndex = 59397;

class Class_2_A42EC4D2E734EA62 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapSnapshotEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapSnapshotEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSnapshotEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A42EC4D2E734EA62__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A42EC4D2E734EA62_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

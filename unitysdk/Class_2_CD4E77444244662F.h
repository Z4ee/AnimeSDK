#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAttackTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CD4E77444244662F_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA224310)
#define CLASS_2_CD4E77444244662F__CTOR_OFFSET UNITYSDK_OFFSET(0xA2242F0)

inline static constexpr unsigned int Class_2_CD4E77444244662F_TypeDefinitionIndex = 47798;

class Class_2_CD4E77444244662F : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapAttackTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapAttackTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + CLASS_2_CD4E77444244662F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_CD4E77444244662F_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

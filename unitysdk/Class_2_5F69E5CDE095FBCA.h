#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAttackTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5F69E5CDE095FBCA_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x16EC8D00)
#define CLASS_2_5F69E5CDE095FBCA__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC8CE0)

inline static constexpr unsigned int Class_2_5F69E5CDE095FBCA_TypeDefinitionIndex = 56501;

class Class_2_5F69E5CDE095FBCA : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapAttackTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapAttackTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + CLASS_2_5F69E5CDE095FBCA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_5F69E5CDE095FBCA_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAttackTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D5A047331822A724_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x179CAB50)
#define CLASS_2_D5A047331822A724__CTOR_OFFSET UNITYSDK_OFFSET(0x179CAB30)

inline static constexpr unsigned int Class_2_D5A047331822A724_TypeDefinitionIndex = 59285;

class Class_2_D5A047331822A724 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapAttackTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapAttackTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + CLASS_2_D5A047331822A724__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_D5A047331822A724_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

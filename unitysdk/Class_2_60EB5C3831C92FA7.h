#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchActualOwner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_60EB5C3831C92FA7_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xAC42FA0)
#define CLASS_2_60EB5C3831C92FA7__CTOR_OFFSET UNITYSDK_OFFSET(0xAC42F80)

inline static constexpr unsigned int Class_2_60EB5C3831C92FA7_TypeDefinitionIndex = 47810;

class Class_2_60EB5C3831C92FA7 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetFetchActualOwner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchActualOwner* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + CLASS_2_60EB5C3831C92FA7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_60EB5C3831C92FA7_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

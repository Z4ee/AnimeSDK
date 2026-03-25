#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapPartToOwner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_95E4086CC0E9D441_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x8891A90)
#define CLASS_2_95E4086CC0E9D441__CTOR_OFFSET UNITYSDK_OFFSET(0x8891A70)

inline static constexpr unsigned int Class_2_95E4086CC0E9D441_TypeDefinitionIndex = 47848;

class Class_2_95E4086CC0E9D441 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapPartToOwner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapPartToOwner* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + CLASS_2_95E4086CC0E9D441__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_95E4086CC0E9D441_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapPartToOwner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7B74739682C36DA1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x14312150)
#define CLASS_2_7B74739682C36DA1__CTOR_OFFSET UNITYSDK_OFFSET(0x14312130)

inline static constexpr unsigned int Class_2_7B74739682C36DA1_TypeDefinitionIndex = 55316;

class Class_2_7B74739682C36DA1 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapPartToOwner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapPartToOwner* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + CLASS_2_7B74739682C36DA1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_7B74739682C36DA1_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

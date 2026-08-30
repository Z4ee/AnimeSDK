#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapPartToOwner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EAFDA6B7174B0876_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18568340)
#define CLASS_2_EAFDA6B7174B0876__CTOR_OFFSET UNITYSDK_OFFSET(0x18568320)

inline static constexpr unsigned int Class_2_EAFDA6B7174B0876_TypeDefinitionIndex = 59337;

class Class_2_EAFDA6B7174B0876 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapPartToOwner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapPartToOwner* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + CLASS_2_EAFDA6B7174B0876__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_EAFDA6B7174B0876_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapLockTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AF4D39D248C49F9C_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB815840)
#define CLASS_2_AF4D39D248C49F9C__CTOR_OFFSET UNITYSDK_OFFSET(0xB815820)

inline static constexpr unsigned int Class_2_AF4D39D248C49F9C_TypeDefinitionIndex = 54017;

class Class_2_AF4D39D248C49F9C : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapLockTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapLockTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapLockTarget*))((::PBYTE)hIl2Cpp + CLASS_2_AF4D39D248C49F9C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_AF4D39D248C49F9C_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSkillPointEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_61A7D4409E4FA6D0_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xAA640B0)
#define CLASS_2_61A7D4409E4FA6D0__CTOR_OFFSET UNITYSDK_OFFSET(0xAA64090)

inline static constexpr unsigned int Class_2_61A7D4409E4FA6D0_TypeDefinitionIndex = 55370;

class Class_2_61A7D4409E4FA6D0 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapSkillPointEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapSkillPointEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + CLASS_2_61A7D4409E4FA6D0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_61A7D4409E4FA6D0_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

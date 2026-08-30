#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSkillPointEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AB856C756403C675_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x17F4F830)
#define CLASS_2_AB856C756403C675__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4F810)

inline static constexpr unsigned int Class_2_AB856C756403C675_TypeDefinitionIndex = 59391;

class Class_2_AB856C756403C675 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapSkillPointEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapSkillPointEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AB856C756403C675__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_AB856C756403C675_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

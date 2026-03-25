#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSkillSubTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E08F23CABF42C1ED_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x113A9A70)
#define CLASS_2_E08F23CABF42C1ED__CTOR_OFFSET UNITYSDK_OFFSET(0x113A9A50)

inline static constexpr unsigned int Class_2_E08F23CABF42C1ED_TypeDefinitionIndex = 47785;

class Class_2_E08F23CABF42C1ED : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapSkillSubTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapSkillSubTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSkillSubTarget*))((::PBYTE)hIl2Cpp + CLASS_2_E08F23CABF42C1ED__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E08F23CABF42C1ED_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

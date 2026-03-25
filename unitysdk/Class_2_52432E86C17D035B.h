#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSkillIndicatorTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_52432E86C17D035B_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x8D089B0)
#define CLASS_2_52432E86C17D035B__CTOR_OFFSET UNITYSDK_OFFSET(0x8D08990)

inline static constexpr unsigned int Class_2_52432E86C17D035B_TypeDefinitionIndex = 47784;

class Class_2_52432E86C17D035B : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapSkillIndicatorTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapSkillIndicatorTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + CLASS_2_52432E86C17D035B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_52432E86C17D035B_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

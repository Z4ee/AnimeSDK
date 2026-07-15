#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSkillIndicatorTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D7707F4191DA64FC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x140EF700)
#define CLASS_2_D7707F4191DA64FC__CTOR_OFFSET UNITYSDK_OFFSET(0x140EF6E0)

inline static constexpr unsigned int Class_2_D7707F4191DA64FC_TypeDefinitionIndex = 56483;

class Class_2_D7707F4191DA64FC : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapSkillIndicatorTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapSkillIndicatorTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + CLASS_2_D7707F4191DA64FC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_D7707F4191DA64FC_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

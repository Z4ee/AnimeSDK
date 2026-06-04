#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSkillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C12FFFC2F8E0B4BC_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xAF62DA0)
#define CLASS_2_C12FFFC2F8E0B4BC__CTOR_OFFSET UNITYSDK_OFFSET(0xAF62D80)

inline static constexpr unsigned int Class_2_C12FFFC2F8E0B4BC_TypeDefinitionIndex = 55371;

class Class_2_C12FFFC2F8E0B4BC : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapSkillTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapSkillTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + CLASS_2_C12FFFC2F8E0B4BC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C12FFFC2F8E0B4BC_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

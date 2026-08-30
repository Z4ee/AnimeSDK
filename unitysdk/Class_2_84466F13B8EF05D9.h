#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapSkillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_84466F13B8EF05D9_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC0B3030)
#define CLASS_2_84466F13B8EF05D9__CTOR_OFFSET UNITYSDK_OFFSET(0xC0B3010)

inline static constexpr unsigned int Class_2_84466F13B8EF05D9_TypeDefinitionIndex = 54018;

class Class_2_84466F13B8EF05D9 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapSkillTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapSkillTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapSkillTarget*))((::PBYTE)hIl2Cpp + CLASS_2_84466F13B8EF05D9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_84466F13B8EF05D9_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

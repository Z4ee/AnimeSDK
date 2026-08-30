#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapSkillAbortSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0D41D0B7B372D8A9_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18B6B690)
#define CLASS_2_0D41D0B7B372D8A9__CTOR_OFFSET UNITYSDK_OFFSET(0x18B6B670)

inline static constexpr unsigned int Class_2_0D41D0B7B372D8A9_TypeDefinitionIndex = 54020;

class Class_2_0D41D0B7B372D8A9 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapSkillAbortSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapSkillAbortSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + CLASS_2_0D41D0B7B372D8A9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_0D41D0B7B372D8A9_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

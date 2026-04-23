#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapSkillAbortSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6FF9817F69C82BD8_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x930CBA0)
#define CLASS_2_6FF9817F69C82BD8__CTOR_OFFSET UNITYSDK_OFFSET(0x930CB80)

inline static constexpr unsigned int Class_2_6FF9817F69C82BD8_TypeDefinitionIndex = 49587;

class Class_2_6FF9817F69C82BD8 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapSkillAbortSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapSkillAbortSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + CLASS_2_6FF9817F69C82BD8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_6FF9817F69C82BD8_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

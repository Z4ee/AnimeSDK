#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapSkillCastPos; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6E61E73CE9602C3F_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB2348A0)
#define CLASS_2_6E61E73CE9602C3F__CTOR_OFFSET UNITYSDK_OFFSET(0xB234880)

inline static constexpr unsigned int Class_2_6E61E73CE9602C3F_TypeDefinitionIndex = 49586;

class Class_2_6E61E73CE9602C3F : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapSkillCastPos*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapSkillCastPos* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + CLASS_2_6E61E73CE9602C3F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_6E61E73CE9602C3F_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapSkillCastPos; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8D9B7BE7B36342AB_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x17E96A10)
#define CLASS_2_8D9B7BE7B36342AB__CTOR_OFFSET UNITYSDK_OFFSET(0x17E969F0)

inline static constexpr unsigned int Class_2_8D9B7BE7B36342AB_TypeDefinitionIndex = 51335;

class Class_2_8D9B7BE7B36342AB : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapSkillCastPos*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapSkillCastPos* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + CLASS_2_8D9B7BE7B36342AB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_8D9B7BE7B36342AB_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

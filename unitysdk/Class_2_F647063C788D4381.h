#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAllOffTeamMember; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F647063C788D4381_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x156B5240)
#define CLASS_2_F647063C788D4381__CTOR_OFFSET UNITYSDK_OFFSET(0x156B5220)

inline static constexpr unsigned int Class_2_F647063C788D4381_TypeDefinitionIndex = 59387;

class Class_2_F647063C788D4381 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapAllOffTeamMember*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapAllOffTeamMember* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAllOffTeamMember*))((::PBYTE)hIl2Cpp + CLASS_2_F647063C788D4381__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_F647063C788D4381_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

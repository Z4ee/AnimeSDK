#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapTeamEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A54393D287D9987D_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB49E060)
#define CLASS_2_A54393D287D9987D__CTOR_OFFSET UNITYSDK_OFFSET(0xB49E040)

inline static constexpr unsigned int Class_2_A54393D287D9987D_TypeDefinitionIndex = 59388;

class Class_2_A54393D287D9987D : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapTeamEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapTeamEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A54393D287D9987D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A54393D287D9987D_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

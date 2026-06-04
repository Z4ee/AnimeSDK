#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapTeamEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A0153CCCD0232453_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x14358220)
#define CLASS_2_A0153CCCD0232453__CTOR_OFFSET UNITYSDK_OFFSET(0x14358200)

inline static constexpr unsigned int Class_2_A0153CCCD0232453_TypeDefinitionIndex = 55367;

class Class_2_A0153CCCD0232453 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapTeamEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapTeamEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A0153CCCD0232453__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A0153CCCD0232453_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

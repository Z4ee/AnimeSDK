#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapCreatedBattleEvent; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_643786BE4F200C7C_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15AAB000)
#define CLASS_2_643786BE4F200C7C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAAFE0)

inline static constexpr unsigned int Class_2_643786BE4F200C7C_TypeDefinitionIndex = 59379;

class Class_2_643786BE4F200C7C : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapCreatedBattleEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapCreatedBattleEvent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapCreatedBattleEvent*))((::PBYTE)hIl2Cpp + CLASS_2_643786BE4F200C7C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_643786BE4F200C7C_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

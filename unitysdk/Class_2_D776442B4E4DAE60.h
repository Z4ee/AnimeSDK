#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchByTauntAndAggro; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D776442B4E4DAE60_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x144B07D0)
#define CLASS_2_D776442B4E4DAE60__CTOR_OFFSET UNITYSDK_OFFSET(0x144B07B0)

inline static constexpr unsigned int Class_2_D776442B4E4DAE60_TypeDefinitionIndex = 55279;

class Class_2_D776442B4E4DAE60 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetFetchByTauntAndAggro*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchByTauntAndAggro* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + CLASS_2_D776442B4E4DAE60__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_D776442B4E4DAE60_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

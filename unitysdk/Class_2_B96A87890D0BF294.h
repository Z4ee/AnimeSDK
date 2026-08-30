#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapBornPoint; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B96A87890D0BF294_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18D232D0)
#define CLASS_2_B96A87890D0BF294__CTOR_OFFSET UNITYSDK_OFFSET(0x18D232B0)

inline static constexpr unsigned int Class_2_B96A87890D0BF294_TypeDefinitionIndex = 54023;

class Class_2_B96A87890D0BF294 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapBornPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapBornPoint* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + CLASS_2_B96A87890D0BF294__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_B96A87890D0BF294_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

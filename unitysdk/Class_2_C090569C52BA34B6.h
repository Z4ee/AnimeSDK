#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapPosWithOffset; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C090569C52BA34B6_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1888F150)
#define CLASS_2_C090569C52BA34B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1888F130)

inline static constexpr unsigned int Class_2_C090569C52BA34B6_TypeDefinitionIndex = 54030;

class Class_2_C090569C52BA34B6 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapPosWithOffset*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapPosWithOffset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapPosWithOffset*))((::PBYTE)hIl2Cpp + CLASS_2_C090569C52BA34B6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C090569C52BA34B6_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

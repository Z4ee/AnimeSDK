#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapPosWithOffset; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_840A593549A8FD88_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x99A6570)
#define CLASS_2_840A593549A8FD88__CTOR_OFFSET UNITYSDK_OFFSET(0x99A6550)

inline static constexpr unsigned int Class_2_840A593549A8FD88_TypeDefinitionIndex = 49597;

class Class_2_840A593549A8FD88 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapPosWithOffset*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapPosWithOffset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapPosWithOffset*))((::PBYTE)hIl2Cpp + CLASS_2_840A593549A8FD88__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_840A593549A8FD88_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

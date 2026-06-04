#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDamageChunkTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8C5B35EE2B611EFB_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x145B4920)
#define CLASS_2_8C5B35EE2B611EFB__CTOR_OFFSET UNITYSDK_OFFSET(0x145B4900)

inline static constexpr unsigned int Class_2_8C5B35EE2B611EFB_TypeDefinitionIndex = 55265;

class Class_2_8C5B35EE2B611EFB : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapDamageChunkTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapDamageChunkTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + CLASS_2_8C5B35EE2B611EFB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_8C5B35EE2B611EFB_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

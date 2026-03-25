#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDamageChunkTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0F1B256015C1939B_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x10601AF0)
#define CLASS_2_0F1B256015C1939B__CTOR_OFFSET UNITYSDK_OFFSET(0x10601AD0)

inline static constexpr unsigned int Class_2_0F1B256015C1939B_TypeDefinitionIndex = 47799;

class Class_2_0F1B256015C1939B : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapDamageChunkTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapDamageChunkTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + CLASS_2_0F1B256015C1939B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_0F1B256015C1939B_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

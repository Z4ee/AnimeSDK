#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDamageChunkTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_26B8567BA026D764_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x16444770)
#define CLASS_2_26B8567BA026D764__CTOR_OFFSET UNITYSDK_OFFSET(0x16444750)

inline static constexpr unsigned int Class_2_26B8567BA026D764_TypeDefinitionIndex = 59286;

class Class_2_26B8567BA026D764 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapDamageChunkTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapDamageChunkTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + CLASS_2_26B8567BA026D764__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_26B8567BA026D764_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

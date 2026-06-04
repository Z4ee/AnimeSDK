#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetShuffle; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C04F0E21EF782903_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xAA49A10)
#define CLASS_2_C04F0E21EF782903__CTOR_OFFSET UNITYSDK_OFFSET(0xAA27380)

inline static constexpr unsigned int Class_2_C04F0E21EF782903_TypeDefinitionIndex = 55331;

class Class_2_C04F0E21EF782903 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetShuffle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetShuffle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetShuffle*))((::PBYTE)hIl2Cpp + CLASS_2_C04F0E21EF782903__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C04F0E21EF782903_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

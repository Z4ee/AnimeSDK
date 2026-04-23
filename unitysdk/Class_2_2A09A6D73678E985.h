#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapPartEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2A09A6D73678E985_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x127CA8F0)
#define CLASS_2_2A09A6D73678E985__CTOR_OFFSET UNITYSDK_OFFSET(0x127CA8D0)

inline static constexpr unsigned int Class_2_2A09A6D73678E985_TypeDefinitionIndex = 54539;

class Class_2_2A09A6D73678E985 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapPartEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapPartEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2A09A6D73678E985__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_2A09A6D73678E985_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

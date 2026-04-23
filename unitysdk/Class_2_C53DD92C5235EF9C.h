#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAliveSourceEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C53DD92C5235EF9C_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x11DC7280)
#define CLASS_2_C53DD92C5235EF9C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC7260)

inline static constexpr unsigned int Class_2_C53DD92C5235EF9C_TypeDefinitionIndex = 54550;

class Class_2_C53DD92C5235EF9C : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetFetchAliveSourceEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAliveSourceEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C53DD92C5235EF9C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C53DD92C5235EF9C_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

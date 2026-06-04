#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetTake; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0393575864CD895D_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1430AB00)
#define CLASS_2_0393575864CD895D__CTOR_OFFSET UNITYSDK_OFFSET(0x1430AAE0)

inline static constexpr unsigned int Class_2_0393575864CD895D_TypeDefinitionIndex = 55329;

class Class_2_0393575864CD895D : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetTake*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetTake* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + CLASS_2_0393575864CD895D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_0393575864CD895D_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapDamageAttacker; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E95F0CD1ECE74B1D_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x16379EC0)
#define CLASS_2_E95F0CD1ECE74B1D__CTOR_OFFSET UNITYSDK_OFFSET(0x16379EA0)

inline static constexpr unsigned int Class_2_E95F0CD1ECE74B1D_TypeDefinitionIndex = 56479;

class Class_2_E95F0CD1ECE74B1D : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapDamageAttacker*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapDamageAttacker* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapDamageAttacker*))((::PBYTE)hIl2Cpp + CLASS_2_E95F0CD1ECE74B1D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E95F0CD1ECE74B1D_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

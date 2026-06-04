#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapPartOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_178330035B468474_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x139B42F0)
#define CLASS_2_178330035B468474__CTOR_OFFSET UNITYSDK_OFFSET(0x139B42D0)

inline static constexpr unsigned int Class_2_178330035B468474_TypeDefinitionIndex = 55267;

class Class_2_178330035B468474 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapPartOwnerEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapPartOwnerEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + CLASS_2_178330035B468474__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_178330035B468474_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

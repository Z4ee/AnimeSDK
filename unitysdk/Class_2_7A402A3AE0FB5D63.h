#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapPartEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7A402A3AE0FB5D63_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A6C1040)
#define CLASS_2_7A402A3AE0FB5D63__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C1020)

inline static constexpr unsigned int Class_2_7A402A3AE0FB5D63_TypeDefinitionIndex = 59287;

class Class_2_7A402A3AE0FB5D63 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapPartEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapPartEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7A402A3AE0FB5D63__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_7A402A3AE0FB5D63_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

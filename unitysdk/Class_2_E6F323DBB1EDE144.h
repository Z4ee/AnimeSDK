#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetIndex; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E6F323DBB1EDE144_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x12810830)
#define CLASS_2_E6F323DBB1EDE144__CTOR_OFFSET UNITYSDK_OFFSET(0x12810810)

inline static constexpr unsigned int Class_2_E6F323DBB1EDE144_TypeDefinitionIndex = 54603;

class Class_2_E6F323DBB1EDE144 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetIndex*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetIndex* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + CLASS_2_E6F323DBB1EDE144__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E6F323DBB1EDE144_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

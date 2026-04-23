#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapSummonedMinions; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_655F67CEEEB7033C_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x11E836B0)
#define CLASS_2_655F67CEEEB7033C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E83690)

inline static constexpr unsigned int Class_2_655F67CEEEB7033C_TypeDefinitionIndex = 54647;

class Class_2_655F67CEEEB7033C : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapSummonedMinions*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapSummonedMinions* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapSummonedMinions*))((::PBYTE)hIl2Cpp + CLASS_2_655F67CEEEB7033C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_655F67CEEEB7033C_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

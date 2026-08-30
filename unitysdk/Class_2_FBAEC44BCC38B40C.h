#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLockTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FBAEC44BCC38B40C_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15854F00)
#define CLASS_2_FBAEC44BCC38B40C__CTOR_OFFSET UNITYSDK_OFFSET(0x15854EE0)

inline static constexpr unsigned int Class_2_FBAEC44BCC38B40C_TypeDefinitionIndex = 59303;

class Class_2_FBAEC44BCC38B40C : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetFetchLockTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchLockTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + CLASS_2_FBAEC44BCC38B40C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_FBAEC44BCC38B40C_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

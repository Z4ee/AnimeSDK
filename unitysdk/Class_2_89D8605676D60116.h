#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchActualOwner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_89D8605676D60116_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x106452D0)
#define CLASS_2_89D8605676D60116__CTOR_OFFSET UNITYSDK_OFFSET(0x106452B0)

inline static constexpr unsigned int Class_2_89D8605676D60116_TypeDefinitionIndex = 55276;

class Class_2_89D8605676D60116 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetFetchActualOwner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchActualOwner* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + CLASS_2_89D8605676D60116__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_89D8605676D60116_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

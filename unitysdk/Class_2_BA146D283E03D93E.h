#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchByTauntAndAggro; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BA146D283E03D93E_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB3303D0)
#define CLASS_2_BA146D283E03D93E__CTOR_OFFSET UNITYSDK_OFFSET(0xB3303B0)

inline static constexpr unsigned int Class_2_BA146D283E03D93E_TypeDefinitionIndex = 59153;

class Class_2_BA146D283E03D93E : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetFetchByTauntAndAggro*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchByTauntAndAggro* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + CLASS_2_BA146D283E03D93E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_BA146D283E03D93E_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

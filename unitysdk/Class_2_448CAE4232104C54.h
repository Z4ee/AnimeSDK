#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapGridNearby; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_448CAE4232104C54_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBBF8B90)
#define CLASS_2_448CAE4232104C54__CTOR_OFFSET UNITYSDK_OFFSET(0xBBF8B70)

inline static constexpr unsigned int Class_2_448CAE4232104C54_TypeDefinitionIndex = 54024;

class Class_2_448CAE4232104C54 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapGridNearby*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapGridNearby* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapGridNearby*))((::PBYTE)hIl2Cpp + CLASS_2_448CAE4232104C54__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_448CAE4232104C54_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

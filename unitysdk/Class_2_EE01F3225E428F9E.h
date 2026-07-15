#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapBelongGrid; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EE01F3225E428F9E_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x176B84B0)
#define CLASS_2_EE01F3225E428F9E__CTOR_OFFSET UNITYSDK_OFFSET(0x176B8490)

inline static constexpr unsigned int Class_2_EE01F3225E428F9E_TypeDefinitionIndex = 51337;

class Class_2_EE01F3225E428F9E : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapBelongGrid*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapBelongGrid* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapBelongGrid*))((::PBYTE)hIl2Cpp + CLASS_2_EE01F3225E428F9E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_EE01F3225E428F9E_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapTargetInTrigger; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_85F679BCF38DA32E_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBEC8F90)
#define CLASS_2_85F679BCF38DA32E__CTOR_OFFSET UNITYSDK_OFFSET(0xBEC8F70)

inline static constexpr unsigned int Class_2_85F679BCF38DA32E_TypeDefinitionIndex = 54016;

class Class_2_85F679BCF38DA32E : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapTargetInTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapTargetInTrigger* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + CLASS_2_85F679BCF38DA32E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_85F679BCF38DA32E_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

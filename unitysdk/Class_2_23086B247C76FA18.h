#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapBornPoint; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_23086B247C76FA18_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x11761E40)
#define CLASS_2_23086B247C76FA18__CTOR_OFFSET UNITYSDK_OFFSET(0x11761E20)

inline static constexpr unsigned int Class_2_23086B247C76FA18_TypeDefinitionIndex = 49590;

class Class_2_23086B247C76FA18 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapBornPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetMapBornPoint* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + CLASS_2_23086B247C76FA18__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_23086B247C76FA18_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

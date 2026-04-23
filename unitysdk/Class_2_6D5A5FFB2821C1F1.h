#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAdjoinEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6D5A5FFB2821C1F1_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x118B4D80)
#define CLASS_2_6D5A5FFB2821C1F1__CTOR_OFFSET UNITYSDK_OFFSET(0x118B4D60)

inline static constexpr unsigned int Class_2_6D5A5FFB2821C1F1_TypeDefinitionIndex = 54513;

class Class_2_6D5A5FFB2821C1F1 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapAdjoinEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetMapAdjoinEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6D5A5FFB2821C1F1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_6D5A5FFB2821C1F1_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

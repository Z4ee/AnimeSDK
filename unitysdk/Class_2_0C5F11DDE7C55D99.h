#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapActionBarAdjoinEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0C5F11DDE7C55D99_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x155D87B0)
#define CLASS_2_0C5F11DDE7C55D99__CTOR_OFFSET UNITYSDK_OFFSET(0x155D8790)

inline static constexpr unsigned int Class_2_0C5F11DDE7C55D99_TypeDefinitionIndex = 59258;

class Class_2_0C5F11DDE7C55D99 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetMapActionBarAdjoinEntityList*>
{
public:
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetMapActionBarAdjoinEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_0C5F11DDE7C55D99__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_0C5F11DDE7C55D99_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

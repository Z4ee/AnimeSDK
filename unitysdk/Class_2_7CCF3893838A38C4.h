#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapEntityInGrid; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7CCF3893838A38C4_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xACC7220)
#define CLASS_2_7CCF3893838A38C4__CTOR_OFFSET UNITYSDK_OFFSET(0xACC7200)

inline static constexpr unsigned int Class_2_7CCF3893838A38C4_TypeDefinitionIndex = 50262;

class Class_2_7CCF3893838A38C4 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapEntityInGrid*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::RtTargetMapEntityInGrid* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapEntityInGrid*))((::PBYTE)hIl2Cpp + CLASS_2_7CCF3893838A38C4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_7CCF3893838A38C4_TRANSFORM_OFFSET))(this, a1, a2);
	}
};

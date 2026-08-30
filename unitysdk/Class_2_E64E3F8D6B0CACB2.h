#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_1_DA32E543F3E152DD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapEmptyGridNearby; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E64E3F8D6B0CACB2_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x19536C30)
#define CLASS_2_E64E3F8D6B0CACB2_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x195361A0)
#define CLASS_2_E64E3F8D6B0CACB2__CTOR_OFFSET UNITYSDK_OFFSET(0x19536180)

inline static constexpr unsigned int Class_2_E64E3F8D6B0CACB2_TypeDefinitionIndex = 54025;

class Class_2_E64E3F8D6B0CACB2 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapEmptyGridNearby*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* DDKPMIIJMPB; // 0x18

	::System::Void _ctor(::RPG::GameCore::RtTargetMapEmptyGridNearby* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapEmptyGridNearby*))((::PBYTE)hIl2Cpp + CLASS_2_E64E3F8D6B0CACB2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E64E3F8D6B0CACB2_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_DA32E543F3E152DD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DA32E543F3E152DD*))((::PBYTE)hIl2Cpp + CLASS_2_E64E3F8D6B0CACB2_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}
};

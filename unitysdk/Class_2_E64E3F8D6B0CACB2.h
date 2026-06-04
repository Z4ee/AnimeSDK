#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_1_EF79F96DD047B849;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapEmptyGridNearby; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E64E3F8D6B0CACB2_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xC4512E0)
#define CLASS_2_E64E3F8D6B0CACB2_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC450870)
#define CLASS_2_E64E3F8D6B0CACB2__CTOR_OFFSET UNITYSDK_OFFSET(0xC450850)

inline static constexpr unsigned int Class_2_E64E3F8D6B0CACB2_TypeDefinitionIndex = 50259;

class Class_2_E64E3F8D6B0CACB2 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::RtTargetMapEmptyGridNearby*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::RtTargetMapEmptyGridNearby* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapEmptyGridNearby*))((::PBYTE)hIl2Cpp + CLASS_2_E64E3F8D6B0CACB2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E64E3F8D6B0CACB2_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_EF79F96DD047B849* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EF79F96DD047B849*))((::PBYTE)hIl2Cpp + CLASS_2_E64E3F8D6B0CACB2_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}
};

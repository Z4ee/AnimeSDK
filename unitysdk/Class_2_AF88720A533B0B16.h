#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByDistance; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AF88720A533B0B16_COMPARE_OFFSET UNITYSDK_OFFSET(0x10384380)
#define CLASS_2_AF88720A533B0B16_METHOD_2_ACA7BA522EFECBD8_OFFSET UNITYSDK_OFFSET(0x10384090)
#define CLASS_2_AF88720A533B0B16_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x10384260)
#define CLASS_2_AF88720A533B0B16__CTOR_OFFSET UNITYSDK_OFFSET(0x10384070)

inline static constexpr unsigned int Class_2_AF88720A533B0B16_TypeDefinitionIndex = 47834;

class Class_2_AF88720A533B0B16 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByDistance*>
{
public:
	::RPG::MVector3 Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetSortByDistance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + CLASS_2_AF88720A533B0B16__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACA7BA522EFECBD8(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_AF88720A533B0B16_METHOD_2_ACA7BA522EFECBD8_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_AF88720A533B0B16_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF88720A533B0B16_COMPARE_OFFSET))(this, a1, a2);
	}
};

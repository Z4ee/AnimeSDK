#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_0_16E4307DCC419505_642;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortSequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1B3696AECFCB7A2D_COMPARE_OFFSET UNITYSDK_OFFSET(0x1ABA4500)
#define CLASS_2_1B3696AECFCB7A2D_METHOD_2_51909F44F98B5024_OFFSET UNITYSDK_OFFSET(0x1ABA4000)
#define CLASS_2_1B3696AECFCB7A2D_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1ABA4240)
#define CLASS_2_1B3696AECFCB7A2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA3E60)

inline static constexpr unsigned int Class_2_1B3696AECFCB7A2D_TypeDefinitionIndex = 59309;

class Class_2_1B3696AECFCB7A2D : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortSequence*>
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_642*>* OJMEPBLHJGP; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetSortSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + CLASS_2_1B3696AECFCB7A2D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_51909F44F98B5024(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_1B3696AECFCB7A2D_METHOD_2_51909F44F98B5024_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_1B3696AECFCB7A2D_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1B3696AECFCB7A2D_COMPARE_OFFSET))(this, a1, a2);
	}
};

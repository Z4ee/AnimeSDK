#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_0_16E4307DCC419505_470;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortSequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_28B0DA0CD0BA6890_COMPARE_OFFSET UNITYSDK_OFFSET(0x8ACF0D0)
#define CLASS_2_28B0DA0CD0BA6890_METHOD_2_194D81FDDD0BED7A_OFFSET UNITYSDK_OFFSET(0x8ACEDC0)
#define CLASS_2_28B0DA0CD0BA6890_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x8ACEFB0)
#define CLASS_2_28B0DA0CD0BA6890__CTOR_OFFSET UNITYSDK_OFFSET(0x8ACECA0)

inline static constexpr unsigned int Class_2_28B0DA0CD0BA6890_TypeDefinitionIndex = 47822;

class Class_2_28B0DA0CD0BA6890 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortSequence*>
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_470*>* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetSortSequence* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + CLASS_2_28B0DA0CD0BA6890__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_194D81FDDD0BED7A(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_28B0DA0CD0BA6890_METHOD_2_194D81FDDD0BED7A_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_28B0DA0CD0BA6890_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_28B0DA0CD0BA6890_COMPARE_OFFSET))(this, a1, a2);
	}
};

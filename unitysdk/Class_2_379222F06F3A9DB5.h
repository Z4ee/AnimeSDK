#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CalcElevatorLoopTime; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_379222F06F3A9DB5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FA10C0)
#define CLASS_2_379222F06F3A9DB5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16FA1100)
#define CLASS_2_379222F06F3A9DB5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16FA1530)
#define CLASS_2_379222F06F3A9DB5_TICK_OFFSET UNITYSDK_OFFSET(0x16FA1580)
#define CLASS_2_379222F06F3A9DB5__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA0E10)

inline static constexpr unsigned int Class_2_379222F06F3A9DB5_TypeDefinitionIndex = 50239;

class Class_2_379222F06F3A9DB5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::UnityEngine::Animator* Field_2_0; // 0x18
	::RPG::GameCore::CalcElevatorLoopTime* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0x30
	::System::Int32 Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x3C
	::System::Int32 Field_2_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CalcElevatorLoopTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CalcElevatorLoopTime*))((::PBYTE)hIl2Cpp + CLASS_2_379222F06F3A9DB5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379222F06F3A9DB5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379222F06F3A9DB5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_379222F06F3A9DB5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_379222F06F3A9DB5_TICK_OFFSET))(this, a1);
	}
};

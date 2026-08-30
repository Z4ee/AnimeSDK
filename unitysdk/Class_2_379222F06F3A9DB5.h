#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CalcElevatorLoopTime; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_379222F06F3A9DB5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3E1220)
#define CLASS_2_379222F06F3A9DB5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3E1260)
#define CLASS_2_379222F06F3A9DB5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF3E1690)
#define CLASS_2_379222F06F3A9DB5_TICK_OFFSET UNITYSDK_OFFSET(0xF3E16E0)
#define CLASS_2_379222F06F3A9DB5__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E0F70)

inline static constexpr unsigned int Class_2_379222F06F3A9DB5_TypeDefinitionIndex = 52902;

class Class_2_379222F06F3A9DB5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::UnityEngine::Animator* OIPFNAHBHKG; // 0x18
	::RPG::GameCore::CalcElevatorLoopTime* OFKGLJOAMLD; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* ACDDCNNEDBF; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::System::Int32 COJMPLBLJDE; // 0x38
	::System::Int32 LPDFMBGPPJB; // 0x3C
	::System::Single JOHKMCAFKGJ; // 0x40

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

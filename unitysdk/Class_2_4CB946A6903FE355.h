#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetClientGroupProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4CB946A6903FE355_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1102DFE0)
#define CLASS_2_4CB946A6903FE355_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1102E0F0)
#define CLASS_2_4CB946A6903FE355_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1102E040)
#define CLASS_2_4CB946A6903FE355_TICK_OFFSET UNITYSDK_OFFSET(0x1102E090)
#define CLASS_2_4CB946A6903FE355__CTOR_OFFSET UNITYSDK_OFFSET(0x1102DFD0)

inline static constexpr unsigned int Class_2_4CB946A6903FE355_TypeDefinitionIndex = 43090;

class Class_2_4CB946A6903FE355 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetClientGroupProperty* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetClientGroupProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetClientGroupProperty*))((::PBYTE)hIl2Cpp + CLASS_2_4CB946A6903FE355__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CB946A6903FE355_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4CB946A6903FE355_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CB946A6903FE355_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CB946A6903FE355_ONTASKRESET_OFFSET))(this);
	}
};

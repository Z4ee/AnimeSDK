#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AddFinishMissionData_PlayMessageAdaptive; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_A79771F8FAB8FD2A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x147093F0)
#define CLASS_2_A79771F8FAB8FD2A_METHOD_2_049407E7CFE73C8B_OFFSET UNITYSDK_OFFSET(0x147097B0)
#define CLASS_2_A79771F8FAB8FD2A_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x147095D0)
#define CLASS_2_A79771F8FAB8FD2A_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14709860)
#define CLASS_2_A79771F8FAB8FD2A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14709470)
#define CLASS_2_A79771F8FAB8FD2A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14709700)
#define CLASS_2_A79771F8FAB8FD2A_TICK_OFFSET UNITYSDK_OFFSET(0x14709750)
#define CLASS_2_A79771F8FAB8FD2A__CTOR_OFFSET UNITYSDK_OFFSET(0x147093E0)

inline static constexpr unsigned int Class_2_A79771F8FAB8FD2A_TypeDefinitionIndex = 49937;

class Class_2_A79771F8FAB8FD2A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive*))((::PBYTE)hIl2Cpp + CLASS_2_A79771F8FAB8FD2A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A79771F8FAB8FD2A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A79771F8FAB8FD2A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A79771F8FAB8FD2A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A79771F8FAB8FD2A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A79771F8FAB8FD2A_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_049407E7CFE73C8B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A79771F8FAB8FD2A_METHOD_2_049407E7CFE73C8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A79771F8FAB8FD2A_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AddFinishMissionData_PlayMessage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_D354035D86ABF1F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11932440)
#define CLASS_2_D354035D86ABF1F1_METHOD_2_049407E7CFE73C8B_OFFSET UNITYSDK_OFFSET(0x119327B0)
#define CLASS_2_D354035D86ABF1F1_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11932860)
#define CLASS_2_D354035D86ABF1F1_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x119325F0)
#define CLASS_2_D354035D86ABF1F1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11932480)
#define CLASS_2_D354035D86ABF1F1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11932700)
#define CLASS_2_D354035D86ABF1F1_TICK_OFFSET UNITYSDK_OFFSET(0x11932750)
#define CLASS_2_D354035D86ABF1F1__CTOR_OFFSET UNITYSDK_OFFSET(0x11932430)

inline static constexpr unsigned int Class_2_D354035D86ABF1F1_TypeDefinitionIndex = 42334;

class Class_2_D354035D86ABF1F1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AddFinishMissionData_PlayMessage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_PlayMessage*))((::PBYTE)hIl2Cpp + CLASS_2_D354035D86ABF1F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D354035D86ABF1F1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D354035D86ABF1F1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D354035D86ABF1F1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D354035D86ABF1F1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D354035D86ABF1F1_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_049407E7CFE73C8B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D354035D86ABF1F1_METHOD_2_049407E7CFE73C8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D354035D86ABF1F1_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};

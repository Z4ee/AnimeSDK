#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class ShowMatchThreeV2LevelPreparePage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_93230488147F5921_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17321820)
#define CLASS_2_93230488147F5921_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17321860)
#define CLASS_2_93230488147F5921_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17321A50)
#define CLASS_2_93230488147F5921_TICK_OFFSET UNITYSDK_OFFSET(0x17321AA0)
#define CLASS_2_93230488147F5921__CTOR_OFFSET UNITYSDK_OFFSET(0x17321810)
#define CLASS_2_93230488147F5921__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x17321B00)

inline static constexpr unsigned int Class_2_93230488147F5921_TypeDefinitionIndex = 56043;

class Class_2_93230488147F5921 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::Client::ShowMatchThreeV2LevelPreparePage* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ShowMatchThreeV2LevelPreparePage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ShowMatchThreeV2LevelPreparePage*))((::PBYTE)hIl2Cpp + CLASS_2_93230488147F5921__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93230488147F5921_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93230488147F5921_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93230488147F5921_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_93230488147F5921_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93230488147F5921__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};

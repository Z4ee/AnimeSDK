#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvNpcTrackedSearch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DAB4FA45B9FC5D26_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1150E5B0)
#define CLASS_2_DAB4FA45B9FC5D26_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1150E700)
#define CLASS_2_DAB4FA45B9FC5D26_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1150E770)
#define CLASS_2_DAB4FA45B9FC5D26_TICK_OFFSET UNITYSDK_OFFSET(0x1150E620)
#define CLASS_2_DAB4FA45B9FC5D26__CTOR_OFFSET UNITYSDK_OFFSET(0x1150E520)

inline static constexpr unsigned int Class_2_DAB4FA45B9FC5D26_TypeDefinitionIndex = 42459;

class Class_2_DAB4FA45B9FC5D26 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcTrackedSearch* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcTrackedSearch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcTrackedSearch*))((::PBYTE)hIl2Cpp + CLASS_2_DAB4FA45B9FC5D26__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAB4FA45B9FC5D26_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DAB4FA45B9FC5D26_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAB4FA45B9FC5D26_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAB4FA45B9FC5D26_ONTASKRESET_OFFSET))(this);
	}
};

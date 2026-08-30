#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvNpcTrackedSearch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DAB4FA45B9FC5D26_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1575B250)
#define CLASS_2_DAB4FA45B9FC5D26_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1575B480)
#define CLASS_2_DAB4FA45B9FC5D26_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1575B560)
#define CLASS_2_DAB4FA45B9FC5D26_TICK_OFFSET UNITYSDK_OFFSET(0x1575B320)
#define CLASS_2_DAB4FA45B9FC5D26__CTOR_OFFSET UNITYSDK_OFFSET(0x1575B1C0)

inline static constexpr unsigned int Class_2_DAB4FA45B9FC5D26_TypeDefinitionIndex = 52720;

class Class_2_DAB4FA45B9FC5D26 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcTrackedSearch* IGHAHBNLIJA; // 0x18
	::Class_1_5F51D4049EA87B7B* CCEPGAAOOOG; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28

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

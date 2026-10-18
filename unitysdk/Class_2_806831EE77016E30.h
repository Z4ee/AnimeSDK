#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnterAetherGym; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_806831EE77016E30_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF20AD70)
#define CLASS_2_806831EE77016E30_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF20ADB0)
#define CLASS_2_806831EE77016E30_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF20AE40)
#define CLASS_2_806831EE77016E30_TICK_OFFSET UNITYSDK_OFFSET(0xF20AE90)
#define CLASS_2_806831EE77016E30__CTOR_OFFSET UNITYSDK_OFFSET(0xF20AD60)

inline static constexpr unsigned int Class_2_806831EE77016E30_TypeDefinitionIndex = 52750;

class Class_2_806831EE77016E30 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::EnterAetherGym* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterAetherGym* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterAetherGym*))((::PBYTE)hIl2Cpp + CLASS_2_806831EE77016E30__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_806831EE77016E30_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_806831EE77016E30_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_806831EE77016E30_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_806831EE77016E30_TICK_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnterAetherGym; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_806831EE77016E30_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176D3970)
#define CLASS_2_806831EE77016E30_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176D39B0)
#define CLASS_2_806831EE77016E30_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x176D3A40)
#define CLASS_2_806831EE77016E30_TICK_OFFSET UNITYSDK_OFFSET(0x176D3A90)
#define CLASS_2_806831EE77016E30__CTOR_OFFSET UNITYSDK_OFFSET(0x176D3960)

inline static constexpr unsigned int Class_2_806831EE77016E30_TypeDefinitionIndex = 50361;

class Class_2_806831EE77016E30 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::EnterAetherGym* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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

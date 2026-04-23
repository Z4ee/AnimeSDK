#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ChangeTrackingMission; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CC2C92A0DCD1901D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BC6280)
#define CLASS_2_CC2C92A0DCD1901D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11BC62C0)
#define CLASS_2_CC2C92A0DCD1901D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11BC64D0)
#define CLASS_2_CC2C92A0DCD1901D_TICK_OFFSET UNITYSDK_OFFSET(0x11BC6520)
#define CLASS_2_CC2C92A0DCD1901D__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC6270)

inline static constexpr unsigned int Class_2_CC2C92A0DCD1901D_TypeDefinitionIndex = 48611;

class Class_2_CC2C92A0DCD1901D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ChangeTrackingMission* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeTrackingMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeTrackingMission*))((::PBYTE)hIl2Cpp + CLASS_2_CC2C92A0DCD1901D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC2C92A0DCD1901D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC2C92A0DCD1901D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC2C92A0DCD1901D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC2C92A0DCD1901D_TICK_OFFSET))(this, a1);
	}
};

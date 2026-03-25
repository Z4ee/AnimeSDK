#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_A2D8E5AB4B623162;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAbilityStartTimeStamp; }

#define CLASS_2_645C561C607DB2B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11867D90)
#define CLASS_2_645C561C607DB2B0_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x118680A0)
#define CLASS_2_645C561C607DB2B0_ONSKIP_OFFSET UNITYSDK_OFFSET(0x11867E30)
#define CLASS_2_645C561C607DB2B0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11867E80)
#define CLASS_2_645C561C607DB2B0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11867DE0)
#define CLASS_2_645C561C607DB2B0_TICK_OFFSET UNITYSDK_OFFSET(0x11868020)
#define CLASS_2_645C561C607DB2B0__CTOR_OFFSET UNITYSDK_OFFSET(0x11867D70)

inline static constexpr unsigned int Class_2_645C561C607DB2B0_TypeDefinitionIndex = 47518;

class Class_2_645C561C607DB2B0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitAbilityStartTimeStamp* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_A2D8E5AB4B623162* Field_2_3; // 0x28
	::System::Single Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAbilityStartTimeStamp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAbilityStartTimeStamp*))((::PBYTE)hIl2Cpp + CLASS_2_645C561C607DB2B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_645C561C607DB2B0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_645C561C607DB2B0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_645C561C607DB2B0_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_645C561C607DB2B0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_645C561C607DB2B0_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_645C561C607DB2B0_GET_FORCESKIP_OFFSET))(this);
	}
};

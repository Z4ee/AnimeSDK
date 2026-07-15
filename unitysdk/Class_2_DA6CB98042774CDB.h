#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ClockParkStorySwitchBackground; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DA6CB98042774CDB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183B81E0)
#define CLASS_2_DA6CB98042774CDB_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x183B80E0)
#define CLASS_2_DA6CB98042774CDB_ONSKIP_OFFSET UNITYSDK_OFFSET(0x183B80F0)
#define CLASS_2_DA6CB98042774CDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183B8300)
#define CLASS_2_DA6CB98042774CDB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x183B8420)
#define CLASS_2_DA6CB98042774CDB_TICK_OFFSET UNITYSDK_OFFSET(0x183B8220)
#define CLASS_2_DA6CB98042774CDB__CTOR_OFFSET UNITYSDK_OFFSET(0x183B80D0)

inline static constexpr unsigned int Class_2_DA6CB98042774CDB_TypeDefinitionIndex = 50304;

class Class_2_DA6CB98042774CDB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ClockParkStorySwitchBackground* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStorySwitchBackground* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStorySwitchBackground*))((::PBYTE)hIl2Cpp + CLASS_2_DA6CB98042774CDB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA6CB98042774CDB_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA6CB98042774CDB_ONSKIP_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA6CB98042774CDB_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DA6CB98042774CDB_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA6CB98042774CDB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA6CB98042774CDB_ONTASKRESET_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TeamBoostCheck; }

#define CLASS_2_C3462BEE12514F71_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16997430)
#define CLASS_2_C3462BEE12514F71_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16997470)
#define CLASS_2_C3462BEE12514F71_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x169974C0)
#define CLASS_2_C3462BEE12514F71_TICK_OFFSET UNITYSDK_OFFSET(0x16997510)
#define CLASS_2_C3462BEE12514F71__CTOR_OFFSET UNITYSDK_OFFSET(0x16997420)

inline static constexpr unsigned int Class_2_C3462BEE12514F71_TypeDefinitionIndex = 56135;

class Class_2_C3462BEE12514F71 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TeamBoostCheck* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TeamBoostCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TeamBoostCheck*))((::PBYTE)hIl2Cpp + CLASS_2_C3462BEE12514F71__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3462BEE12514F71_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3462BEE12514F71_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3462BEE12514F71_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3462BEE12514F71_TICK_OFFSET))(this, a1);
	}
};

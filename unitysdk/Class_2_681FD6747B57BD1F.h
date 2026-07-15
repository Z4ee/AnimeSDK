#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetBattleResult; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_681FD6747B57BD1F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFC58E0)
#define CLASS_2_681FD6747B57BD1F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFC5920)
#define CLASS_2_681FD6747B57BD1F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFC5A50)
#define CLASS_2_681FD6747B57BD1F_TICK_OFFSET UNITYSDK_OFFSET(0xBFC5AA0)
#define CLASS_2_681FD6747B57BD1F__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC58D0)

inline static constexpr unsigned int Class_2_681FD6747B57BD1F_TypeDefinitionIndex = 55895;

class Class_2_681FD6747B57BD1F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetBattleResult* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleResult*))((::PBYTE)hIl2Cpp + CLASS_2_681FD6747B57BD1F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_681FD6747B57BD1F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_681FD6747B57BD1F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_681FD6747B57BD1F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_681FD6747B57BD1F_TICK_OFFSET))(this, a1);
	}
};

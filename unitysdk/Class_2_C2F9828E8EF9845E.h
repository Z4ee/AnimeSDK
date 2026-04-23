#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RecoverAllCharactersHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C2F9828E8EF9845E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BF2DE0)
#define CLASS_2_C2F9828E8EF9845E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11BF2E20)
#define CLASS_2_C2F9828E8EF9845E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11BF3080)
#define CLASS_2_C2F9828E8EF9845E_TICK_OFFSET UNITYSDK_OFFSET(0x11BF30D0)
#define CLASS_2_C2F9828E8EF9845E__CTOR_OFFSET UNITYSDK_OFFSET(0x11BF2DD0)

inline static constexpr unsigned int Class_2_C2F9828E8EF9845E_TypeDefinitionIndex = 53840;

class Class_2_C2F9828E8EF9845E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::RecoverAllCharactersHP* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RecoverAllCharactersHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RecoverAllCharactersHP*))((::PBYTE)hIl2Cpp + CLASS_2_C2F9828E8EF9845E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2F9828E8EF9845E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2F9828E8EF9845E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2F9828E8EF9845E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C2F9828E8EF9845E_TICK_OFFSET))(this, a1);
	}
};

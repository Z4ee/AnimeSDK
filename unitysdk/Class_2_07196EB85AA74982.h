#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CreatePlayerTeam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_07196EB85AA74982_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113767C0)
#define CLASS_2_07196EB85AA74982_METHOD_2_25F90D4C940D48BE_OFFSET UNITYSDK_OFFSET(0x11376890)
#define CLASS_2_07196EB85AA74982_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x11377940)
#define CLASS_2_07196EB85AA74982_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11376800)
#define CLASS_2_07196EB85AA74982_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11377890)
#define CLASS_2_07196EB85AA74982_TICK_OFFSET UNITYSDK_OFFSET(0x113778E0)
#define CLASS_2_07196EB85AA74982__CTOR_OFFSET UNITYSDK_OFFSET(0x113767B0)

inline static constexpr unsigned int Class_2_07196EB85AA74982_TypeDefinitionIndex = 46829;

class Class_2_07196EB85AA74982 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::CreatePlayerTeam* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreatePlayerTeam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreatePlayerTeam*))((::PBYTE)hIl2Cpp + CLASS_2_07196EB85AA74982__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07196EB85AA74982_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07196EB85AA74982_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07196EB85AA74982_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_07196EB85AA74982_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_25F90D4C940D48BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07196EB85AA74982_METHOD_2_25F90D4C940D48BE_OFFSET))(this);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07196EB85AA74982_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}
};

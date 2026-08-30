#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UINotifyMonopolyEventStart; }

#define CLASS_2_BFF781A064DEC402_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F336A0)
#define CLASS_2_BFF781A064DEC402_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F33590)
#define CLASS_2_BFF781A064DEC402_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F33650)
#define CLASS_2_BFF781A064DEC402_TICK_OFFSET UNITYSDK_OFFSET(0x18F335F0)
#define CLASS_2_BFF781A064DEC402__CTOR_OFFSET UNITYSDK_OFFSET(0x18F33580)

inline static constexpr unsigned int Class_2_BFF781A064DEC402_TypeDefinitionIndex = 58986;

class Class_2_BFF781A064DEC402 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::UINotifyMonopolyEventStart* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UINotifyMonopolyEventStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UINotifyMonopolyEventStart*))((::PBYTE)hIl2Cpp + CLASS_2_BFF781A064DEC402__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFF781A064DEC402_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BFF781A064DEC402_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFF781A064DEC402_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFF781A064DEC402_DISPOSE_OFFSET))(this);
	}
};

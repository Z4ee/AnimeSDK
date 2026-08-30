#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ScreenPPEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4FD717F4572173EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17DCD4B0)
#define CLASS_2_4FD717F4572173EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17DCD3B0)
#define CLASS_2_4FD717F4572173EF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17DCD400)
#define CLASS_2_4FD717F4572173EF_TICK_OFFSET UNITYSDK_OFFSET(0x17DCD450)
#define CLASS_2_4FD717F4572173EF__CTOR_OFFSET UNITYSDK_OFFSET(0x17DCD3A0)

inline static constexpr unsigned int Class_2_4FD717F4572173EF_TypeDefinitionIndex = 56576;

class Class_2_4FD717F4572173EF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ScreenPPEffect* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScreenPPEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScreenPPEffect*))((::PBYTE)hIl2Cpp + CLASS_2_4FD717F4572173EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FD717F4572173EF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FD717F4572173EF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4FD717F4572173EF_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FD717F4572173EF_DISPOSE_OFFSET))(this);
	}
};

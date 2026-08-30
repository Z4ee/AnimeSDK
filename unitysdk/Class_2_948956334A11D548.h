#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CallBack; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_948956334A11D548_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A802190)
#define CLASS_2_948956334A11D548_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8022A0)
#define CLASS_2_948956334A11D548_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A8022F0)
#define CLASS_2_948956334A11D548_TICK_OFFSET UNITYSDK_OFFSET(0x1A802380)
#define CLASS_2_948956334A11D548__CTOR_OFFSET UNITYSDK_OFFSET(0x1A802100)

inline static constexpr unsigned int Class_2_948956334A11D548_TypeDefinitionIndex = 52904;

class Class_2_948956334A11D548 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* KOHOGMCJHBH; // 0x18
	::RPG::GameCore::CallBack* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CallBack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CallBack*))((::PBYTE)hIl2Cpp + CLASS_2_948956334A11D548__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_948956334A11D548_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_948956334A11D548_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_948956334A11D548_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_948956334A11D548_TICK_OFFSET))(this, a1);
	}
};

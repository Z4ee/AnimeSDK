#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTimeRelayFlameLoaded; }

#define CLASS_2_993E2086CE20B842_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F06D60)
#define CLASS_2_993E2086CE20B842_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F06CC0)
#define CLASS_2_993E2086CE20B842_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F06D10)
#define CLASS_2_993E2086CE20B842_TICK_OFFSET UNITYSDK_OFFSET(0x18F06DA0)
#define CLASS_2_993E2086CE20B842__CTOR_OFFSET UNITYSDK_OFFSET(0x18F06CB0)

inline static constexpr unsigned int Class_2_993E2086CE20B842_TypeDefinitionIndex = 51069;

class Class_2_993E2086CE20B842 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::WaitTimeRelayFlameLoaded* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTimeRelayFlameLoaded* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTimeRelayFlameLoaded*))((::PBYTE)hIl2Cpp + CLASS_2_993E2086CE20B842__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_993E2086CE20B842_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_993E2086CE20B842_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_993E2086CE20B842_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_993E2086CE20B842_TICK_OFFSET))(this, a1);
	}
};

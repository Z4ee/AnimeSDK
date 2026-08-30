#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTimeRelayFlameLoaded; }

#define CLASS_2_993E2086CE20B842_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8FF590)
#define CLASS_2_993E2086CE20B842_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8FF4F0)
#define CLASS_2_993E2086CE20B842_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8FF540)
#define CLASS_2_993E2086CE20B842_TICK_OFFSET UNITYSDK_OFFSET(0xB8FF5D0)
#define CLASS_2_993E2086CE20B842__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FF4E0)

inline static constexpr unsigned int Class_2_993E2086CE20B842_TypeDefinitionIndex = 53753;

class Class_2_993E2086CE20B842 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitTimeRelayFlameLoaded* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

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

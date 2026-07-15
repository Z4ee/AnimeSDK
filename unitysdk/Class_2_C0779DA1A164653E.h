#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PPFilterStackEffectUpdate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C0779DA1A164653E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F81290)
#define CLASS_2_C0779DA1A164653E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F812D0)
#define CLASS_2_C0779DA1A164653E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F816A0)
#define CLASS_2_C0779DA1A164653E_TICK_OFFSET UNITYSDK_OFFSET(0x18F816F0)
#define CLASS_2_C0779DA1A164653E__CTOR_OFFSET UNITYSDK_OFFSET(0x18F81280)

inline static constexpr unsigned int Class_2_C0779DA1A164653E_TypeDefinitionIndex = 52753;

class Class_2_C0779DA1A164653E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PPFilterStackEffectUpdate* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PPFilterStackEffectUpdate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PPFilterStackEffectUpdate*))((::PBYTE)hIl2Cpp + CLASS_2_C0779DA1A164653E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0779DA1A164653E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0779DA1A164653E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0779DA1A164653E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C0779DA1A164653E_TICK_OFFSET))(this, a1);
	}
};

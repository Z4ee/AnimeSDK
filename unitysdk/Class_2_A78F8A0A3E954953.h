#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StopEffectFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A78F8A0A3E954953_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1429D8A0)
#define CLASS_2_A78F8A0A3E954953_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1429D8E0)
#define CLASS_2_A78F8A0A3E954953_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1429DC20)
#define CLASS_2_A78F8A0A3E954953_TICK_OFFSET UNITYSDK_OFFSET(0x1429DC70)
#define CLASS_2_A78F8A0A3E954953__CTOR_OFFSET UNITYSDK_OFFSET(0x1429D890)

inline static constexpr unsigned int Class_2_A78F8A0A3E954953_TypeDefinitionIndex = 51993;

class Class_2_A78F8A0A3E954953 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::StopEffectFollow* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopEffectFollow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopEffectFollow*))((::PBYTE)hIl2Cpp + CLASS_2_A78F8A0A3E954953__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A78F8A0A3E954953_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A78F8A0A3E954953_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A78F8A0A3E954953_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A78F8A0A3E954953_TICK_OFFSET))(this, a1);
	}
};

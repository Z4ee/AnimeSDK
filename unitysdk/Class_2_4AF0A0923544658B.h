#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BlinkToPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4AF0A0923544658B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143C2740)
#define CLASS_2_4AF0A0923544658B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143C2790)
#define CLASS_2_4AF0A0923544658B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x143C28F0)
#define CLASS_2_4AF0A0923544658B_TICK_OFFSET UNITYSDK_OFFSET(0x143C2940)
#define CLASS_2_4AF0A0923544658B__CTOR_OFFSET UNITYSDK_OFFSET(0x143C2730)

inline static constexpr unsigned int Class_2_4AF0A0923544658B_TypeDefinitionIndex = 51286;

class Class_2_4AF0A0923544658B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::BlinkToPosition* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlinkToPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlinkToPosition*))((::PBYTE)hIl2Cpp + CLASS_2_4AF0A0923544658B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AF0A0923544658B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AF0A0923544658B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AF0A0923544658B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4AF0A0923544658B_TICK_OFFSET))(this, a1);
	}
};

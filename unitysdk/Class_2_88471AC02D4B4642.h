#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ForceShowActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_88471AC02D4B4642_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152AC560)
#define CLASS_2_88471AC02D4B4642_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152AC5A0)
#define CLASS_2_88471AC02D4B4642_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152AC620)
#define CLASS_2_88471AC02D4B4642_TICK_OFFSET UNITYSDK_OFFSET(0x152AC670)
#define CLASS_2_88471AC02D4B4642__CTOR_OFFSET UNITYSDK_OFFSET(0x152AC550)

inline static constexpr unsigned int Class_2_88471AC02D4B4642_TypeDefinitionIndex = 53825;

class Class_2_88471AC02D4B4642 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ForceShowActionDelay* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceShowActionDelay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceShowActionDelay*))((::PBYTE)hIl2Cpp + CLASS_2_88471AC02D4B4642__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88471AC02D4B4642_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88471AC02D4B4642_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88471AC02D4B4642_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_88471AC02D4B4642_TICK_OFFSET))(this, a1);
	}
};

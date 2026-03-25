#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StackBoostPointCallbackDecorate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9C95CB74573C0CDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1A9140)
#define CLASS_2_9C95CB74573C0CDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1A9180)
#define CLASS_2_9C95CB74573C0CDA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD1A9760)
#define CLASS_2_9C95CB74573C0CDA_TICK_OFFSET UNITYSDK_OFFSET(0xD1A97B0)
#define CLASS_2_9C95CB74573C0CDA__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A9130)

inline static constexpr unsigned int Class_2_9C95CB74573C0CDA_TypeDefinitionIndex = 44562;

class Class_2_9C95CB74573C0CDA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::StackBoostPointCallbackDecorate* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackBoostPointCallbackDecorate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackBoostPointCallbackDecorate*))((::PBYTE)hIl2Cpp + CLASS_2_9C95CB74573C0CDA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C95CB74573C0CDA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C95CB74573C0CDA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C95CB74573C0CDA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C95CB74573C0CDA_TICK_OFFSET))(this, a1);
	}
};

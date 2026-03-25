#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CaptureCurrentInteractProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8C456C3AA7689A49_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1093A340)
#define CLASS_2_8C456C3AA7689A49_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1093A3F0)
#define CLASS_2_8C456C3AA7689A49_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1093A550)
#define CLASS_2_8C456C3AA7689A49_TICK_OFFSET UNITYSDK_OFFSET(0x1093A390)
#define CLASS_2_8C456C3AA7689A49__CTOR_OFFSET UNITYSDK_OFFSET(0x1093A330)

inline static constexpr unsigned int Class_2_8C456C3AA7689A49_TypeDefinitionIndex = 42623;

class Class_2_8C456C3AA7689A49 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::CaptureCurrentInteractProp* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CaptureCurrentInteractProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CaptureCurrentInteractProp*))((::PBYTE)hIl2Cpp + CLASS_2_8C456C3AA7689A49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C456C3AA7689A49_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C456C3AA7689A49_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C456C3AA7689A49_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C456C3AA7689A49_ONTASKRESET_OFFSET))(this);
	}
};

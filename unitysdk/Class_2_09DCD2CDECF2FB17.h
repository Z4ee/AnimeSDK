#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_09DCD2CDECF2FB17_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD58B80)
#define CLASS_2_09DCD2CDECF2FB17_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD58BC0)
#define CLASS_2_09DCD2CDECF2FB17_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD58C40)
#define CLASS_2_09DCD2CDECF2FB17_TICK_OFFSET UNITYSDK_OFFSET(0xBD58C90)
#define CLASS_2_09DCD2CDECF2FB17__CTOR_OFFSET UNITYSDK_OFFSET(0xBD58B70)

inline static constexpr unsigned int Class_2_09DCD2CDECF2FB17_TypeDefinitionIndex = 53559;

class Class_2_09DCD2CDECF2FB17 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwitchBubbleTalk* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchBubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_09DCD2CDECF2FB17__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09DCD2CDECF2FB17_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09DCD2CDECF2FB17_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09DCD2CDECF2FB17_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_09DCD2CDECF2FB17_TICK_OFFSET))(this, a1);
	}
};

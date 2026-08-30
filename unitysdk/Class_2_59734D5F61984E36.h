#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StopNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_59734D5F61984E36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181669A0)
#define CLASS_2_59734D5F61984E36_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181669E0)
#define CLASS_2_59734D5F61984E36_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18166B30)
#define CLASS_2_59734D5F61984E36_TICK_OFFSET UNITYSDK_OFFSET(0x18166B80)
#define CLASS_2_59734D5F61984E36__CTOR_OFFSET UNITYSDK_OFFSET(0x18166990)

inline static constexpr unsigned int Class_2_59734D5F61984E36_TypeDefinitionIndex = 58882;

class Class_2_59734D5F61984E36 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* JPJAMENFBKD; // 0x0
	::RPG::GameCore::StopNPCBubbleTalk* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopNPCBubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopNPCBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_59734D5F61984E36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59734D5F61984E36_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59734D5F61984E36_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59734D5F61984E36_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59734D5F61984E36_TICK_OFFSET))(this, a1);
	}
};

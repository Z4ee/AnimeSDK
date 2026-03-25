#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StopNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_59734D5F61984E36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87FE530)
#define CLASS_2_59734D5F61984E36_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87FE570)
#define CLASS_2_59734D5F61984E36_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x87FE6D0)
#define CLASS_2_59734D5F61984E36_TICK_OFFSET UNITYSDK_OFFSET(0x87FE720)
#define CLASS_2_59734D5F61984E36__CTOR_OFFSET UNITYSDK_OFFSET(0x87FE520)

inline static constexpr unsigned int Class_2_59734D5F61984E36_TypeDefinitionIndex = 47415;

class Class_2_59734D5F61984E36 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::StopNPCBubbleTalk* Field_2_1; // 0x20

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

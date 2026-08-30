#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMusicCompositionStageStartEvent; }
namespace System { class Object; }

#define CLASS_2_B824BBFF51FA1CC0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153C6800)
#define CLASS_2_B824BBFF51FA1CC0_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x153C6950)
#define CLASS_2_B824BBFF51FA1CC0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153C66F0)
#define CLASS_2_B824BBFF51FA1CC0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x153C67B0)
#define CLASS_2_B824BBFF51FA1CC0_TICK_OFFSET UNITYSDK_OFFSET(0x153C6A60)
#define CLASS_2_B824BBFF51FA1CC0__CTOR_OFFSET UNITYSDK_OFFSET(0x153C6660)

inline static constexpr unsigned int Class_2_B824BBFF51FA1CC0_TypeDefinitionIndex = 53734;

class Class_2_B824BBFF51FA1CC0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::Class_3_07C3C4D2990C49EE* ILEMLGEGLCC; // 0x20
	::RPG::GameCore::WaitMusicCompositionStageStartEvent* IGHAHBNLIJA; // 0x28
	::System::Boolean BHEIANKOOPN; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMusicCompositionStageStartEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMusicCompositionStageStartEvent*))((::PBYTE)hIl2Cpp + CLASS_2_B824BBFF51FA1CC0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B824BBFF51FA1CC0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B824BBFF51FA1CC0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B824BBFF51FA1CC0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B824BBFF51FA1CC0_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B824BBFF51FA1CC0_TICK_OFFSET))(this, a1);
	}
};

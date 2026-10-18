#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetBattleBGMState; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_CDA4A166D54A5BBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155C43C0)
#define CLASS_2_CDA4A166D54A5BBB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x155C4830)
#define CLASS_2_CDA4A166D54A5BBB_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x155C4690)
#define CLASS_2_CDA4A166D54A5BBB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155C4400)
#define CLASS_2_CDA4A166D54A5BBB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155C4890)
#define CLASS_2_CDA4A166D54A5BBB_TICK_OFFSET UNITYSDK_OFFSET(0x155C4910)
#define CLASS_2_CDA4A166D54A5BBB__CTOR_OFFSET UNITYSDK_OFFSET(0x155C43B0)

inline static constexpr unsigned int Class_2_CDA4A166D54A5BBB_TypeDefinitionIndex = 58515;

class Class_2_CDA4A166D54A5BBB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetBattleBGMState* OFKGLJOAMLD; // 0x18
	::UnityEngine::Coroutine* OLPEBHPIFKH; // 0x20
	::System::String* NEOGKILELNP; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleBGMState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleBGMState*))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}
};

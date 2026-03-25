#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class CreateEmojiBubbleParam; }
namespace RPG::GameCore { class ShowEmojiBubble; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_7AC5B8D33D57585F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x881A360)
#define CLASS_2_7AC5B8D33D57585F_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x881A7B0)
#define CLASS_2_7AC5B8D33D57585F_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x881A860)
#define CLASS_2_7AC5B8D33D57585F_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x881A740)
#define CLASS_2_7AC5B8D33D57585F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x881A400)
#define CLASS_2_7AC5B8D33D57585F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x881A690)
#define CLASS_2_7AC5B8D33D57585F_TICK_OFFSET UNITYSDK_OFFSET(0x881A6E0)
#define CLASS_2_7AC5B8D33D57585F__CTOR_OFFSET UNITYSDK_OFFSET(0x881A350)

inline static constexpr unsigned int Class_2_7AC5B8D33D57585F_TypeDefinitionIndex = 47322;

class Class_2_7AC5B8D33D57585F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowEmojiBubble* Field_2_1; // 0x18
	::RPG::Client::CreateEmojiBubbleParam* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEmojiBubble* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEmojiBubble*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}
};

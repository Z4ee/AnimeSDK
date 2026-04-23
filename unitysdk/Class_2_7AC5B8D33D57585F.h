#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class CreateEmojiBubbleParam; }
namespace RPG::GameCore { class ShowEmojiBubble; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_7AC5B8D33D57585F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123E6370)
#define CLASS_2_7AC5B8D33D57585F_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x123E67F0)
#define CLASS_2_7AC5B8D33D57585F_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x123E6760)
#define CLASS_2_7AC5B8D33D57585F_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x123E66F0)
#define CLASS_2_7AC5B8D33D57585F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x123E63E0)
#define CLASS_2_7AC5B8D33D57585F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x123E6640)
#define CLASS_2_7AC5B8D33D57585F_TICK_OFFSET UNITYSDK_OFFSET(0x123E6690)
#define CLASS_2_7AC5B8D33D57585F__CTOR_OFFSET UNITYSDK_OFFSET(0x123E6360)

inline static constexpr unsigned int Class_2_7AC5B8D33D57585F_TypeDefinitionIndex = 54056;

class Class_2_7AC5B8D33D57585F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::CreateEmojiBubbleParam* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::GameCore::ShowEmojiBubble* Field_2_1; // 0x28

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

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5B8D33D57585F_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}
};

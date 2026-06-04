#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBattle; }

#define CLASS_2_6309E6BDF35FE7A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAABE50)
#define CLASS_2_6309E6BDF35FE7A9_METHOD_2_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0xAAABA90)
#define CLASS_2_6309E6BDF35FE7A9_METHOD_2_8C945585B4A8C17B_OFFSET UNITYSDK_OFFSET(0xAAAB9F0)
#define CLASS_2_6309E6BDF35FE7A9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAAAB8B0)
#define CLASS_2_6309E6BDF35FE7A9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAAAB860)
#define CLASS_2_6309E6BDF35FE7A9_TICK_OFFSET UNITYSDK_OFFSET(0xAAABDF0)
#define CLASS_2_6309E6BDF35FE7A9__CTOR_OFFSET UNITYSDK_OFFSET(0xAAAB850)

inline static constexpr unsigned int Class_2_6309E6BDF35FE7A9_TypeDefinitionIndex = 54910;

class Class_2_6309E6BDF35FE7A9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerBattle* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::Client::AdventurePhase* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBattle*))((::PBYTE)hIl2Cpp + CLASS_2_6309E6BDF35FE7A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6309E6BDF35FE7A9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6309E6BDF35FE7A9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6309E6BDF35FE7A9_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6309E6BDF35FE7A9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6309E6BDF35FE7A9_METHOD_2_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_2_8C945585B4A8C17B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6309E6BDF35FE7A9_METHOD_2_8C945585B4A8C17B_OFFSET))(this);
	}
};

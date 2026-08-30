#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBattle; }

#define CLASS_2_6309E6BDF35FE7A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176E8F30)
#define CLASS_2_6309E6BDF35FE7A9_METHOD_2_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x176E8B70)
#define CLASS_2_6309E6BDF35FE7A9_METHOD_2_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x176E8AD0)
#define CLASS_2_6309E6BDF35FE7A9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176E8990)
#define CLASS_2_6309E6BDF35FE7A9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x176E8940)
#define CLASS_2_6309E6BDF35FE7A9_TICK_OFFSET UNITYSDK_OFFSET(0x176E8ED0)
#define CLASS_2_6309E6BDF35FE7A9__CTOR_OFFSET UNITYSDK_OFFSET(0x176E8930)

inline static constexpr unsigned int Class_2_6309E6BDF35FE7A9_TypeDefinitionIndex = 58919;

class Class_2_6309E6BDF35FE7A9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::TriggerBattle* EJJEEJENLDA; // 0x20
	::RPG::Client::AdventurePhase* HAGFACOEAFD; // 0x28

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

	::System::Void Method_2_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6309E6BDF35FE7A9_METHOD_2_7223CD34BEFCBF48_OFFSET))(this);
	}
};

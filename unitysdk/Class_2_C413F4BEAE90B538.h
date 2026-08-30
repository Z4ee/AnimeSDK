#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectOnlyForLoading; }

#define CLASS_2_C413F4BEAE90B538_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1728C670)
#define CLASS_2_C413F4BEAE90B538_METHOD_2_540DB5DAE524BF3C_OFFSET UNITYSDK_OFFSET(0x1728CA20)
#define CLASS_2_C413F4BEAE90B538_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1728C6B0)
#define CLASS_2_C413F4BEAE90B538_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1728C970)
#define CLASS_2_C413F4BEAE90B538_TICK_OFFSET UNITYSDK_OFFSET(0x1728C9C0)
#define CLASS_2_C413F4BEAE90B538__CTOR_OFFSET UNITYSDK_OFFSET(0x1728C660)

inline static constexpr unsigned int Class_2_C413F4BEAE90B538_TypeDefinitionIndex = 55921;

class Class_2_C413F4BEAE90B538 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::MonoEffectManager* KMLMEHCDDMA; // 0x20
	::RPG::GameCore::TriggerEffectOnlyForLoading* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectOnlyForLoading* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectOnlyForLoading*))((::PBYTE)hIl2Cpp + CLASS_2_C413F4BEAE90B538__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C413F4BEAE90B538_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C413F4BEAE90B538_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C413F4BEAE90B538_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C413F4BEAE90B538_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_540DB5DAE524BF3C(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_C413F4BEAE90B538_METHOD_2_540DB5DAE524BF3C_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCableProceduralEffect; }

#define CLASS_2_0F2E105A97E50803_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143C1CD0)
#define CLASS_2_0F2E105A97E50803_METHOD_2_8AD8B8908A838D43_OFFSET UNITYSDK_OFFSET(0x143C1D70)
#define CLASS_2_0F2E105A97E50803_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143C1960)
#define CLASS_2_0F2E105A97E50803_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x143C1C80)
#define CLASS_2_0F2E105A97E50803_TICK_OFFSET UNITYSDK_OFFSET(0x143C1D10)
#define CLASS_2_0F2E105A97E50803__CTOR_OFFSET UNITYSDK_OFFSET(0x143C1950)

inline static constexpr unsigned int Class_2_0F2E105A97E50803_TypeDefinitionIndex = 52045;

class Class_2_0F2E105A97E50803 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TriggerCableProceduralEffect* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCableProceduralEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCableProceduralEffect*))((::PBYTE)hIl2Cpp + CLASS_2_0F2E105A97E50803__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F2E105A97E50803_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F2E105A97E50803_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F2E105A97E50803_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0F2E105A97E50803_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8AD8B8908A838D43(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_0F2E105A97E50803_METHOD_2_8AD8B8908A838D43_OFFSET))(this, a1, a2);
	}
};

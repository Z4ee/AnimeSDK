#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerReplaceCharacterPresetEffect; }
namespace System { class String; }

#define CLASS_2_788F897604A31585_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16246DE0)
#define CLASS_2_788F897604A31585_METHOD_2_A9261EBB725055D5_OFFSET UNITYSDK_OFFSET(0x16247290)
#define CLASS_2_788F897604A31585_METHOD_2_B8D69885A525C5DB_OFFSET UNITYSDK_OFFSET(0x16247750)
#define CLASS_2_788F897604A31585_METHOD_2_F55307DE4C9D3839_OFFSET UNITYSDK_OFFSET(0x16247450)
#define CLASS_2_788F897604A31585_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16246ED0)
#define CLASS_2_788F897604A31585_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16246E20)
#define CLASS_2_788F897604A31585_TICK_OFFSET UNITYSDK_OFFSET(0x16246E70)
#define CLASS_2_788F897604A31585__CTOR_OFFSET UNITYSDK_OFFSET(0x16246DD0)

inline static constexpr unsigned int Class_2_788F897604A31585_TypeDefinitionIndex = 53238;

class Class_2_788F897604A31585 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TriggerReplaceCharacterPresetEffect* Field_2_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect*))((::PBYTE)hIl2Cpp + CLASS_2_788F897604A31585__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_788F897604A31585_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_788F897604A31585_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_788F897604A31585_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_788F897604A31585_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_2_F55307DE4C9D3839(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::MonoEffect* a3, ::RPG::Client::TriggerEffectCallbackParams a4)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_788F897604A31585_METHOD_2_F55307DE4C9D3839_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_2_A9261EBB725055D5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_788F897604A31585_METHOD_2_A9261EBB725055D5_OFFSET))(a1);
	}

	static ::System::Void Method_2_B8D69885A525C5DB(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_788F897604A31585_METHOD_2_B8D69885A525C5DB_OFFSET))(a1, a2);
	}
};

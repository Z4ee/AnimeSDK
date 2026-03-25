#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerReplaceCharacterPresetEffect; }
namespace System { class String; }

#define CLASS_2_92823DD2D1B9CD4C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11860200)
#define CLASS_2_92823DD2D1B9CD4C_METHOD_2_41EAFC9EF57C300F_OFFSET UNITYSDK_OFFSET(0x11860BF0)
#define CLASS_2_92823DD2D1B9CD4C_METHOD_2_5F89484DD1053BBD_OFFSET UNITYSDK_OFFSET(0x11860800)
#define CLASS_2_92823DD2D1B9CD4C_METHOD_2_D29C416DA438109C_OFFSET UNITYSDK_OFFSET(0x11860630)
#define CLASS_2_92823DD2D1B9CD4C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118602F0)
#define CLASS_2_92823DD2D1B9CD4C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11860240)
#define CLASS_2_92823DD2D1B9CD4C_TICK_OFFSET UNITYSDK_OFFSET(0x11860290)
#define CLASS_2_92823DD2D1B9CD4C__CTOR_OFFSET UNITYSDK_OFFSET(0x118601F0)

inline static constexpr unsigned int Class_2_92823DD2D1B9CD4C_TypeDefinitionIndex = 44671;

class Class_2_92823DD2D1B9CD4C : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::TriggerReplaceCharacterPresetEffect* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerReplaceCharacterPresetEffect*))((::PBYTE)hIl2Cpp + CLASS_2_92823DD2D1B9CD4C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92823DD2D1B9CD4C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92823DD2D1B9CD4C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_92823DD2D1B9CD4C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92823DD2D1B9CD4C_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_2_5F89484DD1053BBD(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::MonoEffect* a3, ::RPG::Client::TriggerEffectCallbackParams a4)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_92823DD2D1B9CD4C_METHOD_2_5F89484DD1053BBD_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_2_D29C416DA438109C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_92823DD2D1B9CD4C_METHOD_2_D29C416DA438109C_OFFSET))(a1);
	}

	static ::System::Void Method_2_41EAFC9EF57C300F(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_92823DD2D1B9CD4C_METHOD_2_41EAFC9EF57C300F_OFFSET))(a1, a2);
	}
};

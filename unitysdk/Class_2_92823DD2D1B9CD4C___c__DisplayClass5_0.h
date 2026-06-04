#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_92823DD2D1B9CD4C___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8CBC0)
#define CLASS_2_92823DD2D1B9CD4C___C__DISPLAYCLASS5_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x13C8D3C0)

inline static constexpr unsigned int Class_2_92823DD2D1B9CD4C___c__DisplayClass5_0_TypeDefinitionIndex = 52082;

class Class_2_92823DD2D1B9CD4C___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::String* key; // 0x10
	::RPG::GameCore::GameEntity* targetEntity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92823DD2D1B9CD4C___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_92823DD2D1B9CD4C___C__DISPLAYCLASS5_0__ONTASKBEGIN_B__0_OFFSET))(this, a1, a2);
	}
};

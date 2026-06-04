#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD6AB60)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT___C__DISPLAYCLASS25_0__TRIGGERDEFAULTCHANGEMODELEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0xCD6CA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent___c__DisplayClass25_0_TypeDefinitionIndex = 53440;

	class CharacterOutfitComponent___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* targetRendererNames; // 0x10
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerDefaultChangeModelEffects_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT___C__DISPLAYCLASS25_0__TRIGGERDEFAULTCHANGEMODELEFFECTS_B__0_OFFSET))(this, a1, a2);
		}
	};
}

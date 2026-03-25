#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_139C0414462E94B8___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6CA8C0)
#define CLASS_3_139C0414462E94B8___C__DISPLAYCLASS1_0__TRIGGEREFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0xA6CAC20)

inline static constexpr unsigned int Class_3_139C0414462E94B8___c__DisplayClass1_0_TypeDefinitionIndex = 42483;

class Class_3_139C0414462E94B8___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* targetRendererNames; // 0x10
	::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* __9__0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_139C0414462E94B8___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _TriggerEffects_b__0(::RPG::Client::MonoEffect* eff, ::RPG::Client::TriggerEffectCallbackParams param)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_3_139C0414462E94B8___C__DISPLAYCLASS1_0__TRIGGEREFFECTS_B__0_OFFSET))(this, eff, param);
	}
};

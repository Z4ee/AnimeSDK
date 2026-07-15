#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_5EECFDEA7A89A768___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E5D040)
#define CLASS_3_5EECFDEA7A89A768___C__DISPLAYCLASS12_0___PLAYDAMAGEHITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x16E5D290)

inline static constexpr unsigned int Class_3_5EECFDEA7A89A768___c__DisplayClass12_0_TypeDefinitionIndex = 51384;

class Class_3_5EECFDEA7A89A768___c__DisplayClass12_0 : public ::System::Object
{
public:
	::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* __9__0; // 0x10
	::RPG::MVector3 vHitPos; // 0x18
	::RPG::MVector3 vHitSourcePos; // 0x24
	::System::Single fConfigEffectHeight; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayDamageHitEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_3_5EECFDEA7A89A768___C__DISPLAYCLASS12_0___PLAYDAMAGEHITEFFECT_B__0_OFFSET))(this, a1, a2);
	}
};

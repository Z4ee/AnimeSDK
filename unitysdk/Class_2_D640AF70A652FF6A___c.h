#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_D640AF70A652FF6A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4E1170)
#define CLASS_2_D640AF70A652FF6A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE4E11B0)
#define CLASS_2_D640AF70A652FF6A___C__TRIGGERBODYWAVEEFFECT_B__20_0_OFFSET UNITYSDK_OFFSET(0xE4E11C0)

inline static constexpr unsigned int Class_2_D640AF70A652FF6A___c_TypeDefinitionIndex = 54515;

class Class_2_D640AF70A652FF6A___c : public ::System::Object
{
public:
	static ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>** StaticGet___9__20_0()
	{
		return (::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D640AF70A652FF6A___c_TypeDefinitionIndex)->GetStaticField(0x682E0);
	}
	static ::Class_2_D640AF70A652FF6A___c** StaticGet___9()
	{
		return (::Class_2_D640AF70A652FF6A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D640AF70A652FF6A___c_TypeDefinitionIndex)->GetStaticField(0x682E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A___C__CTOR_OFFSET))(this);
	}

	::System::Void _TriggerBodyWaveEffect_b__20_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_D640AF70A652FF6A___C__TRIGGERBODYWAVEEFFECT_B__20_0_OFFSET))(this, a1, a2);
	}
};

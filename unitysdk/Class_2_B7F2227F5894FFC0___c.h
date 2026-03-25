#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_B7F2227F5894FFC0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11578B50)
#define CLASS_2_B7F2227F5894FFC0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11578B80)
#define CLASS_2_B7F2227F5894FFC0___C__TRIGGERBODYWAVEEFFECT_B__20_0_OFFSET UNITYSDK_OFFSET(0x11578B90)

inline static constexpr unsigned int Class_2_B7F2227F5894FFC0___c_TypeDefinitionIndex = 45939;

class Class_2_B7F2227F5894FFC0___c : public ::System::Object
{
public:
	static ::Class_2_B7F2227F5894FFC0___c** StaticGet___9()
	{
		return (::Class_2_B7F2227F5894FFC0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7F2227F5894FFC0___c_TypeDefinitionIndex)->GetStaticField(0x418D0);
	}
	static ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>** StaticGet___9__20_0()
	{
		return (::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7F2227F5894FFC0___c_TypeDefinitionIndex)->GetStaticField(0x418D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0___C__CTOR_OFFSET))(this);
	}

	::System::Void _TriggerBodyWaveEffect_b__20_0(::RPG::Client::MonoEffect* pSpecialEffect, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_B7F2227F5894FFC0___C__TRIGGERBODYWAVEEFFECT_B__20_0_OFFSET))(this, pSpecialEffect, extraParams);
	}
};

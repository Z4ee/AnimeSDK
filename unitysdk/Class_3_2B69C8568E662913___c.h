#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_2B69C8568E662913___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDA1780)
#define CLASS_3_2B69C8568E662913___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA17B0)
#define CLASS_3_2B69C8568E662913___C___CREATEPHONE_B__3_0_OFFSET UNITYSDK_OFFSET(0xBDA17C0)

inline static constexpr unsigned int Class_3_2B69C8568E662913___c_TypeDefinitionIndex = 58206;

class Class_3_2B69C8568E662913___c : public ::System::Object
{
public:
	static ::Class_3_2B69C8568E662913___c** StaticGet___9()
	{
		return (::Class_3_2B69C8568E662913___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2B69C8568E662913___c_TypeDefinitionIndex)->GetStaticField(0x64CA0);
	}
	static ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2B69C8568E662913___c_TypeDefinitionIndex)->GetStaticField(0x64CA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreatePhone_b__3_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913___C___CREATEPHONE_B__3_0_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_F1C17591C617CCBE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B76E20)
#define CLASS_3_F1C17591C617CCBE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B76E50)
#define CLASS_3_F1C17591C617CCBE___C___CREATEPHONE_B__3_0_OFFSET UNITYSDK_OFFSET(0x10B76E60)

inline static constexpr unsigned int Class_3_F1C17591C617CCBE___c_TypeDefinitionIndex = 46828;

class Class_3_F1C17591C617CCBE___c : public ::System::Object
{
public:
	static ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F1C17591C617CCBE___c_TypeDefinitionIndex)->GetStaticField(0x47E60);
	}
	static ::Class_3_F1C17591C617CCBE___c** StaticGet___9()
	{
		return (::Class_3_F1C17591C617CCBE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F1C17591C617CCBE___c_TypeDefinitionIndex)->GetStaticField(0x47E68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreatePhone_b__3_0(::RPG::Client::MonoEffect* effect, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE___C___CREATEPHONE_B__3_0_OFFSET))(this, effect, extraParams);
	}
};

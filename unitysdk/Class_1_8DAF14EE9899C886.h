#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SpecialVisionConfig; }
namespace System { class String; }

#define CLASS_1_8DAF14EE9899C886_METHOD_1_0009C6DB89CD6280_OFFSET UNITYSDK_OFFSET(0xB008DF0)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xB00A0D0)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_2B78E57E6DA20820_OFFSET UNITYSDK_OFFSET(0xB0098A0)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB008360)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0xB008C80)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET UNITYSDK_OFFSET(0xB009230)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_5BF0E61BD5CA40A5_2_OFFSET UNITYSDK_OFFSET(0xB009B10)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0xB008EA0)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_6DEE190F7FECD988_OFFSET UNITYSDK_OFFSET(0xB007630)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_6F10360085E72298_OFFSET UNITYSDK_OFFSET(0xB0095C0)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_73ECB962C2058A5E_OFFSET UNITYSDK_OFFSET(0xB0075B0)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_75EF3AB43D67C235_OFFSET UNITYSDK_OFFSET(0xB0083A0)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xB009EA0)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_CC9AB860D93A589B_OFFSET UNITYSDK_OFFSET(0xB008D00)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_D727BAF5B174BD1A_OFFSET UNITYSDK_OFFSET(0xB008450)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_E1AF29958691622C_OFFSET UNITYSDK_OFFSET(0xB0084C0)
#define CLASS_1_8DAF14EE9899C886_METHOD_1_ECB5F1C983BF42E9_OFFSET UNITYSDK_OFFSET(0xB007F30)
#define CLASS_1_8DAF14EE9899C886__CTOR_OFFSET UNITYSDK_OFFSET(0xB00A2A0)
#define CLASS_1_8DAF14EE9899C886___LOADNEWSPECIALVISIONEFFECT_B__7_0_OFFSET UNITYSDK_OFFSET(0xB00A320)

inline static constexpr unsigned int Class_1_8DAF14EE9899C886_TypeDefinitionIndex = 56972;

class Class_1_8DAF14EE9899C886 : public ::System::Object
{
public:
	static ::RPG::GameCore::SpecialVisionConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::SpecialVisionConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DAF14EE9899C886_TypeDefinitionIndex)->GetStaticField(0x48720);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::RPG::GameCore::GameEntity* Field_1_3; // 0x10
	::Struct_2_0B84ADD7815498A2 Field_1_4; // 0x18
	::System::String* Field_1_5; // 0x28
	::Struct_2_0B84ADD7815498A2 Field_1_6; // 0x30
	::RPG::GameCore::GameEntity* Field_1_7; // 0x40
	::System::String* Field_1_8; // 0x48
	::System::String* Field_1_9; // 0x50
	::RPG::GameCore::SpecialVisionType Field_1_10; // 0x58
	::System::Int32 Field_1_11; // 0x5C
	::System::Int32 Field_1_12; // 0x60
	::System::Boolean Field_1_13; // 0x64
	::System::Boolean Field_1_14; // 0x65
	::System::Int32 Field_1_15; // 0x68
	::System::Int32 Field_1_16; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73ECB962C2058A5E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_73ECB962C2058A5E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_75EF3AB43D67C235(::RPG::GameCore::SpecialVisionType a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::GameEntity* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialVisionType, ::System::String*, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_75EF3AB43D67C235_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_D727BAF5B174BD1A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_D727BAF5B174BD1A_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DEE190F7FECD988(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_6DEE190F7FECD988_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MonoEffect* Method_1_0009C6DB89CD6280(::RPG::Client::TriggerEffectParams* a1)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_0009C6DB89CD6280_OFFSET))(this, a1);
	}

	::Struct_2_0B84ADD7815498A2 Method_1_E1AF29958691622C()
	{
		return ((::Struct_2_0B84ADD7815498A2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_E1AF29958691622C_OFFSET))(this);
	}

	::System::Void Method_1_6F10360085E72298(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_6F10360085E72298_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_472E9805B297BD58(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_472E9805B297BD58_OFFSET))(this, a1);
	}

	::System::String* Method_1_2B78E57E6DA20820()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_2B78E57E6DA20820_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_5BF0E61BD5CA40A5_2_OFFSET))(this);
	}

	::System::Void Method_1_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_1_ECB5F1C983BF42E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_ECB5F1C983BF42E9_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	static ::RPG::GameCore::SpecialVisionConfig* Method_1_CC9AB860D93A589B()
	{
		return ((::RPG::GameCore::SpecialVisionConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886_METHOD_1_CC9AB860D93A589B_OFFSET))();
	}

	::System::Void __LoadNewSpecialVisionEffect_b__7_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_8DAF14EE9899C886___LOADNEWSPECIALVISIONEFFECT_B__7_0_OFFSET))(this, a1, a2);
	}
};

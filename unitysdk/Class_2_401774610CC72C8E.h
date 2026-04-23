#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_401774610CC72C8E_CounterType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_A2DF1DC9B9C38AD0;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_401774610CC72C8E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11896C00)
#define CLASS_2_401774610CC72C8E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11896D70)
#define CLASS_2_401774610CC72C8E_METHOD_2_06780D9DA5445268_OFFSET UNITYSDK_OFFSET(0x11895CF0)
#define CLASS_2_401774610CC72C8E_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x118957E0)
#define CLASS_2_401774610CC72C8E_METHOD_2_335AB672C838D49D_OFFSET UNITYSDK_OFFSET(0x11895BE0)
#define CLASS_2_401774610CC72C8E_METHOD_2_3ADBDAC4E19C46FF_OFFSET UNITYSDK_OFFSET(0x11896080)
#define CLASS_2_401774610CC72C8E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11897060)
#define CLASS_2_401774610CC72C8E_METHOD_2_717E5AEDA9FD8F84_OFFSET UNITYSDK_OFFSET(0x118959A0)
#define CLASS_2_401774610CC72C8E_METHOD_2_8AAA870BDF6CE134_OFFSET UNITYSDK_OFFSET(0x11896450)
#define CLASS_2_401774610CC72C8E_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x11895460)
#define CLASS_2_401774610CC72C8E_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11895B80)
#define CLASS_2_401774610CC72C8E_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x118958E0)
#define CLASS_2_401774610CC72C8E_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x11896180)
#define CLASS_2_401774610CC72C8E_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x11896330)
#define CLASS_2_401774610CC72C8E_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11896980)
#define CLASS_2_401774610CC72C8E_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x11896A40)
#define CLASS_2_401774610CC72C8E_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x118968C0)
#define CLASS_2_401774610CC72C8E_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x11895760)
#define CLASS_2_401774610CC72C8E_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0x118965F0)
#define CLASS_2_401774610CC72C8E_METHOD_2_C6E4AB6C40FAF7DC_OFFSET UNITYSDK_OFFSET(0x118962A0)
#define CLASS_2_401774610CC72C8E_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x11896FF0)
#define CLASS_2_401774610CC72C8E_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x11895570)
#define CLASS_2_401774610CC72C8E_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x118970C0)
#define CLASS_2_401774610CC72C8E_METHOD_2_D7411E5DB745D614_OFFSET UNITYSDK_OFFSET(0x11896780)
#define CLASS_2_401774610CC72C8E_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0x11896000)
#define CLASS_2_401774610CC72C8E_METHOD_2_E8AE7970E4E0CA8B_OFFSET UNITYSDK_OFFSET(0x118966D0)
#define CLASS_2_401774610CC72C8E_METHOD_2_EDA494CF8BB29EBF_OFFSET UNITYSDK_OFFSET(0x11896850)
#define CLASS_2_401774610CC72C8E_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x11895700)
#define CLASS_2_401774610CC72C8E_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x11896B00)
#define CLASS_2_401774610CC72C8E_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x118954D0)
#define CLASS_2_401774610CC72C8E_ONRETURN_OFFSET UNITYSDK_OFFSET(0x11895670)
#define CLASS_2_401774610CC72C8E__CCTOR_OFFSET UNITYSDK_OFFSET(0x11896F00)
#define CLASS_2_401774610CC72C8E__CTOR_OFFSET UNITYSDK_OFFSET(0x11896EC0)
#define CLASS_2_401774610CC72C8E__ONBIND_OFFSET UNITYSDK_OFFSET(0x11895170)
#define CLASS_2_401774610CC72C8E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11897130)
#define CLASS_2_401774610CC72C8E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11897190)
#define CLASS_2_401774610CC72C8E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11896F90)
#define CLASS_2_401774610CC72C8E___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x11896F70)

inline static constexpr unsigned int Class_2_401774610CC72C8E_TypeDefinitionIndex = 65814;

class Class_2_401774610CC72C8E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_401774610CC72C8E_TypeDefinitionIndex)->GetStaticField(0x7040);
	}
	static ::System::Int32* StaticGet_Field_2_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_401774610CC72C8E_TypeDefinitionIndex)->GetStaticField(0x7044);
	}
	// static const ::System::String* Field_2_24; // 0x0
	::UnityEngine::Transform* Field_2_10; // 0x60
	::RPG::Client::LocalizedText* Field_2_5; // 0x68
	::UnityEngine::ParticleSystem* Field_2_7; // 0x70
	::UnityEngine::UI::Image* Field_2_4; // 0x78
	::Class_2_A2DF1DC9B9C38AD0* Field_2_12; // 0x80
	::RPG::Client::RPGAnimationEvent* Field_2_0; // 0x88
	::UnityEngine::Transform* Field_2_9; // 0x90
	::UnityEngine::ParticleSystem* Field_2_8; // 0x98
	::RPG::Client::LocalizedText* Field_2_6; // 0xA0
	::UnityEngine::Animator* Field_2_11; // 0xA8
	::UnityEngine::UI::Image* Field_2_1; // 0xB0
	::UnityEngine::UI::Image* Field_2_2; // 0xB8
	::UnityEngine::UI::Image* Field_2_3; // 0xC0
	::RPG::GameCore::GameEntity* Field_2_13; // 0xC8
	::System::Int32 Field_2_16; // 0xD0
	::RPG::GameCore::EnergyBarState Field_2_19; // 0xD4
	::Class_2_401774610CC72C8E_CounterType Field_2_18; // 0xD8
	::System::Int32 Field_2_17; // 0xDC
	::System::Boolean Field_2_23; // 0xE0
	::System::Boolean Field_2_22; // 0xE1
	::System::Int32 Field_2_14; // 0xE4
	::System::Int32 Field_2_15; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_717E5AEDA9FD8F84(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_717E5AEDA9FD8F84_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_335AB672C838D49D()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_335AB672C838D49D_OFFSET))(this);
	}

	::System::Void Method_2_06780D9DA5445268(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_06780D9DA5445268_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_8AAA870BDF6CE134(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_8AAA870BDF6CE134_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8AE7970E4E0CA8B(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_E8AE7970E4E0CA8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7411E5DB745D614(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_D7411E5DB745D614_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDA494CF8BB29EBF(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_EDA494CF8BB29EBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_3ADBDAC4E19C46FF(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_3ADBDAC4E19C46FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6E4AB6C40FAF7DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_C6E4AB6C40FAF7DC_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E___ONBIND_B__0_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_401774610CC72C8E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

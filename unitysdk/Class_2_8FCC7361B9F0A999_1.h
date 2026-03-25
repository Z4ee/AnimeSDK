#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_670DA05CE98605A7;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_8FCC7361B9F0A999_1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11447FB0)
#define CLASS_2_8FCC7361B9F0A999_1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x114480F0)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x114479A0)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_335AB672C838D49D_OFFSET UNITYSDK_OFFSET(0x11447320)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_3ADBDAC4E19C46FF_OFFSET UNITYSDK_OFFSET(0x11447740)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_4CE5AB849874A902_OFFSET UNITYSDK_OFFSET(0x11447C50)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11448380)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x11447A60)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x11446FD0)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x11446DF0)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x114472B0)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x114471F0)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x11447880)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11447E50)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x11447F10)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11447D90)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0x11447AC0)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_C5D09897CC7133B0_OFFSET UNITYSDK_OFFSET(0x11447820)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x11448310)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x114483E0)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0x114476D0)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_E8AE7970E4E0CA8B_OFFSET UNITYSDK_OFFSET(0x11447BA0)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x114470A0)
#define CLASS_2_8FCC7361B9F0A999_1_METHOD_2_F68AFEE3EA56DB6D_OFFSET UNITYSDK_OFFSET(0x11447430)
#define CLASS_2_8FCC7361B9F0A999_1_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x11446E60)
#define CLASS_2_8FCC7361B9F0A999_1_ONRETURN_OFFSET UNITYSDK_OFFSET(0x11447030)
#define CLASS_2_8FCC7361B9F0A999_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x11448250)
#define CLASS_2_8FCC7361B9F0A999_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11448210)
#define CLASS_2_8FCC7361B9F0A999_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x114467F0)
#define CLASS_2_8FCC7361B9F0A999_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11448450)
#define CLASS_2_8FCC7361B9F0A999_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x114484B0)
#define CLASS_2_8FCC7361B9F0A999_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x114482B0)

inline static constexpr unsigned int Class_2_8FCC7361B9F0A999_1_TypeDefinitionIndex = 58708;

class Class_2_8FCC7361B9F0A999_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8FCC7361B9F0A999_1_TypeDefinitionIndex)->GetStaticField(0x107C0);
	}
	// static const ::System::String* Field_2_19; // 0x0
	::UnityEngine::Transform* Field_2_10; // 0x60
	::UnityEngine::Transform* Field_2_5; // 0x68
	::UnityEngine::UI::Image* Field_2_1; // 0x70
	::UnityEngine::ParticleSystem* Field_2_9; // 0x78
	::RPG::Client::LocalizedText* Field_2_7; // 0x80
	::UnityEngine::UI::Image* Field_2_0; // 0x88
	::Class_2_670DA05CE98605A7* Field_2_12; // 0x90
	::UnityEngine::Transform* Field_2_2; // 0x98
	::UnityEngine::ParticleSystem* Field_2_8; // 0xA0
	::UnityEngine::Animator* Field_2_11; // 0xA8
	::RPG::GameCore::GameEntity* Field_2_13; // 0xB0
	::UnityEngine::Transform* Field_2_4; // 0xB8
	::UnityEngine::Transform* Field_2_3; // 0xC0
	::UnityEngine::Transform* Field_2_6; // 0xC8
	::System::Int32 Field_2_16; // 0xD0
	::RPG::GameCore::EnergyBarState Field_2_17; // 0xD4
	::System::Int32 Field_2_14; // 0xD8
	::System::Int32 Field_2_15; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_335AB672C838D49D()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_335AB672C838D49D_OFFSET))(this);
	}

	::System::Void Method_2_F68AFEE3EA56DB6D(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_F68AFEE3EA56DB6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8AE7970E4E0CA8B(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_E8AE7970E4E0CA8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4CE5AB849874A902(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_4CE5AB849874A902_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5D09897CC7133B0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_C5D09897CC7133B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_3ADBDAC4E19C46FF(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_3ADBDAC4E19C46FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

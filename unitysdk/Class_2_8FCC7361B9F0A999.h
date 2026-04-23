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

#define CLASS_2_8FCC7361B9F0A999_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11908130)
#define CLASS_2_8FCC7361B9F0A999_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11908270)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x11907B20)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_335AB672C838D49D_OFFSET UNITYSDK_OFFSET(0x119074A0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_3ADBDAC4E19C46FF_OFFSET UNITYSDK_OFFSET(0x119078C0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_4CE5AB849874A902_OFFSET UNITYSDK_OFFSET(0x11907DD0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11908500)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x11907BE0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x11907160)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x11906F80)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11907440)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x11907380)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x11907A10)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11907FD0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x11908090)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11907F10)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0x11907C40)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_C5D09897CC7133B0_OFFSET UNITYSDK_OFFSET(0x119079B0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x11908490)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x11908560)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x11907230)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0x11907850)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_E8AE7970E4E0CA8B_OFFSET UNITYSDK_OFFSET(0x11907D20)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_F68AFEE3EA56DB6D_OFFSET UNITYSDK_OFFSET(0x119075B0)
#define CLASS_2_8FCC7361B9F0A999_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x11906FF0)
#define CLASS_2_8FCC7361B9F0A999_ONRETURN_OFFSET UNITYSDK_OFFSET(0x119071C0)
#define CLASS_2_8FCC7361B9F0A999__CCTOR_OFFSET UNITYSDK_OFFSET(0x119083D0)
#define CLASS_2_8FCC7361B9F0A999__CTOR_OFFSET UNITYSDK_OFFSET(0x11908390)
#define CLASS_2_8FCC7361B9F0A999__ONBIND_OFFSET UNITYSDK_OFFSET(0x11906BB0)
#define CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x119085D0)
#define CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11908630)
#define CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11908430)

inline static constexpr unsigned int Class_2_8FCC7361B9F0A999_TypeDefinitionIndex = 66032;

class Class_2_8FCC7361B9F0A999 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8FCC7361B9F0A999_TypeDefinitionIndex)->GetStaticField(0x93D0);
	}
	// static const ::System::String* Field_2_19; // 0x0
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::UnityEngine::UI::Image* Field_2_0; // 0x68
	::UnityEngine::ParticleSystem* Field_2_8; // 0x70
	::UnityEngine::Transform* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_2; // 0x80
	::UnityEngine::Transform* Field_2_10; // 0x88
	::Class_2_670DA05CE98605A7* Field_2_12; // 0x90
	::UnityEngine::Transform* Field_2_6; // 0x98
	::RPG::GameCore::GameEntity* Field_2_13; // 0xA0
	::UnityEngine::Animator* Field_2_11; // 0xA8
	::UnityEngine::ParticleSystem* Field_2_9; // 0xB0
	::RPG::Client::LocalizedText* Field_2_7; // 0xB8
	::UnityEngine::Transform* Field_2_5; // 0xC0
	::UnityEngine::Transform* Field_2_4; // 0xC8
	::System::Int32 Field_2_14; // 0xD0
	::System::Int32 Field_2_16; // 0xD4
	::RPG::GameCore::EnergyBarState Field_2_17; // 0xD8
	::System::Int32 Field_2_15; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_335AB672C838D49D()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_335AB672C838D49D_OFFSET))(this);
	}

	::System::Void Method_2_F68AFEE3EA56DB6D(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_F68AFEE3EA56DB6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8AE7970E4E0CA8B(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_E8AE7970E4E0CA8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4CE5AB849874A902(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_4CE5AB849874A902_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5D09897CC7133B0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_C5D09897CC7133B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_3ADBDAC4E19C46FF(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_3ADBDAC4E19C46FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

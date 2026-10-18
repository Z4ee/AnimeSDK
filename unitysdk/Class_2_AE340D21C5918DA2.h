#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
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

#define CLASS_2_AE340D21C5918DA2_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E93DB0)
#define CLASS_2_AE340D21C5918DA2_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15E93F30)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x15E936E0)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_0D329FF7C34FB570_OFFSET UNITYSDK_OFFSET(0x15E93290)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_3ADBDAC4E19C46FF_OFFSET UNITYSDK_OFFSET(0x15E93480)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_4CE5AB849874A902_OFFSET UNITYSDK_OFFSET(0x15E93990)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_4E42C1D03BBB9919_OFFSET UNITYSDK_OFFSET(0x15E93120)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_5FD4F0CCAF05C452_OFFSET UNITYSDK_OFFSET(0x15E937A0)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_6BA3F6FAA35776D7_OFFSET UNITYSDK_OFFSET(0x15E92EB0)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_72D9D09A23E0B593_OFFSET UNITYSDK_OFFSET(0x15E92DE0)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x15E92C00)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15E930C0)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x15E93000)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x15E935C0)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0x15E93800)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_C3435D680BA1E779_OFFSET UNITYSDK_OFFSET(0x15E93560)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0x15E93410)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_E8AE7970E4E0CA8B_OFFSET UNITYSDK_OFFSET(0x15E938E0)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x15E93B90)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x15E93CF0)
#define CLASS_2_AE340D21C5918DA2_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x15E93AD0)
#define CLASS_2_AE340D21C5918DA2_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15E92C70)
#define CLASS_2_AE340D21C5918DA2_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15E92E40)
#define CLASS_2_AE340D21C5918DA2__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E940D0)
#define CLASS_2_AE340D21C5918DA2__CTOR_OFFSET UNITYSDK_OFFSET(0x15E94090)
#define CLASS_2_AE340D21C5918DA2__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E92830)

inline static constexpr unsigned int Class_2_AE340D21C5918DA2_TypeDefinitionIndex = 71640;

class Class_2_AE340D21C5918DA2 : public ::Class_1_34917908B7833130
{
public:
	static ::System::Int32* StaticGet_FFEPLIHOFLA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_AE340D21C5918DA2_TypeDefinitionIndex)->GetStaticField(0x14C50);
	}
	// static const ::System::String* PELJGAPBLLI; // 0x0
	::UnityEngine::ParticleSystem* EGBLBGBNJHM; // 0x60
	::UnityEngine::UI::Image* PPJDHFKIMNH; // 0x68
	::UnityEngine::Transform* DCHOMFHCNFK; // 0x70
	::UnityEngine::ParticleSystem* CNIKPCNJHMA; // 0x78
	::UnityEngine::UI::Image* EAKFBADKHII; // 0x80
	::UnityEngine::Transform* EHCEHIJMNJK; // 0x88
	::UnityEngine::Transform* HJDIPJHBBKB; // 0x90
	::Class_2_670DA05CE98605A7* LCAFDOLIHIH; // 0x98
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xA0
	::RPG::Client::LocalizedText* CDGCELHDPPA; // 0xA8
	::UnityEngine::Transform* EDEFOEEAPEC; // 0xB0
	::UnityEngine::Transform* KCMNLHPPBBO; // 0xB8
	::UnityEngine::Animator* CFNGLMDMENE; // 0xC0
	::UnityEngine::Transform* LKDABAJGPHE; // 0xC8
	::System::Int32 BFLNNOEKIGE; // 0xD0
	::RPG::GameCore::EnergyBarState LODNGAGNLCB; // 0xD4
	::System::Int32 EJNMGLJJEOO; // 0xD8
	::System::Int32 JBCBNGCPAKP; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_72D9D09A23E0B593()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_72D9D09A23E0B593_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_6BA3F6FAA35776D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_6BA3F6FAA35776D7_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_4E42C1D03BBB9919()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_4E42C1D03BBB9919_OFFSET))(this);
	}

	::System::Void Method_2_0D329FF7C34FB570(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_0D329FF7C34FB570_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8AE7970E4E0CA8B(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_E8AE7970E4E0CA8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4CE5AB849874A902(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_4CE5AB849874A902_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3435D680BA1E779(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_C3435D680BA1E779_OFFSET))(this, a1);
	}

	::System::Void Method_2_3ADBDAC4E19C46FF(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_3ADBDAC4E19C46FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_5FD4F0CCAF05C452()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_5FD4F0CCAF05C452_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE340D21C5918DA2_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

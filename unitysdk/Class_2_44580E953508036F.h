#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_3_A2BC57CDDA246645_Mode.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_503F91D5A9A9E6E5_1;
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_44580E953508036F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBEBF810)
#define CLASS_2_44580E953508036F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBEBF8E0)
#define CLASS_2_44580E953508036F_METHOD_2_300DFD4123676691_OFFSET UNITYSDK_OFFSET(0xBEBF5F0)
#define CLASS_2_44580E953508036F_METHOD_2_376E493B62EC0CAE_OFFSET UNITYSDK_OFFSET(0xBEBEB00)
#define CLASS_2_44580E953508036F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBEBF160)
#define CLASS_2_44580E953508036F_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xBEBDA30)
#define CLASS_2_44580E953508036F_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0xBEBE430)
#define CLASS_2_44580E953508036F_METHOD_2_6612072A232BE51E_OFFSET UNITYSDK_OFFSET(0xBEBECB0)
#define CLASS_2_44580E953508036F_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xBEBDC30)
#define CLASS_2_44580E953508036F_METHOD_2_722E1524F560C8AF_OFFSET UNITYSDK_OFFSET(0xBEBF690)
#define CLASS_2_44580E953508036F_METHOD_2_8B7EDBAB102C9895_OFFSET UNITYSDK_OFFSET(0xBEBEE70)
#define CLASS_2_44580E953508036F_METHOD_2_A218F606F09DB78C_OFFSET UNITYSDK_OFFSET(0xBEBF350)
#define CLASS_2_44580E953508036F_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xBEBF2D0)
#define CLASS_2_44580E953508036F_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0xBEBDDC0)
#define CLASS_2_44580E953508036F_METHOD_2_B435928465FCA059_OFFSET UNITYSDK_OFFSET(0xBEBDCD0)
#define CLASS_2_44580E953508036F_METHOD_2_C20A8E714F76AB3E_OFFSET UNITYSDK_OFFSET(0xBEBDE30)
#define CLASS_2_44580E953508036F_METHOD_2_C47A6EBDAFAB8B19_OFFSET UNITYSDK_OFFSET(0xBEBF270)
#define CLASS_2_44580E953508036F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBEBD8F0)
#define CLASS_2_44580E953508036F_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0xBEBE9B0)
#define CLASS_2_44580E953508036F_METHOD_2_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0xBEBE0D0)
#define CLASS_2_44580E953508036F_METHOD_2_EB35513948B480FA_OFFSET UNITYSDK_OFFSET(0xBEBEBE0)
#define CLASS_2_44580E953508036F_METHOD_2_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0xBEBF210)
#define CLASS_2_44580E953508036F_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xBEBF750)
#define CLASS_2_44580E953508036F_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xBEBDAC0)
#define CLASS_2_44580E953508036F__CTOR_OFFSET UNITYSDK_OFFSET(0xBEBF980)
#define CLASS_2_44580E953508036F__ONBIND_OFFSET UNITYSDK_OFFSET(0xBEBC7F0)
#define CLASS_2_44580E953508036F__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBEBD930)
#define CLASS_2_44580E953508036F__ONTICK_OFFSET UNITYSDK_OFFSET(0xBEBD980)

inline static constexpr unsigned int Class_2_44580E953508036F_TypeDefinitionIndex = 71222;

class Class_2_44580E953508036F : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* FOHFALFBMAP; // 0x0
	// static const ::System::Single PCKKCHDMGEF; // 0x0
	::UnityEngine::CanvasGroup* CJDHCDIEHPJ; // 0x60
	::UnityEngine::Transform* GHKGMEOGPOM; // 0x68
	::UnityEngine::Transform* FCOMPKMEKBM; // 0x70
	::UnityEngine::UI::Image* FCBPPBCLCDA; // 0x78
	::UnityEngine::CanvasGroup* FDBLEIAGBBB; // 0x80
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x88
	::UnityEngine::Transform* LOMBINHJMKB; // 0x90
	::UnityEngine::UI::Image* MNAAJCICILK; // 0x98
	::UnityEngine::Transform* IHPHIBBCONP; // 0xA0
	::UnityEngine::Transform* EOCAAGOCCEA; // 0xA8
	::UnityEngine::Transform* NAHIKFMKDHJ; // 0xB0
	::UnityEngine::Transform* EIBKPDKAPIO; // 0xB8
	::UnityEngine::Transform* LNIBFAJLFLN; // 0xC0
	::UnityEngine::Transform* NBJMNJJMDGO; // 0xC8
	::UnityEngine::Transform* JNEAJBKNKNH; // 0xD0
	::UnityEngine::Transform* PHJICNHIAHK; // 0xD8
	::UnityEngine::Transform* BJGBFLPBKNL; // 0xE0
	::UnityEngine::Transform* ODCAKBFKKDG; // 0xE8
	::UnityEngine::Transform* BDIEBPHIBNG; // 0xF0
	::UnityEngine::Transform* KFGHLPMNDEP; // 0xF8
	::RPG::GameCore::CharacterDataComponent* GOKPGBDMOLC; // 0x100
	::UnityEngine::Transform* KHFDABJNCDD; // 0x108
	::UnityEngine::Transform* FDPFNIBKIGP; // 0x110
	::UnityEngine::UI::Image* HHOEIEEFKPH; // 0x118
	::UnityEngine::Transform* OEOIGMMNKKA; // 0x120
	::System::String* HCBJBNKKJHC; // 0x128
	::UnityEngine::UI::Image* NIKCLEKHJCN; // 0x130
	::UnityEngine::Transform* FGGMLHIPELM; // 0x138
	::UnityEngine::Transform* JIOJNMALJDP; // 0x140
	::UnityEngine::Transform* DOBBFGICHEP; // 0x148
	::UnityEngine::Transform* GKCILCKOLNP; // 0x150
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x158
	::UnityEngine::RectTransform* JGHCIANLNMI; // 0x160
	::UnityEngine::Transform* LCBOMLKLFIG; // 0x168
	::UnityEngine::Transform* FHNOLNNMLCD; // 0x170
	::UnityEngine::Transform* JMPECOICNCL; // 0x178
	::UnityEngine::CanvasGroup* JCJBIIMCGCF; // 0x180
	::UnityEngine::Transform* OCOFJIANGLF; // 0x188
	::UnityEngine::CanvasGroup* JMMPMMOEANP; // 0x190
	::UnityEngine::Transform* CMKGNBEOCGK; // 0x198
	::UnityEngine::Transform* POIHIOHKFII; // 0x1A0
	::UnityEngine::Transform* JFPFDGHPHDG; // 0x1A8
	::UnityEngine::Transform* KDEFDNMADNL; // 0x1B0
	::UnityEngine::Transform* NFNCBIKIDDA; // 0x1B8
	::UnityEngine::Transform* KFDOJBDFGMM; // 0x1C0
	::UnityEngine::Transform* JIIACEOHNMD; // 0x1C8
	::RPG::GameCore::BattleLineupData* MFOCCKGNFAG; // 0x1D0
	::UnityEngine::Transform* JIADNAOBHDD; // 0x1D8
	::UnityEngine::Transform* FOIGFOPJHEJ; // 0x1E0
	::UnityEngine::Transform* NLOIGEBPIGL; // 0x1E8
	::UnityEngine::RectTransform* ANPPHCFNPNF; // 0x1F0
	::Class_3_A2BC57CDDA246645_Mode BHJDJDPLCLP; // 0x1F8
	::System::Single CMKOAALCKAO; // 0x1FC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B435928465FCA059(::RPG::GameCore::GameEntity* a1, ::Class_3_A2BC57CDDA246645_Mode a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_3_A2BC57CDDA246645_Mode))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_B435928465FCA059_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_376E493B62EC0CAE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_376E493B62EC0CAE_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB35513948B480FA(::Class_3_A2BC57CDDA246645_Mode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A2BC57CDDA246645_Mode))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_EB35513948B480FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_6612072A232BE51E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_6612072A232BE51E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_8B7EDBAB102C9895()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_8B7EDBAB102C9895_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_C47A6EBDAFAB8B19(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_C47A6EBDAFAB8B19_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_C20A8E714F76AB3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_C20A8E714F76AB3E_OFFSET))(this);
	}

	::System::Void Method_2_EA0BA3E4AF50C583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_EA0BA3E4AF50C583_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_A218F606F09DB78C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_A218F606F09DB78C_OFFSET))(this);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_300DFD4123676691(::UnityEngine::Transform* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_300DFD4123676691_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_722E1524F560C8AF(::Class_1_503F91D5A9A9E6E5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_503F91D5A9A9E6E5_1*))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_722E1524F560C8AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_EBAC71FBE1837205_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44580E953508036F_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

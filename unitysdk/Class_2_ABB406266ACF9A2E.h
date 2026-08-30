#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_ABDB9F9EEB76D625;
class Class_2_C14495BD13DDA597;
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_ABB406266ACF9A2E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x198AF8A0)
#define CLASS_2_ABB406266ACF9A2E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x198AFA20)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x198AF4C0)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x198AF540)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x198AE1B0)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_81D45978B8E3E7F2_OFFSET UNITYSDK_OFFSET(0x198AE8B0)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x198AED40)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_AB39AF650EC67EAB_OFFSET UNITYSDK_OFFSET(0x198AF080)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0x198AF110)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x198ADB60)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_DDDB3490E38FF95F_OFFSET UNITYSDK_OFFSET(0x198AE030)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x198AEA10)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x198AF780)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x198AF810)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x198AF6F0)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_1_OFFSET UNITYSDK_OFFSET(0x198AEE00)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_2_OFFSET UNITYSDK_OFFSET(0x198AEF40)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x198AEC00)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F84EDFA9C4C77EA5_OFFSET UNITYSDK_OFFSET(0x198AE6C0)
#define CLASS_2_ABB406266ACF9A2E__CTOR_OFFSET UNITYSDK_OFFSET(0x198AFB80)
#define CLASS_2_ABB406266ACF9A2E__ONBIND_OFFSET UNITYSDK_OFFSET(0x198AD870)

inline static constexpr unsigned int Class_2_ABB406266ACF9A2E_TypeDefinitionIndex = 72206;

class Class_2_ABB406266ACF9A2E : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Transform* KKPDEDKKPIO; // 0x60
	::System::Collections::Generic::List_1<::Class_2_ABDB9F9EEB76D625*>* LBMILLAKLKI; // 0x68
	::UnityEngine::UI::Button* AJFFLOBFJAM; // 0x70
	::UnityEngine::UI::Text* ELKINPHPBDC; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitConfigBase*>* HIMNHBLPLME; // 0x80
	::System::Collections::Generic::List_1<::Class_2_C14495BD13DDA597*>* KMLNDLEGKAE; // 0x88
	::UnityEngine::Transform* LECOCIDLOJK; // 0x90
	::UnityEngine::Transform* JHIPBEPDLKI; // 0x98
	::UnityEngine::Transform* CLAIMGMCBDN; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AIAJPIMPMOF; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Int32 Method_2_F84EDFA9C4C77EA5(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F84EDFA9C4C77EA5_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightTraitLayerConfig* Method_2_81D45978B8E3E7F2(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_81D45978B8E3E7F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_2_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_1_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_2_OFFSET))(this);
	}

	::System::Void Method_2_AB39AF650EC67EAB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_AB39AF650EC67EAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_D8E6DC0B27699F85_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_DDDB3490E38FF95F()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_DDDB3490E38FF95F_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

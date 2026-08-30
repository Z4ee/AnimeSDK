#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_0_16E4307DCC419505_460;
class Class_1_0BA87B0B199639ED;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengePeakGameFlow; }
namespace RPG::GameCore { class BattleTargetChangeParams; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_97CB49090B2169AC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x178DCA60)
#define CLASS_2_97CB49090B2169AC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x178DCBA0)
#define CLASS_2_97CB49090B2169AC_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x178DA4C0)
#define CLASS_2_97CB49090B2169AC_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x178DA4E0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x178DB830)
#define CLASS_2_97CB49090B2169AC_METHOD_2_0552B0A8C7BD8BB0_OFFSET UNITYSDK_OFFSET(0x178DC280)
#define CLASS_2_97CB49090B2169AC_METHOD_2_1C87EE7694B173E6_OFFSET UNITYSDK_OFFSET(0x178DC510)
#define CLASS_2_97CB49090B2169AC_METHOD_2_229CEF33F0AF9039_1_OFFSET UNITYSDK_OFFSET(0x178DC810)
#define CLASS_2_97CB49090B2169AC_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x178DB400)
#define CLASS_2_97CB49090B2169AC_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x178DB6C0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x178DBED0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x178DA520)
#define CLASS_2_97CB49090B2169AC_METHOD_2_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x178DB530)
#define CLASS_2_97CB49090B2169AC_METHOD_2_AD1EEF8F6B87D2FC_OFFSET UNITYSDK_OFFSET(0x178DC210)
#define CLASS_2_97CB49090B2169AC_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x178DB350)
#define CLASS_2_97CB49090B2169AC_METHOD_2_B53F7BD98DCC799A_OFFSET UNITYSDK_OFFSET(0x178DC0E0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_B8FA72FA9AED0C88_OFFSET UNITYSDK_OFFSET(0x178DBB70)
#define CLASS_2_97CB49090B2169AC_METHOD_2_C197C60741593FF0_OFFSET UNITYSDK_OFFSET(0x178DC2D0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x178DC890)
#define CLASS_2_97CB49090B2169AC_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x178DB180)
#define CLASS_2_97CB49090B2169AC_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x178DA860)
#define CLASS_2_97CB49090B2169AC_METHOD_2_C79E003CEB6B5E92_OFFSET UNITYSDK_OFFSET(0x178DC670)
#define CLASS_2_97CB49090B2169AC_METHOD_2_C959E72807C9E088_OFFSET UNITYSDK_OFFSET(0x178DBF50)
#define CLASS_2_97CB49090B2169AC_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x178DA710)
#define CLASS_2_97CB49090B2169AC_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x178DB260)
#define CLASS_2_97CB49090B2169AC_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x178DB110)
#define CLASS_2_97CB49090B2169AC_METHOD_2_D7D9D2F1638FE8DD_OFFSET UNITYSDK_OFFSET(0x178DC320)
#define CLASS_2_97CB49090B2169AC_METHOD_2_DE25B04543C947C4_OFFSET UNITYSDK_OFFSET(0x178DB9F0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0x178DC5B0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x178DA9D0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_F2EEC5E8503D3622_OFFSET UNITYSDK_OFFSET(0x178DBCA0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x178DC980)
#define CLASS_2_97CB49090B2169AC_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x178DA4D0)
#define CLASS_2_97CB49090B2169AC__CTOR_OFFSET UNITYSDK_OFFSET(0x178DCCC0)
#define CLASS_2_97CB49090B2169AC__ONBIND_OFFSET UNITYSDK_OFFSET(0x178D98B0)
#define CLASS_2_97CB49090B2169AC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x178DBF90)
#define CLASS_2_97CB49090B2169AC__ONTICK_OFFSET UNITYSDK_OFFSET(0x178DB480)

inline static constexpr unsigned int Class_2_97CB49090B2169AC_TypeDefinitionIndex = 72034;

class Class_2_97CB49090B2169AC : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* PENODFJKLGN; // 0x0
	// static const ::System::UInt32 NCIDNCAABEI = 0x3; // 0x0
	// static const ::System::Single HGBCBJKAAMM; // 0x0
	// static const ::System::Single AJPGACLIOGN; // 0x0
	// static const ::System::UInt32 ANNOAILAHAO = 0x12C; // 0x0
	// static const ::System::String* AHMHFBAJHLN; // 0x0
	// static const ::System::String* FBKLACDCKDL; // 0x0
	// static const ::System::String* NCKMHAGOFNE; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* KKJLNGAANFB; // 0x60
	::UnityEngine::UI::Text* DHNHODGAKLH; // 0x68
	::UnityEngine::Transform* AEFNANKNHPO; // 0x70
	::UnityEngine::UI::Image* BHMFMBBLADC; // 0x78
	::UnityEngine::Animation* NDAHMEMIOKI; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::Animation*>* BBLGCBLIMEJ; // 0x88
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* MCAMHGMGNGG; // 0x90
	::System::Collections::Generic::List_1<::UnityEngine::Animation*>* JEHKEEKGOGP; // 0x98
	::UnityEngine::UI::Text* KPICPMEANJJ; // 0xA0
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* APDHJFGJPOM; // 0xA8
	::RPG::Client::AnimatorButton* DGFADNOKFIO; // 0xB0
	::UnityEngine::UI::Text* DKNOKMKBHLC; // 0xB8
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* CJIMFBOJLLP; // 0xC0
	::RPG::GameCore::LevelDataComponent* KEKOPPIHDLJ; // 0xC8
	::RPG::Client::AnimatorButton* PJONABOCAHI; // 0xD0
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* BKNIEJKDBCB; // 0xD8
	::UnityEngine::Transform* AOCIACEHMNM; // 0xE0
	::UnityEngine::Transform* GLCFJPMFNCB; // 0xE8
	::UnityEngine::Transform* OEJACCIHPLJ; // 0xF0
	::UnityEngine::Animation* IJLIJFHBCFN; // 0xF8
	::System::Collections::Generic::List_1<::System::Boolean>* IHMLPGEGBOL; // 0x100
	::UnityEngine::UI::Text* BFOKJKJBBIL; // 0x108
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* IINNNCIKFIE; // 0x110
	::UnityEngine::Transform* KOKJLIBCGFO; // 0x118
	::UnityEngine::Animation* LLJKNBGLGCN; // 0x120
	::System::Boolean HAFCOEMEHNH; // 0x128
	::System::Boolean AKBPMCJFCFM; // 0x129
	::System::Single FAFIAGJFGEF; // 0x12C
	::System::UInt64 DKIFLEMOKJD; // 0x130
	::System::Single BFKCADADNCA; // 0x138
	::System::UInt32 CCCNCNCCHLL; // 0x13C
	::System::Int32 LKBKDNAMNEG; // 0x140
	::System::Single IODBJGNMKND; // 0x144
	::System::Single CLEBBBABPEI; // 0x148
	::System::Int32 _Index_k__BackingField; // 0x14C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_2_DE25B04543C947C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_DE25B04543C947C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B8FA72FA9AED0C88(::Class_1_0BA87B0B199639ED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0BA87B0B199639ED*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_B8FA72FA9AED0C88_OFFSET))(this, a1);
	}

	::System::Void Method_2_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2EEC5E8503D3622(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_F2EEC5E8503D3622_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::RPG::GameCore::EventManager* Method_2_B53F7BD98DCC799A()
	{
		return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_B53F7BD98DCC799A_OFFSET))(this);
	}

	::RPG::Client::ChallengePeakGameFlow* Method_2_C959E72807C9E088()
	{
		return ((::RPG::Client::ChallengePeakGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_C959E72807C9E088_OFFSET))(this);
	}

	::System::Void Method_2_AD1EEF8F6B87D2FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_AD1EEF8F6B87D2FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_0552B0A8C7BD8BB0(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_0552B0A8C7BD8BB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Boolean Method_2_D7D9D2F1638FE8DD(::RPG::Client::ChallengePeakBoss* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_D7D9D2F1638FE8DD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C197C60741593FF0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_C197C60741593FF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_E52C357E96F7A058(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_E52C357E96F7A058_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Boolean Method_2_1C87EE7694B173E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_1C87EE7694B173E6_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_C79E003CEB6B5E92(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_C79E003CEB6B5E92_OFFSET))(this, a1);
	}

	::System::Void Method_2_229CEF33F0AF9039_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_229CEF33F0AF9039_1_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

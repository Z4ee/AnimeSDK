#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_401;
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

#define CLASS_2_97CB49090B2169AC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF24130)
#define CLASS_2_97CB49090B2169AC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBF24270)
#define CLASS_2_97CB49090B2169AC_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBF21E10)
#define CLASS_2_97CB49090B2169AC_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xBF21E30)
#define CLASS_2_97CB49090B2169AC_METHOD_2_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0xBF23010)
#define CLASS_2_97CB49090B2169AC_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0xBF23D10)
#define CLASS_2_97CB49090B2169AC_METHOD_2_229CEF33F0AF9039_1_OFFSET UNITYSDK_OFFSET(0xBF23F40)
#define CLASS_2_97CB49090B2169AC_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xBF22BE0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0xBF22290)
#define CLASS_2_97CB49090B2169AC_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xBF22EA0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBF22180)
#define CLASS_2_97CB49090B2169AC_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xBF236B0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xBF24680)
#define CLASS_2_97CB49090B2169AC_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xBF246E0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xBF245C0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_5E721D558F4CB29F_OFFSET UNITYSDK_OFFSET(0xBF23730)
#define CLASS_2_97CB49090B2169AC_METHOD_2_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0xBF21E40)
#define CLASS_2_97CB49090B2169AC_METHOD_2_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0xBF22D10)
#define CLASS_2_97CB49090B2169AC_METHOD_2_9860F9D03305FE9E_OFFSET UNITYSDK_OFFSET(0xBF23A60)
#define CLASS_2_97CB49090B2169AC_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xBF24080)
#define CLASS_2_97CB49090B2169AC_METHOD_2_AD1EEF8F6B87D2FC_OFFSET UNITYSDK_OFFSET(0xBF239F0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xBF22B30)
#define CLASS_2_97CB49090B2169AC_METHOD_2_B53F7BD98DCC799A_OFFSET UNITYSDK_OFFSET(0xBF238C0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_B8FA72FA9AED0C88_OFFSET UNITYSDK_OFFSET(0xBF23350)
#define CLASS_2_97CB49090B2169AC_METHOD_2_C197C60741593FF0_OFFSET UNITYSDK_OFFSET(0xBF23AB0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_C4AA153C94355B6D_OFFSET UNITYSDK_OFFSET(0xBF23C70)
#define CLASS_2_97CB49090B2169AC_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0xBF22970)
#define CLASS_2_97CB49090B2169AC_METHOD_2_C79E003CEB6B5E92_OFFSET UNITYSDK_OFFSET(0xBF23DA0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0xBF22030)
#define CLASS_2_97CB49090B2169AC_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xBF22A40)
#define CLASS_2_97CB49090B2169AC_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xBF22900)
#define CLASS_2_97CB49090B2169AC_METHOD_2_D7D9D2F1638FE8DD_OFFSET UNITYSDK_OFFSET(0xBF23B00)
#define CLASS_2_97CB49090B2169AC_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0xBF231D0)
#define CLASS_2_97CB49090B2169AC_METHOD_2_F2EEC5E8503D3622_OFFSET UNITYSDK_OFFSET(0xBF23480)
#define CLASS_2_97CB49090B2169AC_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xBF23FC0)
#define CLASS_2_97CB49090B2169AC_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBF21E20)
#define CLASS_2_97CB49090B2169AC__CTOR_OFFSET UNITYSDK_OFFSET(0xBF24390)
#define CLASS_2_97CB49090B2169AC__ONBIND_OFFSET UNITYSDK_OFFSET(0xBF211E0)
#define CLASS_2_97CB49090B2169AC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBF23770)
#define CLASS_2_97CB49090B2169AC__ONTICK_OFFSET UNITYSDK_OFFSET(0xBF22C60)
#define CLASS_2_97CB49090B2169AC___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF247A0)
#define CLASS_2_97CB49090B2169AC___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBF24800)
#define CLASS_2_97CB49090B2169AC___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xBF24560)
#define CLASS_2_97CB49090B2169AC___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBF24740)
#define CLASS_2_97CB49090B2169AC___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xBF24620)

inline static constexpr unsigned int Class_2_97CB49090B2169AC_TypeDefinitionIndex = 67367;

class Class_2_97CB49090B2169AC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::UInt32 Field_2_2 = 0x3; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::UInt32 Field_2_5 = 0x12C; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	::UnityEngine::UI::Text* Field_2_9; // 0x60
	::UnityEngine::Animation* Field_2_10; // 0x68
	::RPG::Client::AnimatorButton* Field_2_11; // 0x70
	::UnityEngine::Animation* Field_2_12; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Animation*>* Field_2_13; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_14; // 0x88
	::UnityEngine::Transform* Field_2_15; // 0x90
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_16; // 0x98
	::UnityEngine::Transform* Field_2_17; // 0xA0
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_18; // 0xA8
	::UnityEngine::Transform* Field_2_19; // 0xB0
	::UnityEngine::UI::Image* Field_2_20; // 0xB8
	::System::Collections::Generic::List_1<::UnityEngine::Animation*>* Field_2_21; // 0xC0
	::UnityEngine::Transform* Field_2_22; // 0xC8
	::UnityEngine::UI::Text* Field_2_23; // 0xD0
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_24; // 0xD8
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_25; // 0xE0
	::RPG::Client::AnimatorButton* Field_2_26; // 0xE8
	::UnityEngine::UI::Text* Field_2_27; // 0xF0
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_28; // 0xF8
	::UnityEngine::Transform* Field_2_29; // 0x100
	::UnityEngine::UI::Text* Field_2_30; // 0x108
	::System::Collections::Generic::List_1<::System::Boolean>* Field_2_31; // 0x110
	::RPG::GameCore::LevelDataComponent* Field_2_32; // 0x118
	::UnityEngine::Animation* Field_2_33; // 0x120
	::System::Int32 Field_2_34; // 0x128
	::System::Boolean Field_2_35; // 0x12C
	::System::Boolean Field_2_36; // 0x12D
	::System::UInt64 Field_2_37; // 0x130
	::System::Single Field_2_38; // 0x138
	::System::Single Field_2_39; // 0x13C
	::System::Int32 _Index_k__BackingField; // 0x140
	::System::UInt32 Field_2_41; // 0x144
	::System::Single Field_2_42; // 0x148
	::System::Single Field_2_43; // 0x14C

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

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
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

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
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

	::RPG::Client::ChallengePeakGameFlow* Method_2_5E721D558F4CB29F()
	{
		return ((::RPG::Client::ChallengePeakGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_5E721D558F4CB29F_OFFSET))(this);
	}

	::System::Void Method_2_AD1EEF8F6B87D2FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_AD1EEF8F6B87D2FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_9860F9D03305FE9E(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_9860F9D03305FE9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_3BCF0226A6CDC13B_OFFSET))(this);
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

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Boolean Method_2_C4AA153C94355B6D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_C4AA153C94355B6D_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_C79E003CEB6B5E92(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_C79E003CEB6B5E92_OFFSET))(this, a1);
	}

	::System::Void Method_2_229CEF33F0AF9039_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_229CEF33F0AF9039_1_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97CB49090B2169AC___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

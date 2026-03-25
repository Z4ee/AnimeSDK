#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_375;
class Class_1_19B7EEF756261CFE;
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

#define CLASS_2_900BE70F1444F0C0_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11108E60)
#define CLASS_2_900BE70F1444F0C0_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11108F70)
#define CLASS_2_900BE70F1444F0C0_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x111068D0)
#define CLASS_2_900BE70F1444F0C0_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x111068F0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x11106900)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_071101E881AE7A2F_OFFSET UNITYSDK_OFFSET(0x11108460)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x11108A00)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x111077B0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x11106DF0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0x11106CE0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11107B10)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x111083E0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x11107A00)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x11107740)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x11109340)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x111093A0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11109270)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x11108AB0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_6B16FF137ECD416A_OFFSET UNITYSDK_OFFSET(0x11106BD0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_81D7D1157E92B61D_OFFSET UNITYSDK_OFFSET(0x11107F80)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_838186D45801D7DF_OFFSET UNITYSDK_OFFSET(0x111087F0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_84C8B3AB5570DEF9_OFFSET UNITYSDK_OFFSET(0x111085B0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_89C318EF75A9A8E2_OFFSET UNITYSDK_OFFSET(0x11108750)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_90D26E018DBADB68_OFFSET UNITYSDK_OFFSET(0x111087A0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_94CBD0C21A609187_OFFSET UNITYSDK_OFFSET(0x111086E0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x111075E0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11108DB0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_A984848EA3E436DA_1_OFFSET UNITYSDK_OFFSET(0x11108C40)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x111078D0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_C4AA153C94355B6D_OFFSET UNITYSDK_OFFSET(0x11108960)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0x11107C80)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x11107570)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x11107E10)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_F2EEC5E8503D3622_OFFSET UNITYSDK_OFFSET(0x111081B0)
#define CLASS_2_900BE70F1444F0C0_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x11108CC0)
#define CLASS_2_900BE70F1444F0C0_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x111068E0)
#define CLASS_2_900BE70F1444F0C0__CTOR_OFFSET UNITYSDK_OFFSET(0x11109050)
#define CLASS_2_900BE70F1444F0C0__ONBIND_OFFSET UNITYSDK_OFFSET(0x11105B60)
#define CLASS_2_900BE70F1444F0C0__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x111084A0)
#define CLASS_2_900BE70F1444F0C0__ONTICK_OFFSET UNITYSDK_OFFSET(0x11107950)
#define CLASS_2_900BE70F1444F0C0___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11109460)
#define CLASS_2_900BE70F1444F0C0___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x111094C0)
#define CLASS_2_900BE70F1444F0C0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11109210)
#define CLASS_2_900BE70F1444F0C0___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x11109400)
#define CLASS_2_900BE70F1444F0C0___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x111092D0)

inline static constexpr unsigned int Class_2_900BE70F1444F0C0_TypeDefinitionIndex = 59053;

class Class_2_900BE70F1444F0C0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::UInt32 Field_2_17 = 0x3; // 0x0
	// static const ::System::Single Field_2_28; // 0x0
	// static const ::System::Single Field_2_29; // 0x0
	// static const ::System::UInt32 Field_2_37 = 0x12C; // 0x0
	// static const ::System::String* Field_2_40; // 0x0
	// static const ::System::String* Field_2_41; // 0x0
	// static const ::System::String* Field_2_42; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_13; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_12; // 0x68
	::UnityEngine::Animation* Field_2_23; // 0x70
	::UnityEngine::UI::Text* Field_2_21; // 0x78
	::UnityEngine::Animation* Field_2_6; // 0x80
	::UnityEngine::Transform* Field_2_18; // 0x88
	::System::Collections::Generic::List_1<::UnityEngine::Animation*>* Field_2_16; // 0x90
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_11; // 0x98
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_14; // 0xA0
	::UnityEngine::UI::Text* Field_2_3; // 0xA8
	::UnityEngine::Transform* Field_2_19; // 0xB0
	::UnityEngine::Animation* Field_2_22; // 0xB8
	::UnityEngine::UI::Text* Field_2_20; // 0xC0
	::RPG::GameCore::LevelDataComponent* Field_2_27; // 0xC8
	::UnityEngine::UI::Image* Field_2_5; // 0xD0
	::System::Collections::Generic::List_1<::System::Boolean>* Field_2_43; // 0xD8
	::UnityEngine::UI::Text* Field_2_2; // 0xE0
	::UnityEngine::Transform* Field_2_7; // 0xE8
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_10; // 0xF0
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_9; // 0xF8
	::RPG::Client::AnimatorButton* Field_2_24; // 0x100
	::UnityEngine::Transform* Field_2_4; // 0x108
	::UnityEngine::Transform* Field_2_8; // 0x110
	::System::Collections::Generic::List_1<::UnityEngine::Animation*>* Field_2_15; // 0x118
	::RPG::Client::AnimatorButton* Field_2_25; // 0x120
	::System::Single Field_2_34; // 0x128
	::System::Int32 _Index_k__BackingField; // 0x12C
	::System::Single Field_2_32; // 0x130
	::System::UInt32 Field_2_38; // 0x134
	::System::UInt64 Field_2_36; // 0x138
	::System::Single Field_2_33; // 0x140
	::System::Boolean Field_2_30; // 0x144
	::System::Boolean Field_2_31; // 0x145
	::System::Int32 Field_2_39; // 0x148
	::System::Single Field_2_35; // 0x14C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_81D7D1157E92B61D(::Class_1_19B7EEF756261CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_19B7EEF756261CFE*))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_81D7D1157E92B61D_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2EEC5E8503D3622(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_F2EEC5E8503D3622_OFFSET))(this, a1);
	}

	::System::Void Method_2_480EACF8B499351F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_480EACF8B499351F_OFFSET))(this, a1);
	}

	::System::Void Method_2_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_4307B2A4B4A12C1A_1_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6B16FF137ECD416A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_6B16FF137ECD416A_OFFSET))(this);
	}

	::RPG::GameCore::EventManager* Method_2_84C8B3AB5570DEF9()
	{
		return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_84C8B3AB5570DEF9_OFFSET))(this);
	}

	::RPG::Client::ChallengePeakGameFlow* Method_2_071101E881AE7A2F()
	{
		return ((::RPG::Client::ChallengePeakGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_071101E881AE7A2F_OFFSET))(this);
	}

	::System::Void Method_2_94CBD0C21A609187(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_94CBD0C21A609187_OFFSET))(this, a1);
	}

	::System::Void Method_2_89C318EF75A9A8E2(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_89C318EF75A9A8E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Boolean Method_2_838186D45801D7DF(::RPG::Client::ChallengePeakBoss* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_838186D45801D7DF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_90D26E018DBADB68(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_90D26E018DBADB68_OFFSET))(this, a1);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Boolean Method_2_C4AA153C94355B6D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_C4AA153C94355B6D_OFFSET))(this);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_A984848EA3E436DA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_A984848EA3E436DA_1_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900BE70F1444F0C0___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

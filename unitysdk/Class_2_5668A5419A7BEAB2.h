#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_425;
class Class_1_F6641B177752AEFC;
class Class_2_5668A5419A7BEAB2_Class_1_FA9AA54083BE415C;
class Class_2_5B599AA9B6DFF68F;
class Class_2_6BC34AADE687F0FD_CatchItemData;
namespace RPG::Client { class MonoControllableHand; }
namespace RPG::Client { class MonoDroneAirwallControl; }
namespace RPG::Client { class MonoHandOverlapTrigger; }
namespace RPG::Client { class SwitchHandPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5668A5419A7BEAB2_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14FCDCE0)
#define CLASS_2_5668A5419A7BEAB2_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x14FCDCD0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_010163AEE88904F8_OFFSET UNITYSDK_OFFSET(0x14FCA820)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x14FCDD10)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0x14FC6780)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_0A08BEB5A6FF1267_OFFSET UNITYSDK_OFFSET(0x14FCBBE0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0x14FCC460)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_0C901A4FD274D0CF_OFFSET UNITYSDK_OFFSET(0x14FC9DE0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_112C2B8B7932F43A_OFFSET UNITYSDK_OFFSET(0x14FC8860)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14FC5E80)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x14FC6040)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14FCBC30)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_1F9DB45F7550A899_OFFSET UNITYSDK_OFFSET(0x14FCBCC0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_2482AEF5DA23F61A_OFFSET UNITYSDK_OFFSET(0x14FCC790)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x14FC7980)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_28BB8707B4CC88A2_OFFSET UNITYSDK_OFFSET(0x14FCD9E0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_2B0AE62D097BB2AF_OFFSET UNITYSDK_OFFSET(0x14FCC660)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x14FC9C90)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_2CF9E14253AFCB8E_OFFSET UNITYSDK_OFFSET(0x14FCC230)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_32FE792EB1B0F498_OFFSET UNITYSDK_OFFSET(0x14FCC5A0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x14FC6C70)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_352B61CD747EF90A_OFFSET UNITYSDK_OFFSET(0x14FCC3D0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_37BF903F74E7BE5A_OFFSET UNITYSDK_OFFSET(0x14FCADB0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_3BF244C414C7BEE6_OFFSET UNITYSDK_OFFSET(0x14FCA250)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_3ECBFD28BA8C4296_OFFSET UNITYSDK_OFFSET(0x14FCDD00)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14FCC120)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_47CC1467027929B1_OFFSET UNITYSDK_OFFSET(0x14FCD100)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x14FC8410)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0x14FC9730)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_7B6EC255F45D034F_1_OFFSET UNITYSDK_OFFSET(0x14FCB640)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x14FCB5C0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_7DB49B5407C8FD68_1_OFFSET UNITYSDK_OFFSET(0x14FC8110)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14FC7680)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0x14FC6140)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_85C3B0BE7BB243BD_OFFSET UNITYSDK_OFFSET(0x14FCCF10)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_87DA5EB0C040E3E5_OFFSET UNITYSDK_OFFSET(0x14FCB6C0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_914D6046CC39AD24_OFFSET UNITYSDK_OFFSET(0x14FCDD30)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_921759D9C6955DBC_OFFSET UNITYSDK_OFFSET(0x14FCBD90)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x14FCCEB0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x14FCCE50)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_A89412D0474E693F_OFFSET UNITYSDK_OFFSET(0x14FCBF70)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_AE901FE5D06D0163_1_OFFSET UNITYSDK_OFFSET(0x14FCAAE0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_AE901FE5D06D0163_OFFSET UNITYSDK_OFFSET(0x14FCA550)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x14FCDCF0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_B21A07CFEAA186F9_OFFSET UNITYSDK_OFFSET(0x14FCA610)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_B605F6AD7763BE67_OFFSET UNITYSDK_OFFSET(0x14FCC720)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x14FC9F40)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x14FC6FC0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_BBA53B4B90B8C63A_1_OFFSET UNITYSDK_OFFSET(0x14FCA8F0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_BBA53B4B90B8C63A_OFFSET UNITYSDK_OFFSET(0x14FCA360)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14FC8BC0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_D07B4684597A784B_OFFSET UNITYSDK_OFFSET(0x14FCC800)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_E5AF195750C09845_OFFSET UNITYSDK_OFFSET(0x14FCB9D0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_EEABD52C0F4D0C8A_1_OFFSET UNITYSDK_OFFSET(0x14FCACA0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0x14FCA710)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_F1DA93F8DA3FE8B8_OFFSET UNITYSDK_OFFSET(0x14FCDD20)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x14FCC530)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x14FCC4C0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_F40AF41B962D2981_OFFSET UNITYSDK_OFFSET(0x14FCABA0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0x14FC6540)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_FBC3D7D544C66CDA_OFFSET UNITYSDK_OFFSET(0x14FCBDF0)
#define CLASS_2_5668A5419A7BEAB2_METHOD_2_FED2DB1B40494A9B_OFFSET UNITYSDK_OFFSET(0x14FC9A10)
#define CLASS_2_5668A5419A7BEAB2_ONINIT_OFFSET UNITYSDK_OFFSET(0x14FC5B90)
#define CLASS_2_5668A5419A7BEAB2_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x14FC7BA0)
#define CLASS_2_5668A5419A7BEAB2_TICK_OFFSET UNITYSDK_OFFSET(0x14FC8C10)
#define CLASS_2_5668A5419A7BEAB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FCDD80)
#define CLASS_2_5668A5419A7BEAB2__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCDD50)

inline static constexpr unsigned int Class_2_5668A5419A7BEAB2_TypeDefinitionIndex = 57594;

class Class_2_5668A5419A7BEAB2 : public ::Class_1_5BBB2050B3F3F683
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_5668A5419A7BEAB2_TypeDefinitionIndex)->GetStaticField(0x5120);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::UInt32 Field_2_2 = 0x7531; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::Single Field_2_5; // 0x0
	// static const ::System::Single Field_2_6; // 0x0
	// static const ::System::Single Field_2_7; // 0x0
	// static const ::System::Single Field_2_8; // 0x0
	::Il2CppArray<::System::Boolean>* Field_2_9; // 0x20
	::Class_1_F6641B177752AEFC* Field_2_10; // 0x28
	::System::String* Field_2_11; // 0x30
	::RPG::Client::MonoControllableHand* Field_2_12; // 0x38
	::RPG::Client::SwitchHandPuzzleBoard* Field_2_13; // 0x40
	::RPG::GameCore::GameEntity* Field_2_14; // 0x48
	::RPG::Client::MonoHandOverlapTrigger* Field_2_15; // 0x50
	::RPG::Client::MonoDroneAirwallControl* Field_2_16; // 0x58
	::RPG::GameCore::GameEntity* Field_2_17; // 0x60
	::UnityEngine::GameObject* Field_2_18; // 0x68
	::RPG::GameCore::AdventureCharacterController* Field_2_19; // 0x70
	::Class_2_5B599AA9B6DFF68F* Field_2_20; // 0x78
	::Class_2_5668A5419A7BEAB2_Class_1_FA9AA54083BE415C* Field_2_21; // 0x80
	::System::String* Field_2_22; // 0x88
	::System::Int32 Field_2_23; // 0x90
	::UnityEngine::Quaternion Field_2_24; // 0x94
	::System::Single Field_2_25; // 0xA4
	::System::Boolean Field_2_26; // 0xA8
	::System::Boolean Field_2_27; // 0xA9
	::System::Boolean Field_2_28; // 0xAA
	::System::Boolean Field_2_29; // 0xAB
	::System::Single Field_2_30; // 0xAC
	::System::Single Field_2_31; // 0xB0
	::System::Int32 Field_2_32; // 0xB4
	::System::UInt32 Field_2_33; // 0xB8
	::System::Int32 Field_2_34; // 0xBC
	::System::Int32 Field_2_35; // 0xC0
	::UnityEngine::Vector3 Field_2_36; // 0xC4
	::System::Int32 Field_2_37; // 0xD0
	::System::Int32 Field_2_38; // 0xD4
	::System::Single Field_2_39; // 0xD8
	::System::Int32 Field_2_40; // 0xDC
	::System::Int32 Field_2_41; // 0xE0
	::RPG::GameCore::ESwitchHandGestureType Field_2_42; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2__CCTOR_OFFSET))();
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_79E872D90798D236(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_79E872D90798D236_OFFSET))(this, a1);
	}

	::System::Void Method_2_FED2DB1B40494A9B(::RPG::GameCore::ESwitchHandGestureType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ESwitchHandGestureType))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_FED2DB1B40494A9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BF244C414C7BEE6(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::System::Action_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_3BF244C414C7BEE6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_AE901FE5D06D0163(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_AE901FE5D06D0163_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B21A07CFEAA186F9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_B21A07CFEAA186F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void Method_2_010163AEE88904F8(::RPG::GameCore::GameEntity* a1, ::Class_2_6BC34AADE687F0FD_CatchItemData* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_6BC34AADE687F0FD_CatchItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_010163AEE88904F8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AE901FE5D06D0163_1(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_AE901FE5D06D0163_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F40AF41B962D2981(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_F40AF41B962D2981_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_EEABD52C0F4D0C8A_1_OFFSET))(this);
	}

	::System::Boolean Method_2_37BF903F74E7BE5A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::AdventureHitConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AdventureHitConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_37BF903F74E7BE5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5AF195750C09845(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_E5AF195750C09845_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A08BEB5A6FF1267()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_0A08BEB5A6FF1267_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_2_1F9DB45F7550A899(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_1F9DB45F7550A899_OFFSET))(this, a1);
	}

	::System::Void Method_2_921759D9C6955DBC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_921759D9C6955DBC_OFFSET))(this, a1);
	}

	::System::Void Method_2_A89412D0474E693F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_A89412D0474E693F_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_2_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_FB1C56FCE4ABD259_OFFSET))(this, a1);
	}

	::System::Void Method_2_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_0860F812E446AE7C_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_112C2B8B7932F43A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_112C2B8B7932F43A_OFFSET))(this);
	}

	::System::Void Method_2_2CF9E14253AFCB8E(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_2CF9E14253AFCB8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_7DB49B5407C8FD68_1_OFFSET))(this);
	}

	::System::Void Method_2_352B61CD747EF90A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_352B61CD747EF90A_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C726E1A401D0413(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_0C726E1A401D0413_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_32FE792EB1B0F498(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_32FE792EB1B0F498_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B0AE62D097BB2AF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_2B0AE62D097BB2AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_B605F6AD7763BE67(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_B605F6AD7763BE67_OFFSET))(this, a1);
	}

	::System::Void Method_2_2482AEF5DA23F61A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_2482AEF5DA23F61A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_3306F24AC967FE79_OFFSET))(this);
	}

	::System::Void Method_2_D07B4684597A784B(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_D07B4684597A784B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::Class_1_F6641B177752AEFC* Method_2_0C901A4FD274D0CF()
	{
		return ((::Class_1_F6641B177752AEFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_0C901A4FD274D0CF_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_87DA5EB0C040E3E5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_87DA5EB0C040E3E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_FBC3D7D544C66CDA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_FBC3D7D544C66CDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBA53B4B90B8C63A(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_BBA53B4B90B8C63A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBA53B4B90B8C63A_1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_BBA53B4B90B8C63A_1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_2_85C3B0BE7BB243BD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_85C3B0BE7BB243BD_OFFSET))(this);
	}

	::System::String* Method_2_47CC1467027929B1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_47CC1467027929B1_OFFSET))(this, a1);
	}

	::System::String* Method_2_28BB8707B4CC88A2(::UnityEngine::Vector3 a1)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_28BB8707B4CC88A2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_7B6EC255F45D034F_1_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Boolean get_NeedLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_GET_NEEDLATEUPDATE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::ESwitchHandGestureType Method_2_3ECBFD28BA8C4296()
	{
		return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_3ECBFD28BA8C4296_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::RPG::Client::SwitchHandPuzzleBoard* Method_2_F1DA93F8DA3FE8B8()
	{
		return ((::RPG::Client::SwitchHandPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_F1DA93F8DA3FE8B8_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_2_914D6046CC39AD24()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_METHOD_2_914D6046CC39AD24_OFFSET))(this);
	}
};

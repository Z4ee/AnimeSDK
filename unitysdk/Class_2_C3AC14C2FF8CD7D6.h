#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"

class Class_0_16E4307DCC419505_988;
class Class_0_16E4307DCC419505_990;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_1CD5437D668B7AFD_Class_1_F8AF247262D62260;
namespace RPG::Client { template <typename T> class BattleAcquireReusablePanelVisitor_1; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_C3AC14C2FF8CD7D6_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x139FDA50)
#define CLASS_2_C3AC14C2FF8CD7D6_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x139FDC30)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x139FB230)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x139FA660)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_2E74614B64CD2BB3_OFFSET UNITYSDK_OFFSET(0x139FABE0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x139FD300)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x139FA470)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_4D40965311DC4894_OFFSET UNITYSDK_OFFSET(0x139FCBD0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x139FE200)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x139FE140)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_8573716B751478C1_OFFSET UNITYSDK_OFFSET(0x139FAE80)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_8A22347D5E1449AC_OFFSET UNITYSDK_OFFSET(0x139FD120)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_95CA880ABA7340D5_OFFSET UNITYSDK_OFFSET(0x139FB580)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x139FA3F0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_9860754F1D0991E7_OFFSET UNITYSDK_OFFSET(0x139FD4D0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x139FD8B0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x139FD950)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x139FD9B0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x139FD740)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_B9F11F0F4B258D26_OFFSET UNITYSDK_OFFSET(0x139FA7D0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_C01C81ED38CAB725_OFFSET UNITYSDK_OFFSET(0x139FCC80)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_C14DFF9AD8BE493E_OFFSET UNITYSDK_OFFSET(0x139FD5E0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x139FD7E0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x139FA2E0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0x139FA5B0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_E9A65FEB3BB1873E_OFFSET UNITYSDK_OFFSET(0x139FCEB0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x139FD5C0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F0ED5B0423F2ADCA_OFFSET UNITYSDK_OFFSET(0x139FD660)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F4E43C2617F2FA10_OFFSET UNITYSDK_OFFSET(0x139FCA40)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_FB14FF8840B181C2_OFFSET UNITYSDK_OFFSET(0x139FA610)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x139FA9C0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_FFF2EA02C056B21A_OFFSET UNITYSDK_OFFSET(0x139FC390)
#define CLASS_2_C3AC14C2FF8CD7D6__CTOR_OFFSET UNITYSDK_OFFSET(0x139FDDE0)
#define CLASS_2_C3AC14C2FF8CD7D6__ONBIND_OFFSET UNITYSDK_OFFSET(0x139FA2A0)
#define CLASS_2_C3AC14C2FF8CD7D6__ONTICK_OFFSET UNITYSDK_OFFSET(0x139FA320)
#define CLASS_2_C3AC14C2FF8CD7D6___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x139FE260)
#define CLASS_2_C3AC14C2FF8CD7D6___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x139FE2C0)
#define CLASS_2_C3AC14C2FF8CD7D6___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x139FE0E0)
#define CLASS_2_C3AC14C2FF8CD7D6___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x139FE1A0)
#define CLASS_2_C3AC14C2FF8CD7D6___UPDATEAVATARSPANEL_B__19_0_OFFSET UNITYSDK_OFFSET(0x139FDF80)

inline static constexpr unsigned int Class_2_C3AC14C2FF8CD7D6_TypeDefinitionIndex = 66789;

class Class_2_C3AC14C2FF8CD7D6 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x60
	::RPG::GameCore::TurnBasedGameMode* Field_2_2; // 0x68
	::RPG::Client::BattleAcquireReusablePanelVisitor_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0x70
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_4; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CharacterHUDType, ::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_988*>*>* Field_2_5; // 0x80
	::Class_0_16E4307DCC419505_990* Field_2_6; // 0x88
	::RPG::GameCore::BattleInstance* Field_2_7; // 0x90
	::RPG::Client::BattleAcquireReusablePanelVisitor_1<::System::Int32>* Field_2_8; // 0x98
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_9; // 0xA0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_988*>* Field_2_10; // 0xA8
	::Class_0_16E4307DCC419505_990* Field_2_11; // 0xB0
	::System::Single Field_2_12; // 0xB8
	::System::Boolean Field_2_13; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CD37BA088172EEF7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_CD37BA088172EEF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB14FF8840B181C2(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_FB14FF8840B181C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9F11F0F4B258D26(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_B9F11F0F4B258D26_OFFSET))(this, a1);
	}

	::System::Void Method_2_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_2_2E74614B64CD2BB3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_2E74614B64CD2BB3_OFFSET))(this, a1);
	}

	::System::Void Method_2_8573716B751478C1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_8573716B751478C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_95CA880ABA7340D5(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_95CA880ABA7340D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFF2EA02C056B21A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_FFF2EA02C056B21A_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_988* Method_2_C01C81ED38CAB725(::Class_2_1CD5437D668B7AFD_Class_1_F8AF247262D62260* a1)
	{
		return ((::Class_0_16E4307DCC419505_988*(*)(::PVOID, ::Class_2_1CD5437D668B7AFD_Class_1_F8AF247262D62260*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_C01C81ED38CAB725_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_988* Method_2_F4E43C2617F2FA10(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_988*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F4E43C2617F2FA10_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_8A22347D5E1449AC(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_8A22347D5E1449AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_9860754F1D0991E7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_9860754F1D0991E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_988* Method_2_4D40965311DC4894(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_988*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_4D40965311DC4894_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterHUDType Method_2_C14DFF9AD8BE493E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::CharacterHUDType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_C14DFF9AD8BE493E_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_988* Method_2_F0ED5B0423F2ADCA(::RPG::GameCore::CharacterHUDType a1)
	{
		return ((::Class_0_16E4307DCC419505_988*(*)(::PVOID, ::RPG::GameCore::CharacterHUDType))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F0ED5B0423F2ADCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A65FEB3BB1873E(::Class_0_16E4307DCC419505_988* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_988*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_E9A65FEB3BB1873E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Int32 __UpdateAvatarsPanel_b__19_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6___UPDATEAVATARSPANEL_B__19_0_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

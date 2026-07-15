#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"

class Class_0_16E4307DCC419505_1030;
class Class_0_16E4307DCC419505_1032;
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

#define CLASS_2_C3AC14C2FF8CD7D6_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x14AFCE50)
#define CLASS_2_C3AC14C2FF8CD7D6_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x14AFD030)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_185F640B532E227F_OFFSET UNITYSDK_OFFSET(0x14AF9810)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_1B5262956075B2F9_OFFSET UNITYSDK_OFFSET(0x14AF8E40)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_1BAC25F61C22AED9_OFFSET UNITYSDK_OFFSET(0x14AF9500)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_2166108A3E050E47_OFFSET UNITYSDK_OFFSET(0x14AFC7F0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_3660BC98C99A174D_OFFSET UNITYSDK_OFFSET(0x14AFC8C0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14AFC870)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x14AF8CA0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_4D40965311DC4894_OFFSET UNITYSDK_OFFSET(0x14AFBDE0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x14AF9CE0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_8C43E6E7E328B9EB_OFFSET UNITYSDK_OFFSET(0x14AF9050)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x14AF9290)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14AF8C20)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x14AFCAE0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_99DBC22FB543C50C_OFFSET UNITYSDK_OFFSET(0x14AFA0F0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x14AF8EA0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A6B30003B24E81C8_OFFSET UNITYSDK_OFFSET(0x14AFBC00)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0x14AFC5C0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_C01C81ED38CAB725_OFFSET UNITYSDK_OFFSET(0x14AFBE90)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14AF8B10)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0x14AF8DE0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_CE017E2A52468EF8_OFFSET UNITYSDK_OFFSET(0x14AFCD30)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_E411BCC5E73CE129_OFFSET UNITYSDK_OFFSET(0x14AFC380)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_E9A65FEB3BB1873E_OFFSET UNITYSDK_OFFSET(0x14AFC0C0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F0ED5B0423F2ADCA_OFFSET UNITYSDK_OFFSET(0x14AFC940)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x14AFCBE0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x14AFCCA0)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x14AFCA20)
#define CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_FFF2EA02C056B21A_OFFSET UNITYSDK_OFFSET(0x14AFB380)
#define CLASS_2_C3AC14C2FF8CD7D6__CTOR_OFFSET UNITYSDK_OFFSET(0x14AFD1E0)
#define CLASS_2_C3AC14C2FF8CD7D6__ONBIND_OFFSET UNITYSDK_OFFSET(0x14AF8AD0)
#define CLASS_2_C3AC14C2FF8CD7D6__ONTICK_OFFSET UNITYSDK_OFFSET(0x14AF8B50)
#define CLASS_2_C3AC14C2FF8CD7D6___UPDATEAVATARSPANEL_B__19_0_OFFSET UNITYSDK_OFFSET(0x14AFD380)

inline static constexpr unsigned int Class_2_C3AC14C2FF8CD7D6_TypeDefinitionIndex = 68226;

class Class_2_C3AC14C2FF8CD7D6 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::RPG::Client::BattleAcquireReusablePanelVisitor_1<::System::Int32>* Field_2_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CharacterHUDType, ::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_1030*>*>* Field_2_2; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0x70
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1030*>* Field_2_4; // 0x78
	::RPG::Client::BattleAcquireReusablePanelVisitor_1<::RPG::GameCore::GameEntity*>* Field_2_5; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_6; // 0x88
	::Class_0_16E4307DCC419505_1032* Field_2_7; // 0x90
	::RPG::GameCore::TurnBasedGameMode* Field_2_8; // 0x98
	::RPG::GameCore::BattleInstance* Field_2_9; // 0xA0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_10; // 0xA8
	::Class_0_16E4307DCC419505_1032* Field_2_11; // 0xB0
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

	::System::Void Method_2_1B5262956075B2F9(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_1B5262956075B2F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C43E6E7E328B9EB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_8C43E6E7E328B9EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_2_1BAC25F61C22AED9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_1BAC25F61C22AED9_OFFSET))(this, a1);
	}

	::System::Void Method_2_185F640B532E227F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_185F640B532E227F_OFFSET))(this, a1);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_2_99DBC22FB543C50C(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_99DBC22FB543C50C_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFF2EA02C056B21A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_FFF2EA02C056B21A_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1030* Method_2_C01C81ED38CAB725(::Class_2_1CD5437D668B7AFD_Class_1_F8AF247262D62260* a1)
	{
		return ((::Class_0_16E4307DCC419505_1030*(*)(::PVOID, ::Class_2_1CD5437D668B7AFD_Class_1_F8AF247262D62260*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_C01C81ED38CAB725_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1030* Method_2_A6B30003B24E81C8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_1030*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A6B30003B24E81C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_E411BCC5E73CE129(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_E411BCC5E73CE129_OFFSET))(this, a1);
	}

	::System::Void Method_2_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_B917C58B4E14AC1B_OFFSET))(this);
	}

	::System::Void Method_2_2166108A3E050E47(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_2166108A3E050E47_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1030* Method_2_4D40965311DC4894(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_1030*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_4D40965311DC4894_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterHUDType Method_2_3660BC98C99A174D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::CharacterHUDType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_3660BC98C99A174D_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1030* Method_2_F0ED5B0423F2ADCA(::RPG::GameCore::CharacterHUDType a1)
	{
		return ((::Class_0_16E4307DCC419505_1030*(*)(::PVOID, ::RPG::GameCore::CharacterHUDType))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F0ED5B0423F2ADCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A65FEB3BB1873E(::Class_0_16E4307DCC419505_1030* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1030*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_E9A65FEB3BB1873E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE017E2A52468EF8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C3AC14C2FF8CD7D6_METHOD_2_CE017E2A52468EF8_OFFSET))(this, a1);
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
};

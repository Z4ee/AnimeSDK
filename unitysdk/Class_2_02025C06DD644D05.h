#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_831;
class Class_0_16E4307DCC419505_834;
class Class_1_02D30900317D93FD;
class Class_2_FEA1F11597C9F3B2_Class_1_31B35383D25353CE;
namespace RPG::Client { template <typename T> class BattleAcquireReusablePanelVisitor_1; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_02025C06DD644D05_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAC4BF70)
#define CLASS_2_02025C06DD644D05_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAC4C0C0)
#define CLASS_2_02025C06DD644D05_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0xAC4A760)
#define CLASS_2_02025C06DD644D05_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xAC49960)
#define CLASS_2_02025C06DD644D05_METHOD_2_522C97A47C3F7DF2_OFFSET UNITYSDK_OFFSET(0xAC4B950)
#define CLASS_2_02025C06DD644D05_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xAC4C460)
#define CLASS_2_02025C06DD644D05_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAC4C390)
#define CLASS_2_02025C06DD644D05_METHOD_2_5BAC60F11A3CD798_OFFSET UNITYSDK_OFFSET(0xAC4AB70)
#define CLASS_2_02025C06DD644D05_METHOD_2_715F646B9FE157D6_OFFSET UNITYSDK_OFFSET(0xAC49B00)
#define CLASS_2_02025C06DD644D05_METHOD_2_8E947BDFF67BA503_OFFSET UNITYSDK_OFFSET(0xAC4B150)
#define CLASS_2_02025C06DD644D05_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAC498E0)
#define CLASS_2_02025C06DD644D05_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xAC4BE70)
#define CLASS_2_02025C06DD644D05_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xAC4BF10)
#define CLASS_2_02025C06DD644D05_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xAC4BCE0)
#define CLASS_2_02025C06DD644D05_METHOD_2_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0xAC4BB10)
#define CLASS_2_02025C06DD644D05_METHOD_2_B870D81140BD1054_OFFSET UNITYSDK_OFFSET(0xAC4A580)
#define CLASS_2_02025C06DD644D05_METHOD_2_C01C81ED38CAB725_OFFSET UNITYSDK_OFFSET(0xAC4B760)
#define CLASS_2_02025C06DD644D05_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0xAC4BDA0)
#define CLASS_2_02025C06DD644D05_METHOD_2_C3B319DB218750CE_OFFSET UNITYSDK_OFFSET(0xAC4B600)
#define CLASS_2_02025C06DD644D05_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC497D0)
#define CLASS_2_02025C06DD644D05_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0xAC49AA0)
#define CLASS_2_02025C06DD644D05_METHOD_2_D041D5B253DF0CEE_OFFSET UNITYSDK_OFFSET(0xAC4A900)
#define CLASS_2_02025C06DD644D05_METHOD_2_DE6B094AAF361FF5_OFFSET UNITYSDK_OFFSET(0xAC49B90)
#define CLASS_2_02025C06DD644D05_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAC49B70)
#define CLASS_2_02025C06DD644D05__CTOR_OFFSET UNITYSDK_OFFSET(0xAC4C1E0)
#define CLASS_2_02025C06DD644D05__ONBIND_OFFSET UNITYSDK_OFFSET(0xAC49790)
#define CLASS_2_02025C06DD644D05__ONTICK_OFFSET UNITYSDK_OFFSET(0xAC49810)
#define CLASS_2_02025C06DD644D05___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAC4C4C0)
#define CLASS_2_02025C06DD644D05___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAC4C520)
#define CLASS_2_02025C06DD644D05___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAC4C330)
#define CLASS_2_02025C06DD644D05___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xAC4C3F0)

inline static constexpr unsigned int Class_2_02025C06DD644D05_TypeDefinitionIndex = 58555;

class Class_2_02025C06DD644D05 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_12; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0x60
	::RPG::GameCore::TurnBasedGameMode* Field_2_10; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x70
	::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_831*>* Field_2_4; // 0x78
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_831*>* Field_2_1; // 0x80
	::RPG::Client::BattleAcquireReusablePanelVisitor_1<::System::Int32>* Field_2_6; // 0x88
	::RPG::GameCore::BattleInstance* Field_2_9; // 0x90
	::Class_0_16E4307DCC419505_834* Field_2_7; // 0x98
	::Class_0_16E4307DCC419505_834* Field_2_8; // 0xA0
	::RPG::Client::BattleAcquireReusablePanelVisitor_1<::RPG::GameCore::GameEntity*>* Field_2_5; // 0xA8
	::System::Boolean Field_2_11; // 0xB0
	::System::Single Field_2_0; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_CD37BA088172EEF7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_CD37BA088172EEF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_715F646B9FE157D6(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_715F646B9FE157D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_B870D81140BD1054(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_B870D81140BD1054_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_D041D5B253DF0CEE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_D041D5B253DF0CEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_5BAC60F11A3CD798(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_5BAC60F11A3CD798_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE6B094AAF361FF5(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_DE6B094AAF361FF5_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E947BDFF67BA503(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_8E947BDFF67BA503_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_831* Method_2_C01C81ED38CAB725(::Class_2_FEA1F11597C9F3B2_Class_1_31B35383D25353CE* a1)
	{
		return ((::Class_0_16E4307DCC419505_831*(*)(::PVOID, ::Class_2_FEA1F11597C9F3B2_Class_1_31B35383D25353CE*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_C01C81ED38CAB725_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_831* Method_2_C3B319DB218750CE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_831*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_C3B319DB218750CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_522C97A47C3F7DF2(::Class_1_02D30900317D93FD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_522C97A47C3F7DF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02025C06DD644D05___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

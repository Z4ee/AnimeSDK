#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"

class Class_0_16E4307DCC419505_938;
class Class_0_16E4307DCC419505_941;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_1CD5437D668B7AFD_Class_1_31B35383D25353CE;
namespace RPG::Client { template <typename T> class BattleAcquireReusablePanelVisitor_1; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_5E062D4DB0081790_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12B087F0)
#define CLASS_2_5E062D4DB0081790_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12B08940)
#define CLASS_2_5E062D4DB0081790_METHOD_2_21AEA5C030E83F9D_OFFSET UNITYSDK_OFFSET(0x12B07BA0)
#define CLASS_2_5E062D4DB0081790_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x12B06B20)
#define CLASS_2_5E062D4DB0081790_METHOD_2_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x12B072A0)
#define CLASS_2_5E062D4DB0081790_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x12B05B70)
#define CLASS_2_5E062D4DB0081790_METHOD_2_522C97A47C3F7DF2_OFFSET UNITYSDK_OFFSET(0x12B080E0)
#define CLASS_2_5E062D4DB0081790_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12B08D10)
#define CLASS_2_5E062D4DB0081790_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12B08C40)
#define CLASS_2_5E062D4DB0081790_METHOD_2_5BAC60F11A3CD798_OFFSET UNITYSDK_OFFSET(0x12B06F40)
#define CLASS_2_5E062D4DB0081790_METHOD_2_715F646B9FE157D6_OFFSET UNITYSDK_OFFSET(0x12B05D00)
#define CLASS_2_5E062D4DB0081790_METHOD_2_84A9358A026DA23C_OFFSET UNITYSDK_OFFSET(0x12B07E50)
#define CLASS_2_5E062D4DB0081790_METHOD_2_8E947BDFF67BA503_OFFSET UNITYSDK_OFFSET(0x12B075A0)
#define CLASS_2_5E062D4DB0081790_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12B05AE0)
#define CLASS_2_5E062D4DB0081790_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x12B086F0)
#define CLASS_2_5E062D4DB0081790_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x12B08790)
#define CLASS_2_5E062D4DB0081790_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x12B08560)
#define CLASS_2_5E062D4DB0081790_METHOD_2_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x12B082A0)
#define CLASS_2_5E062D4DB0081790_METHOD_2_B870D81140BD1054_OFFSET UNITYSDK_OFFSET(0x12B06940)
#define CLASS_2_5E062D4DB0081790_METHOD_2_C01C81ED38CAB725_OFFSET UNITYSDK_OFFSET(0x12B07C20)
#define CLASS_2_5E062D4DB0081790_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x12B08620)
#define CLASS_2_5E062D4DB0081790_METHOD_2_C3B319DB218750CE_OFFSET UNITYSDK_OFFSET(0x12B07A40)
#define CLASS_2_5E062D4DB0081790_METHOD_2_C53D643F5CB01A20_OFFSET UNITYSDK_OFFSET(0x12B05D90)
#define CLASS_2_5E062D4DB0081790_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12B059D0)
#define CLASS_2_5E062D4DB0081790_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0x12B05CA0)
#define CLASS_2_5E062D4DB0081790_METHOD_2_D041D5B253DF0CEE_OFFSET UNITYSDK_OFFSET(0x12B06CD0)
#define CLASS_2_5E062D4DB0081790_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12B05D70)
#define CLASS_2_5E062D4DB0081790_METHOD_2_F0ED5B0423F2ADCA_OFFSET UNITYSDK_OFFSET(0x12B08470)
#define CLASS_2_5E062D4DB0081790__CTOR_OFFSET UNITYSDK_OFFSET(0x12B08A60)
#define CLASS_2_5E062D4DB0081790__ONBIND_OFFSET UNITYSDK_OFFSET(0x12B05990)
#define CLASS_2_5E062D4DB0081790__ONTICK_OFFSET UNITYSDK_OFFSET(0x12B05A10)
#define CLASS_2_5E062D4DB0081790___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12B08D70)
#define CLASS_2_5E062D4DB0081790___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12B08DD0)
#define CLASS_2_5E062D4DB0081790___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12B08BE0)
#define CLASS_2_5E062D4DB0081790___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x12B08CA0)

inline static constexpr unsigned int Class_2_5E062D4DB0081790_TypeDefinitionIndex = 65856;

class Class_2_5E062D4DB0081790 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_12; // 0x0
	::RPG::GameCore::TurnBasedGameMode* Field_2_10; // 0x60
	::Class_0_16E4307DCC419505_941* Field_2_8; // 0x68
	::RPG::Client::BattleAcquireReusablePanelVisitor_1<::System::Int32>* Field_2_6; // 0x70
	::RPG::GameCore::BattleInstance* Field_2_9; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CharacterHUDType, ::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_938*>*>* Field_2_4; // 0x80
	::RPG::Client::BattleAcquireReusablePanelVisitor_1<::RPG::GameCore::GameEntity*>* Field_2_5; // 0x88
	::Class_0_16E4307DCC419505_941* Field_2_7; // 0x90
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x98
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0xA0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_938*>* Field_2_1; // 0xA8
	::System::Boolean Field_2_11; // 0xB0
	::System::Single Field_2_0; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_CD37BA088172EEF7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_CD37BA088172EEF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_715F646B9FE157D6(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_715F646B9FE157D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_B870D81140BD1054(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_B870D81140BD1054_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_D041D5B253DF0CEE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_D041D5B253DF0CEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_5BAC60F11A3CD798(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_5BAC60F11A3CD798_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BC8B8F2BB08C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_3BC8B8F2BB08C1C2_OFFSET))(this);
	}

	::System::Void Method_2_C53D643F5CB01A20(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_C53D643F5CB01A20_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E947BDFF67BA503(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_8E947BDFF67BA503_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_938* Method_2_C01C81ED38CAB725(::Class_2_1CD5437D668B7AFD_Class_1_31B35383D25353CE* a1)
	{
		return ((::Class_0_16E4307DCC419505_938*(*)(::PVOID, ::Class_2_1CD5437D668B7AFD_Class_1_31B35383D25353CE*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_C01C81ED38CAB725_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_938* Method_2_C3B319DB218750CE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_938*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_C3B319DB218750CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_522C97A47C3F7DF2(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_522C97A47C3F7DF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_AC96313FF120BAE7_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_938* Method_2_21AEA5C030E83F9D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_0_16E4307DCC419505_938*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_21AEA5C030E83F9D_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_938* Method_2_F0ED5B0423F2ADCA(::RPG::GameCore::CharacterHUDType a1)
	{
		return ((::Class_0_16E4307DCC419505_938*(*)(::PVOID, ::RPG::GameCore::CharacterHUDType))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_F0ED5B0423F2ADCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_84A9358A026DA23C(::Class_0_16E4307DCC419505_938* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_938*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_84A9358A026DA23C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E062D4DB0081790___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

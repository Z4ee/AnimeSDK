#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4E1DB51D0780DCEB_Enum_3_CA7C9A6C1BE1373B.h"
#include "unitysdk/Enum_3_0A43EA4B15EC3408.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
class Class_1_4E1DB51D0780DCEB_Class_1_A9DF9F4312C529DF;
class Class_2_79AE422BA06F6D26_8;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralDropDownControllerContext; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_0A8670C649F0D879_OFFSET UNITYSDK_OFFSET(0xFD48E50)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_31CE3191035E8EAD_OFFSET UNITYSDK_OFFSET(0xFD48F60)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_37E0DFB1455B93CC_OFFSET UNITYSDK_OFFSET(0xFD49030)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xFD496A0)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_4629280D95F80FB9_OFFSET UNITYSDK_OFFSET(0xFD49A00)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_7A5741ABA03BF695_OFFSET UNITYSDK_OFFSET(0xFD49E30)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_92F2FCA8316DB56D_OFFSET UNITYSDK_OFFSET(0xFD49EA0)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_958AC3A3E274189C_OFFSET UNITYSDK_OFFSET(0xFD49150)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_9C605EFFC1A72E10_OFFSET UNITYSDK_OFFSET(0xFD4A210)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_A0341C7992B0DE61_OFFSET UNITYSDK_OFFSET(0xFD49CD0)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xFD49F80)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0xFD49DC0)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_BB4F3DDC9CC494A1_OFFSET UNITYSDK_OFFSET(0xFD496F0)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0xFD48A60)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xFD490F0)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xFD49360)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_F31B59EEF7AFE71A_OFFSET UNITYSDK_OFFSET(0xFD49690)
#define CLASS_1_4E1DB51D0780DCEB_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0xFD49C80)
#define CLASS_1_4E1DB51D0780DCEB_ONCLICK_OFFSET UNITYSDK_OFFSET(0xFD48610)
#define CLASS_1_4E1DB51D0780DCEB__CTOR_OFFSET UNITYSDK_OFFSET(0xFD48600)

inline static constexpr unsigned int Class_1_4E1DB51D0780DCEB_TypeDefinitionIndex = 65372;

class Class_1_4E1DB51D0780DCEB : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_037D21AC29ED1130>* Field_1_3; // 0x10
	::MoleMole::UIGeneralDropDownControllerContext* Field_1_7; // 0x18
	::MoleMole::UIBaseController* Field_1_1; // 0x20
	::System::Action_1<::System::Boolean>* Field_1_14; // 0x28
	::System::Func_2<::Il2CppArray<::Struct_2_037D21AC29ED1130>*, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*>* Field_1_0; // 0x30
	::MoleMole::UIGeneralDynamicTipsPopWindowController* Field_1_6; // 0x38
	::Class_2_79AE422BA06F6D26_8* Field_1_2; // 0x40
	::System::Action_1<::System::Int32>* Field_1_5; // 0x48
	::MoleMole::NotificationBadgeEx* Field_1_13; // 0x50
	::System::Int32 Field_1_8; // 0x58
	::Class_1_4E1DB51D0780DCEB_Enum_3_CA7C9A6C1BE1373B Field_1_10; // 0x5C
	::MoleMole::InputLogicEventType Field_1_11; // 0x60
	::System::Boolean Field_1_12; // 0x64
	::System::Boolean Field_1_4; // 0x65
	::Enum_3_0A43EA4B15EC3408 Field_1_9; // 0x68

	::System::Void _ctor(::Class_1_4E1DB51D0780DCEB_Enum_3_CA7C9A6C1BE1373B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4E1DB51D0780DCEB_Enum_3_CA7C9A6C1BE1373B))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_ONCLICK_OFFSET))(this);
	}

	::System::Void Method_1_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Void Method_1_0A8670C649F0D879(::MoleMole::UIBaseController* a1, ::Class_2_79AE422BA06F6D26_8* a2, ::Class_1_4E1DB51D0780DCEB_Class_1_A9DF9F4312C529DF* a3, ::Il2CppArray<::Struct_2_037D21AC29ED1130>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_2_79AE422BA06F6D26_8*, ::Class_1_4E1DB51D0780DCEB_Class_1_A9DF9F4312C529DF*, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_0A8670C649F0D879_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_37E0DFB1455B93CC(::Il2CppArray<::Struct_2_037D21AC29ED1130>* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_37E0DFB1455B93CC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_958AC3A3E274189C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_958AC3A3E274189C_OFFSET))(this, a1);
	}

	::System::Void Method_1_31CE3191035E8EAD(::MoleMole::UIBaseController* a1, ::Class_2_79AE422BA06F6D26_8* a2, ::System::Action_1<::System::Int32>* a3, ::System::Int32 a4, ::Enum_3_0A43EA4B15EC3408 a5, ::Il2CppArray<::Struct_2_037D21AC29ED1130>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_2_79AE422BA06F6D26_8*, ::System::Action_1<::System::Int32>*, ::System::Int32, ::Enum_3_0A43EA4B15EC3408, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_31CE3191035E8EAD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::UIGeneralDynamicTipsPopWindowController* Method_1_F31B59EEF7AFE71A()
	{
		return ((::MoleMole::UIGeneralDynamicTipsPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_F31B59EEF7AFE71A_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB4F3DDC9CC494A1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_BB4F3DDC9CC494A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4629280D95F80FB9(::MoleMole::NotificationBadgeEx* a1, ::Class_1_1EA8435E138F2E03* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_4629280D95F80FB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::Struct_2_037D21AC29ED1130 Method_1_A0341C7992B0DE61(::System::Int32 a1)
	{
		return ((::Struct_2_037D21AC29ED1130(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_A0341C7992B0DE61_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A5741ABA03BF695(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_7A5741ABA03BF695_OFFSET))(this, a1);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_92F2FCA8316DB56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_92F2FCA8316DB56D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_9C605EFFC1A72E10(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E1DB51D0780DCEB_METHOD_1_9C605EFFC1A72E10_OFFSET))(this, a1, a2);
	}
};

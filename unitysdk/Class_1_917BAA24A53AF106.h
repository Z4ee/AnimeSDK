#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_917BAA24A53AF106_Enum_3_CA7C9A6C1BE1373B.h"
#include "unitysdk/Enum_3_0A43EA4B15EC3408.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
class Class_1_917BAA24A53AF106_Class_1_A9DF9F4312C529DF;
class Class_2_79AE422BA06F6D26_7;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralDropDownControllerContext; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_917BAA24A53AF106_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x13D12E90)
#define CLASS_1_917BAA24A53AF106_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x13D118F0)
#define CLASS_1_917BAA24A53AF106_METHOD_1_2E3DD0B825FA9049_OFFSET UNITYSDK_OFFSET(0x13D12680)
#define CLASS_1_917BAA24A53AF106_METHOD_1_369A44682980D19B_OFFSET UNITYSDK_OFFSET(0x13D121B0)
#define CLASS_1_917BAA24A53AF106_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x13D11320)
#define CLASS_1_917BAA24A53AF106_METHOD_1_7A5741ABA03BF695_OFFSET UNITYSDK_OFFSET(0x13D12DB0)
#define CLASS_1_917BAA24A53AF106_METHOD_1_7D7D9D1052218BB8_OFFSET UNITYSDK_OFFSET(0x13D125B0)
#define CLASS_1_917BAA24A53AF106_METHOD_1_90457272BAB90EF4_OFFSET UNITYSDK_OFFSET(0x13D12A20)
#define CLASS_1_917BAA24A53AF106_METHOD_1_92F2FCA8316DB56D_OFFSET UNITYSDK_OFFSET(0x13D11370)
#define CLASS_1_917BAA24A53AF106_METHOD_1_958AC3A3E274189C_OFFSET UNITYSDK_OFFSET(0x13D116E0)
#define CLASS_1_917BAA24A53AF106_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x13D11450)
#define CLASS_1_917BAA24A53AF106_METHOD_1_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0x13D12E20)
#define CLASS_1_917BAA24A53AF106_METHOD_1_BB4F3DDC9CC494A1_OFFSET UNITYSDK_OFFSET(0x13D11D40)
#define CLASS_1_917BAA24A53AF106_METHOD_1_BE277DD0FC300FE6_OFFSET UNITYSDK_OFFSET(0x13D120A0)
#define CLASS_1_917BAA24A53AF106_METHOD_1_BE49407F3BE209AE_OFFSET UNITYSDK_OFFSET(0x13D127A0)
#define CLASS_1_917BAA24A53AF106_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x13D12740)
#define CLASS_1_917BAA24A53AF106_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x13D12280)
#define CLASS_1_917BAA24A53AF106_METHOD_1_F31B59EEF7AFE71A_OFFSET UNITYSDK_OFFSET(0x13D12DA0)
#define CLASS_1_917BAA24A53AF106_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x13D12050)
#define CLASS_1_917BAA24A53AF106_ONCLICK_OFFSET UNITYSDK_OFFSET(0x13D10E60)
#define CLASS_1_917BAA24A53AF106__CTOR_OFFSET UNITYSDK_OFFSET(0x13CEDF90)

inline static constexpr unsigned int Class_1_917BAA24A53AF106_TypeDefinitionIndex = 54694;

class Class_1_917BAA24A53AF106 : public ::System::Object
{
public:
	::System::Func_2<::Il2CppArray<::Struct_2_037D21AC29ED1130>*, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*>* Field_1_1; // 0x10
	::System::Action_1<::System::Int32>* Field_1_4; // 0x18
	::MoleMole::NotificationBadgeEx* Field_1_12; // 0x20
	::System::Action* Field_1_18; // 0x28
	::Il2CppArray<::Struct_2_037D21AC29ED1130>* Field_1_6; // 0x30
	::System::Action_1<::System::Boolean>* Field_1_19; // 0x38
	::MoleMole::UIBaseController* Field_1_0; // 0x40
	::Class_2_79AE422BA06F6D26_7* Field_1_7; // 0x48
	::MoleMole::UIGeneralDropDownControllerContext* Field_1_10; // 0x50
	::MoleMole::UIGeneralDynamicTipsPopWindowController* Field_1_11; // 0x58
	::Enum_3_0A43EA4B15EC3408 Field_1_8; // 0x60
	::Class_1_917BAA24A53AF106_Enum_3_CA7C9A6C1BE1373B Field_1_15; // 0x64
	::MoleMole::InputLogicEventType Field_1_14; // 0x68
	::System::Int32 Field_1_9; // 0x6C
	::System::Boolean Field_1_13; // 0x70
	::System::Boolean Field_1_5; // 0x71

	::System::Void _ctor(::Class_1_917BAA24A53AF106_Enum_3_CA7C9A6C1BE1373B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_917BAA24A53AF106_Enum_3_CA7C9A6C1BE1373B))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_ONCLICK_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_92F2FCA8316DB56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_92F2FCA8316DB56D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_958AC3A3E274189C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_958AC3A3E274189C_OFFSET))(this, a1);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_BB4F3DDC9CC494A1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_BB4F3DDC9CC494A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_BE277DD0FC300FE6(::MoleMole::UIBaseController* a1, ::Class_2_79AE422BA06F6D26_7* a2, ::Class_1_917BAA24A53AF106_Class_1_A9DF9F4312C529DF* a3, ::Il2CppArray<::Struct_2_037D21AC29ED1130>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_2_79AE422BA06F6D26_7*, ::Class_1_917BAA24A53AF106_Class_1_A9DF9F4312C529DF*, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_BE277DD0FC300FE6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::Struct_2_037D21AC29ED1130 Method_1_7D7D9D1052218BB8(::System::Int32 a1)
	{
		return ((::Struct_2_037D21AC29ED1130(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_7D7D9D1052218BB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_2E3DD0B825FA9049(::Il2CppArray<::Struct_2_037D21AC29ED1130>* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_2E3DD0B825FA9049_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BE49407F3BE209AE(::MoleMole::NotificationBadgeEx* a1, ::Class_1_1EA8435E138F2E03* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_BE49407F3BE209AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_90457272BAB90EF4(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_90457272BAB90EF4_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIGeneralDynamicTipsPopWindowController* Method_1_F31B59EEF7AFE71A()
	{
		return ((::MoleMole::UIGeneralDynamicTipsPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_F31B59EEF7AFE71A_OFFSET))(this);
	}

	::System::Void Method_1_7A5741ABA03BF695(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_7A5741ABA03BF695_OFFSET))(this, a1);
	}

	::System::Void Method_1_369A44682980D19B(::MoleMole::UIBaseController* a1, ::Class_2_79AE422BA06F6D26_7* a2, ::System::Action_1<::System::Int32>* a3, ::System::Int32 a4, ::Enum_3_0A43EA4B15EC3408 a5, ::Il2CppArray<::Struct_2_037D21AC29ED1130>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_2_79AE422BA06F6D26_7*, ::System::Action_1<::System::Int32>*, ::System::Int32, ::Enum_3_0A43EA4B15EC3408, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_369A44682980D19B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_917BAA24A53AF106_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}
};

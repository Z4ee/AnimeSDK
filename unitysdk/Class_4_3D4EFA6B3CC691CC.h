#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5F8DAA47ACDB7251.h"
#include "unitysdk/Class_4_3D4EFA6B3CC691CC_Struct_2_913E9FE1CC2F9A87.h"
#include "unitysdk/Enum_3_3FFB084FB2E4C2F3.h"
#include "unitysdk/Enum_3_60A7BA8A302D0436.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryFilter.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryKey.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_13F13E462CA09034;
class Class_1_449B1BB2E3AA2D13;
class Class_1_84C5B95CD7B4A033;
class Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915;
class Class_1_B7E341C5F1A6F199;
class Class_1_EBAFD36E19398E2B;
class Class_2_2EB7007F00A054AA;
class Class_2_30AC6D08929031AC;
class Class_2_54D31199DB132D48;
class Class_2_B242825AD4217625;
class Class_3_1699D6295DC3F818;
class Class_3_1699D6295DC3F818_5;
class Class_3_3C27FB03C7F640D0_1;
class Class_3_A9E2939AF1A43E78;
class Class_3_F6E9D1CD310ACC17;
class Class_4_3D4EFA6B3CC691CC_Class_1_CE5FD96772EDDA84;
namespace MoleMole { class MonsterFantasyResultContext; }
namespace MoleMole { class TurnBattleEntityTemporaryUnit; }
namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole { class TurnBattleUnitBase; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIInLevelPauseDialogContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_0_16E4307DCC419505_496;
template <typename T1, typename T2> class Class_1_19F8D0BF0A8C8F12;

#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_047D34745A4B98A3_OFFSET UNITYSDK_OFFSET(0x131C4930)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_0649C5669745F185_OFFSET UNITYSDK_OFFSET(0x131BCD40)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x131C4940)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0x131BEE00)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_17261981A0E6961D_OFFSET UNITYSDK_OFFSET(0x131BCB50)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_1BB69027409E5F71_OFFSET UNITYSDK_OFFSET(0x131C0FC0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_1CC1F49C95DCD42C_OFFSET UNITYSDK_OFFSET(0x131C4F10)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x131C1AD0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x131BBE00)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x131C4400)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x131BBC10)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_2511F8BE4910795E_OFFSET UNITYSDK_OFFSET(0x131C35E0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_2ECDA55F3D79DBAC_OFFSET UNITYSDK_OFFSET(0x131C2D00)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x131C1E90)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_3E95970492C02E1A_OFFSET UNITYSDK_OFFSET(0x131BF610)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x131BBC20)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_42DD8F1C4F298BFE_OFFSET UNITYSDK_OFFSET(0x131C1B30)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x131BEC60)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_475515B0D9E00ABD_OFFSET UNITYSDK_OFFSET(0x131C37C0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_50D16A65A008CAAE_OFFSET UNITYSDK_OFFSET(0x131C43F0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_51E5EEEA00253CC2_OFFSET UNITYSDK_OFFSET(0x131C4410)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_54E166B8FD7B509D_OFFSET UNITYSDK_OFFSET(0x131BF870)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_589060FCB38CD54D_OFFSET UNITYSDK_OFFSET(0x131C13D0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_58910AE625115B02_OFFSET UNITYSDK_OFFSET(0x131C0420)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x131C0440)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_64A5264C75AB7FFD_OFFSET UNITYSDK_OFFSET(0x131C31F0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_64E3F4CBAF6F7990_OFFSET UNITYSDK_OFFSET(0x131C1F20)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_68CC7100D9576F0E_OFFSET UNITYSDK_OFFSET(0x131BC9A0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_6A1EE9A988FD9011_OFFSET UNITYSDK_OFFSET(0x131C3FD0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x131C3FE0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_719A3C114FAFFF71_OFFSET UNITYSDK_OFFSET(0x131C2820)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_7381B85C8F9277C4_OFFSET UNITYSDK_OFFSET(0x131C37D0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x131C0FD0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_82C140DCE56CAC94_OFFSET UNITYSDK_OFFSET(0x131BD6E0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x131BBC00)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_8660C3A27B56FE60_OFFSET UNITYSDK_OFFSET(0x131BE000)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_8C1F8EC145B2EF50_OFFSET UNITYSDK_OFFSET(0x131C1E70)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_8C53DB7903FE40A3_OFFSET UNITYSDK_OFFSET(0x131BD430)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x131C2900)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_9122FC030BA948E4_OFFSET UNITYSDK_OFFSET(0x131C2830)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_93108702D8D9E338_OFFSET UNITYSDK_OFFSET(0x131C4950)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x131BEC00)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_9E86DE332F523D20_OFFSET UNITYSDK_OFFSET(0x131C49F0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_A46C25C9468879BF_OFFSET UNITYSDK_OFFSET(0x131BC610)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_A9505CE1ED08D646_OFFSET UNITYSDK_OFFSET(0x131C0450)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_A9F5DB75A058E32F_OFFSET UNITYSDK_OFFSET(0x131BF6D0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x131C05C0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x131BC550)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x131BF020)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_B60A69070DF6DEFA_OFFSET UNITYSDK_OFFSET(0x131BF250)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x131C3E10)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_BCDB47CE840CA6EB_OFFSET UNITYSDK_OFFSET(0x131C3F10)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_BEEEA67AEE2E466A_OFFSET UNITYSDK_OFFSET(0x131C4F00)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x131BF3E0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x131C0430)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x131C48A0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_CB534650C1220AB8_OFFSET UNITYSDK_OFFSET(0x131C3E20)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_CF00BC0E3F8A78B8_OFFSET UNITYSDK_OFFSET(0x131BC3D0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_D237B32FC43845A5_OFFSET UNITYSDK_OFFSET(0x131BF9B0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_D5B6EA74C4CB79A6_OFFSET UNITYSDK_OFFSET(0x131C4070)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_DA42B87A2F252530_OFFSET UNITYSDK_OFFSET(0x131C3150)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_EE807BCB83BB266B_OFFSET UNITYSDK_OFFSET(0x131C0690)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x131C1E80)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_F19C66AC826A5D82_OFFSET UNITYSDK_OFFSET(0x131C2910)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x131C3F00)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_F6F8677413173B00_OFFSET UNITYSDK_OFFSET(0x131BCFC0)
#define CLASS_4_3D4EFA6B3CC691CC_METHOD_4_F89499086B0BDA6D_OFFSET UNITYSDK_OFFSET(0x131C2D70)
#define CLASS_4_3D4EFA6B3CC691CC__CTOR_OFFSET UNITYSDK_OFFSET(0x131BFAE0)

inline static constexpr unsigned int Class_4_3D4EFA6B3CC691CC_TypeDefinitionIndex = 53392;

class Class_4_3D4EFA6B3CC691CC : public ::Class_3_5F8DAA47ACDB7251
{
public:
	// static const ::System::String* Field_4_12; // 0x0
	::MoleMole::Battle::Entity* Field_4_2; // 0x2C0
	::System::Collections::Generic::Dictionary_2<::MoleMole::TurnBattleUnitQueryKey, ::Class_4_3D4EFA6B3CC691CC_Struct_2_913E9FE1CC2F9A87>* Field_4_24; // 0x2C8
	::Class_1_EBAFD36E19398E2B* Field_4_16; // 0x2D0
	::Class_1_19F8D0BF0A8C8F12<::System::UInt32, ::MoleMole::TurnBattleEntityTemporaryUnit*>* Field_4_5; // 0x2D8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_1699D6295DC3F818_5*>*>* Field_4_9; // 0x2E0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_1699D6295DC3F818*>* Field_4_11; // 0x2E8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_4_3D4EFA6B3CC691CC_Class_1_CE5FD96772EDDA84*>* Field_4_10; // 0x2F0
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Field_4_21; // 0x2F8
	::System::Collections::Generic::Dictionary_2<::MoleMole::TurnBattleUnitQueryFilter, ::System::Func_2<::MoleMole::TurnBattleUnitBase*, ::System::Boolean>*>* Field_4_25; // 0x300
	::Class_1_13F13E462CA09034* Field_4_13; // 0x308
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_4_17; // 0x310
	::Class_1_84C5B95CD7B4A033* Field_4_1; // 0x318
	::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* Field_4_6; // 0x320
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Field_4_23; // 0x328
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Field_4_22; // 0x330
	::Class_1_19F8D0BF0A8C8F12<::System::Int32, ::Class_2_54D31199DB132D48*>* Field_4_7; // 0x338
	::Class_1_19F8D0BF0A8C8F12<::System::UInt32, ::MoleMole::TurnBattleEntityUnit*>* Field_4_4; // 0x340
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*, ::System::Boolean>>* Field_4_19; // 0x348
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*, ::System::Boolean>>* Field_4_18; // 0x350
	::System::Collections::Generic::Dictionary_2<::MoleMole::TurnBattleEntityUnit*, ::System::Collections::Generic::Stack_1<::System::Single>*>* Field_4_8; // 0x358
	::System::Boolean Field_4_14; // 0x360
	::System::Boolean Field_4_20; // 0x361
	::System::Boolean Field_4_15; // 0x362
	::System::Int32 Field_4_0; // 0x364
	::System::Int32 Field_4_3; // 0x368

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType Method_4_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_858CF2EC5EE423D3_OFFSET))(this);
	}

	::Class_1_84C5B95CD7B4A033* Method_4_24748FC20F375725()
	{
		return ((::Class_1_84C5B95CD7B4A033*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_4_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_4_CF00BC0E3F8A78B8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_CF00BC0E3F8A78B8_OFFSET))(this, a1);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_4_A46C25C9468879BF(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_A46C25C9468879BF_OFFSET))(this, a1);
	}

	::System::Void Method_4_17261981A0E6961D(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_17261981A0E6961D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_82C140DCE56CAC94(::Class_3_A9E2939AF1A43E78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A9E2939AF1A43E78*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_82C140DCE56CAC94_OFFSET))(this, a1);
	}

	::System::Void Method_4_8660C3A27B56FE60(::Class_3_F6E9D1CD310ACC17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_8660C3A27B56FE60_OFFSET))(this, a1);
	}

	::System::Void Method_4_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_464B80C09A37526F_OFFSET))(this);
	}

	::System::Boolean Method_4_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_B556EADFE34BD60F_OFFSET))(this);
	}

	::System::Void Method_4_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_C638E91FC0D3A13A_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_4_3E95970492C02E1A(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_3E95970492C02E1A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_4_A9F5DB75A058E32F(::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_A9F5DB75A058E32F_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelPauseDialogContext* Method_4_54E166B8FD7B509D()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_54E166B8FD7B509D_OFFSET))(this);
	}

	::System::Void Method_4_D237B32FC43845A5(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_D237B32FC43845A5_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_496<::System::UInt32, ::MoleMole::TurnBattleEntityUnit*>* Method_4_58910AE625115B02()
	{
		return ((::Class_0_16E4307DCC419505_496<::System::UInt32, ::MoleMole::TurnBattleEntityUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_58910AE625115B02_OFFSET))(this);
	}

	::System::Void Method_4_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_4_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Void Method_4_A9505CE1ED08D646(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_A9505CE1ED08D646_OFFSET))(this, a1);
	}

	::System::Void Method_4_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_AA169839CB93802A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::TurnBattleEntityUnit*>* Method_4_EE807BCB83BB266B(::UnityEngine::Vector2 a1, ::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::TurnBattleEntityUnit*>*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_EE807BCB83BB266B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_159CB55E631AFCB9_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_496<::System::UInt32, ::MoleMole::TurnBattleEntityTemporaryUnit*>* Method_4_1BB69027409E5F71()
	{
		return ((::Class_0_16E4307DCC419505_496<::System::UInt32, ::MoleMole::TurnBattleEntityTemporaryUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_1BB69027409E5F71_OFFSET))(this);
	}

	::System::Void Method_4_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Enum_3_3FFB084FB2E4C2F3 Method_4_589060FCB38CD54D()
	{
		return ((::Enum_3_3FFB084FB2E4C2F3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_589060FCB38CD54D_OFFSET))(this);
	}

	::System::Void Method_4_42DD8F1C4F298BFE(::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_42DD8F1C4F298BFE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::MoleMole::Battle::Entity*>* Method_4_8C1F8EC145B2EF50()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_8C1F8EC145B2EF50_OFFSET))(this);
	}

	::System::Boolean Method_4_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_4_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Method_4_64E3F4CBAF6F7990(::MoleMole::TurnBattleUnitQueryKey a1, ::MoleMole::TurnBattleUnitQueryFilter a2, ::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* a3)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>*(*)(::PVOID, ::MoleMole::TurnBattleUnitQueryKey, ::MoleMole::TurnBattleUnitQueryFilter, ::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_64E3F4CBAF6F7990_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_B60A69070DF6DEFA(::MoleMole::MonsterFantasyResultContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterFantasyResultContext*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_B60A69070DF6DEFA_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_719A3C114FAFFF71(::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_719A3C114FAFFF71_OFFSET))(this, a1);
	}

	::System::Void Method_4_9122FC030BA948E4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_9122FC030BA948E4_OFFSET))(this, a1);
	}

	::System::Void Method_4_8C8625211DA811AE(::Class_1_13F13E462CA09034* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_13F13E462CA09034*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_4_F19C66AC826A5D82(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_F19C66AC826A5D82_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_F89499086B0BDA6D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_F89499086B0BDA6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_4_DA42B87A2F252530(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_DA42B87A2F252530_OFFSET))(this, a1);
	}

	::System::Void Method_4_64A5264C75AB7FFD(::MoleMole::TurnBattleEntityUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_64A5264C75AB7FFD_OFFSET))(this, a1);
	}

	::System::Void Method_4_2511F8BE4910795E(::System::Action* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_2511F8BE4910795E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_475515B0D9E00ABD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_475515B0D9E00ABD_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_7381B85C8F9277C4(::MoleMole::TurnBattleUnitBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleUnitBase*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_7381B85C8F9277C4_OFFSET))(this, a1);
	}

	::System::Void Method_4_F6F8677413173B00(::Class_2_B242825AD4217625* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B242825AD4217625*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_F6F8677413173B00_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_4_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Void Method_4_CB534650C1220AB8(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_CB534650C1220AB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_0649C5669745F185(::Class_2_30AC6D08929031AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_30AC6D08929031AC*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_0649C5669745F185_OFFSET))(this, a1);
	}

	::System::Void Method_4_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_F5447CD65612575D_OFFSET))(this);
	}

	::System::Int32 Method_4_BCDB47CE840CA6EB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_BCDB47CE840CA6EB_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_496<::System::Int32, ::Class_2_54D31199DB132D48*>* Method_4_6A1EE9A988FD9011()
	{
		return ((::Class_0_16E4307DCC419505_496<::System::Int32, ::Class_2_54D31199DB132D48*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_6A1EE9A988FD9011_OFFSET))(this);
	}

	::System::Void Method_4_6B6AE2B3E1C3264F(::Class_3_A9E2939AF1A43E78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A9E2939AF1A43E78*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_D5B6EA74C4CB79A6(::MoleMole::TurnBattleUnitBase* a1, ::Enum_3_60A7BA8A302D0436 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleUnitBase*, ::Enum_3_60A7BA8A302D0436))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_D5B6EA74C4CB79A6_OFFSET))(this, a1, a2);
	}

	::Class_3_3C27FB03C7F640D0_1* Method_4_68CC7100D9576F0E()
	{
		return ((::Class_3_3C27FB03C7F640D0_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_68CC7100D9576F0E_OFFSET))(this);
	}

	::System::Void Method_4_50D16A65A008CAAE(::Class_3_F6E9D1CD310ACC17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_50D16A65A008CAAE_OFFSET))(this, a1);
	}

	::Class_1_13F13E462CA09034* Method_4_24748FC20F375725_1()
	{
		return ((::Class_1_13F13E462CA09034*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_4_51E5EEEA00253CC2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_51E5EEEA00253CC2_OFFSET))(this, a1);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_047D34745A4B98A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_047D34745A4B98A3_OFFSET))(this);
	}

	::System::Void Method_4_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_1092C5537716905B_OFFSET))(this);
	}

	::System::Boolean Method_4_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_4_8C53DB7903FE40A3(::Class_2_2EB7007F00A054AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2EB7007F00A054AA*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_8C53DB7903FE40A3_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_95780ED94B90ED36_OFFSET))(this);
	}

	::MoleMole::TurnBattleUnitBase* Method_4_2ECDA55F3D79DBAC()
	{
		return ((::MoleMole::TurnBattleUnitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_2ECDA55F3D79DBAC_OFFSET))(this);
	}

	::System::Void Method_4_93108702D8D9E338(::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_93108702D8D9E338_OFFSET))(this, a1);
	}

	::System::Void Method_4_9E86DE332F523D20(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_9E86DE332F523D20_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MoleMole::TurnBattleUnitBase*>* Method_4_BEEEA67AEE2E466A()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::TurnBattleUnitBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_BEEEA67AEE2E466A_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_4_1CC1F49C95DCD42C(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_3D4EFA6B3CC691CC_METHOD_4_1CC1F49C95DCD42C_OFFSET))(this, a1, a2);
	}
};

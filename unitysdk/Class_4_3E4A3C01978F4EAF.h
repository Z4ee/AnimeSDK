#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5F8DAA47ACDB7251.h"
#include "unitysdk/Class_4_3E4A3C01978F4EAF_Struct_2_913E9FE1CC2F9A87.h"
#include "unitysdk/Enum_3_3FFB084FB2E4C2F3.h"
#include "unitysdk/Enum_3_60A7BA8A302D0436.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryFilter.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryKey.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915;
class Class_1_13F13E462CA09034;
class Class_1_449B1BB2E3AA2D13;
class Class_1_84C5B95CD7B4A033;
class Class_1_B7E341C5F1A6F199;
class Class_1_EBAFD36E19398E2B;
class Class_2_29806C1A251872EA;
class Class_2_2EB7007F00A054AA;
class Class_2_30AC6D08929031AC;
class Class_2_B242825AD4217625;
class Class_3_010347D17DFD5D8F_6;
class Class_3_1699D6295DC3F818_5;
class Class_3_1699D6295DC3F818_6;
class Class_3_46655DA07E3EA26B_2;
class Class_3_BE75AAF0F7C40C75;
class Class_4_3E4A3C01978F4EAF_Class_1_CE5FD96772EDDA84_2;
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
template <typename T1, typename T2> class Class_0_16E4307DCC419505_797;
template <typename T1, typename T2> class Class_1_4BBF2D747CC2DDFA;

#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x166AB420)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_047D34745A4B98A3_OFFSET UNITYSDK_OFFSET(0x166AE880)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_0649C5669745F185_OFFSET UNITYSDK_OFFSET(0x166A9160)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x166AD660)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_13E3DFEE232C47D9_OFFSET UNITYSDK_OFFSET(0x166B07E0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0x166AB670)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_17261981A0E6961D_OFFSET UNITYSDK_OFFSET(0x166A8F70)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_1A4A825D6472F0E4_OFFSET UNITYSDK_OFFSET(0x166AF700)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_1BB69027409E5F71_OFFSET UNITYSDK_OFFSET(0x166AD670)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_1C70CEA3219A3F49_OFFSET UNITYSDK_OFFSET(0x166B0320)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_1CC1F49C95DCD42C_OFFSET UNITYSDK_OFFSET(0x166B14B0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x166AD600)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x166A8230)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x166AEE10)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x166A8040)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_2511F8BE4910795E_OFFSET UNITYSDK_OFFSET(0x166AD420)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_2ECDA55F3D79DBAC_OFFSET UNITYSDK_OFFSET(0x166AE810)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x166AD730)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_3E95970492C02E1A_OFFSET UNITYSDK_OFFSET(0x166ABE50)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x166A8050)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_50D16A65A008CAAE_OFFSET UNITYSDK_OFFSET(0x166B1100)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x166ABC90)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_51E5EEEA00253CC2_OFFSET UNITYSDK_OFFSET(0x166AE960)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_534C7923B6C66CF6_OFFSET UNITYSDK_OFFSET(0x166AD680)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_58910AE625115B02_OFFSET UNITYSDK_OFFSET(0x166ACF80)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x166AD030)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_616629C9254C0138_OFFSET UNITYSDK_OFFSET(0x166B1550)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_64A5264C75AB7FFD_OFFSET UNITYSDK_OFFSET(0x166AEE40)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_68CC7100D9576F0E_OFFSET UNITYSDK_OFFSET(0x166A8DC0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_6A1EE9A988FD9011_OFFSET UNITYSDK_OFFSET(0x166B1110)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x166AD690)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_719A3C114FAFFF71_OFFSET UNITYSDK_OFFSET(0x166AEDF0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_7381B85C8F9277C4_OFFSET UNITYSDK_OFFSET(0x166AE1B0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x166AF300)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_82C140DCE56CAC94_OFFSET UNITYSDK_OFFSET(0x166A9EB0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x166A8030)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_8C1F8EC145B2EF50_OFFSET UNITYSDK_OFFSET(0x166AEE30)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_8C53DB7903FE40A3_OFFSET UNITYSDK_OFFSET(0x166A9850)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x166AEE20)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_9122FC030BA948E4_OFFSET UNITYSDK_OFFSET(0x166AE890)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_93108702D8D9E338_OFFSET UNITYSDK_OFFSET(0x166AE110)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x166AB3C0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_9E86DE332F523D20_OFFSET UNITYSDK_OFFSET(0x166AFE10)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_A46C25C9468879BF_OFFSET UNITYSDK_OFFSET(0x166A8A30)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_A9F5DB75A058E32F_OFFSET UNITYSDK_OFFSET(0x166ABF10)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x166AF230)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_AF8C13120E61DE29_OFFSET UNITYSDK_OFFSET(0x166AA7C0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x166A8970)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_B60A69070DF6DEFA_OFFSET UNITYSDK_OFFSET(0x166ABB00)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x166B0660)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_BCDB47CE840CA6EB_OFFSET UNITYSDK_OFFSET(0x166ACEC0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_BEEEA67AEE2E466A_OFFSET UNITYSDK_OFFSET(0x166AD720)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_C32089DAE5AFA1D9_OFFSET UNITYSDK_OFFSET(0x166ACD50)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x166AE800)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x166B0670)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_CB534650C1220AB8_OFFSET UNITYSDK_OFFSET(0x166B0700)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_CE4318BE63F6F5B4_OFFSET UNITYSDK_OFFSET(0x166AD7C0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_CF00BC0E3F8A78B8_OFFSET UNITYSDK_OFFSET(0x166A87F0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_D237B32FC43845A5_OFFSET UNITYSDK_OFFSET(0x166AC260)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_D5B6EA74C4CB79A6_OFFSET UNITYSDK_OFFSET(0x166B1120)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_DA42B87A2F252530_OFFSET UNITYSDK_OFFSET(0x166ACF90)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_DD4F6F125A54C66F_OFFSET UNITYSDK_OFFSET(0x166AC0B0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x166AEE00)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x166AB940)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x166B14A0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_F6F8677413173B00_OFFSET UNITYSDK_OFFSET(0x166A93E0)
#define CLASS_4_3E4A3C01978F4EAF_METHOD_4_F89499086B0BDA6D_OFFSET UNITYSDK_OFFSET(0x166AD040)
#define CLASS_4_3E4A3C01978F4EAF__CTOR_OFFSET UNITYSDK_OFFSET(0x166AC390)

inline static constexpr unsigned int Class_4_3E4A3C01978F4EAF_TypeDefinitionIndex = 90891;

class Class_4_3E4A3C01978F4EAF : public ::Class_3_5F8DAA47ACDB7251
{
public:
	// static const ::System::String* Field_4_13; // 0x0
	::Class_1_13F13E462CA09034* Field_4_12; // 0x2D0
	::Class_1_4BBF2D747CC2DDFA<::System::Int32, ::Class_2_29806C1A251872EA*>* Field_4_10; // 0x2D8
	::Class_1_84C5B95CD7B4A033* Field_4_0; // 0x2E0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_4_16; // 0x2E8
	::System::Collections::Generic::Dictionary_2<::MoleMole::TurnBattleUnitQueryFilter, ::System::Func_2<::MoleMole::TurnBattleUnitBase*, ::System::Boolean>*>* Field_4_24; // 0x2F0
	::Class_1_4BBF2D747CC2DDFA<::System::UInt32, ::MoleMole::TurnBattleEntityTemporaryUnit*>* Field_4_4; // 0x2F8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_1699D6295DC3F818_6*>* Field_4_14; // 0x300
	::System::Collections::Generic::Dictionary_2<::MoleMole::TurnBattleUnitQueryKey, ::Class_4_3E4A3C01978F4EAF_Struct_2_913E9FE1CC2F9A87>* Field_4_25; // 0x308
	::Class_1_4BBF2D747CC2DDFA<::System::UInt32, ::MoleMole::TurnBattleEntityUnit*>* Field_4_5; // 0x310
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*, ::System::Boolean>>* Field_4_23; // 0x318
	::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* Field_4_11; // 0x320
	::Class_1_EBAFD36E19398E2B* Field_4_17; // 0x328
	::System::Collections::Generic::Dictionary_2<::MoleMole::TurnBattleEntityUnit*, ::System::Collections::Generic::Stack_1<::System::Single>*>* Field_4_9; // 0x330
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Field_4_20; // 0x338
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Field_4_27; // 0x340
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_1699D6295DC3F818_5*>*>* Field_4_8; // 0x348
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Field_4_26; // 0x350
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_4_3E4A3C01978F4EAF_Class_1_CE5FD96772EDDA84_2*>* Field_4_15; // 0x358
	::MoleMole::Battle::Entity* Field_4_7; // 0x360
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*, ::System::Boolean>>* Field_4_22; // 0x368
	::System::Boolean Field_4_19; // 0x370
	::System::Boolean Field_4_18; // 0x371
	::System::Boolean Field_4_21; // 0x372
	::System::Int32 Field_4_6; // 0x374
	::System::Int32 Field_4_1; // 0x378

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType Method_4_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_858CF2EC5EE423D3_OFFSET))(this);
	}

	::Class_1_84C5B95CD7B4A033* Method_4_24748FC20F375725()
	{
		return ((::Class_1_84C5B95CD7B4A033*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_4_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_4_CF00BC0E3F8A78B8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_CF00BC0E3F8A78B8_OFFSET))(this, a1);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_4_A46C25C9468879BF(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_A46C25C9468879BF_OFFSET))(this, a1);
	}

	::System::Void Method_4_17261981A0E6961D(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_17261981A0E6961D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_82C140DCE56CAC94(::Class_3_BE75AAF0F7C40C75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BE75AAF0F7C40C75*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_82C140DCE56CAC94_OFFSET))(this, a1);
	}

	::System::Void Method_4_AF8C13120E61DE29(::Class_3_46655DA07E3EA26B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46655DA07E3EA26B_2*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_AF8C13120E61DE29_OFFSET))(this, a1);
	}

	::System::Void Method_4_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Boolean Method_4_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_F1BB718E73080948_OFFSET))(this);
	}

	::System::Void Method_4_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_4_3E95970492C02E1A(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_3E95970492C02E1A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_4_A9F5DB75A058E32F(::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_A9F5DB75A058E32F_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelPauseDialogContext* Method_4_DD4F6F125A54C66F()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_DD4F6F125A54C66F_OFFSET))(this);
	}

	::System::Void Method_4_D237B32FC43845A5(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_D237B32FC43845A5_OFFSET))(this, a1);
	}

	::System::Void Method_4_C32089DAE5AFA1D9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_C32089DAE5AFA1D9_OFFSET))(this, a1);
	}

	::System::Void Method_4_B60A69070DF6DEFA(::MoleMole::MonsterFantasyResultContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterFantasyResultContext*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_B60A69070DF6DEFA_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_BCDB47CE840CA6EB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_BCDB47CE840CA6EB_OFFSET))(this);
	}

	::System::Void Method_4_8C53DB7903FE40A3(::Class_2_2EB7007F00A054AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2EB7007F00A054AA*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_8C53DB7903FE40A3_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_797<::System::UInt32, ::MoleMole::TurnBattleEntityUnit*>* Method_4_58910AE625115B02()
	{
		return ((::Class_0_16E4307DCC419505_797<::System::UInt32, ::MoleMole::TurnBattleEntityUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_58910AE625115B02_OFFSET))(this);
	}

	::System::Void Method_4_DA42B87A2F252530(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_DA42B87A2F252530_OFFSET))(this, a1);
	}

	::System::Void Method_4_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_159CB55E631AFCB9_OFFSET))(this);
	}

	::System::Void Method_4_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Void Method_4_F89499086B0BDA6D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_F89499086B0BDA6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_2511F8BE4910795E(::System::Action* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_2511F8BE4910795E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_4_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_4_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_4_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_1092C5537716905B_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_797<::System::UInt32, ::MoleMole::TurnBattleEntityTemporaryUnit*>* Method_4_1BB69027409E5F71()
	{
		return ((::Class_0_16E4307DCC419505_797<::System::UInt32, ::MoleMole::TurnBattleEntityTemporaryUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_1BB69027409E5F71_OFFSET))(this);
	}

	::System::Void Method_4_534C7923B6C66CF6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_534C7923B6C66CF6_OFFSET))(this, a1);
	}

	::System::Void Method_4_6B6AE2B3E1C3264F(::Class_3_BE75AAF0F7C40C75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BE75AAF0F7C40C75*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MoleMole::TurnBattleUnitBase*>* Method_4_BEEEA67AEE2E466A()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::TurnBattleUnitBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_BEEEA67AEE2E466A_OFFSET))(this);
	}

	::System::Boolean Method_4_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::TurnBattleEntityUnit*>* Method_4_CE4318BE63F6F5B4(::UnityEngine::Vector2 a1, ::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::TurnBattleEntityUnit*>*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Func_2<::MoleMole::TurnBattleEntityUnit*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_CE4318BE63F6F5B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_93108702D8D9E338(::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_93108702D8D9E338_OFFSET))(this, a1);
	}

	::System::Void Method_4_F6F8677413173B00(::Class_2_B242825AD4217625* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B242825AD4217625*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_F6F8677413173B00_OFFSET))(this, a1);
	}

	::System::Void Method_4_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::MoleMole::TurnBattleUnitBase* Method_4_2ECDA55F3D79DBAC()
	{
		return ((::MoleMole::TurnBattleUnitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_2ECDA55F3D79DBAC_OFFSET))(this);
	}

	::System::Void Method_4_047D34745A4B98A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_047D34745A4B98A3_OFFSET))(this);
	}

	::System::Void Method_4_0649C5669745F185(::Class_2_30AC6D08929031AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_30AC6D08929031AC*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_0649C5669745F185_OFFSET))(this, a1);
	}

	::System::Void Method_4_9122FC030BA948E4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_9122FC030BA948E4_OFFSET))(this, a1);
	}

	::System::Void Method_4_51E5EEEA00253CC2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_51E5EEEA00253CC2_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_719A3C114FAFFF71(::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_719A3C114FAFFF71_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_3_010347D17DFD5D8F_6* Method_4_68CC7100D9576F0E()
	{
		return ((::Class_3_010347D17DFD5D8F_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_68CC7100D9576F0E_OFFSET))(this);
	}

	::Class_1_13F13E462CA09034* Method_4_24748FC20F375725_1()
	{
		return ((::Class_1_13F13E462CA09034*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_4_8C8625211DA811AE(::Class_1_13F13E462CA09034* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_13F13E462CA09034*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::MoleMole::Battle::Entity*>* Method_4_8C1F8EC145B2EF50()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_8C1F8EC145B2EF50_OFFSET))(this);
	}

	::System::Boolean Method_4_7381B85C8F9277C4(::MoleMole::TurnBattleUnitBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleUnitBase*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_7381B85C8F9277C4_OFFSET))(this, a1);
	}

	::System::Void Method_4_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_4_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_4_9E86DE332F523D20(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_9E86DE332F523D20_OFFSET))(this, a1, a2);
	}

	::Enum_3_3FFB084FB2E4C2F3 Method_4_1A4A825D6472F0E4()
	{
		return ((::Enum_3_3FFB084FB2E4C2F3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_1A4A825D6472F0E4_OFFSET))(this);
	}

	::System::Void Method_4_1C70CEA3219A3F49(::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_1C70CEA3219A3F49_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_4_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_CB534650C1220AB8(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_CB534650C1220AB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_64A5264C75AB7FFD(::MoleMole::TurnBattleEntityUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_64A5264C75AB7FFD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Method_4_13E3DFEE232C47D9(::MoleMole::TurnBattleUnitQueryKey a1, ::MoleMole::TurnBattleUnitQueryFilter a2, ::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* a3)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>*(*)(::PVOID, ::MoleMole::TurnBattleUnitQueryKey, ::MoleMole::TurnBattleUnitQueryFilter, ::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_13E3DFEE232C47D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_50D16A65A008CAAE(::Class_3_46655DA07E3EA26B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_46655DA07E3EA26B_2*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_50D16A65A008CAAE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_797<::System::Int32, ::Class_2_29806C1A251872EA*>* Method_4_6A1EE9A988FD9011()
	{
		return ((::Class_0_16E4307DCC419505_797<::System::Int32, ::Class_2_29806C1A251872EA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_6A1EE9A988FD9011_OFFSET))(this);
	}

	::System::Boolean Method_4_D5B6EA74C4CB79A6(::MoleMole::TurnBattleUnitBase* a1, ::Enum_3_60A7BA8A302D0436 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleUnitBase*, ::Enum_3_60A7BA8A302D0436))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_D5B6EA74C4CB79A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_4_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_2045BA2947DBDBCE_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_4_1CC1F49C95DCD42C(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_1CC1F49C95DCD42C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_616629C9254C0138(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_3E4A3C01978F4EAF_METHOD_4_616629C9254C0138_OFFSET))(this, a1, a2, a3);
	}
};

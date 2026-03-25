#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_32.h"
#include "unitysdk/Enum_3_63D176C405CC7947.h"
#include "unitysdk/Enum_3_7CF131C413C919AF.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleActionSource.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleHpType.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarbleTitleValue.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_217;
class Class_1_38CD02622A43811A;
class Class_1_4DF3292AA5AADAD0_6;
class Class_1_52DCEE691286F89A;
class Class_1_56E6900742B98CE8;
class Class_1_633744E9733BE855;
class Class_1_8F7C43AD64EAA7A8;
class Class_1_9671734BA1DFB3F8;
class Class_1_9DB6F6BB628BF86A;
class Class_1_BAF87BD2507AC54B;
class Class_1_C9DFE5EE7107C629_5;
class Class_1_D54F41AAAD02B794;
class Class_1_FA4F4A67B1C04320_2;
class Class_1_FD772F14877F45E5;
class Class_1_FDC3CA37FB2E9E6E;
class Class_2_78C8EAAA63C4635F;
namespace RPG::GameCore { class MarbleSealLevelConfigRow; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1B20028AAAE94F57_GET_ACTIONITEM_OFFSET UNITYSDK_OFFSET(0x169CCC40)
#define CLASS_1_1B20028AAAE94F57_GET_FIELDLENGTH_OFFSET UNITYSDK_OFFSET(0x169CCD00)
#define CLASS_1_1B20028AAAE94F57_GET_FIELDWIDTH_OFFSET UNITYSDK_OFFSET(0x169CCD20)
#define CLASS_1_1B20028AAAE94F57_GET_GUEST_OFFSET UNITYSDK_OFFSET(0x169CCCC0)
#define CLASS_1_1B20028AAAE94F57_GET_INSIMULATE_OFFSET UNITYSDK_OFFSET(0x169CCC60)
#define CLASS_1_1B20028AAAE94F57_GET_INSTAT_OFFSET UNITYSDK_OFFSET(0x169CCB40)
#define CLASS_1_1B20028AAAE94F57_GET_ISAIMODE_OFFSET UNITYSDK_OFFSET(0x169CCC80)
#define CLASS_1_1B20028AAAE94F57_GET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x169CCB80)
#define CLASS_1_1B20028AAAE94F57_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x169CCC00)
#define CLASS_1_1B20028AAAE94F57_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x169CCC20)
#define CLASS_1_1B20028AAAE94F57_GET_ROUNDFIRSTTEAMA_OFFSET UNITYSDK_OFFSET(0x169CCBE0)
#define CLASS_1_1B20028AAAE94F57_GET_ROUNDTEAMA_OFFSET UNITYSDK_OFFSET(0x169CCBC0)
#define CLASS_1_1B20028AAAE94F57_GET_SIMULATESCENE_OFFSET UNITYSDK_OFFSET(0x169CCBA0)
#define CLASS_1_1B20028AAAE94F57_GET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x169CCB60)
#define CLASS_1_1B20028AAAE94F57_GET_WINSCORE_OFFSET UNITYSDK_OFFSET(0x169CCCA0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_00E31248927B6921_OFFSET UNITYSDK_OFFSET(0x169C5030)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_036E673406CC4416_OFFSET UNITYSDK_OFFSET(0x169CB0E0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_062029FC4CB57960_OFFSET UNITYSDK_OFFSET(0x169C0B50)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_06FED672BE8D830C_OFFSET UNITYSDK_OFFSET(0x169BF340)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x169C78A0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x169C0A50)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_18A6A970E21BD7A1_OFFSET UNITYSDK_OFFSET(0x169CAD10)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_19508CD9D80C41DE_OFFSET UNITYSDK_OFFSET(0x169C44C0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_2072A4A6CFCCAE99_OFFSET UNITYSDK_OFFSET(0x169C2410)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_2097174150E430B8_OFFSET UNITYSDK_OFFSET(0x169C9B30)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0x169C0570)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_2A15D1F2DD002F70_OFFSET UNITYSDK_OFFSET(0x169CADB0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_2C3F2DB2A4AACF8D_OFFSET UNITYSDK_OFFSET(0x169BF5C0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_2DB7DD6C08823EF8_OFFSET UNITYSDK_OFFSET(0x169CC920)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_31CBE4499CBFC900_OFFSET UNITYSDK_OFFSET(0x169BEB30)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_35611D661B11B1DE_OFFSET UNITYSDK_OFFSET(0x169CC410)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_3BE987BEAEB87F52_OFFSET UNITYSDK_OFFSET(0x169C4B70)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_3CD418ED9B8F46B0_OFFSET UNITYSDK_OFFSET(0x169C1E60)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x169BDD20)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_42BE988AF3EDEB3F_1_OFFSET UNITYSDK_OFFSET(0x169CB020)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_42BE988AF3EDEB3F_OFFSET UNITYSDK_OFFSET(0x169C2060)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_4886470E1AA5EA9D_OFFSET UNITYSDK_OFFSET(0x169C0850)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_4A4F8DBA0AF1D27A_OFFSET UNITYSDK_OFFSET(0x169CB140)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_4DB065505C737A11_OFFSET UNITYSDK_OFFSET(0x169BDD70)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_4FF9CFEE556B1333_1_OFFSET UNITYSDK_OFFSET(0x169C70D0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_4FF9CFEE556B1333_OFFSET UNITYSDK_OFFSET(0x169C6900)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_51EFFA2E8BBD0382_OFFSET UNITYSDK_OFFSET(0x169C5A40)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_56B835F96685EDF9_1_OFFSET UNITYSDK_OFFSET(0x169C5BF0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_56B835F96685EDF9_OFFSET UNITYSDK_OFFSET(0x169C50E0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_5B9D1CBDF1EEC65D_OFFSET UNITYSDK_OFFSET(0x169C4BF0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_5CDF16CC200D8B52_OFFSET UNITYSDK_OFFSET(0x169CA730)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x169C3F40)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_6C6F1B5D5C226216_OFFSET UNITYSDK_OFFSET(0x169C09A0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_70437D85C11C5222_1_OFFSET UNITYSDK_OFFSET(0x169C9A90)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x169C9A00)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_81C972DE3B8337FB_OFFSET UNITYSDK_OFFSET(0x169C2120)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_837B832C4CA7C908_OFFSET UNITYSDK_OFFSET(0x169C9F40)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8A26F63E185CF58D_OFFSET UNITYSDK_OFFSET(0x169C0900)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8A3EB355C470E8A9_OFFSET UNITYSDK_OFFSET(0x169BF3F0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0x169C1390)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8B933DECC394D41D_1_OFFSET UNITYSDK_OFFSET(0x169C0730)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8B933DECC394D41D_OFFSET UNITYSDK_OFFSET(0x169C0340)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8E38D91117188198_OFFSET UNITYSDK_OFFSET(0x169CB930)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_98A7282397F69E03_OFFSET UNITYSDK_OFFSET(0x169BECA0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_A2E58C2A99223B86_OFFSET UNITYSDK_OFFSET(0x169CAFC0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_A48D8634DF568D53_OFFSET UNITYSDK_OFFSET(0x169CA420)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_A4E5B0066DC9D281_OFFSET UNITYSDK_OFFSET(0x169CA810)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_A568A23ABE039CE4_OFFSET UNITYSDK_OFFSET(0x169CCCF0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x169CCCE0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BAE96CC8B344B192_OFFSET UNITYSDK_OFFSET(0x169CC6C0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BBA49FAB086F388D_1_OFFSET UNITYSDK_OFFSET(0x169C37E0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x169C3010)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BC9D0D855676839E_1_OFFSET UNITYSDK_OFFSET(0x169CA780)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BC9D0D855676839E_OFFSET UNITYSDK_OFFSET(0x169CA6B0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BFF8518DE749AEA5_OFFSET UNITYSDK_OFFSET(0x169BEFA0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_C2124EFBE92A3C6C_OFFSET UNITYSDK_OFFSET(0x169BDC90)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x169BDA40)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_CC572E192F69271C_OFFSET UNITYSDK_OFFSET(0x169C27F0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_CCC36DE8E658C552_OFFSET UNITYSDK_OFFSET(0x169BDB20)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_CE939F9D16359382_OFFSET UNITYSDK_OFFSET(0x169C03C0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_D875B2D7328A410C_OFFSET UNITYSDK_OFFSET(0x169C07C0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_DD678535C8FC1ACF_OFFSET UNITYSDK_OFFSET(0x169CA120)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_F11417B82330160D_OFFSET UNITYSDK_OFFSET(0x169CC820)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_F54D66AB9B833697_OFFSET UNITYSDK_OFFSET(0x169BEE50)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_FABB680FE5B8B187_OFFSET UNITYSDK_OFFSET(0x169C4120)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_FD1665D7E99D4730_OFFSET UNITYSDK_OFFSET(0x169CAA20)
#define CLASS_1_1B20028AAAE94F57_SET_ACTIONITEM_OFFSET UNITYSDK_OFFSET(0x169CCC50)
#define CLASS_1_1B20028AAAE94F57_SET_FIELDLENGTH_OFFSET UNITYSDK_OFFSET(0x169CCD10)
#define CLASS_1_1B20028AAAE94F57_SET_FIELDWIDTH_OFFSET UNITYSDK_OFFSET(0x169CCD30)
#define CLASS_1_1B20028AAAE94F57_SET_GUEST_OFFSET UNITYSDK_OFFSET(0x169CCCD0)
#define CLASS_1_1B20028AAAE94F57_SET_INSIMULATE_OFFSET UNITYSDK_OFFSET(0x169CCC70)
#define CLASS_1_1B20028AAAE94F57_SET_INSTAT_OFFSET UNITYSDK_OFFSET(0x169CCB50)
#define CLASS_1_1B20028AAAE94F57_SET_ISAIMODE_OFFSET UNITYSDK_OFFSET(0x169CCC90)
#define CLASS_1_1B20028AAAE94F57_SET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x169CCB90)
#define CLASS_1_1B20028AAAE94F57_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x169CCC10)
#define CLASS_1_1B20028AAAE94F57_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x169CCC30)
#define CLASS_1_1B20028AAAE94F57_SET_ROUNDFIRSTTEAMA_OFFSET UNITYSDK_OFFSET(0x169CCBF0)
#define CLASS_1_1B20028AAAE94F57_SET_ROUNDTEAMA_OFFSET UNITYSDK_OFFSET(0x169CCBD0)
#define CLASS_1_1B20028AAAE94F57_SET_SIMULATESCENE_OFFSET UNITYSDK_OFFSET(0x169CCBB0)
#define CLASS_1_1B20028AAAE94F57_SET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x169CCB70)
#define CLASS_1_1B20028AAAE94F57_SET_WINSCORE_OFFSET UNITYSDK_OFFSET(0x169CCCB0)
#define CLASS_1_1B20028AAAE94F57__CTOR_OFFSET UNITYSDK_OFFSET(0x169BD730)

inline static constexpr unsigned int Class_1_1B20028AAAE94F57_TypeDefinitionIndex = 33148;

class Class_1_1B20028AAAE94F57 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_38; // 0x10
	::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_2*>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Class_1_633744E9733BE855*>* Field_1_7; // 0x20
	::Class_1_56E6900742B98CE8* _SimulateScene_k__BackingField; // 0x28
	::System::Random* Field_1_10; // 0x30
	::Class_1_C9DFE5EE7107C629_5* Field_1_9; // 0x38
	::Class_0_16E4307DCC419505_217* _Guest_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::Class_1_9671734BA1DFB3F8*>* Field_1_35; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9671734BA1DFB3F8*>* Field_1_34; // 0x50
	::System::Collections::Generic::List_1<::Class_1_9671734BA1DFB3F8*>* Field_1_0; // 0x58
	::System::Collections::Generic::List_1<::Class_1_8F7C43AD64EAA7A8*>* Field_1_13; // 0x60
	::Class_1_FD772F14877F45E5* Field_1_16; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::MarbleItemFeature>* Field_1_36; // 0x70
	::Class_1_9671734BA1DFB3F8* Field_1_26; // 0x78
	::Class_1_9671734BA1DFB3F8* _ActionItem_k__BackingField; // 0x80
	::Class_1_FD772F14877F45E5* Field_1_15; // 0x88
	::Class_1_BAF87BD2507AC54B* Field_1_8; // 0x90
	::System::Collections::Generic::List_1<::Class_1_D54F41AAAD02B794*>* Field_1_27; // 0x98
	::Class_1_FDC3CA37FB2E9E6E* Field_1_28; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_8F7C43AD64EAA7A8*>* Field_1_14; // 0xA8
	::Class_2_78C8EAAA63C4635F* Field_1_29; // 0xB0
	::System::Single Field_1_3; // 0xB8
	::System::Boolean _IsAIMode_k__BackingField; // 0xBC
	::System::Boolean _RoundTeamA_k__BackingField; // 0xBD
	::System::Boolean _InSimulate_k__BackingField; // 0xBE
	::System::Boolean Field_1_32; // 0xBF
	::Enum_3_F80BFD5B986D5503_3 Field_1_37; // 0xC0
	::System::UInt32 _WinScore_k__BackingField; // 0xC4
	::Enum_3_0A3761FE34514D6C_32 Field_1_30; // 0xC8
	::System::UInt32 Field_1_5; // 0xCC
	::System::Single Field_1_31; // 0xD0
	::Enum_3_63D176C405CC7947 _Phase_k__BackingField; // 0xD4
	::System::UInt32 Field_1_17; // 0xD8
	::System::Boolean _IsFriend_k__BackingField; // 0xDC
	::System::Boolean _RoundFirstTeamA_k__BackingField; // 0xDD
	::System::Boolean _InStat_k__BackingField; // 0xDE
	::System::Single _FieldLength_k__BackingField; // 0xE0
	::System::Single _FieldWidth_k__BackingField; // 0xE4
	::System::UInt32 _LevelId_k__BackingField; // 0xE8
	::System::Single Field_1_4; // 0xEC
	::System::Int32 _TickCount_k__BackingField; // 0xF0

	::System::Void _ctor(::Enum_3_F80BFD5B986D5503_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57__CTOR_OFFSET))(this, a1);
	}

	::Class_1_9671734BA1DFB3F8* Method_1_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_9671734BA1DFB3F8*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CCC36DE8E658C552(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_CCC36DE8E658C552_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C2124EFBE92A3C6C(::RPG::GameCore::MarbleItemFeature a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_C2124EFBE92A3C6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_4DB065505C737A11(::System::String* a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_4DB065505C737A11_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BFF8518DE749AEA5(::System::UInt32 a1, ::System::Boolean a2, ::RPG::MVector2 a3, ::RPG::MVector2 a4, ::System::UInt32 a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_BFF8518DE749AEA5_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::GameCore::MarbleSealLevelConfigRow* Method_1_06FED672BE8D830C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleSealLevelConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_06FED672BE8D830C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F54D66AB9B833697(::System::UInt32 a1, ::RPG::MVector2 a2, ::System::Single a3, ::System::UInt32 a4, ::RPG::GameCore::MarbleItemFeature a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_F54D66AB9B833697_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_98A7282397F69E03(::System::UInt32 a1, ::RPG::MVector2 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::Il2CppArray<::System::UInt32>* a6, ::System::UInt32 a7, ::RPG::GameCore::MarbleItemFeature a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_98A7282397F69E03_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_31CBE4499CBFC900(::System::UInt32 a1, ::RPG::MVector2 a2, ::System::Single a3, ::RPG::MVector2 a4, ::System::Boolean a5, ::System::UInt32 a6, ::RPG::GameCore::MarbleItemFeature a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::RPG::MVector2, ::System::Boolean, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_31CBE4499CBFC900_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_8A3EB355C470E8A9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_8A3EB355C470E8A9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2C3F2DB2A4AACF8D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_2C3F2DB2A4AACF8D_OFFSET))(this);
	}

	::System::Void Method_1_8B933DECC394D41D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_8B933DECC394D41D_OFFSET))(this);
	}

	::System::Void Method_1_CE939F9D16359382()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_CE939F9D16359382_OFFSET))(this);
	}

	::System::Void Method_1_21378A7EB1BCB13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_21378A7EB1BCB13B_OFFSET))(this);
	}

	::System::Void Method_1_8B933DECC394D41D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_8B933DECC394D41D_1_OFFSET))(this);
	}

	::System::Void Method_1_D875B2D7328A410C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_D875B2D7328A410C_OFFSET))(this);
	}

	::System::Void Method_1_4886470E1AA5EA9D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_4886470E1AA5EA9D_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A26F63E185CF58D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_8A26F63E185CF58D_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C6F1B5D5C226216(::Enum_3_7CF131C413C919AF a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7CF131C413C919AF, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_6C6F1B5D5C226216_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_062029FC4CB57960(::Enum_3_01618AD0437C8486_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_062029FC4CB57960_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B4B3FEAD1B0C4A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET))(this);
	}

	::System::Void Method_1_81C972DE3B8337FB(::System::Single a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_81C972DE3B8337FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2072A4A6CFCCAE99(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_2072A4A6CFCCAE99_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_CC572E192F69271C(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_CC572E192F69271C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_42BE988AF3EDEB3F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_42BE988AF3EDEB3F_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::UInt32>* Method_1_FABB680FE5B8B187(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_FABB680FE5B8B187_OFFSET))(this, a1);
	}

	::RPG::MVector2 Method_1_19508CD9D80C41DE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_19508CD9D80C41DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3BE987BEAEB87F52(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_3BE987BEAEB87F52_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_5B9D1CBDF1EEC65D(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_5B9D1CBDF1EEC65D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_00E31248927B6921(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_00E31248927B6921_OFFSET))(this, a1);
	}

	::System::Void Method_1_56B835F96685EDF9(::RPG::GameCore::MarbleTitleValue a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_56B835F96685EDF9_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_51EFFA2E8BBD0382(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_51EFFA2E8BBD0382_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_3CD418ED9B8F46B0(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_3CD418ED9B8F46B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_56B835F96685EDF9_1(::RPG::GameCore::MarbleTitleValue a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_56B835F96685EDF9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4FF9CFEE556B1333(::RPG::GameCore::MarbleTitleValue a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_4FF9CFEE556B1333_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4FF9CFEE556B1333_1(::RPG::GameCore::MarbleTitleValue a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_4FF9CFEE556B1333_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_1_70437D85C11C5222_1(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_70437D85C11C5222_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2097174150E430B8(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_2097174150E430B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_837B832C4CA7C908(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_837B832C4CA7C908_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD678535C8FC1ACF(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_DD678535C8FC1ACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A48D8634DF568D53(::Class_1_9DB6F6BB628BF86A* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_A48D8634DF568D53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BC9D0D855676839E(::Class_1_38CD02622A43811A* a1, ::Class_1_38CD02622A43811A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38CD02622A43811A*, ::Class_1_38CD02622A43811A*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_BC9D0D855676839E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5CDF16CC200D8B52(::Class_1_38CD02622A43811A* a1, ::Class_1_38CD02622A43811A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38CD02622A43811A*, ::Class_1_38CD02622A43811A*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_5CDF16CC200D8B52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BC9D0D855676839E_1(::Class_1_38CD02622A43811A* a1, ::Class_1_38CD02622A43811A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38CD02622A43811A*, ::Class_1_38CD02622A43811A*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_BC9D0D855676839E_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A4E5B0066DC9D281(::Class_1_9671734BA1DFB3F8* a1, ::RPG::Client::LittleGame::Marble::MarbleActionSource a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9671734BA1DFB3F8*, ::RPG::Client::LittleGame::Marble::MarbleActionSource))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_A4E5B0066DC9D281_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_1_FD1665D7E99D4730(::Class_1_9671734BA1DFB3F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9671734BA1DFB3F8*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_FD1665D7E99D4730_OFFSET))(this, a1);
	}

	::System::Void Method_1_18A6A970E21BD7A1(::Class_1_9671734BA1DFB3F8* a1, ::System::Int32 a2, ::System::Single a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9671734BA1DFB3F8*, ::System::Int32, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_18A6A970E21BD7A1_OFFSET))(this, a1, a2, a3, a4);
	}

	::Il2CppArray<::Class_1_52DCEE691286F89A*>* Method_1_2A15D1F2DD002F70()
	{
		return ((::Il2CppArray<::Class_1_52DCEE691286F89A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_2A15D1F2DD002F70_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_52DCEE691286F89A*>* Method_1_A2E58C2A99223B86()
	{
		return ((::Il2CppArray<::Class_1_52DCEE691286F89A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_A2E58C2A99223B86_OFFSET))(this);
	}

	::System::Void Method_1_42BE988AF3EDEB3F_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_42BE988AF3EDEB3F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_036E673406CC4416(::Class_1_4DF3292AA5AADAD0_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DF3292AA5AADAD0_6*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_036E673406CC4416_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A4F8DBA0AF1D27A(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_4A4F8DBA0AF1D27A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8E38D91117188198(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_8E38D91117188198_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_35611D661B11B1DE(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt64 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_35611D661B11B1DE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_BBA49FAB086F388D_1_OFFSET))(this);
	}

	::System::Void Method_1_BAE96CC8B344B192(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_BAE96CC8B344B192_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F11417B82330160D(::System::Int32 a1, ::RPG::Client::LittleGame::Marble::MarbleHpType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::Marble::MarbleHpType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_F11417B82330160D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2DB7DD6C08823EF8(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Boolean a4, ::System::UInt64 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_2DB7DD6C08823EF8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean get_InStat()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_INSTAT_OFFSET))(this);
	}

	::System::Void set_InStat(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_INSTAT_OFFSET))(this, value);
	}

	::System::Int32 get_TickCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_TICKCOUNT_OFFSET))(this);
	}

	::System::Void set_TickCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_TICKCOUNT_OFFSET))(this, value);
	}

	::System::Boolean get_IsFriend()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_ISFRIEND_OFFSET))(this);
	}

	::System::Void set_IsFriend(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_ISFRIEND_OFFSET))(this, value);
	}

	::Class_1_56E6900742B98CE8* get_SimulateScene()
	{
		return ((::Class_1_56E6900742B98CE8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_SIMULATESCENE_OFFSET))(this);
	}

	::System::Void set_SimulateScene(::Class_1_56E6900742B98CE8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56E6900742B98CE8*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_SIMULATESCENE_OFFSET))(this, value);
	}

	::System::Boolean get_RoundTeamA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_ROUNDTEAMA_OFFSET))(this);
	}

	::System::Void set_RoundTeamA(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_ROUNDTEAMA_OFFSET))(this, value);
	}

	::System::Boolean get_RoundFirstTeamA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_ROUNDFIRSTTEAMA_OFFSET))(this);
	}

	::System::Void set_RoundFirstTeamA(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_ROUNDFIRSTTEAMA_OFFSET))(this, value);
	}

	::System::UInt32 get_LevelId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_LEVELID_OFFSET))(this);
	}

	::System::Void set_LevelId(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_LEVELID_OFFSET))(this, value);
	}

	::Enum_3_63D176C405CC7947 get_Phase()
	{
		return ((::Enum_3_63D176C405CC7947(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_PHASE_OFFSET))(this);
	}

	::System::Void set_Phase(::Enum_3_63D176C405CC7947 value)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63D176C405CC7947))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_PHASE_OFFSET))(this, value);
	}

	::Class_1_9671734BA1DFB3F8* get_ActionItem()
	{
		return ((::Class_1_9671734BA1DFB3F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_ACTIONITEM_OFFSET))(this);
	}

	::System::Void set_ActionItem(::Class_1_9671734BA1DFB3F8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9671734BA1DFB3F8*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_ACTIONITEM_OFFSET))(this, value);
	}

	::System::Boolean get_InSimulate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_INSIMULATE_OFFSET))(this);
	}

	::System::Void set_InSimulate(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_INSIMULATE_OFFSET))(this, value);
	}

	::System::Boolean get_IsAIMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_ISAIMODE_OFFSET))(this);
	}

	::System::Void set_IsAIMode(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_ISAIMODE_OFFSET))(this, value);
	}

	::System::UInt32 get_WinScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_WINSCORE_OFFSET))(this);
	}

	::System::Void set_WinScore(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_WINSCORE_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_217* get_Guest()
	{
		return ((::Class_0_16E4307DCC419505_217*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_GUEST_OFFSET))(this);
	}

	::System::Void set_Guest(::Class_0_16E4307DCC419505_217* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_217*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_GUEST_OFFSET))(this, value);
	}

	::Enum_3_F80BFD5B986D5503_3 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_F80BFD5B986D5503_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::RPG::GameCore::MultiPlayerGameMode Method_1_A568A23ABE039CE4()
	{
		return ((::RPG::GameCore::MultiPlayerGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_A568A23ABE039CE4_OFFSET))(this);
	}

	::System::Single get_FieldLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_FIELDLENGTH_OFFSET))(this);
	}

	::System::Void set_FieldLength(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_FIELDLENGTH_OFFSET))(this, value);
	}

	::System::Single get_FieldWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_FIELDWIDTH_OFFSET))(this);
	}

	::System::Void set_FieldWidth(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_FIELDWIDTH_OFFSET))(this, value);
	}
};

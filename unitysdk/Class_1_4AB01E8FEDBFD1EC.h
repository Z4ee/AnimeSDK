#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_3.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_32.h"
#include "unitysdk/Enum_3_63D176C405CC7947_2.h"
#include "unitysdk/Enum_3_7CF131C413C919AF.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleActionSource.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleHpType.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarbleTitleValue.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_232;
class Class_1_03E620B95D05DE85_1;
class Class_1_38CD02622A43811A;
class Class_1_3DEF26C653AFADFD;
class Class_1_44EC4861006F82B0;
class Class_1_4ADF8C7F4D4A9012;
class Class_1_8F7C43AD64EAA7A8;
class Class_1_963E317C37FB5E9A_26;
class Class_1_9DB6F6BB628BF86A;
class Class_1_C9DFE5EE7107C629_6;
class Class_1_D17272E82AE804C2_2;
class Class_1_D54F41AAAD02B794;
class Class_1_DBD798BF69C78390;
class Class_1_EA5A5E4D07C4CF2B;
class Class_1_FD772F14877F45E5;
class Class_2_78C8EAAA63C4635F;
namespace RPG::GameCore { class MarbleSealLevelConfigRow; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4AB01E8FEDBFD1EC_GET_ACTIONITEM_OFFSET UNITYSDK_OFFSET(0x18E708B0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_FIELDLENGTH_OFFSET UNITYSDK_OFFSET(0x18E70970)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_FIELDWIDTH_OFFSET UNITYSDK_OFFSET(0x18E70990)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_GUEST_OFFSET UNITYSDK_OFFSET(0x18E70930)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_INSIMULATE_OFFSET UNITYSDK_OFFSET(0x18E708D0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_INSTAT_OFFSET UNITYSDK_OFFSET(0x18E707B0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_ISAIMODE_OFFSET UNITYSDK_OFFSET(0x18E708F0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x18E707F0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x18E70870)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x18E70890)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_ROUNDFIRSTTEAMA_OFFSET UNITYSDK_OFFSET(0x18E70850)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_ROUNDTEAMA_OFFSET UNITYSDK_OFFSET(0x18E70830)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_SIMULATESCENE_OFFSET UNITYSDK_OFFSET(0x18E70810)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x18E707D0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_WINSCORE_OFFSET UNITYSDK_OFFSET(0x18E70910)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_02ED9C4DC3BCFED5_OFFSET UNITYSDK_OFFSET(0x18E62810)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_088894CABE4CB272_1_OFFSET UNITYSDK_OFFSET(0x18E697A0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_088894CABE4CB272_OFFSET UNITYSDK_OFFSET(0x18E68AD0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_0C52ECE57377B966_OFFSET UNITYSDK_OFFSET(0x18E6EB50)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_0E44D762B473DBFF_OFFSET UNITYSDK_OFFSET(0x18E67CF0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_17A984A722C7B8A2_OFFSET UNITYSDK_OFFSET(0x18E62600)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_250FC09579A6447A_OFFSET UNITYSDK_OFFSET(0x18E61270)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_2C3F2DB2A4AACF8D_OFFSET UNITYSDK_OFFSET(0x18E62B00)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_2CAADC051AEB67F9_OFFSET UNITYSDK_OFFSET(0x18E63D10)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_2E24DB09E58C849E_OFFSET UNITYSDK_OFFSET(0x18E62930)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_31CBE4499CBFC900_OFFSET UNITYSDK_OFFSET(0x18E62140)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_36B0C71034EACE26_OFFSET UNITYSDK_OFFSET(0x18E6E210)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3B83C5FD5E2ABC6D_OFFSET UNITYSDK_OFFSET(0x18E65770)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3CD418ED9B8F46B0_OFFSET UNITYSDK_OFFSET(0x18E654C0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18E61220)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3F22462E8E5E0069_OFFSET UNITYSDK_OFFSET(0x18E6E950)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x18E63AA0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_42BE988AF3EDEB3F_1_OFFSET UNITYSDK_OFFSET(0x18E6EBB0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_42BE988AF3EDEB3F_OFFSET UNITYSDK_OFFSET(0x18E656B0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_476624E5F55CD2B4_OFFSET UNITYSDK_OFFSET(0x18E70270)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_4D2313D2319994E5_OFFSET UNITYSDK_OFFSET(0x18E65E70)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_4D9E1AC61B60D577_1_OFFSET UNITYSDK_OFFSET(0x18E66ED0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x18E66680)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_4DC99A0E8033A1A2_OFFSET UNITYSDK_OFFSET(0x18E63C80)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_513C7EE8B09CA415_OFFSET UNITYSDK_OFFSET(0x18E640C0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_51EFFA2E8BBD0382_OFFSET UNITYSDK_OFFSET(0x18E69590)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_5CDF16CC200D8B52_OFFSET UNITYSDK_OFFSET(0x18E6E290)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x18E676B0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_62233823745E68EC_OFFSET UNITYSDK_OFFSET(0x18E63EF0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_63E46527D75CEF1C_OFFSET UNITYSDK_OFFSET(0x18E61190)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x18E6B710)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_6C3AF047E49B8120_OFFSET UNITYSDK_OFFSET(0x18E678F0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_70437D85C11C5222_1_OFFSET UNITYSDK_OFFSET(0x18E6D5F0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x18E6D560)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_7505CFEE95112685_OFFSET UNITYSDK_OFFSET(0x18E6EC70)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_8228832001D6CC86_OFFSET UNITYSDK_OFFSET(0x18E622B0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_8336E89DF737C001_OFFSET UNITYSDK_OFFSET(0x18E64940)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_92333B9BD625F93F_OFFSET UNITYSDK_OFFSET(0x18E6E370)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_989FC1BB9D0D450E_OFFSET UNITYSDK_OFFSET(0x18E65A90)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_9D973B7356F95A49_OFFSET UNITYSDK_OFFSET(0x18E61020)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A48D8634DF568D53_OFFSET UNITYSDK_OFFSET(0x18E6DF80)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A568A23ABE039CE4_OFFSET UNITYSDK_OFFSET(0x18E70960)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A5E5430A2ACEA81C_OFFSET UNITYSDK_OFFSET(0x18E683F0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18E70950)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_ABB6C4F5037C0542_OFFSET UNITYSDK_OFFSET(0x18E68470)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_B40F215E4747B2C2_1_OFFSET UNITYSDK_OFFSET(0x18E6F4C0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_B40F215E4747B2C2_OFFSET UNITYSDK_OFFSET(0x18E6ECD0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_B50696823C51D50F_OFFSET UNITYSDK_OFFSET(0x18E6E2E0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C15143F4297BD639_OFFSET UNITYSDK_OFFSET(0x18E6FFB0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C20A7E9DF3996211_OFFSET UNITYSDK_OFFSET(0x18E63880)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C75BDBED59C3449E_OFFSET UNITYSDK_OFFSET(0x18E63E50)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x18E60F70)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x18E63FA0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_D295B13EDF9BA804_OFFSET UNITYSDK_OFFSET(0x18E70570)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_D69C8B5E1F0BD4F6_OFFSET UNITYSDK_OFFSET(0x18E6E8B0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_DB845D3FBCE778E3_OFFSET UNITYSDK_OFFSET(0x18E63DA0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_DD678535C8FC1ACF_OFFSET UNITYSDK_OFFSET(0x18E6DC80)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_DDBFE8E9D8449B5F_OFFSET UNITYSDK_OFFSET(0x18E63900)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_E78BB34C3F2559E6_OFFSET UNITYSDK_OFFSET(0x18E70420)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_EF6D50A3C303F8DC_1_OFFSET UNITYSDK_OFFSET(0x18E6AE90)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_EF6D50A3C303F8DC_OFFSET UNITYSDK_OFFSET(0x18E6A610)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F48253AA80201A36_OFFSET UNITYSDK_OFFSET(0x18E68A10)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F54D66AB9B833697_OFFSET UNITYSDK_OFFSET(0x18E624B0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F8A17CFB11B30C3B_1_OFFSET UNITYSDK_OFFSET(0x18E6DAB0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F8A17CFB11B30C3B_OFFSET UNITYSDK_OFFSET(0x18E6D690)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_FD1665D7E99D4730_OFFSET UNITYSDK_OFFSET(0x18E6E5D0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_ACTIONITEM_OFFSET UNITYSDK_OFFSET(0x18E708C0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_FIELDLENGTH_OFFSET UNITYSDK_OFFSET(0x18E70980)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_FIELDWIDTH_OFFSET UNITYSDK_OFFSET(0x18E709A0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_GUEST_OFFSET UNITYSDK_OFFSET(0x18E70940)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_INSIMULATE_OFFSET UNITYSDK_OFFSET(0x18E708E0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_INSTAT_OFFSET UNITYSDK_OFFSET(0x18E707C0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_ISAIMODE_OFFSET UNITYSDK_OFFSET(0x18E70900)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x18E70800)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x18E70880)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x18E708A0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_ROUNDFIRSTTEAMA_OFFSET UNITYSDK_OFFSET(0x18E70860)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_ROUNDTEAMA_OFFSET UNITYSDK_OFFSET(0x18E70840)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_SIMULATESCENE_OFFSET UNITYSDK_OFFSET(0x18E70820)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x18E707E0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_WINSCORE_OFFSET UNITYSDK_OFFSET(0x18E70920)
#define CLASS_1_4AB01E8FEDBFD1EC__CTOR_OFFSET UNITYSDK_OFFSET(0x18E60C60)

inline static constexpr unsigned int Class_1_4AB01E8FEDBFD1EC_TypeDefinitionIndex = 39706;

class Class_1_4AB01E8FEDBFD1EC : public ::System::Object
{
public:
	::Class_1_3DEF26C653AFADFD* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_2*>* Field_1_1; // 0x18
	::Class_1_C9DFE5EE7107C629_6* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x28
	::Class_1_FD772F14877F45E5* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_3DEF26C653AFADFD*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::Class_1_D54F41AAAD02B794*>* Field_1_6; // 0x40
	::Class_1_3DEF26C653AFADFD* _ActionItem_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::Class_1_3DEF26C653AFADFD*>* Field_1_8; // 0x50
	::System::Random* Field_1_9; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3DEF26C653AFADFD*>* Field_1_10; // 0x60
	::Class_1_4ADF8C7F4D4A9012* _SimulateScene_k__BackingField; // 0x68
	::Class_1_44EC4861006F82B0* Field_1_12; // 0x70
	::Class_2_78C8EAAA63C4635F* Field_1_13; // 0x78
	::System::Collections::Generic::List_1<::Class_1_03E620B95D05DE85_1*>* Field_1_14; // 0x80
	::System::Collections::Generic::List_1<::Class_1_EA5A5E4D07C4CF2B*>* Field_1_15; // 0x88
	::Class_1_DBD798BF69C78390* Field_1_16; // 0x90
	::System::Collections::Generic::List_1<::Class_1_03E620B95D05DE85_1*>* Field_1_17; // 0x98
	::Class_1_FD772F14877F45E5* Field_1_18; // 0xA0
	::Class_0_16E4307DCC419505_232* _Guest_k__BackingField; // 0xA8
	::System::Collections::Generic::List_1<::RPG::GameCore::MarbleItemFeature>* Field_1_20; // 0xB0
	::System::UInt32 _WinScore_k__BackingField; // 0xB8
	::System::Single _FieldWidth_k__BackingField; // 0xBC
	::Enum_3_0A3761FE34514D6C_32 Field_1_23; // 0xC0
	::System::Boolean _InStat_k__BackingField; // 0xC4
	::System::Boolean _IsAIMode_k__BackingField; // 0xC5
	::System::Boolean Field_1_26; // 0xC6
	::System::Single Field_1_27; // 0xC8
	::Enum_3_A35B38E5F9115A76_2 Field_1_28; // 0xCC
	::System::UInt32 Field_1_29; // 0xD0
	::System::Single Field_1_30; // 0xD4
	::System::Boolean _IsFriend_k__BackingField; // 0xD8
	::System::Boolean _RoundFirstTeamA_k__BackingField; // 0xD9
	::System::Boolean _InSimulate_k__BackingField; // 0xDA
	::System::Boolean _RoundTeamA_k__BackingField; // 0xDB
	::System::UInt32 Field_1_35; // 0xDC
	::System::Single _FieldLength_k__BackingField; // 0xE0
	::Enum_3_63D176C405CC7947_2 _Phase_k__BackingField; // 0xE4
	::System::Single Field_1_38; // 0xE8
	::System::Int32 _TickCount_k__BackingField; // 0xEC
	::System::UInt32 _LevelId_k__BackingField; // 0xF0

	::System::Void _ctor(::Enum_3_A35B38E5F9115A76_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC__CTOR_OFFSET))(this, a1);
	}

	::Class_1_3DEF26C653AFADFD* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_3DEF26C653AFADFD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9D973B7356F95A49(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_9D973B7356F95A49_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_63E46527D75CEF1C(::RPG::GameCore::MarbleItemFeature a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_63E46527D75CEF1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_250FC09579A6447A(::System::String* a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_250FC09579A6447A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_17A984A722C7B8A2(::System::UInt32 a1, ::System::Boolean a2, ::RPG::MVector2 a3, ::RPG::MVector2 a4, ::System::UInt32 a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::MVector2, ::RPG::MVector2, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_17A984A722C7B8A2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::GameCore::MarbleSealLevelConfigRow* Method_1_02ED9C4DC3BCFED5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleSealLevelConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_02ED9C4DC3BCFED5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F54D66AB9B833697(::System::UInt32 a1, ::RPG::MVector2 a2, ::System::Single a3, ::System::UInt32 a4, ::RPG::GameCore::MarbleItemFeature a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F54D66AB9B833697_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_8228832001D6CC86(::System::UInt32 a1, ::RPG::MVector2 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::Il2CppArray<::System::UInt32>* a6, ::System::UInt32 a7, ::RPG::GameCore::MarbleItemFeature a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_8228832001D6CC86_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_31CBE4499CBFC900(::System::UInt32 a1, ::RPG::MVector2 a2, ::System::Single a3, ::RPG::MVector2 a4, ::System::Boolean a5, ::System::UInt32 a6, ::RPG::GameCore::MarbleItemFeature a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::System::Single, ::RPG::MVector2, ::System::Boolean, ::System::UInt32, ::RPG::GameCore::MarbleItemFeature))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_31CBE4499CBFC900_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_2E24DB09E58C849E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_2E24DB09E58C849E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2C3F2DB2A4AACF8D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_2C3F2DB2A4AACF8D_OFFSET))(this);
	}

	::System::Void Method_1_C20A7E9DF3996211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C20A7E9DF3996211_OFFSET))(this);
	}

	::System::Void Method_1_DDBFE8E9D8449B5F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_DDBFE8E9D8449B5F_OFFSET))(this);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_4DC99A0E8033A1A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_4DC99A0E8033A1A2_OFFSET))(this);
	}

	::System::Void Method_1_2CAADC051AEB67F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_2CAADC051AEB67F9_OFFSET))(this);
	}

	::System::Void Method_1_DB845D3FBCE778E3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_DB845D3FBCE778E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_C75BDBED59C3449E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C75BDBED59C3449E_OFFSET))(this, a1);
	}

	::System::Void Method_1_62233823745E68EC(::Enum_3_7CF131C413C919AF a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7CF131C413C919AF, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_62233823745E68EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_1_513C7EE8B09CA415(::Enum_3_01618AD0437C8486_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_3))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_513C7EE8B09CA415_OFFSET))(this, a1);
	}

	::System::Void Method_1_8336E89DF737C001()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_8336E89DF737C001_OFFSET))(this);
	}

	::System::Void Method_1_3B83C5FD5E2ABC6D(::System::Single a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3B83C5FD5E2ABC6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_989FC1BB9D0D450E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_989FC1BB9D0D450E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_4D2313D2319994E5(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_4D2313D2319994E5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_42BE988AF3EDEB3F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_42BE988AF3EDEB3F_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::UInt32>* Method_1_6C3AF047E49B8120(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_6C3AF047E49B8120_OFFSET))(this, a1);
	}

	::RPG::MVector2 Method_1_0E44D762B473DBFF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_0E44D762B473DBFF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5E5430A2ACEA81C(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A5E5430A2ACEA81C_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_ABB6C4F5037C0542(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_ABB6C4F5037C0542_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_F48253AA80201A36(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F48253AA80201A36_OFFSET))(this, a1);
	}

	::System::Void Method_1_088894CABE4CB272(::RPG::GameCore::MarbleTitleValue a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_088894CABE4CB272_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_51EFFA2E8BBD0382(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_51EFFA2E8BBD0382_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_3CD418ED9B8F46B0(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3CD418ED9B8F46B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_088894CABE4CB272_1(::RPG::GameCore::MarbleTitleValue a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_088894CABE4CB272_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_EF6D50A3C303F8DC(::RPG::GameCore::MarbleTitleValue a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_EF6D50A3C303F8DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EF6D50A3C303F8DC_1(::RPG::GameCore::MarbleTitleValue a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleTitleValue, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_EF6D50A3C303F8DC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_1_70437D85C11C5222_1(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_70437D85C11C5222_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8A17CFB11B30C3B(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F8A17CFB11B30C3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8A17CFB11B30C3B_1(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F8A17CFB11B30C3B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD678535C8FC1ACF(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_DD678535C8FC1ACF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A48D8634DF568D53(::Class_1_9DB6F6BB628BF86A* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A48D8634DF568D53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36B0C71034EACE26(::Class_1_38CD02622A43811A* a1, ::Class_1_38CD02622A43811A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38CD02622A43811A*, ::Class_1_38CD02622A43811A*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_36B0C71034EACE26_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5CDF16CC200D8B52(::Class_1_38CD02622A43811A* a1, ::Class_1_38CD02622A43811A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38CD02622A43811A*, ::Class_1_38CD02622A43811A*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_5CDF16CC200D8B52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B50696823C51D50F(::Class_1_38CD02622A43811A* a1, ::Class_1_38CD02622A43811A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38CD02622A43811A*, ::Class_1_38CD02622A43811A*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_B50696823C51D50F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_92333B9BD625F93F(::Class_1_3DEF26C653AFADFD* a1, ::RPG::Client::LittleGame::Marble::MarbleActionSource a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3DEF26C653AFADFD*, ::RPG::Client::LittleGame::Marble::MarbleActionSource))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_92333B9BD625F93F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_1_FD1665D7E99D4730(::Class_1_3DEF26C653AFADFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DEF26C653AFADFD*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_FD1665D7E99D4730_OFFSET))(this, a1);
	}

	::System::Void Method_1_D69C8B5E1F0BD4F6(::Class_1_3DEF26C653AFADFD* a1, ::System::Int32 a2, ::System::Single a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DEF26C653AFADFD*, ::System::Int32, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_D69C8B5E1F0BD4F6_OFFSET))(this, a1, a2, a3, a4);
	}

	::Il2CppArray<::Class_1_8F7C43AD64EAA7A8*>* Method_1_3F22462E8E5E0069()
	{
		return ((::Il2CppArray<::Class_1_8F7C43AD64EAA7A8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3F22462E8E5E0069_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_8F7C43AD64EAA7A8*>* Method_1_0C52ECE57377B966()
	{
		return ((::Il2CppArray<::Class_1_8F7C43AD64EAA7A8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_0C52ECE57377B966_OFFSET))(this);
	}

	::System::Void Method_1_42BE988AF3EDEB3F_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_42BE988AF3EDEB3F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7505CFEE95112685(::Class_1_963E317C37FB5E9A_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_26*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_7505CFEE95112685_OFFSET))(this, a1);
	}

	::System::Void Method_1_B40F215E4747B2C2(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_B40F215E4747B2C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B40F215E4747B2C2_1(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_B40F215E4747B2C2_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C15143F4297BD639(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt64 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C15143F4297BD639_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_4D9E1AC61B60D577_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_4D9E1AC61B60D577_1_OFFSET))(this);
	}

	::System::Void Method_1_476624E5F55CD2B4(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_476624E5F55CD2B4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E78BB34C3F2559E6(::System::Int32 a1, ::RPG::Client::LittleGame::Marble::MarbleHpType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::Marble::MarbleHpType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_E78BB34C3F2559E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D295B13EDF9BA804(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Boolean a4, ::System::UInt64 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_D295B13EDF9BA804_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean get_InStat()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_INSTAT_OFFSET))(this);
	}

	::System::Void set_InStat(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_INSTAT_OFFSET))(this, a1);
	}

	::System::Int32 get_TickCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_TICKCOUNT_OFFSET))(this);
	}

	::System::Void set_TickCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_TICKCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFriend()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_ISFRIEND_OFFSET))(this);
	}

	::System::Void set_IsFriend(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_ISFRIEND_OFFSET))(this, a1);
	}

	::Class_1_4ADF8C7F4D4A9012* get_SimulateScene()
	{
		return ((::Class_1_4ADF8C7F4D4A9012*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_SIMULATESCENE_OFFSET))(this);
	}

	::System::Void set_SimulateScene(::Class_1_4ADF8C7F4D4A9012* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4ADF8C7F4D4A9012*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_SIMULATESCENE_OFFSET))(this, a1);
	}

	::System::Boolean get_RoundTeamA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_ROUNDTEAMA_OFFSET))(this);
	}

	::System::Void set_RoundTeamA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_ROUNDTEAMA_OFFSET))(this, a1);
	}

	::System::Boolean get_RoundFirstTeamA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_ROUNDFIRSTTEAMA_OFFSET))(this);
	}

	::System::Void set_RoundFirstTeamA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_ROUNDFIRSTTEAMA_OFFSET))(this, a1);
	}

	::System::UInt32 get_LevelId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_LEVELID_OFFSET))(this);
	}

	::System::Void set_LevelId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_LEVELID_OFFSET))(this, a1);
	}

	::Enum_3_63D176C405CC7947_2 get_Phase()
	{
		return ((::Enum_3_63D176C405CC7947_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_PHASE_OFFSET))(this);
	}

	::System::Void set_Phase(::Enum_3_63D176C405CC7947_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63D176C405CC7947_2))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_PHASE_OFFSET))(this, a1);
	}

	::Class_1_3DEF26C653AFADFD* get_ActionItem()
	{
		return ((::Class_1_3DEF26C653AFADFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_ACTIONITEM_OFFSET))(this);
	}

	::System::Void set_ActionItem(::Class_1_3DEF26C653AFADFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DEF26C653AFADFD*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_ACTIONITEM_OFFSET))(this, a1);
	}

	::System::Boolean get_InSimulate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_INSIMULATE_OFFSET))(this);
	}

	::System::Void set_InSimulate(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_INSIMULATE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAIMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_ISAIMODE_OFFSET))(this);
	}

	::System::Void set_IsAIMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_ISAIMODE_OFFSET))(this, a1);
	}

	::System::UInt32 get_WinScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_WINSCORE_OFFSET))(this);
	}

	::System::Void set_WinScore(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_WINSCORE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_232* get_Guest()
	{
		return ((::Class_0_16E4307DCC419505_232*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_GUEST_OFFSET))(this);
	}

	::System::Void set_Guest(::Class_0_16E4307DCC419505_232* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_232*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_GUEST_OFFSET))(this, a1);
	}

	::Enum_3_A35B38E5F9115A76_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::RPG::GameCore::MultiPlayerGameMode Method_1_A568A23ABE039CE4()
	{
		return ((::RPG::GameCore::MultiPlayerGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A568A23ABE039CE4_OFFSET))(this);
	}

	::System::Single get_FieldLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_FIELDLENGTH_OFFSET))(this);
	}

	::System::Void set_FieldLength(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_FIELDLENGTH_OFFSET))(this, a1);
	}

	::System::Single get_FieldWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_FIELDWIDTH_OFFSET))(this);
	}

	::System::Void set_FieldWidth(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_FIELDWIDTH_OFFSET))(this, a1);
	}
};

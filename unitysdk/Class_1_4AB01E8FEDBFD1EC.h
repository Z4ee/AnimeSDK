#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/Enum_3_01618AD0437C8486_5.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_33.h"
#include "unitysdk/Enum_3_63D176C405CC7947_1.h"
#include "unitysdk/Enum_3_7CF131C413C919AF.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleActionSource.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleHpType.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarbleTitleValue.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_252;
class Class_1_07436FDB24BAF683_2;
class Class_1_32ED9F60AC82E5A0;
class Class_1_38CD02622A43811A;
class Class_1_3DEF26C653AFADFD;
class Class_1_44EC4861006F82B0;
class Class_1_4ADF8C7F4D4A9012;
class Class_1_963E317C37FB5E9A_31;
class Class_1_9DB6F6BB628BF86A;
class Class_1_C9DFE5EE7107C629_10;
class Class_1_D17272E82AE804C2_2;
class Class_1_D54F41AAAD02B794;
class Class_1_DBD798BF69C78390;
class Class_1_EA5A5E4D07C4CF2B;
class Class_1_FD772F14877F45E5;
class Class_2_CA70E0DDA9F5F1EA;
namespace RPG::GameCore { class MarbleSealLevelConfigRow; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4AB01E8FEDBFD1EC_GET_ACTIONITEM_OFFSET UNITYSDK_OFFSET(0x19C92EE0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_FIELDLENGTH_OFFSET UNITYSDK_OFFSET(0x19C92FA0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_FIELDWIDTH_OFFSET UNITYSDK_OFFSET(0x19C92FC0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_GUEST_OFFSET UNITYSDK_OFFSET(0x19C92F60)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_INSIMULATE_OFFSET UNITYSDK_OFFSET(0x19C92F00)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_INSTAT_OFFSET UNITYSDK_OFFSET(0x19C92DE0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_ISAIMODE_OFFSET UNITYSDK_OFFSET(0x19C92F20)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x19C92E20)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x19C92EA0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x19C92EC0)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_ROUNDFIRSTTEAMA_OFFSET UNITYSDK_OFFSET(0x19C92E80)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_ROUNDTEAMA_OFFSET UNITYSDK_OFFSET(0x19C92E60)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_SIMULATESCENE_OFFSET UNITYSDK_OFFSET(0x19C92E40)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x19C92E00)
#define CLASS_1_4AB01E8FEDBFD1EC_GET_WINSCORE_OFFSET UNITYSDK_OFFSET(0x19C92F40)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_02ED9C4DC3BCFED5_OFFSET UNITYSDK_OFFSET(0x19C829A0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_088894CABE4CB272_1_OFFSET UNITYSDK_OFFSET(0x19C8B090)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_088894CABE4CB272_OFFSET UNITYSDK_OFFSET(0x19C8A140)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_0C52ECE57377B966_OFFSET UNITYSDK_OFFSET(0x19C90B80)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_17A984A722C7B8A2_OFFSET UNITYSDK_OFFSET(0x19C82790)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_250FC09579A6447A_OFFSET UNITYSDK_OFFSET(0x19C813F0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_2CAADC051AEB67F9_OFFSET UNITYSDK_OFFSET(0x19C84390)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_2E24DB09E58C849E_OFFSET UNITYSDK_OFFSET(0x19C82AC0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_31CBE4499CBFC900_OFFSET UNITYSDK_OFFSET(0x19C822D0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_36B0C71034EACE26_OFFSET UNITYSDK_OFFSET(0x19C90230)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3B83C5FD5E2ABC6D_OFFSET UNITYSDK_OFFSET(0x19C862C0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3CD418ED9B8F46B0_OFFSET UNITYSDK_OFFSET(0x19C86010)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x19C813A0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3F22462E8E5E0069_OFFSET UNITYSDK_OFFSET(0x19C90980)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x19C84120)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_476624E5F55CD2B4_OFFSET UNITYSDK_OFFSET(0x19C928A0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_4D2313D2319994E5_OFFSET UNITYSDK_OFFSET(0x19C86AF0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_4DC99A0E8033A1A2_OFFSET UNITYSDK_OFFSET(0x19C84300)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_51EFFA2E8BBD0382_OFFSET UNITYSDK_OFFSET(0x19C8AE80)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_577FCC2B01C93977_OFFSET UNITYSDK_OFFSET(0x19C88A30)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_58F4CBDC41D38039_OFFSET UNITYSDK_OFFSET(0x19C88F70)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_5CDF16CC200D8B52_OFFSET UNITYSDK_OFFSET(0x19C902B0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x19C887F0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_6173AF17811AED4B_1_OFFSET UNITYSDK_OFFSET(0x19C87DB0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x19C87310)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_62233823745E68EC_OFFSET UNITYSDK_OFFSET(0x19C84570)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_63E46527D75CEF1C_OFFSET UNITYSDK_OFFSET(0x19C81310)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_63F5792735BA73DD_1_OFFSET UNITYSDK_OFFSET(0x19C91760)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_63F5792735BA73DD_OFFSET UNITYSDK_OFFSET(0x19C90D00)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x19C8D740)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_70437D85C11C5222_1_OFFSET UNITYSDK_OFFSET(0x19C8F620)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x19C8F590)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_7505CFEE95112685_OFFSET UNITYSDK_OFFSET(0x19C90CA0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_8228832001D6CC86_OFFSET UNITYSDK_OFFSET(0x19C82440)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_9031ECFBFB04ECDB_OFFSET UNITYSDK_OFFSET(0x19C84730)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_92333B9BD625F93F_OFFSET UNITYSDK_OFFSET(0x19C90390)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_9D973B7356F95A49_OFFSET UNITYSDK_OFFSET(0x19C81190)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_9EFDA5A3762C82B0_OFFSET UNITYSDK_OFFSET(0x19C89920)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A48D8634DF568D53_OFFSET UNITYSDK_OFFSET(0x19C8FFA0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A568A23ABE039CE4_OFFSET UNITYSDK_OFFSET(0x19C92F90)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A5E5430A2ACEA81C_OFFSET UNITYSDK_OFFSET(0x19C898A0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19C92F80)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_B50696823C51D50F_OFFSET UNITYSDK_OFFSET(0x19C90300)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C15143F4297BD639_OFFSET UNITYSDK_OFFSET(0x19C925E0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C20A7E9DF3996211_OFFSET UNITYSDK_OFFSET(0x19C83F00)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C22EE328C3C66295_OFFSET UNITYSDK_OFFSET(0x19C865E0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C75BDBED59C3449E_OFFSET UNITYSDK_OFFSET(0x19C844D0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x19C810E0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x19C84620)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_D295B13EDF9BA804_OFFSET UNITYSDK_OFFSET(0x19C92BA0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x19C85220)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_D69C8B5E1F0BD4F6_OFFSET UNITYSDK_OFFSET(0x19C908E0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_DB845D3FBCE778E3_OFFSET UNITYSDK_OFFSET(0x19C84420)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_DD678535C8FC1ACF_OFFSET UNITYSDK_OFFSET(0x19C8FCA0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_DDBFE8E9D8449B5F_OFFSET UNITYSDK_OFFSET(0x19C83F80)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_E745E1D5EAAA552F_OFFSET UNITYSDK_OFFSET(0x19C82CA0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_E78BB34C3F2559E6_OFFSET UNITYSDK_OFFSET(0x19C92A50)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_EF6D50A3C303F8DC_1_OFFSET UNITYSDK_OFFSET(0x19C8CC60)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_EF6D50A3C303F8DC_OFFSET UNITYSDK_OFFSET(0x19C8C180)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F48253AA80201A36_OFFSET UNITYSDK_OFFSET(0x19C8A080)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F54D66AB9B833697_OFFSET UNITYSDK_OFFSET(0x19C82640)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F8A17CFB11B30C3B_1_OFFSET UNITYSDK_OFFSET(0x19C8FAD0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_F8A17CFB11B30C3B_OFFSET UNITYSDK_OFFSET(0x19C8F6C0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_FCFC83C6391C8C31_1_OFFSET UNITYSDK_OFFSET(0x19C90BE0)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_FCFC83C6391C8C31_OFFSET UNITYSDK_OFFSET(0x19C86200)
#define CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_FD1665D7E99D4730_OFFSET UNITYSDK_OFFSET(0x19C905F0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_ACTIONITEM_OFFSET UNITYSDK_OFFSET(0x19C92EF0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_FIELDLENGTH_OFFSET UNITYSDK_OFFSET(0x19C92FB0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_FIELDWIDTH_OFFSET UNITYSDK_OFFSET(0x19C92FD0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_GUEST_OFFSET UNITYSDK_OFFSET(0x19C92F70)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_INSIMULATE_OFFSET UNITYSDK_OFFSET(0x19C92F10)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_INSTAT_OFFSET UNITYSDK_OFFSET(0x19C92DF0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_ISAIMODE_OFFSET UNITYSDK_OFFSET(0x19C92F30)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x19C92E30)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x19C92EB0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x19C92ED0)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_ROUNDFIRSTTEAMA_OFFSET UNITYSDK_OFFSET(0x19C92E90)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_ROUNDTEAMA_OFFSET UNITYSDK_OFFSET(0x19C92E70)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_SIMULATESCENE_OFFSET UNITYSDK_OFFSET(0x19C92E50)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x19C92E10)
#define CLASS_1_4AB01E8FEDBFD1EC_SET_WINSCORE_OFFSET UNITYSDK_OFFSET(0x19C92F50)
#define CLASS_1_4AB01E8FEDBFD1EC__CTOR_OFFSET UNITYSDK_OFFSET(0x19C80DC0)

inline static constexpr unsigned int Class_1_4AB01E8FEDBFD1EC_TypeDefinitionIndex = 40515;

class Class_1_4AB01E8FEDBFD1EC : public ::System::Object
{
public:
	::Class_1_FD772F14877F45E5* Field_1_0; // 0x10
	::Class_1_C9DFE5EE7107C629_10* Field_1_1; // 0x18
	::Class_1_3DEF26C653AFADFD* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_3DEF26C653AFADFD*>* Field_1_3; // 0x28
	::Class_0_16E4307DCC419505_252* _Guest_k__BackingField; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3DEF26C653AFADFD*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x40
	::Class_1_44EC4861006F82B0* Field_1_7; // 0x48
	::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0*>* Field_1_8; // 0x50
	::Class_1_4ADF8C7F4D4A9012* _SimulateScene_k__BackingField; // 0x58
	::System::Random* Field_1_10; // 0x60
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_2*>* Field_1_11; // 0x68
	::System::Collections::Generic::List_1<::Class_1_3DEF26C653AFADFD*>* Field_1_12; // 0x70
	::Class_1_3DEF26C653AFADFD* _ActionItem_k__BackingField; // 0x78
	::System::Collections::Generic::List_1<::Class_1_EA5A5E4D07C4CF2B*>* Field_1_14; // 0x80
	::Class_2_CA70E0DDA9F5F1EA* Field_1_15; // 0x88
	::Class_1_FD772F14877F45E5* Field_1_16; // 0x90
	::System::Collections::Generic::List_1<::RPG::GameCore::MarbleItemFeature>* Field_1_17; // 0x98
	::Class_1_DBD798BF69C78390* Field_1_18; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_32ED9F60AC82E5A0*>* Field_1_19; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_D54F41AAAD02B794*>* Field_1_20; // 0xB0
	::System::Single _FieldLength_k__BackingField; // 0xB8
	::System::UInt32 _LevelId_k__BackingField; // 0xBC
	::Enum_3_63D176C405CC7947_1 _Phase_k__BackingField; // 0xC0
	::System::UInt32 _WinScore_k__BackingField; // 0xC4
	::System::UInt32 Field_1_25; // 0xC8
	::Enum_3_01618AD0437C8486_2 Field_1_26; // 0xCC
	::System::Boolean _InStat_k__BackingField; // 0xD0
	::System::Boolean _IsFriend_k__BackingField; // 0xD1
	::System::Boolean _IsAIMode_k__BackingField; // 0xD2
	::System::Boolean Field_1_30; // 0xD3
	::System::Single _FieldWidth_k__BackingField; // 0xD4
	::System::Single Field_1_32; // 0xD8
	::System::Boolean _RoundTeamA_k__BackingField; // 0xDC
	::System::Boolean _RoundFirstTeamA_k__BackingField; // 0xDD
	::System::Boolean _InSimulate_k__BackingField; // 0xDE
	::System::Int32 _TickCount_k__BackingField; // 0xE0
	::System::Single Field_1_37; // 0xE4
	::System::UInt32 Field_1_38; // 0xE8
	::System::Single Field_1_39; // 0xEC
	::Enum_3_0A3761FE34514D6C_33 Field_1_40; // 0xF0

	::System::Void _ctor(::Enum_3_01618AD0437C8486_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC__CTOR_OFFSET))(this, a1);
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

	::System::Boolean Method_1_E745E1D5EAAA552F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_E745E1D5EAAA552F_OFFSET))(this);
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

	::System::Void Method_1_9031ECFBFB04ECDB(::Enum_3_01618AD0437C8486_5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_5))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_9031ECFBFB04ECDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_1_3B83C5FD5E2ABC6D(::System::Single a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3B83C5FD5E2ABC6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C22EE328C3C66295(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C22EE328C3C66295_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_4D2313D2319994E5(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_4D2313D2319994E5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FCFC83C6391C8C31(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_FCFC83C6391C8C31_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::UInt32>* Method_1_577FCC2B01C93977(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_577FCC2B01C93977_OFFSET))(this, a1);
	}

	::RPG::MVector2 Method_1_58F4CBDC41D38039(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_58F4CBDC41D38039_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5E5430A2ACEA81C(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A5E5430A2ACEA81C_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_9EFDA5A3762C82B0(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_9EFDA5A3762C82B0_OFFSET))(this, a1);
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

	::Il2CppArray<::Class_1_07436FDB24BAF683_2*>* Method_1_3F22462E8E5E0069()
	{
		return ((::Il2CppArray<::Class_1_07436FDB24BAF683_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_3F22462E8E5E0069_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_07436FDB24BAF683_2*>* Method_1_0C52ECE57377B966()
	{
		return ((::Il2CppArray<::Class_1_07436FDB24BAF683_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_0C52ECE57377B966_OFFSET))(this);
	}

	::System::Void Method_1_FCFC83C6391C8C31_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_FCFC83C6391C8C31_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7505CFEE95112685(::Class_1_963E317C37FB5E9A_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_31*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_7505CFEE95112685_OFFSET))(this, a1);
	}

	::System::Void Method_1_63F5792735BA73DD(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_63F5792735BA73DD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_63F5792735BA73DD_1(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_63F5792735BA73DD_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C15143F4297BD639(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt64 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_C15143F4297BD639_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_6173AF17811AED4B_1_OFFSET))(this);
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

	::Enum_3_63D176C405CC7947_1 get_Phase()
	{
		return ((::Enum_3_63D176C405CC7947_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_PHASE_OFFSET))(this);
	}

	::System::Void set_Phase(::Enum_3_63D176C405CC7947_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63D176C405CC7947_1))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_PHASE_OFFSET))(this, a1);
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

	::Class_0_16E4307DCC419505_252* get_Guest()
	{
		return ((::Class_0_16E4307DCC419505_252*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_GET_GUEST_OFFSET))(this);
	}

	::System::Void set_Guest(::Class_0_16E4307DCC419505_252* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_252*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_SET_GUEST_OFFSET))(this, a1);
	}

	::Enum_3_01618AD0437C8486_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_01618AD0437C8486_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC_METHOD_1_A96DCA30C6927810_OFFSET))(this);
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

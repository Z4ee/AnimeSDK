#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_3.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_32.h"
#include "unitysdk/Enum_3_63D176C405CC7947_1.h"
#include "unitysdk/Enum_3_7CF131C413C919AF.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleActionSource.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleHpType.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarbleTitleValue.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_222;
class Class_1_38CD02622A43811A;
class Class_1_3AD2528CD53B1639_7;
class Class_1_56E6900742B98CE8;
class Class_1_9236C508CFB77444;
class Class_1_9671734BA1DFB3F8;
class Class_1_9DB6F6BB628BF86A;
class Class_1_BAF87BD2507AC54B;
class Class_1_C4B679728AD83B32_6;
class Class_1_C9DFE5EE7107C629_9;
class Class_1_D17272E82AE804C2_2;
class Class_1_D54F41AAAD02B794;
class Class_1_EA5A5E4D07C4CF2B;
class Class_1_FD772F14877F45E5;
class Class_1_FDC3CA37FB2E9E6E;
class Class_2_78C8EAAA63C4635F;
namespace RPG::GameCore { class MarbleSealLevelConfigRow; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1B20028AAAE94F57_GET_ACTIONITEM_OFFSET UNITYSDK_OFFSET(0x17E03960)
#define CLASS_1_1B20028AAAE94F57_GET_FIELDLENGTH_OFFSET UNITYSDK_OFFSET(0x17E03A20)
#define CLASS_1_1B20028AAAE94F57_GET_FIELDWIDTH_OFFSET UNITYSDK_OFFSET(0x17E03A40)
#define CLASS_1_1B20028AAAE94F57_GET_GUEST_OFFSET UNITYSDK_OFFSET(0x17E039E0)
#define CLASS_1_1B20028AAAE94F57_GET_INSIMULATE_OFFSET UNITYSDK_OFFSET(0x17E03980)
#define CLASS_1_1B20028AAAE94F57_GET_INSTAT_OFFSET UNITYSDK_OFFSET(0x17E03860)
#define CLASS_1_1B20028AAAE94F57_GET_ISAIMODE_OFFSET UNITYSDK_OFFSET(0x17E039A0)
#define CLASS_1_1B20028AAAE94F57_GET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x17E038A0)
#define CLASS_1_1B20028AAAE94F57_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x17E03920)
#define CLASS_1_1B20028AAAE94F57_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x17E03940)
#define CLASS_1_1B20028AAAE94F57_GET_ROUNDFIRSTTEAMA_OFFSET UNITYSDK_OFFSET(0x17E03900)
#define CLASS_1_1B20028AAAE94F57_GET_ROUNDTEAMA_OFFSET UNITYSDK_OFFSET(0x17E038E0)
#define CLASS_1_1B20028AAAE94F57_GET_SIMULATESCENE_OFFSET UNITYSDK_OFFSET(0x17E038C0)
#define CLASS_1_1B20028AAAE94F57_GET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x17E03880)
#define CLASS_1_1B20028AAAE94F57_GET_WINSCORE_OFFSET UNITYSDK_OFFSET(0x17E039C0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_00E31248927B6921_OFFSET UNITYSDK_OFFSET(0x17DFBCF0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_036E673406CC4416_OFFSET UNITYSDK_OFFSET(0x17E01DE0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_062029FC4CB57960_OFFSET UNITYSDK_OFFSET(0x17DF7820)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_06FED672BE8D830C_OFFSET UNITYSDK_OFFSET(0x17DF5FF0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x17DFE5C0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17DF7710)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_18A6A970E21BD7A1_OFFSET UNITYSDK_OFFSET(0x17E01A30)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_19508CD9D80C41DE_OFFSET UNITYSDK_OFFSET(0x17DFB180)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_2072A4A6CFCCAE99_OFFSET UNITYSDK_OFFSET(0x17DF90E0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0x17DF7230)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_277E0F0563252FD7_OFFSET UNITYSDK_OFFSET(0x17E01CD0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_2C3F2DB2A4AACF8D_OFFSET UNITYSDK_OFFSET(0x17DF6270)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_2DB7DD6C08823EF8_OFFSET UNITYSDK_OFFSET(0x17E03630)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_31CBE4499CBFC900_OFFSET UNITYSDK_OFFSET(0x17DF57E0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_35611D661B11B1DE_OFFSET UNITYSDK_OFFSET(0x17E03110)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_3BE987BEAEB87F52_OFFSET UNITYSDK_OFFSET(0x17DFB830)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_3CD418ED9B8F46B0_OFFSET UNITYSDK_OFFSET(0x17DF8B40)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x17DF4A40)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_42BE988AF3EDEB3F_1_OFFSET UNITYSDK_OFFSET(0x17E01D20)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_42BE988AF3EDEB3F_OFFSET UNITYSDK_OFFSET(0x17DF8D30)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_4886470E1AA5EA9D_OFFSET UNITYSDK_OFFSET(0x17DF7510)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_4A4F8DBA0AF1D27A_OFFSET UNITYSDK_OFFSET(0x17E01E40)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_4DB065505C737A11_OFFSET UNITYSDK_OFFSET(0x17DF4A90)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_4FF9CFEE556B1333_1_OFFSET UNITYSDK_OFFSET(0x17DFDDF0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_4FF9CFEE556B1333_OFFSET UNITYSDK_OFFSET(0x17DFD620)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_51EFFA2E8BBD0382_OFFSET UNITYSDK_OFFSET(0x17DFC710)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_56B835F96685EDF9_1_OFFSET UNITYSDK_OFFSET(0x17DFC8B0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_56B835F96685EDF9_OFFSET UNITYSDK_OFFSET(0x17DFBDA0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_5B9D1CBDF1EEC65D_OFFSET UNITYSDK_OFFSET(0x17DFB8B0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_5CDF16CC200D8B52_OFFSET UNITYSDK_OFFSET(0x17E01460)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x17DFAC10)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_64F3EFB759D98251_OFFSET UNITYSDK_OFFSET(0x17E01AC0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_6C6F1B5D5C226216_OFFSET UNITYSDK_OFFSET(0x17DF7660)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_70437D85C11C5222_1_OFFSET UNITYSDK_OFFSET(0x17E007C0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x17E00730)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_81C972DE3B8337FB_OFFSET UNITYSDK_OFFSET(0x17DF8DF0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_837B832C4CA7C908_OFFSET UNITYSDK_OFFSET(0x17E00860)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8A26F63E185CF58D_OFFSET UNITYSDK_OFFSET(0x17DF75C0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8A3EB355C470E8A9_OFFSET UNITYSDK_OFFSET(0x17DF60A0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0x17DF8070)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8B933DECC394D41D_1_OFFSET UNITYSDK_OFFSET(0x17DF73F0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8B933DECC394D41D_OFFSET UNITYSDK_OFFSET(0x17DF6FF0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_8E38D91117188198_OFFSET UNITYSDK_OFFSET(0x17E02630)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_98A7282397F69E03_OFFSET UNITYSDK_OFFSET(0x17DF5950)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_A48D8634DF568D53_OFFSET UNITYSDK_OFFSET(0x17E01150)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_A4E5B0066DC9D281_OFFSET UNITYSDK_OFFSET(0x17E01540)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_A568A23ABE039CE4_OFFSET UNITYSDK_OFFSET(0x17E03A10)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17E03A00)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BAE96CC8B344B192_OFFSET UNITYSDK_OFFSET(0x17E033D0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BBA49FAB086F388D_1_OFFSET UNITYSDK_OFFSET(0x17DFA4B0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x17DF9CE0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BC9D0D855676839E_1_OFFSET UNITYSDK_OFFSET(0x17E014B0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BC9D0D855676839E_OFFSET UNITYSDK_OFFSET(0x17E013E0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_BFF8518DE749AEA5_OFFSET UNITYSDK_OFFSET(0x17DF5C50)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_C2124EFBE92A3C6C_OFFSET UNITYSDK_OFFSET(0x17DE1470)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x17DF47F0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_CC572E192F69271C_OFFSET UNITYSDK_OFFSET(0x17DF94C0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_CCC36DE8E658C552_OFFSET UNITYSDK_OFFSET(0x17DF48D0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_CE939F9D16359382_OFFSET UNITYSDK_OFFSET(0x17DF7080)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_D875B2D7328A410C_OFFSET UNITYSDK_OFFSET(0x17DF7480)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_DBAFB3822F104C31_OFFSET UNITYSDK_OFFSET(0x17E00C80)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_DD678535C8FC1ACF_OFFSET UNITYSDK_OFFSET(0x17E00E50)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_F11417B82330160D_OFFSET UNITYSDK_OFFSET(0x17E03530)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_F54D66AB9B833697_OFFSET UNITYSDK_OFFSET(0x17DF5B00)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_FABB680FE5B8B187_OFFSET UNITYSDK_OFFSET(0x17DFADE0)
#define CLASS_1_1B20028AAAE94F57_METHOD_1_FD1665D7E99D4730_OFFSET UNITYSDK_OFFSET(0x17E01740)
#define CLASS_1_1B20028AAAE94F57_SET_ACTIONITEM_OFFSET UNITYSDK_OFFSET(0x17E03970)
#define CLASS_1_1B20028AAAE94F57_SET_FIELDLENGTH_OFFSET UNITYSDK_OFFSET(0x17E03A30)
#define CLASS_1_1B20028AAAE94F57_SET_FIELDWIDTH_OFFSET UNITYSDK_OFFSET(0x17E03A50)
#define CLASS_1_1B20028AAAE94F57_SET_GUEST_OFFSET UNITYSDK_OFFSET(0x17E039F0)
#define CLASS_1_1B20028AAAE94F57_SET_INSIMULATE_OFFSET UNITYSDK_OFFSET(0x17E03990)
#define CLASS_1_1B20028AAAE94F57_SET_INSTAT_OFFSET UNITYSDK_OFFSET(0x17E03870)
#define CLASS_1_1B20028AAAE94F57_SET_ISAIMODE_OFFSET UNITYSDK_OFFSET(0x17E039B0)
#define CLASS_1_1B20028AAAE94F57_SET_ISFRIEND_OFFSET UNITYSDK_OFFSET(0x17E038B0)
#define CLASS_1_1B20028AAAE94F57_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x17E03930)
#define CLASS_1_1B20028AAAE94F57_SET_PHASE_OFFSET UNITYSDK_OFFSET(0x17E03950)
#define CLASS_1_1B20028AAAE94F57_SET_ROUNDFIRSTTEAMA_OFFSET UNITYSDK_OFFSET(0x17E03910)
#define CLASS_1_1B20028AAAE94F57_SET_ROUNDTEAMA_OFFSET UNITYSDK_OFFSET(0x17E038F0)
#define CLASS_1_1B20028AAAE94F57_SET_SIMULATESCENE_OFFSET UNITYSDK_OFFSET(0x17E038D0)
#define CLASS_1_1B20028AAAE94F57_SET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x17E03890)
#define CLASS_1_1B20028AAAE94F57_SET_WINSCORE_OFFSET UNITYSDK_OFFSET(0x17E039D0)
#define CLASS_1_1B20028AAAE94F57__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF44E0)

inline static constexpr unsigned int Class_1_1B20028AAAE94F57_TypeDefinitionIndex = 38938;

class Class_1_1B20028AAAE94F57 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9671734BA1DFB3F8*>* Field_1_34; // 0x10
	::Class_2_78C8EAAA63C4635F* Field_1_29; // 0x18
	::Class_1_56E6900742B98CE8* _SimulateScene_k__BackingField; // 0x20
	::Class_1_FDC3CA37FB2E9E6E* Field_1_28; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::MarbleItemFeature>* Field_1_36; // 0x30
	::Class_1_BAF87BD2507AC54B* Field_1_8; // 0x38
	::Class_1_9671734BA1DFB3F8* _ActionItem_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::Class_1_EA5A5E4D07C4CF2B*>* Field_1_7; // 0x48
	::System::Random* Field_1_10; // 0x50
	::System::Collections::Generic::List_1<::Class_1_9236C508CFB77444*>* Field_1_13; // 0x58
	::System::Collections::Generic::List_1<::Class_1_D54F41AAAD02B794*>* Field_1_27; // 0x60
	::Class_1_9671734BA1DFB3F8* Field_1_26; // 0x68
	::Class_1_C9DFE5EE7107C629_9* Field_1_9; // 0x70
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_2*>* Field_1_6; // 0x78
	::Class_1_FD772F14877F45E5* Field_1_16; // 0x80
	::System::Collections::Generic::List_1<::Class_1_9671734BA1DFB3F8*>* Field_1_35; // 0x88
	::System::Collections::Generic::List_1<::Class_1_9671734BA1DFB3F8*>* Field_1_0; // 0x90
	::Class_0_16E4307DCC419505_222* _Guest_k__BackingField; // 0x98
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_38; // 0xA0
	::Class_1_FD772F14877F45E5* Field_1_15; // 0xA8
	::System::Collections::Generic::List_1<::Class_1_9236C508CFB77444*>* Field_1_14; // 0xB0
	::System::Single _FieldWidth_k__BackingField; // 0xB8
	::System::Single Field_1_31; // 0xBC
	::Enum_3_A35B38E5F9115A76_2 Field_1_37; // 0xC0
	::System::Single Field_1_3; // 0xC4
	::Enum_3_0A3761FE34514D6C_32 Field_1_30; // 0xC8
	::System::Single _FieldLength_k__BackingField; // 0xCC
	::System::UInt32 Field_1_5; // 0xD0
	::System::UInt32 _LevelId_k__BackingField; // 0xD4
	::System::Single Field_1_4; // 0xD8
	::System::UInt32 Field_1_17; // 0xDC
	::System::UInt32 _WinScore_k__BackingField; // 0xE0
	::Enum_3_63D176C405CC7947_1 _Phase_k__BackingField; // 0xE4
	::System::Boolean _InStat_k__BackingField; // 0xE8
	::System::Boolean Field_1_32; // 0xE9
	::System::Boolean _IsAIMode_k__BackingField; // 0xEA
	::System::Boolean _RoundTeamA_k__BackingField; // 0xEB
	::System::Boolean _IsFriend_k__BackingField; // 0xEC
	::System::Boolean _InSimulate_k__BackingField; // 0xED
	::System::Boolean _RoundFirstTeamA_k__BackingField; // 0xEE
	::System::Int32 _TickCount_k__BackingField; // 0xF0

	::System::Void _ctor(::Enum_3_A35B38E5F9115A76_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57__CTOR_OFFSET))(this, a1);
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

	::System::Void Method_1_062029FC4CB57960(::Enum_3_01618AD0437C8486_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_3))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_062029FC4CB57960_OFFSET))(this, a1);
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

	::System::Void Method_1_837B832C4CA7C908(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_837B832C4CA7C908_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBAFB3822F104C31(::Class_1_9DB6F6BB628BF86A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DB6F6BB628BF86A*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_DBAFB3822F104C31_OFFSET))(this, a1);
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

	::Il2CppArray<::Class_1_3AD2528CD53B1639_7*>* Method_1_64F3EFB759D98251()
	{
		return ((::Il2CppArray<::Class_1_3AD2528CD53B1639_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_64F3EFB759D98251_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_3AD2528CD53B1639_7*>* Method_1_277E0F0563252FD7()
	{
		return ((::Il2CppArray<::Class_1_3AD2528CD53B1639_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_277E0F0563252FD7_OFFSET))(this);
	}

	::System::Void Method_1_42BE988AF3EDEB3F_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_42BE988AF3EDEB3F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_036E673406CC4416(::Class_1_C4B679728AD83B32_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4B679728AD83B32_6*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_036E673406CC4416_OFFSET))(this, a1);
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

	::Enum_3_63D176C405CC7947_1 get_Phase()
	{
		return ((::Enum_3_63D176C405CC7947_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_PHASE_OFFSET))(this);
	}

	::System::Void set_Phase(::Enum_3_63D176C405CC7947_1 value)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63D176C405CC7947_1))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_PHASE_OFFSET))(this, value);
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

	::Class_0_16E4307DCC419505_222* get_Guest()
	{
		return ((::Class_0_16E4307DCC419505_222*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_GET_GUEST_OFFSET))(this);
	}

	::System::Void set_Guest(::Class_0_16E4307DCC419505_222* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_222*))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_SET_GUEST_OFFSET))(this, value);
	}

	::Enum_3_A35B38E5F9115A76_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B20028AAAE94F57_METHOD_1_A96DCA30C6927810_OFFSET))(this);
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

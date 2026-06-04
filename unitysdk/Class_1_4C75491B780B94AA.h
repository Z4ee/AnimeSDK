#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ChessBoardState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeGameMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1257637E4CB15DE5_11;
class Class_1_1257637E4CB15DE5_18;
class Class_1_1257637E4CB15DE5_19;
class Class_1_9931D0806556F3CF;
class Class_1_9ADD1D872350330F;
class Class_1_BCDD35C835BE896D;
class Class_1_D33B7D6901AE39E9;
class Class_2_4706D3AD6019CD01;
class Class_3_1A9D32B2B1D681B8;
class Class_3_83FD4418E6E9E045;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeGame; }
namespace RPG::Client { class MatchThreeGameProp; }
namespace RPG::Client::LittleGame { class MatchThreeTimelineBattleField; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }
namespace RPG::GameCore::Match3 { class BombCreateConfig; }
namespace RPG::GameCore::Match3 { class Match3BirdSkillConfig; }
namespace RPG::GameCore::Match3 { class PieceConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4C75491B780B94AA_GET_ISPVP1V1NETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x13B6EE00)
#define CLASS_1_4C75491B780B94AA_GET_ISPVPNETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x13B6EDE0)
#define CLASS_1_4C75491B780B94AA_GET_ISPVPROYALENETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x13B6EE20)
#define CLASS_1_4C75491B780B94AA_METHOD_1_012CEDC0727C8D27_OFFSET UNITYSDK_OFFSET(0x13B6EB80)
#define CLASS_1_4C75491B780B94AA_METHOD_1_0BDAEE707043B6C9_OFFSET UNITYSDK_OFFSET(0x13B69E70)
#define CLASS_1_4C75491B780B94AA_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x13B695E0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x13B6DD40)
#define CLASS_1_4C75491B780B94AA_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x13B6A6A0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13B6A0E0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x13B6C200)
#define CLASS_1_4C75491B780B94AA_METHOD_1_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0x13B6C7E0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x13B68A90)
#define CLASS_1_4C75491B780B94AA_METHOD_1_2340068C22DFE332_1_OFFSET UNITYSDK_OFFSET(0x13B69B70)
#define CLASS_1_4C75491B780B94AA_METHOD_1_2340068C22DFE332_2_OFFSET UNITYSDK_OFFSET(0x13B69CF0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x13B699F0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x13B68DF0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_305BA812E29C43AF_OFFSET UNITYSDK_OFFSET(0x13B68DA0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_344DB1721ADD2658_1_OFFSET UNITYSDK_OFFSET(0x13B6B380)
#define CLASS_1_4C75491B780B94AA_METHOD_1_344DB1721ADD2658_2_OFFSET UNITYSDK_OFFSET(0x13B6BB80)
#define CLASS_1_4C75491B780B94AA_METHOD_1_344DB1721ADD2658_OFFSET UNITYSDK_OFFSET(0x13B6A820)
#define CLASS_1_4C75491B780B94AA_METHOD_1_3C0149AD0F766343_OFFSET UNITYSDK_OFFSET(0x13B69980)
#define CLASS_1_4C75491B780B94AA_METHOD_1_40A10C74E0EFD4AD_OFFSET UNITYSDK_OFFSET(0x13B6A5B0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x13B6DA00)
#define CLASS_1_4C75491B780B94AA_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x13B6A760)
#define CLASS_1_4C75491B780B94AA_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x13B6C4D0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_78A816EDF045E4C8_OFFSET UNITYSDK_OFFSET(0x13B6B100)
#define CLASS_1_4C75491B780B94AA_METHOD_1_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x13B6DFB0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_7FBA19736CF767B2_OFFSET UNITYSDK_OFFSET(0x13B69910)
#define CLASS_1_4C75491B780B94AA_METHOD_1_80520F976E9CE8B4_OFFSET UNITYSDK_OFFSET(0x13B68C80)
#define CLASS_1_4C75491B780B94AA_METHOD_1_8BB948EFB8DB02D1_OFFSET UNITYSDK_OFFSET(0x13B69F30)
#define CLASS_1_4C75491B780B94AA_METHOD_1_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x13B6DE60)
#define CLASS_1_4C75491B780B94AA_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x13B691C0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_8CBF5028E5DA8254_1_OFFSET UNITYSDK_OFFSET(0x13B6E3F0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_8CBF5028E5DA8254_OFFSET UNITYSDK_OFFSET(0x13B6E110)
#define CLASS_1_4C75491B780B94AA_METHOD_1_915FBC3734874058_OFFSET UNITYSDK_OFFSET(0x13B6AEA0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x13B6CC30)
#define CLASS_1_4C75491B780B94AA_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x13B6DC90)
#define CLASS_1_4C75491B780B94AA_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13B68E70)
#define CLASS_1_4C75491B780B94AA_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13B6DBB0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_A51891BFB0ABDB68_OFFSET UNITYSDK_OFFSET(0x13B6E6D0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_BDE3028FCE2D9EC3_OFFSET UNITYSDK_OFFSET(0x13B6A310)
#define CLASS_1_4C75491B780B94AA_METHOD_1_C07F2657F47AFF02_OFFSET UNITYSDK_OFFSET(0x13B6A710)
#define CLASS_1_4C75491B780B94AA_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x13B69790)
#define CLASS_1_4C75491B780B94AA_METHOD_1_CB145AC06225B366_OFFSET UNITYSDK_OFFSET(0x13B6E050)
#define CLASS_1_4C75491B780B94AA_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x13B68710)
#define CLASS_1_4C75491B780B94AA_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x13B689A0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x13B6AEB0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_D588C897704F5375_OFFSET UNITYSDK_OFFSET(0x13B6E970)
#define CLASS_1_4C75491B780B94AA_METHOD_1_DE1C1F4DF5D06882_1_OFFSET UNITYSDK_OFFSET(0x13B6BA00)
#define CLASS_1_4C75491B780B94AA_METHOD_1_DE1C1F4DF5D06882_2_OFFSET UNITYSDK_OFFSET(0x13B6C000)
#define CLASS_1_4C75491B780B94AA_METHOD_1_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x13B6B200)
#define CLASS_1_4C75491B780B94AA_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x13B69FF0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_E11A60CCAF1D8111_1_OFFSET UNITYSDK_OFFSET(0x13B6A230)
#define CLASS_1_4C75491B780B94AA_METHOD_1_E11A60CCAF1D8111_2_OFFSET UNITYSDK_OFFSET(0x13B6A3F0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_E11A60CCAF1D8111_3_OFFSET UNITYSDK_OFFSET(0x13B6A4D0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_E11A60CCAF1D8111_OFFSET UNITYSDK_OFFSET(0x13B6A150)
#define CLASS_1_4C75491B780B94AA_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x13B6C270)
#define CLASS_1_4C75491B780B94AA_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x13B6CCE0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x13B6CBA0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_EC5C1AC08DA276C7_OFFSET UNITYSDK_OFFSET(0x13B6D7A0)
#define CLASS_1_4C75491B780B94AA_METHOD_1_EC83FF7769033850_OFFSET UNITYSDK_OFFSET(0x13B6C180)
#define CLASS_1_4C75491B780B94AA_METHOD_1_FE09F91DC8303B4D_OFFSET UNITYSDK_OFFSET(0x13B698A0)
#define CLASS_1_4C75491B780B94AA_SET_ISPVP1V1NETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x13B6EE10)
#define CLASS_1_4C75491B780B94AA_SET_ISPVPNETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x13B6EDF0)
#define CLASS_1_4C75491B780B94AA_SET_ISPVPROYALENETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x13B6EE30)
#define CLASS_1_4C75491B780B94AA__CTOR_OFFSET UNITYSDK_OFFSET(0x13B6EE40)

inline static constexpr unsigned int Class_1_4C75491B780B94AA_TypeDefinitionIndex = 71131;

class Class_1_4C75491B780B94AA : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x7; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x7; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::Match3::PieceConfig*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::Match3::PieceConfig*>* Field_1_3; // 0x18
	::Class_3_1A9D32B2B1D681B8* Field_1_4; // 0x20
	::RPG::Client::MatchThreeBoard* Field_1_5; // 0x28
	::System::Action* Field_1_6; // 0x30
	::RPG::GameCore::GameEntity* Field_1_7; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* Field_1_8; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::Match3::PieceConfig*>* Field_1_9; // 0x48
	::RPG::Client::LittleGame::MatchThreeTimelineBattleField* Field_1_10; // 0x50
	::System::Action_1<::RPG::Client::LittleGame::Match3::Match3GameState>* Field_1_11; // 0x58
	::Class_3_83FD4418E6E9E045* Field_1_12; // 0x60
	::System::String* Field_1_13; // 0x68
	::RPG::GameCore::Match3::Match3BirdSkillConfig* Field_1_14; // 0x70
	::RPG::GameCore::Match3::Match3BirdSkillConfig* Field_1_15; // 0x78
	::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* Field_1_16; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BombCreateConfig*>* Field_1_17; // 0x88
	::System::Action* Field_1_18; // 0x90
	::Class_1_D33B7D6901AE39E9* Field_1_19; // 0x98
	::System::Boolean _IsPvpRoyaleNetworkDataReady_k__BackingField; // 0xA0
	::System::Boolean Field_1_21; // 0xA1
	::System::Boolean _IsPvpNetworkDataReady_k__BackingField; // 0xA2
	::System::Boolean _IsPvp1v1NetworkDataReady_k__BackingField; // 0xA3
	::System::UInt32 Field_1_24; // 0xA4
	::System::UInt32 Field_1_25; // 0xA8
	::System::UInt32 Field_1_26; // 0xAC
	::RPG::Client::LittleGame::Match3::MatchThreeGameMode Field_1_27; // 0xB0
	::System::UInt32 Field_1_28; // 0xB4
	::System::UInt32 Field_1_29; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_1_80520F976E9CE8B4(::RPG::Client::MatchThreeBoard* a1, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_80520F976E9CE8B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_305BA812E29C43AF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_305BA812E29C43AF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_1_FE09F91DC8303B4D(::Class_2_4706D3AD6019CD01* a1, ::RPG::Client::LittleGame::Match3::Match3GameState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_FE09F91DC8303B4D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7FBA19736CF767B2(::Class_2_4706D3AD6019CD01* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_7FBA19736CF767B2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3C0149AD0F766343(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_3C0149AD0F766343_OFFSET))(this, a1);
	}

	::System::Void Method_1_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_2340068C22DFE332_OFFSET))(this);
	}

	::System::Void Method_1_2340068C22DFE332_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_2340068C22DFE332_1_OFFSET))(this);
	}

	::System::Void Method_1_2340068C22DFE332_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_2340068C22DFE332_2_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Match3::Match3GameState Method_1_0BDAEE707043B6C9()
	{
		return ((::RPG::Client::LittleGame::Match3::Match3GameState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_0BDAEE707043B6C9_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Match3::ChessBoardState Method_1_8BB948EFB8DB02D1()
	{
		return ((::RPG::Client::LittleGame::Match3::ChessBoardState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_8BB948EFB8DB02D1_OFFSET))(this);
	}

	::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::Class_1_BCDD35C835BE896D* Method_1_E11A60CCAF1D8111()
	{
		return ((::Class_1_BCDD35C835BE896D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_E11A60CCAF1D8111_OFFSET))(this);
	}

	::Class_1_9931D0806556F3CF* Method_1_E11A60CCAF1D8111_1()
	{
		return ((::Class_1_9931D0806556F3CF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_E11A60CCAF1D8111_1_OFFSET))(this);
	}

	::Class_1_1257637E4CB15DE5_11* Method_1_BDE3028FCE2D9EC3()
	{
		return ((::Class_1_1257637E4CB15DE5_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_BDE3028FCE2D9EC3_OFFSET))(this);
	}

	::Class_1_1257637E4CB15DE5_18* Method_1_E11A60CCAF1D8111_2()
	{
		return ((::Class_1_1257637E4CB15DE5_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_E11A60CCAF1D8111_2_OFFSET))(this);
	}

	::Class_1_1257637E4CB15DE5_19* Method_1_E11A60CCAF1D8111_3()
	{
		return ((::Class_1_1257637E4CB15DE5_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_E11A60CCAF1D8111_3_OFFSET))(this);
	}

	::System::UInt64 Method_1_40A10C74E0EFD4AD()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_40A10C74E0EFD4AD_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Method_1_C07F2657F47AFF02()
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_C07F2657F47AFF02_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_344DB1721ADD2658(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_344DB1721ADD2658_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_344DB1721ADD2658_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_344DB1721ADD2658_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE1C1F4DF5D06882_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_DE1C1F4DF5D06882_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_344DB1721ADD2658_2(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_344DB1721ADD2658_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE1C1F4DF5D06882_2(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_DE1C1F4DF5D06882_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EC83FF7769033850(::RPG::Client::LittleGame::Match3::ChessBoardState a1, ::RPG::Client::LittleGame::Match3::ChessBoardState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::ChessBoardState, ::RPG::Client::LittleGame::Match3::ChessBoardState))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_EC83FF7769033850_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_1CDA0051FD244886()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_1CDA0051FD244886_OFFSET))(this);
	}

	::Class_2_4706D3AD6019CD01* Method_1_CB145AC06225B366(::System::String* a1)
	{
		return ((::Class_2_4706D3AD6019CD01*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_CB145AC06225B366_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_1_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_1_EC5C1AC08DA276C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_EC5C1AC08DA276C7_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_1_78A816EDF045E4C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_78A816EDF045E4C8_OFFSET))(this);
	}

	::System::Void Method_1_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_9ADD1D872350330F*>* Method_1_D588C897704F5375(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* a1)
	{
		return ((::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_9ADD1D872350330F*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_D588C897704F5375_OFFSET))(this, a1);
	}

	::RPG::PoolList_1<::System::UInt32>* Method_1_012CEDC0727C8D27(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>* a1)
	{
		return ((::RPG::PoolList_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameProp*>*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_012CEDC0727C8D27_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_8CBF5028E5DA8254(::RPG::GameCore::Match3::Match3BirdSkillConfig* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::RPG::GameCore::Match3::Match3BirdSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_8CBF5028E5DA8254_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_8CBF5028E5DA8254_1(::RPG::GameCore::Match3::Match3BirdSkillConfig* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::RPG::GameCore::Match3::Match3BirdSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_8CBF5028E5DA8254_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>* Method_1_A51891BFB0ABDB68(::RPG::GameCore::Match3::Match3BirdSkillConfig* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>*(*)(::RPG::GameCore::Match3::Match3BirdSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_A51891BFB0ABDB68_OFFSET))(a1);
	}

	::System::Void Method_1_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Boolean get_IsPvpNetworkDataReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_GET_ISPVPNETWORKDATAREADY_OFFSET))(this);
	}

	::System::Void set_IsPvpNetworkDataReady(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_SET_ISPVPNETWORKDATAREADY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPvp1v1NetworkDataReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_GET_ISPVP1V1NETWORKDATAREADY_OFFSET))(this);
	}

	::System::Void set_IsPvp1v1NetworkDataReady(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_SET_ISPVP1V1NETWORKDATAREADY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPvpRoyaleNetworkDataReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_GET_ISPVPROYALENETWORKDATAREADY_OFFSET))(this);
	}

	::System::Void set_IsPvpRoyaleNetworkDataReady(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_SET_ISPVPROYALENETWORKDATAREADY_OFFSET))(this, a1);
	}

	::RPG::Client::MatchThreeGame* Method_1_915FBC3734874058()
	{
		return ((::RPG::Client::MatchThreeGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA_METHOD_1_915FBC3734874058_OFFSET))(this);
	}
};

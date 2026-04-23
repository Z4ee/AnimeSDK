#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/GridLocalPoint.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/MatchThree1v1AIScoreApsect.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/Struct_2_5C4F194DEECB2289.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_066AB55B5826B0C9;
class Class_1_3D8DD98F0436E6C5;
class Class_1_4D4B66C45A742EF1;
class Class_1_7C297F0B808B5FA9;
class Class_1_9ADD1D872350330F;
class Class_3_1A9D32B2B1D681B8;
namespace RPG::GameCore::Match3 { class MatchThree1v1AILevelConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIScoreAspectConfig; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_F4FDF85E8BF452D8_GET_FINALCHOICE_OFFSET UNITYSDK_OFFSET(0x17FB1500)
#define CLASS_1_F4FDF85E8BF452D8_GET_ISSIMULATINGPROP_OFFSET UNITYSDK_OFFSET(0x17FB14E0)
#define CLASS_1_F4FDF85E8BF452D8_GET_ISSIMULATING_OFFSET UNITYSDK_OFFSET(0x17FB14C0)
#define CLASS_1_F4FDF85E8BF452D8_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17FB1520)
#define CLASS_1_F4FDF85E8BF452D8_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x17FB1530)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x17FA8A40)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0x17FA89F0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_18B8B3C7AE5E95BB_OFFSET UNITYSDK_OFFSET(0x17FAC740)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x17FB0D40)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_202C2F686E05AF1F_OFFSET UNITYSDK_OFFSET(0x17FAAA00)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x17FB02E0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_2A38E69140BEF946_OFFSET UNITYSDK_OFFSET(0x17FAE6D0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_3456633D994FB6C5_OFFSET UNITYSDK_OFFSET(0x17FAB0E0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_34566E7905D6C48F_OFFSET UNITYSDK_OFFSET(0x17FAFC60)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_36D02C0042F866F0_OFFSET UNITYSDK_OFFSET(0x17FA9340)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_3CC1D4D5F564C44D_OFFSET UNITYSDK_OFFSET(0x17FB1200)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_3FCD188BB5C8C9E0_OFFSET UNITYSDK_OFFSET(0x17FA95E0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_452901BBF04107A2_OFFSET UNITYSDK_OFFSET(0x17FB0580)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x17FAEA80)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_4A4FE5BCDDE24251_OFFSET UNITYSDK_OFFSET(0x17FA9B50)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_4E12D01AA18E29FB_OFFSET UNITYSDK_OFFSET(0x17FAE920)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_4E29FB351A30C718_OFFSET UNITYSDK_OFFSET(0x17FAE0F0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_5208093742A11AD0_OFFSET UNITYSDK_OFFSET(0x17FB0380)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x17FA8BD0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_63882E0318B95793_OFFSET UNITYSDK_OFFSET(0x17FABA20)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_7AB2A7695E303980_OFFSET UNITYSDK_OFFSET(0x17FABEC0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_7E9C4D81D04C3024_OFFSET UNITYSDK_OFFSET(0x17FA8330)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0x17FAF450)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_82FD052AFAFDD86B_OFFSET UNITYSDK_OFFSET(0x17FA9100)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_8C55DFEF9A1086BC_OFFSET UNITYSDK_OFFSET(0x17FB04F0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0x17FAEF70)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x17FA9DC0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_A74F1CF3E25BC135_OFFSET UNITYSDK_OFFSET(0x17FAF990)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_A7FEECC7B695ACA8_OFFSET UNITYSDK_OFFSET(0x17FA9930)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_A8458C1526636349_1_OFFSET UNITYSDK_OFFSET(0x17FAB190)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0x17FACD90)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_B55641883AB9202F_OFFSET UNITYSDK_OFFSET(0x17FB0B30)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_B5E63D8490540221_OFFSET UNITYSDK_OFFSET(0x17FB0260)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x17FAA330)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17FA82D0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_D263FCED0246111F_OFFSET UNITYSDK_OFFSET(0x17FAD610)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x17FAA920)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_E3149BDA9ADFD7FD_OFFSET UNITYSDK_OFFSET(0x17FA8D50)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_EA355574F514C741_OFFSET UNITYSDK_OFFSET(0x17FA8B80)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x17FA8570)
#define CLASS_1_F4FDF85E8BF452D8_SET_FINALCHOICE_OFFSET UNITYSDK_OFFSET(0x17FB1510)
#define CLASS_1_F4FDF85E8BF452D8_SET_ISSIMULATINGPROP_OFFSET UNITYSDK_OFFSET(0x17FB14F0)
#define CLASS_1_F4FDF85E8BF452D8_SET_ISSIMULATING_OFFSET UNITYSDK_OFFSET(0x17FB14D0)
#define CLASS_1_F4FDF85E8BF452D8__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA7C50)
#define CLASS_1_F4FDF85E8BF452D8___GENPROPSIMULATEINFO_BREAKPIECE_B__29_0_OFFSET UNITYSDK_OFFSET(0x17FB1540)

inline static constexpr unsigned int Class_1_F4FDF85E8BF452D8_TypeDefinitionIndex = 38904;

class Class_1_F4FDF85E8BF452D8 : public ::System::Object
{
public:
	::Class_1_4D4B66C45A742EF1* Field_1_9; // 0x10
	::Class_3_1A9D32B2B1D681B8* Field_1_12; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::Class_1_3D8DD98F0436E6C5*>* Field_1_8; // 0x30
	::Class_1_4D4B66C45A742EF1* _FinalChoice_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_4D4B66C45A742EF1*>* Field_1_10; // 0x40
	::System::Collections::Generic::List_1<::Class_1_4D4B66C45A742EF1*>* Field_1_3; // 0x48
	::System::Collections::Generic::Queue_1<::Class_1_4D4B66C45A742EF1*>* Field_1_11; // 0x50
	::System::Random* Field_1_17; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MatchThreePropType, ::System::UInt32>* Field_1_15; // 0x60
	::RPG::GameCore::Match3::MatchThree1v1AILevelConfig* Field_1_13; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::Match3::MatchThree1v1AIScoreApsect, ::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*>* Field_1_14; // 0x70
	::System::Int32 Field_1_16; // 0x78
	::RPG::Client::LittleGame::Match3::OpponentRole _Role_k__BackingField; // 0x7C
	::System::UInt32 _Level_k__BackingField; // 0x80
	::System::Boolean _IsSimulating_k__BackingField; // 0x84
	::System::Boolean _IsSimulatingProp_k__BackingField; // 0x85

	::System::Void _ctor(::Class_3_1A9D32B2B1D681B8* a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A9D32B2B1D681B8*, ::RPG::Client::LittleGame::Match3::OpponentRole, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Void Method_1_EA355574F514C741()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_EA355574F514C741_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_E3149BDA9ADFD7FD(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::LittleGame::Match3::ViewMomentType a4, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a5, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> a6, ::System::UInt32 a7, ::RPG::GameCore::Match3::BombType a8, ::RPG::GameCore::Match3::PieceTag a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::Match3::ViewMomentType, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_E3149BDA9ADFD7FD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::UInt32 Method_1_82FD052AFAFDD86B(::Struct_2_5C4F194DEECB2289 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Struct_2_5C4F194DEECB2289, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_82FD052AFAFDD86B_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_36D02C0042F866F0(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::UInt32 a3, ::RPG::GameCore::Match3::BombType a4, ::RPG::GameCore::Match3::PieceTag a5, ::System::Single a6)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_36D02C0042F866F0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::UInt32 Method_1_3FCD188BB5C8C9E0(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::UInt32 a3, ::RPG::GameCore::Match3::BombType a4, ::System::UInt32 a5, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> a6, ::System::Boolean a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_3FCD188BB5C8C9E0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 Method_1_A7FEECC7B695ACA8(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::RPG::GameCore::Match3::BombType a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_A7FEECC7B695ACA8_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_4A4FE5BCDDE24251(::System::UInt32 a1, ::System::UInt32 a2, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a3, ::RPG::Client::LittleGame::Match3::GridLocalPoint a4, ::System::UInt32 a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::LittleGame::Match3::GridLocalPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_4A4FE5BCDDE24251_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Int32 Method_1_4E29FB351A30C718(::Class_1_9ADD1D872350330F* a1, ::Class_1_9ADD1D872350330F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_9ADD1D872350330F*, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_4E29FB351A30C718_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Boolean Method_1_202C2F686E05AF1F(::RPG::GameCore::MatchThreePropType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_202C2F686E05AF1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A38E69140BEF946(::Class_1_4D4B66C45A742EF1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D4B66C45A742EF1*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_2A38E69140BEF946_OFFSET))(this, a1);
	}

	::System::Void Method_1_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Void Method_1_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Int32 Method_1_452901BBF04107A2(::Class_1_4D4B66C45A742EF1* a1, ::Class_1_4D4B66C45A742EF1* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_4D4B66C45A742EF1*, ::Class_1_4D4B66C45A742EF1*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_452901BBF04107A2_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_B5E63D8490540221()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_B5E63D8490540221_OFFSET))(this);
	}

	::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig* Method_1_5208093742A11AD0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_5208093742A11AD0_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_8C55DFEF9A1086BC(::Class_1_4D4B66C45A742EF1* a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_4D4B66C45A742EF1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_8C55DFEF9A1086BC_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Void Method_1_7E9C4D81D04C3024()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_7E9C4D81D04C3024_OFFSET))(this);
	}

	::System::Void Method_1_3456633D994FB6C5(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_3456633D994FB6C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AB2A7695E303980(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_7AB2A7695E303980_OFFSET))(this, a1);
	}

	::System::Void Method_1_A8458C1526636349(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_A8458C1526636349_OFFSET))(this, a1);
	}

	::System::Void Method_1_D263FCED0246111F(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_D263FCED0246111F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A8458C1526636349_1(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_A8458C1526636349_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_B55641883AB9202F(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_B55641883AB9202F_OFFSET))(this, a1);
	}

	::System::Void Method_1_18B8B3C7AE5E95BB(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_18B8B3C7AE5E95BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_63882E0318B95793(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_63882E0318B95793_OFFSET))(this, a1);
	}

	::System::Void Method_1_34566E7905D6C48F(::Class_1_4D4B66C45A742EF1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D4B66C45A742EF1*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_34566E7905D6C48F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E12D01AA18E29FB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_4E12D01AA18E29FB_OFFSET))(this);
	}

	::System::Boolean Method_1_3CC1D4D5F564C44D(::Class_1_7C297F0B808B5FA9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7C297F0B808B5FA9*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_3CC1D4D5F564C44D_OFFSET))(this, a1);
	}

	::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_1_93E6B8A6D29521ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_93E6B8A6D29521ED_OFFSET))(this);
	}

	::System::Void Method_1_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Void Method_1_A74F1CF3E25BC135()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_A74F1CF3E25BC135_OFFSET))(this);
	}

	::System::Boolean get_IsSimulating()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_GET_ISSIMULATING_OFFSET))(this);
	}

	::System::Void set_IsSimulating(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_SET_ISSIMULATING_OFFSET))(this, value);
	}

	::System::Boolean get_IsSimulatingProp()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_GET_ISSIMULATINGPROP_OFFSET))(this);
	}

	::System::Void set_IsSimulatingProp(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_SET_ISSIMULATINGPROP_OFFSET))(this, value);
	}

	::Class_1_4D4B66C45A742EF1* get_FinalChoice()
	{
		return ((::Class_1_4D4B66C45A742EF1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_GET_FINALCHOICE_OFFSET))(this);
	}

	::System::Void set_FinalChoice(::Class_1_4D4B66C45A742EF1* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D4B66C45A742EF1*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_SET_FINALCHOICE_OFFSET))(this, value);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_GET_LEVEL_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Match3::OpponentRole get_Role()
	{
		return ((::RPG::Client::LittleGame::Match3::OpponentRole(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_GET_ROLE_OFFSET))(this);
	}

	::System::Int32 __GenPropSimulateInfo_BreakPiece_b__29_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> lhs, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8___GENPROPSIMULATEINFO_BREAKPIECE_B__29_0_OFFSET))(this, lhs, rhs);
	}
};

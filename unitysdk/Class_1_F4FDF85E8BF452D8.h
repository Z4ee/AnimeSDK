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
class Class_1_7C297F0B808B5FA9;
class Class_1_9ADD1D872350330F;
class Class_1_A46ED100713943F0;
class Class_1_B822DA0F8FF82394;
class Class_3_1A9D32B2B1D681B8;
namespace RPG::GameCore::Match3 { class MatchThree1v1AILevelConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIScoreAspectConfig; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_F4FDF85E8BF452D8_GET_FINALCHOICE_OFFSET UNITYSDK_OFFSET(0x1C5539A0)
#define CLASS_1_F4FDF85E8BF452D8_GET_ISSIMULATINGPROP_OFFSET UNITYSDK_OFFSET(0x1C553980)
#define CLASS_1_F4FDF85E8BF452D8_GET_ISSIMULATING_OFFSET UNITYSDK_OFFSET(0x1C553960)
#define CLASS_1_F4FDF85E8BF452D8_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C5539C0)
#define CLASS_1_F4FDF85E8BF452D8_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1C5539D0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_001BFF3F876AA554_OFFSET UNITYSDK_OFFSET(0x1C553260)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x1C54C600)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0x1C54C5B0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_123B9BEBCFBEA5D0_OFFSET UNITYSDK_OFFSET(0x1C552770)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_202C2F686E05AF1F_OFFSET UNITYSDK_OFFSET(0x1C54D770)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x1C552DF0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_36D02C0042F866F0_OFFSET UNITYSDK_OFFSET(0x1C54C910)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_3CC1D4D5F564C44D_OFFSET UNITYSDK_OFFSET(0x1C5537A0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_3FCD188BB5C8C9E0_OFFSET UNITYSDK_OFFSET(0x1C54C990)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_452901BBF04107A2_OFFSET UNITYSDK_OFFSET(0x1C5530A0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_4662179DB83234B6_OFFSET UNITYSDK_OFFSET(0x1C5524F0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x1C553350)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_4A4FE5BCDDE24251_OFFSET UNITYSDK_OFFSET(0x1C54CAA0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_4D395DE7080248C4_OFFSET UNITYSDK_OFFSET(0x1C54FF30)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_4E12D01AA18E29FB_OFFSET UNITYSDK_OFFSET(0x1C551580)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_5068169BCD61AACC_OFFSET UNITYSDK_OFFSET(0x1C5510D0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_5208093742A11AD0_OFFSET UNITYSDK_OFFSET(0x1C552E90)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_56B82D18EF3F1BEA_OFFSET UNITYSDK_OFFSET(0x1C553000)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x1C54C790)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_649C3F0ABF636A99_OFFSET UNITYSDK_OFFSET(0x1C551C00)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_703299C3DD1F5B47_OFFSET UNITYSDK_OFFSET(0x1C54F000)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_77B511CD022CA036_OFFSET UNITYSDK_OFFSET(0x1C550740)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_82FD052AFAFDD86B_OFFSET UNITYSDK_OFFSET(0x1C54C8A0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_8D0A2531C88B32B1_OFFSET UNITYSDK_OFFSET(0x1C54DE50)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_9036CFAD14566A8D_OFFSET UNITYSDK_OFFSET(0x1C551290)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_99462BC90C62BA8E_OFFSET UNITYSDK_OFFSET(0x1C54C740)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x1C54CF90)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_A7FEECC7B695ACA8_OFFSET UNITYSDK_OFFSET(0x1C54CA40)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x1C552020)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_B5E63D8490540221_OFFSET UNITYSDK_OFFSET(0x1C552D70)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0x1C54BE50)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C54BBF0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x1C5516E0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_D263FCED0246111F_OFFSET UNITYSDK_OFFSET(0x1C54E880)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x1C54D690)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_E3149BDA9ADFD7FD_OFFSET UNITYSDK_OFFSET(0x1C54C7D0)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_E59B0636DF9608FF_OFFSET UNITYSDK_OFFSET(0x1C54F910)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x1C54CB10)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_F6E5115FB17B3B4D_OFFSET UNITYSDK_OFFSET(0x1C54DF00)
#define CLASS_1_F4FDF85E8BF452D8_METHOD_1_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x1C54BC50)
#define CLASS_1_F4FDF85E8BF452D8_SET_FINALCHOICE_OFFSET UNITYSDK_OFFSET(0x1C5539B0)
#define CLASS_1_F4FDF85E8BF452D8_SET_ISSIMULATINGPROP_OFFSET UNITYSDK_OFFSET(0x1C553990)
#define CLASS_1_F4FDF85E8BF452D8_SET_ISSIMULATING_OFFSET UNITYSDK_OFFSET(0x1C553970)
#define CLASS_1_F4FDF85E8BF452D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54B510)
#define CLASS_1_F4FDF85E8BF452D8___GENPROPSIMULATEINFO_BREAKPIECE_B__29_0_OFFSET UNITYSDK_OFFSET(0x1C5539E0)

inline static constexpr unsigned int Class_1_F4FDF85E8BF452D8_TypeDefinitionIndex = 41419;

class Class_1_F4FDF85E8BF452D8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* HIJPJBGAADF; // 0x10
	::System::Collections::Generic::List_1<::Class_1_A46ED100713943F0*>* LLCGBAOAMDN; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B822DA0F8FF82394*>* MENOBJEFELB; // 0x20
	::Class_1_A46ED100713943F0* _FinalChoice_k__BackingField; // 0x28
	::Class_3_1A9D32B2B1D681B8* PDENFEFCAGN; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_A46ED100713943F0*>* GBFAAIIECMB; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MatchThreePropType, ::System::UInt32>* KJPHEOOLPDN; // 0x40
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* KLEIMNLINEE; // 0x48
	::System::Random* OLEEIPHBJKB; // 0x50
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::Match3::MatchThree1v1AIScoreApsect, ::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*>* HCDKPJGAHNK; // 0x58
	::Class_1_A46ED100713943F0* ECDMJAJFDNG; // 0x60
	::RPG::GameCore::Match3::MatchThree1v1AILevelConfig* BJAHOPDNDHA; // 0x68
	::System::Collections::Generic::Queue_1<::Class_1_A46ED100713943F0*>* ECHMPHPGBMI; // 0x70
	::RPG::Client::LittleGame::Match3::OpponentRole _Role_k__BackingField; // 0x78
	::System::Int32 IAJDCMPBPGP; // 0x7C
	::System::Boolean _IsSimulatingProp_k__BackingField; // 0x80
	::System::Boolean _IsSimulating_k__BackingField; // 0x81
	::System::UInt32 _Level_k__BackingField; // 0x84

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

	::System::Void Method_1_99462BC90C62BA8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_99462BC90C62BA8E_OFFSET))(this);
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

	::System::Void Method_1_C4EFD31239F98A71()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_C4EFD31239F98A71_OFFSET))(this);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Int32 Method_1_5068169BCD61AACC(::Class_1_9ADD1D872350330F* a1, ::Class_1_9ADD1D872350330F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_9ADD1D872350330F*, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_5068169BCD61AACC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Boolean Method_1_202C2F686E05AF1F(::RPG::GameCore::MatchThreePropType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_202C2F686E05AF1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_9036CFAD14566A8D(::Class_1_A46ED100713943F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A46ED100713943F0*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_9036CFAD14566A8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Void Method_1_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_A56385E6706FA723_OFFSET))(this);
	}

	::System::Int32 Method_1_452901BBF04107A2(::Class_1_A46ED100713943F0* a1, ::Class_1_A46ED100713943F0* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A46ED100713943F0*, ::Class_1_A46ED100713943F0*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_452901BBF04107A2_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_B5E63D8490540221()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_B5E63D8490540221_OFFSET))(this);
	}

	::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig* Method_1_5208093742A11AD0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_5208093742A11AD0_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_56B82D18EF3F1BEA(::Class_1_A46ED100713943F0* a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_A46ED100713943F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_56B82D18EF3F1BEA_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Void Method_1_F74441856239DF08()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_F74441856239DF08_OFFSET))(this);
	}

	::System::Void Method_1_8D0A2531C88B32B1(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_8D0A2531C88B32B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_703299C3DD1F5B47(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_703299C3DD1F5B47_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D395DE7080248C4(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_4D395DE7080248C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_77B511CD022CA036(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_77B511CD022CA036_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6E5115FB17B3B4D(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_F6E5115FB17B3B4D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_001BFF3F876AA554(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_001BFF3F876AA554_OFFSET))(this, a1);
	}

	::System::Void Method_1_E59B0636DF9608FF(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_E59B0636DF9608FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D263FCED0246111F(::Class_1_9ADD1D872350330F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9ADD1D872350330F*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_D263FCED0246111F_OFFSET))(this, a1);
	}

	::System::Void Method_1_123B9BEBCFBEA5D0(::Class_1_A46ED100713943F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A46ED100713943F0*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_123B9BEBCFBEA5D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E12D01AA18E29FB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_4E12D01AA18E29FB_OFFSET))(this);
	}

	::System::Boolean Method_1_3CC1D4D5F564C44D(::Class_1_7C297F0B808B5FA9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7C297F0B808B5FA9*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_3CC1D4D5F564C44D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_4679E7840A7526E1_OFFSET))(this);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_1_649C3F0ABF636A99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_649C3F0ABF636A99_OFFSET))(this);
	}

	::System::Void Method_1_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_1_4662179DB83234B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_METHOD_1_4662179DB83234B6_OFFSET))(this);
	}

	::System::Boolean get_IsSimulating()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_GET_ISSIMULATING_OFFSET))(this);
	}

	::System::Void set_IsSimulating(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_SET_ISSIMULATING_OFFSET))(this, a1);
	}

	::System::Boolean get_IsSimulatingProp()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_GET_ISSIMULATINGPROP_OFFSET))(this);
	}

	::System::Void set_IsSimulatingProp(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_SET_ISSIMULATINGPROP_OFFSET))(this, a1);
	}

	::Class_1_A46ED100713943F0* get_FinalChoice()
	{
		return ((::Class_1_A46ED100713943F0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_GET_FINALCHOICE_OFFSET))(this);
	}

	::System::Void set_FinalChoice(::Class_1_A46ED100713943F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A46ED100713943F0*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_SET_FINALCHOICE_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_GET_LEVEL_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Match3::OpponentRole get_Role()
	{
		return ((::RPG::Client::LittleGame::Match3::OpponentRole(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8_GET_ROLE_OFFSET))(this);
	}

	::System::Int32 __GenPropSimulateInfo_BreakPiece_b__29_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8___GENPROPSIMULATEINFO_BREAKPIECE_B__29_0_OFFSET))(this, a1, a2);
	}
};

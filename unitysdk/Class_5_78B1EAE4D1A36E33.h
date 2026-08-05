#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/Config/ChessboardChangeGridType.h"
#include "unitysdk/MoleMole/Config/SinkAllThenRiseAllPhaseType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_8658838487EB8905.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"

class Class_1_B71CA39446BBFDC7;
class Class_1_D3581D8A71834B25;
class Class_1_ED492469204624B4;
class Class_1_F5B35B1B6669CF16;
class Class_2_915BDDE5CA09F2B7;
class Class_2_9DCE2FC33F67E8A2;
class Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D;
class Class_5_78B1EAE4D1A36E33_Class_1_4CED3B633CACA2CF;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole::Config { class ConfigChangeGridNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_0093A664471C0648_OFFSET UNITYSDK_OFFSET(0x17F4EAE0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_08A14F75C7774341_OFFSET UNITYSDK_OFFSET(0x17F496B0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_110DF04B410B6021_OFFSET UNITYSDK_OFFSET(0x17F4ED60)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_18CEC7398AB32810_OFFSET UNITYSDK_OFFSET(0x17F4C820)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_1AAAE29F4DB571CA_OFFSET UNITYSDK_OFFSET(0x17F49750)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_1C82B0464A6F73F2_OFFSET UNITYSDK_OFFSET(0x17F4D430)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_239FBDAC9C643551_OFFSET UNITYSDK_OFFSET(0x17F4DEF0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17F4FC70)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_307636E9FCE0FC9C_OFFSET UNITYSDK_OFFSET(0x17F4E150)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x17F4FBE0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17F49900)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_39F205AA37AD3A8D_OFFSET UNITYSDK_OFFSET(0x17F4E220)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_3F8DC0E62FBF27F8_OFFSET UNITYSDK_OFFSET(0x17F4DCF0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_482C449BC0BF8068_OFFSET UNITYSDK_OFFSET(0x17F50210)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x17F49AB0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_56EC62D3F45D683D_OFFSET UNITYSDK_OFFSET(0x17F4CE90)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_5E50EF2EA6B6DF03_OFFSET UNITYSDK_OFFSET(0x17F49620)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_65981C68BAA8D2CB_OFFSET UNITYSDK_OFFSET(0x17F4BFE0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0x17F4B520)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_7186E78353AA8337_OFFSET UNITYSDK_OFFSET(0x17F4F190)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x17F4A5D0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x17F4A950)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x17F4E820)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x17F49940)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_A3B7C4EB36650E1D_OFFSET UNITYSDK_OFFSET(0x17F4D5E0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_A3D8B5132E653D82_OFFSET UNITYSDK_OFFSET(0x17F4E310)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x17F49CE0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_B44843DD9C665E23_OFFSET UNITYSDK_OFFSET(0x17F4F630)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F50990)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x17F50420)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_CD88442B5A0FD53A_OFFSET UNITYSDK_OFFSET(0x17F4B450)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_D39A42BE4771D929_1_OFFSET UNITYSDK_OFFSET(0x17F4FD10)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_D39A42BE4771D929_OFFSET UNITYSDK_OFFSET(0x17F4AF50)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x17F4DCE0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_EAABDA683502C6A0_OFFSET UNITYSDK_OFFSET(0x17F4DA70)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_ECF1CFD45328572C_OFFSET UNITYSDK_OFFSET(0x17F4DC30)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_EEEE4A0E1CB8F89E_OFFSET UNITYSDK_OFFSET(0x17F4C8E0)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x17F4E010)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x17F4F590)
#define CLASS_5_78B1EAE4D1A36E33_METHOD_5_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x17F4A820)
#define CLASS_5_78B1EAE4D1A36E33__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4A8C0)

inline static constexpr unsigned int Class_5_78B1EAE4D1A36E33_TypeDefinitionIndex = 58071;

class Class_5_78B1EAE4D1A36E33 : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigChangeGridNode*>
{
public:
	::Class_5_78B1EAE4D1A36E33_Class_1_4CED3B633CACA2CF* Field_5_11; // 0x40
	::MoleMole::Config::ConfigChangeGridNode* Field_5_5; // 0x48
	::Class_1_B71CA39446BBFDC7* Field_5_6; // 0x50
	::Class_1_F5B35B1B6669CF16* Field_5_0; // 0x58
	::System::Collections::Generic::List_1<::Class_1_ED492469204624B4*>* Field_5_4; // 0x60
	::System::Collections::Generic::HashSet_1<::Struct_2_A1A45D8655270887>* Field_5_7; // 0x68
	::MoleMole::Config::SinkAllThenRiseAllPhaseType Field_5_1; // 0x70
	::MoleMole::Config::ChessboardChangeGridType Field_5_2; // 0x74
	::System::Single Field_5_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_5E50EF2EA6B6DF03(::MoleMole::Config::ConfigChangeGridNode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChangeGridNode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_5E50EF2EA6B6DF03_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_08A14F75C7774341(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_08A14F75C7774341_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_5_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_5_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Method_5_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_737220D2233A9067_OFFSET))(this);
	}

	static ::System::Void Method_5_18CEC7398AB32810(::Struct_2_8658838487EB8905 a1)
	{
		return ((::System::Void(*)(::Struct_2_8658838487EB8905))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_18CEC7398AB32810_OFFSET))(a1);
	}

	::System::Void Method_5_6EECE8924BBFC43C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_6EECE8924BBFC43C_OFFSET))(this);
	}

	::System::Void Method_5_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_AB88190D695EBEA9_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_EEEE4A0E1CB8F89E(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_EEEE4A0E1CB8F89E_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_EAABDA683502C6A0(::System::Single a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_EAABDA683502C6A0_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_ED492469204624B4*>* Method_5_D39A42BE4771D929(::Class_5_DCFF91E03A93C03C* a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::System::Action* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_ED492469204624B4*>*(*)(::Class_5_DCFF91E03A93C03C*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_D39A42BE4771D929_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_5_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Boolean Method_5_239FBDAC9C643551(::Class_5_DCFF91E03A93C03C* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_239FBDAC9C643551_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_5_3F8DC0E62FBF27F8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_3F8DC0E62FBF27F8_OFFSET))(this, a1);
	}

	::System::Void Method_5_307636E9FCE0FC9C(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_307636E9FCE0FC9C_OFFSET))(this, a1);
	}

	::System::Void Method_5_39F205AA37AD3A8D(::Class_5_DCFF91E03A93C03C* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_39F205AA37AD3A8D_OFFSET))(this, a1, a2);
	}

	::Class_5_DCFF91E03A93C03C* Method_5_A3D8B5132E653D82()
	{
		return ((::Class_5_DCFF91E03A93C03C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_A3D8B5132E653D82_OFFSET))(this);
	}

	::System::Void Method_5_56EC62D3F45D683D(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_56EC62D3F45D683D_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_0093A664471C0648(::Class_5_DCFF91E03A93C03C* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_0093A664471C0648_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_1C82B0464A6F73F2(::MoleMole::HollowChessboard::HollowCell& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_1C82B0464A6F73F2_OFFSET))(this, a1);
	}

	::System::Void Method_5_7186E78353AA8337(::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_7186E78353AA8337_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::System::Void Method_5_B44843DD9C665E23(::Class_5_DCFF91E03A93C03C* a1, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a2, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_B44843DD9C665E23_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_5_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_ED492469204624B4*>* Method_5_D39A42BE4771D929_1(::Class_5_DCFF91E03A93C03C* a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::System::Action* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_ED492469204624B4*>*(*)(::Class_5_DCFF91E03A93C03C*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_D39A42BE4771D929_1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_5_CD88442B5A0FD53A(::Class_1_ED492469204624B4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED492469204624B4*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_CD88442B5A0FD53A_OFFSET))(this, a1);
	}

	::System::Void Method_5_482C449BC0BF8068(::Class_5_DCFF91E03A93C03C* a1, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a2, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_482C449BC0BF8068_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_65981C68BAA8D2CB(::Class_5_DCFF91E03A93C03C* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_65981C68BAA8D2CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_CB8E229BDF290D41_OFFSET))(this);
	}

	::System::Void Method_5_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_5_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_5_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_F7300E87EC49A206_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_5_ECF1CFD45328572C(::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_ECF1CFD45328572C_OFFSET))(a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_110DF04B410B6021(::Class_2_915BDDE5CA09F2B7* a1, ::Class_5_DCFF91E03A93C03C* a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_915BDDE5CA09F2B7*, ::Class_5_DCFF91E03A93C03C*, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_110DF04B410B6021_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_A3B7C4EB36650E1D(::Class_5_DCFF91E03A93C03C* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_A3B7C4EB36650E1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_1AAAE29F4DB571CA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_1AAAE29F4DB571CA_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_78B1EAE4D1A36E33_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};

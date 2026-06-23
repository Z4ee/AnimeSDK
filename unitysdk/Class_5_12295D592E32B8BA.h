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
class Class_1_C376DB68B1C74261;
class Class_1_ED492469204624B4;
class Class_1_F5B35B1B6669CF16;
class Class_2_915BDDE5CA09F2B7;
class Class_2_9DCE2FC33F67E8A2;
class Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D;
class Class_5_12295D592E32B8BA_Class_1_4CED3B633CACA2CF_2;
class Class_5_FCAF801AC482D3B5;
namespace MoleMole::Config { class ConfigChangeGridNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_12295D592E32B8BA_METHOD_5_08A14F75C7774341_OFFSET UNITYSDK_OFFSET(0x1072B220)
#define CLASS_5_12295D592E32B8BA_METHOD_5_18CEC7398AB32810_OFFSET UNITYSDK_OFFSET(0x10730F80)
#define CLASS_5_12295D592E32B8BA_METHOD_5_1A2CA48AE1FC2657_OFFSET UNITYSDK_OFFSET(0x1072E060)
#define CLASS_5_12295D592E32B8BA_METHOD_5_1AAAE29F4DB571CA_OFFSET UNITYSDK_OFFSET(0x1072B2C0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_1C82B0464A6F73F2_OFFSET UNITYSDK_OFFSET(0x1072CA50)
#define CLASS_5_12295D592E32B8BA_METHOD_5_1CDB9741D719F7ED_OFFSET UNITYSDK_OFFSET(0x1072F1D0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_239FBDAC9C643551_OFFSET UNITYSDK_OFFSET(0x10732470)
#define CLASS_5_12295D592E32B8BA_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1072C650)
#define CLASS_5_12295D592E32B8BA_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1072C5C0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1072B470)
#define CLASS_5_12295D592E32B8BA_METHOD_5_39F205AA37AD3A8D_OFFSET UNITYSDK_OFFSET(0x107310E0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_3F8DC0E62FBF27F8_OFFSET UNITYSDK_OFFSET(0x1072FD40)
#define CLASS_5_12295D592E32B8BA_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1072B630)
#define CLASS_5_12295D592E32B8BA_METHOD_5_5E50EF2EA6B6DF03_OFFSET UNITYSDK_OFFSET(0x1072B190)
#define CLASS_5_12295D592E32B8BA_METHOD_5_655CA0E2BD338D18_OFFSET UNITYSDK_OFFSET(0x1072F7B0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_65981C68BAA8D2CB_OFFSET UNITYSDK_OFFSET(0x1072D310)
#define CLASS_5_12295D592E32B8BA_METHOD_5_6C53D8114328A046_OFFSET UNITYSDK_OFFSET(0x107311E0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_709F4A5A6952A278_OFFSET UNITYSDK_OFFSET(0x10732270)
#define CLASS_5_12295D592E32B8BA_METHOD_5_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1072C170)
#define CLASS_5_12295D592E32B8BA_METHOD_5_81088B2BEAF37648_OFFSET UNITYSDK_OFFSET(0x10731CC0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x10730080)
#define CLASS_5_12295D592E32B8BA_METHOD_5_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x1072C6F0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_9C8F732518B5F9F8_OFFSET UNITYSDK_OFFSET(0x1072E2E0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1072B4B0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_A3B7C4EB36650E1D_OFFSET UNITYSDK_OFFSET(0x107317A0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_A3D8B5132E653D82_OFFSET UNITYSDK_OFFSET(0x1072F2A0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_C4DED530979A543A_OFFSET UNITYSDK_OFFSET(0x10730B90)
#define CLASS_5_12295D592E32B8BA_METHOD_5_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0x1072E710)
#define CLASS_5_12295D592E32B8BA_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10731C30)
#define CLASS_5_12295D592E32B8BA_METHOD_5_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x1072CC00)
#define CLASS_5_12295D592E32B8BA_METHOD_5_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0x1072B860)
#define CLASS_5_12295D592E32B8BA_METHOD_5_CD88442B5A0FD53A_OFFSET UNITYSDK_OFFSET(0x1072C4F0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_D39A42BE4771D929_1_OFFSET UNITYSDK_OFFSET(0x1072DB50)
#define CLASS_5_12295D592E32B8BA_METHOD_5_D39A42BE4771D929_OFFSET UNITYSDK_OFFSET(0x10730680)
#define CLASS_5_12295D592E32B8BA_METHOD_5_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x107311D0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_EAABDA683502C6A0_OFFSET UNITYSDK_OFFSET(0x1072D150)
#define CLASS_5_12295D592E32B8BA_METHOD_5_ECF1CFD45328572C_OFFSET UNITYSDK_OFFSET(0x1072C9B0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x1072FF40)
#define CLASS_5_12295D592E32B8BA_METHOD_5_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x1072C3C0)
#define CLASS_5_12295D592E32B8BA_METHOD_5_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x10731040)
#define CLASS_5_12295D592E32B8BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1072C460)

inline static constexpr unsigned int Class_5_12295D592E32B8BA_TypeDefinitionIndex = 65825;

class Class_5_12295D592E32B8BA : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigChangeGridNode*>
{
public:
	::Class_1_F5B35B1B6669CF16* Field_5_3; // 0x40
	::Class_5_12295D592E32B8BA_Class_1_4CED3B633CACA2CF_2* Field_5_8; // 0x48
	::Class_1_B71CA39446BBFDC7* Field_5_5; // 0x50
	::System::Collections::Generic::HashSet_1<::Struct_2_A1A45D8655270887>* Field_5_4; // 0x58
	::System::Collections::Generic::List_1<::Class_1_ED492469204624B4*>* Field_5_7; // 0x60
	::MoleMole::Config::ConfigChangeGridNode* Field_5_6; // 0x68
	::MoleMole::Config::SinkAllThenRiseAllPhaseType Field_5_2; // 0x70
	::MoleMole::Config::ChessboardChangeGridType Field_5_1; // 0x74
	::System::Single Field_5_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_5E50EF2EA6B6DF03(::MoleMole::Config::ConfigChangeGridNode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChangeGridNode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_5E50EF2EA6B6DF03_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_08A14F75C7774341(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_08A14F75C7774341_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_5_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_5_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_5_CD88442B5A0FD53A(::Class_1_ED492469204624B4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED492469204624B4*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_CD88442B5A0FD53A_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_5_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_5_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_87318FF00D6BC7EB_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_5_ECF1CFD45328572C(::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_ECF1CFD45328572C_OFFSET))(a1, a2);
	}

	::System::Boolean Method_5_1C82B0464A6F73F2(::MoleMole::HollowChessboard::HollowCell& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_1C82B0464A6F73F2_OFFSET))(this, a1);
	}

	::System::Void Method_5_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_CB8E229BDF290D41_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_EAABDA683502C6A0(::System::Single a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_EAABDA683502C6A0_OFFSET))(this, a1);
	}

	::System::Void Method_5_65981C68BAA8D2CB(::Class_5_FCAF801AC482D3B5* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_65981C68BAA8D2CB_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_1A2CA48AE1FC2657(::Class_5_FCAF801AC482D3B5* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_1A2CA48AE1FC2657_OFFSET))(this, a1);
	}

	::System::Void Method_5_1AAAE29F4DB571CA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_1AAAE29F4DB571CA_OFFSET))(this, a1);
	}

	::System::Void Method_5_C83B2479936B63C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_C83B2479936B63C3_OFFSET))(this);
	}

	::System::Void Method_5_1CDB9741D719F7ED(::Class_5_FCAF801AC482D3B5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_1CDB9741D719F7ED_OFFSET))(this, a1);
	}

	::Class_5_FCAF801AC482D3B5* Method_5_A3D8B5132E653D82()
	{
		return ((::Class_5_FCAF801AC482D3B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_A3D8B5132E653D82_OFFSET))(this);
	}

	::System::Void Method_5_655CA0E2BD338D18(::Class_5_FCAF801AC482D3B5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_655CA0E2BD338D18_OFFSET))(this, a1);
	}

	::System::Void Method_5_3F8DC0E62FBF27F8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_3F8DC0E62FBF27F8_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_ED492469204624B4*>* Method_5_D39A42BE4771D929(::Class_5_FCAF801AC482D3B5* a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::System::Action* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_ED492469204624B4*>*(*)(::Class_5_FCAF801AC482D3B5*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_D39A42BE4771D929_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_ED492469204624B4*>* Method_5_D39A42BE4771D929_1(::Class_5_FCAF801AC482D3B5* a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::System::Action* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_ED492469204624B4*>*(*)(::Class_5_FCAF801AC482D3B5*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_D39A42BE4771D929_1_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_5_C4DED530979A543A(::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_C4DED530979A543A_OFFSET))(this, a1);
	}

	static ::System::Void Method_5_18CEC7398AB32810(::Struct_2_8658838487EB8905 a1)
	{
		return ((::System::Void(*)(::Struct_2_8658838487EB8905))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_18CEC7398AB32810_OFFSET))(a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_5_39F205AA37AD3A8D(::Class_5_FCAF801AC482D3B5* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_39F205AA37AD3A8D_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_9C8F732518B5F9F8(::Class_2_915BDDE5CA09F2B7* a1, ::Class_5_FCAF801AC482D3B5* a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_2_915BDDE5CA09F2B7*, ::Class_5_FCAF801AC482D3B5*, ::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_9C8F732518B5F9F8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_DAEB67F34AF80609_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_6C53D8114328A046(::Class_5_FCAF801AC482D3B5* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_6C53D8114328A046_OFFSET))(this, a1);
	}

	::System::Void Method_5_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_F7300E87EC49A206_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::System::Void Method_5_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_5_CC99BBFAC9417CA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_CC99BBFAC9417CA7_OFFSET))(this);
	}

	::System::Void Method_5_81088B2BEAF37648(::Class_5_FCAF801AC482D3B5* a1, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a2, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_81088B2BEAF37648_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_709F4A5A6952A278(::Class_5_FCAF801AC482D3B5* a1, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a2, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_709F4A5A6952A278_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_239FBDAC9C643551(::Class_5_FCAF801AC482D3B5* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_239FBDAC9C643551_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_A3B7C4EB36650E1D(::Class_5_FCAF801AC482D3B5* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_METHOD_5_A3B7C4EB36650E1D_OFFSET))(this, a1, a2);
	}
};

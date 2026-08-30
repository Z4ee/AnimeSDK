#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/ActiveSkillDescShowMode.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingCarDetailDisplayMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_1305;
class Class_0_16E4307DCC419505_1306;
class Class_0_16E4307DCC419505_1402;
class Class_1_21F18165E166027C;
class Class_1_4BE3B8CB3ABA39BF;
class Class_1_5452947417BCF16A;
class Class_1_5AD3EC2EA1B1D5CD;
class Class_1_89120A467F7A010D_2;
class Class_1_961B0CA014B1FC95;
class Class_1_9F8AF0992029BE5B;
class Class_1_CDD2EAFBD3BB1707;
class Class_1_D01AEBC83BBAFF3D;
class Class_2_D31795FF697BD3E4;
namespace RPG::Client::B51Racing { class B51RacingBuffSkillItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillUpgradePageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDetailDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopActionSelectViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopPartTabViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDriverSelectPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarInfoPanelViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarStatItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingChallengeMatchPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDIYPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopActionResultViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace RPG::Client::B51Racing { class B51RacingExitDoubleConfirmationDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingInitCarPreviewPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingInitCarSelectPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingLightConeRewardPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingLimitedRewardPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingNewCarDriverPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingNewDevelopTargetDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingNewPartHintDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingPartRetentionItemViewModel; }
namespace RPG::Client::B51Racing { class B51RacingResidentRewardPageViewModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3C6316095CDA14B9_METHOD_1_016584FE487B55F6_OFFSET UNITYSDK_OFFSET(0xC38AEC0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_0B6823C1D4A79403_OFFSET UNITYSDK_OFFSET(0xC3875C0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_0D3AFD7C6B244F6F_OFFSET UNITYSDK_OFFSET(0xC38D4F0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_0EFC0C249E64A889_OFFSET UNITYSDK_OFFSET(0xC38B400)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_0F93D0F245D987F0_OFFSET UNITYSDK_OFFSET(0xC38B810)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_1E895F5EB64DB211_OFFSET UNITYSDK_OFFSET(0xC38DDC0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_270265A04DE8F4F7_OFFSET UNITYSDK_OFFSET(0xC389AA0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_2723AFA948194AD5_OFFSET UNITYSDK_OFFSET(0xC389CF0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_3F3323F79F327471_OFFSET UNITYSDK_OFFSET(0xC38B550)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_435A479A68717BE2_OFFSET UNITYSDK_OFFSET(0xC389740)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_495CAEF4BFB10784_OFFSET UNITYSDK_OFFSET(0xC38DA10)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_4D7142BAA937D87B_OFFSET UNITYSDK_OFFSET(0xC389BE0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_4EF10D5FA9FEE782_OFFSET UNITYSDK_OFFSET(0xC386F80)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_53C92FC3337D4382_OFFSET UNITYSDK_OFFSET(0xC3873C0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_5663E4868E1B8775_OFFSET UNITYSDK_OFFSET(0xC388E10)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_56FE0739250AF194_OFFSET UNITYSDK_OFFSET(0xC38A1B0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_58B3D5FAAB40516F_OFFSET UNITYSDK_OFFSET(0xC386F20)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_66E3B38BDAF2E9EE_OFFSET UNITYSDK_OFFSET(0xC3880D0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_6D4A9FAE6EDDFD6C_OFFSET UNITYSDK_OFFSET(0xC389120)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_72FA213D3954D365_OFFSET UNITYSDK_OFFSET(0xC389E80)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_7A6A52D0FA9CB7F3_OFFSET UNITYSDK_OFFSET(0xC38C0E0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_7B22F578A6CE4F2E_OFFSET UNITYSDK_OFFSET(0xC38C5A0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_8B85A3CA579B1B7D_OFFSET UNITYSDK_OFFSET(0xC38BE50)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_905E7DADB65FFF9E_OFFSET UNITYSDK_OFFSET(0xC388430)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_9B47AFF5C13DD4D6_OFFSET UNITYSDK_OFFSET(0xC38D8A0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_9B8E6AE14D0018BA_OFFSET UNITYSDK_OFFSET(0xC38B090)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_9F3C3ADBA586FFC6_OFFSET UNITYSDK_OFFSET(0xC388680)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_A15277260B8E68E8_OFFSET UNITYSDK_OFFSET(0xC38DC90)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_AC398D38258731F1_OFFSET UNITYSDK_OFFSET(0xC38A7A0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_ADCDF4D3E5D3EC60_OFFSET UNITYSDK_OFFSET(0xC38A6C0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_BE10984A8136557B_OFFSET UNITYSDK_OFFSET(0xC38B310)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_C501285790505D12_OFFSET UNITYSDK_OFFSET(0xC38CCC0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_CAB09625B03CCCA7_OFFSET UNITYSDK_OFFSET(0xC38C450)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_D1D1FF22832DE1D1_OFFSET UNITYSDK_OFFSET(0xC38B990)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_DC6BF372F6C721D0_OFFSET UNITYSDK_OFFSET(0xC3871C0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_E158E3E697506C1C_OFFSET UNITYSDK_OFFSET(0xC38E280)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_E3528A92FA6AF12B_OFFSET UNITYSDK_OFFSET(0xC38B6B0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_E59A625F3C9DC911_OFFSET UNITYSDK_OFFSET(0xC38E180)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_E7D480ABF522E0F3_OFFSET UNITYSDK_OFFSET(0xC38E050)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_EB2A1558E67A4F34_OFFSET UNITYSDK_OFFSET(0xC38D290)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_F3D6A24A23F3D461_OFFSET UNITYSDK_OFFSET(0xC387BD0)
#define CLASS_1_3C6316095CDA14B9_METHOD_1_F8AAE8DFB93BFBA0_OFFSET UNITYSDK_OFFSET(0xC386A70)
#define CLASS_1_3C6316095CDA14B9__BUILDACTIONSELECTPAGEVMBYAGENDA_B__8_0_OFFSET UNITYSDK_OFFSET(0xC38E370)
#define CLASS_1_3C6316095CDA14B9__CREATENEWDEVELOPTARGETDIALOGVM_B__11_0_OFFSET UNITYSDK_OFFSET(0xC38E390)
#define CLASS_1_3C6316095CDA14B9__CTOR_OFFSET UNITYSDK_OFFSET(0xC38E360)

inline static constexpr unsigned int Class_1_3C6316095CDA14B9_TypeDefinitionIndex = 80658;

class Class_1_3C6316095CDA14B9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1402* GKLKOIJJEKJ; // 0x10
	::Class_0_16E4307DCC419505_1306* FCCMAEFHDIA; // 0x18
	::Class_1_4BE3B8CB3ABA39BF* NJNNCOCIGCC; // 0x20
	::Class_1_CDD2EAFBD3BB1707* POIDJMHLKJN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* Method_1_F8AAE8DFB93BFBA0(::Class_0_16E4307DCC419505_1305* a1, ::Class_1_5AD3EC2EA1B1D5CD* a2)
	{
		return ((::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*, ::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_F8AAE8DFB93BFBA0_OFFSET))(this, a1, a2);
	}

	::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* Method_1_58B3D5FAAB40516F(::Class_1_9F8AF0992029BE5B* a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*(*)(::PVOID, ::Class_1_9F8AF0992029BE5B*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_58B3D5FAAB40516F_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* Method_1_4EF10D5FA9FEE782(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_4EF10D5FA9FEE782_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* Method_1_53C92FC3337D4382(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_53C92FC3337D4382_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectViewModel* Method_1_0B6823C1D4A79403(::Class_0_16E4307DCC419505_1305* a1, ::Class_2_D31795FF697BD3E4* a2)
	{
		return ((::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*, ::Class_2_D31795FF697BD3E4*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_0B6823C1D4A79403_OFFSET))(this, a1, a2);
	}

	::RPG::Client::B51Racing::B51RacingDevelopActionResultViewModel* Method_1_9F3C3ADBA586FFC6(::Class_0_16E4307DCC419505_1305* a1, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a2)
	{
		return ((::RPG::Client::B51Racing::B51RacingDevelopActionResultViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_9F3C3ADBA586FFC6_OFFSET))(this, a1, a2);
	}

	::RPG::Client::B51Racing::B51RacingCarDevelopPageViewModel* Method_1_5663E4868E1B8775(::Class_0_16E4307DCC419505_1305* a1, ::Class_2_D31795FF697BD3E4* a2)
	{
		return ((::RPG::Client::B51Racing::B51RacingCarDevelopPageViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*, ::Class_2_D31795FF697BD3E4*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_5663E4868E1B8775_OFFSET))(this, a1, a2);
	}

	::RPG::Client::B51Racing::B51RacingNewDevelopTargetDialogViewModel* Method_1_435A479A68717BE2(::System::UInt32 a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingNewDevelopTargetDialogViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_435A479A68717BE2_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel* Method_1_270265A04DE8F4F7(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3)
	{
		return ((::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_270265A04DE8F4F7_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::B51Racing::B51RacingCarDevelopPartTabViewModel* Method_1_6D4A9FAE6EDDFD6C(::Class_1_961B0CA014B1FC95* a1, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a3)
	{
		return ((::RPG::Client::B51Racing::B51RacingCarDevelopPartTabViewModel*(*)(::PVOID, ::Class_1_961B0CA014B1FC95*, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_6D4A9FAE6EDDFD6C_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::B51Racing::B51RacingInitCarPreviewPageViewModel* Method_1_2723AFA948194AD5(::System::UInt32 a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingInitCarPreviewPageViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_2723AFA948194AD5_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingInitCarSelectPageViewModel* Method_1_56FE0739250AF194()
	{
		return ((::RPG::Client::B51Racing::B51RacingInitCarSelectPageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_56FE0739250AF194_OFFSET))(this);
	}

	::RPG::Client::B51Racing::B51RacingChallengeMatchPageViewModel* Method_1_AC398D38258731F1()
	{
		return ((::RPG::Client::B51Racing::B51RacingChallengeMatchPageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_AC398D38258731F1_OFFSET))(this);
	}

	::RPG::Client::B51Racing::B51RacingCarInfoPanelViewModel* Method_1_72FA213D3954D365(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a4)
	{
		return ((::RPG::Client::B51Racing::B51RacingCarInfoPanelViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_72FA213D3954D365_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel* Method_1_016584FE487B55F6(::Class_0_16E4307DCC419505_1305* a1, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode a2)
	{
		return ((::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_016584FE487B55F6_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single> Method_1_9B8E6AE14D0018BA(::Class_0_16E4307DCC419505_1305* a1, ::Class_1_5AD3EC2EA1B1D5CD* a2)
	{
		return ((::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single>(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*, ::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_9B8E6AE14D0018BA_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* Method_1_BE10984A8136557B(::Class_0_16E4307DCC419505_1305* a1, ::Class_1_5AD3EC2EA1B1D5CD* a2, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode a3)
	{
		return ((::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*, ::Class_1_5AD3EC2EA1B1D5CD*, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_BE10984A8136557B_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_3<::System::String*, ::RPG::Client::TextID, ::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*> Method_1_0EFC0C249E64A889(::Class_0_16E4307DCC419505_1305* a1, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode a2, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a3)
	{
		return ((::System::ValueTuple_3<::System::String*, ::RPG::Client::TextID, ::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*>(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*, ::RPG::Client::B51Racing::B51RacingCarDetailDisplayMode, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_0EFC0C249E64A889_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* Method_1_3F3323F79F327471(::Class_0_16E4307DCC419505_1305* a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_3F3323F79F327471_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::String*, ::RPG::Client::TextID> Method_1_E3528A92FA6AF12B(::Class_1_D01AEBC83BBAFF3D* a1, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a2)
	{
		return ((::System::ValueTuple_2<::System::String*, ::RPG::Client::TextID>(*)(::PVOID, ::Class_1_D01AEBC83BBAFF3D*, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_E3528A92FA6AF12B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0F93D0F245D987F0(::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_0F93D0F245D987F0_OFFSET))(this, a1, a2);
	}

	::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel* Method_1_D1D1FF22832DE1D1(::Class_0_16E4307DCC419505_1305* a1, ::System::Boolean a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_D1D1FF22832DE1D1_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel* Method_1_ADCDF4D3E5D3EC60(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Single a5, ::RPG::Client::B51Racing::ActiveSkillDescShowMode a6)
	{
		return ((::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Single, ::RPG::Client::B51Racing::ActiveSkillDescShowMode))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_ADCDF4D3E5D3EC60_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::Client::B51Racing::B51RacingDIYPageViewModel* Method_1_8B85A3CA579B1B7D(::Class_1_5AD3EC2EA1B1D5CD* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::B51Racing::B51RacingDIYPageViewModel*(*)(::PVOID, ::Class_1_5AD3EC2EA1B1D5CD*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_8B85A3CA579B1B7D_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::Class_1_961B0CA014B1FC95*>* Method_1_7A6A52D0FA9CB7F3(::Class_1_5AD3EC2EA1B1D5CD* a1)
	{
		return ((::Il2CppArray<::Class_1_961B0CA014B1FC95*>*(*)(::PVOID, ::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_7A6A52D0FA9CB7F3_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_CAB09625B03CCCA7(::Class_1_5AD3EC2EA1B1D5CD* a1)
	{
		return ((::System::Boolean(*)(::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_CAB09625B03CCCA7_OFFSET))(a1);
	}

	::RPG::Client::B51Racing::B51RacingDIYPageViewModel* Method_1_7B22F578A6CE4F2E(::Class_1_5AD3EC2EA1B1D5CD* a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingDIYPageViewModel*(*)(::PVOID, ::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_7B22F578A6CE4F2E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Il2CppArray<::Class_1_961B0CA014B1FC95*>*>* Method_1_C501285790505D12(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Il2CppArray<::Class_1_961B0CA014B1FC95*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_C501285790505D12_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::UInt32>* Method_1_EB2A1558E67A4F34(::Class_1_5AD3EC2EA1B1D5CD* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::UInt32>*(*)(::PVOID, ::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_EB2A1558E67A4F34_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingCarDriverSelectPageViewModel* Method_1_0D3AFD7C6B244F6F(::Class_0_16E4307DCC419505_1305* a1, ::Il2CppArray<::Class_1_89120A467F7A010D_2*>* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::Client::B51Racing::B51RacingCarDriverSelectPageViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*, ::Il2CppArray<::Class_1_89120A467F7A010D_2*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_0D3AFD7C6B244F6F_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel* Method_1_9B47AFF5C13DD4D6(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel*(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_9B47AFF5C13DD4D6_OFFSET))(this, a1, a2);
	}

	::RPG::Client::B51Racing::B51RacingExitDoubleConfirmationDialogViewModel* Method_1_495CAEF4BFB10784(::Class_0_16E4307DCC419505_1305* a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingExitDoubleConfirmationDialogViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_1305*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_495CAEF4BFB10784_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_1_A15277260B8E68E8(::Class_1_5452947417BCF16A* a1)
	{
		return ((::RPG::Client::TextID(*)(::PVOID, ::Class_1_5452947417BCF16A*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_A15277260B8E68E8_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::Client::B51Racing::B51RacingBuffSkillItemViewModel*>* Method_1_F3D6A24A23F3D461(::Class_1_5AD3EC2EA1B1D5CD* a1)
	{
		return ((::Il2CppArray<::RPG::Client::B51Racing::B51RacingBuffSkillItemViewModel*>*(*)(::PVOID, ::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_F3D6A24A23F3D461_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingPartRetentionItemViewModel* Method_1_4D7142BAA937D87B(::Class_1_961B0CA014B1FC95* a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::B51Racing::B51RacingPartRetentionItemViewModel*(*)(::PVOID, ::Class_1_961B0CA014B1FC95*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_4D7142BAA937D87B_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_66E3B38BDAF2E9EE(::System::Collections::Generic::List_1<::Class_1_9F8AF0992029BE5B*>* a1, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9F8AF0992029BE5B*>*, ::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarStatItemViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_66E3B38BDAF2E9EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_905E7DADB65FFF9E(::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* a1, ::Class_1_961B0CA014B1FC95* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel*, ::Class_1_961B0CA014B1FC95*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_905E7DADB65FFF9E_OFFSET))(this, a1, a2);
	}

	static ::System::UInt32 Method_1_DC6BF372F6C721D0(::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_DC6BF372F6C721D0_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::Int32>* Method_1_1E895F5EB64DB211(::Class_1_5AD3EC2EA1B1D5CD* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::Int32>*(*)(::PVOID, ::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_1E895F5EB64DB211_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingResidentRewardPageViewModel* Method_1_E7D480ABF522E0F3(::Class_1_D01AEBC83BBAFF3D* a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingResidentRewardPageViewModel*(*)(::PVOID, ::Class_1_D01AEBC83BBAFF3D*))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_E7D480ABF522E0F3_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingLimitedRewardPageViewModel* Method_1_E59A625F3C9DC911()
	{
		return ((::RPG::Client::B51Racing::B51RacingLimitedRewardPageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_E59A625F3C9DC911_OFFSET))(this);
	}

	::RPG::Client::B51Racing::B51RacingLightConeRewardPageViewModel* Method_1_E158E3E697506C1C()
	{
		return ((::RPG::Client::B51Racing::B51RacingLightConeRewardPageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9_METHOD_1_E158E3E697506C1C_OFFSET))(this);
	}

	::Class_1_9F8AF0992029BE5B* _BuildActionSelectPageVMByAgenda_b__8_0(::System::UInt32 a1)
	{
		return ((::Class_1_9F8AF0992029BE5B*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9__BUILDACTIONSELECTPAGEVMBYAGENDA_B__8_0_OFFSET))(this, a1);
	}

	::Class_1_21F18165E166027C* _CreateNewDevelopTargetDialogVM_b__11_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32> a1)
	{
		return ((::Class_1_21F18165E166027C*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_3C6316095CDA14B9__CREATENEWDEVELOPTARGETDIALOGVM_B__11_0_OFFSET))(this, a1);
	}
};

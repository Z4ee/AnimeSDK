#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_3BFD1BBF7A6AF539;
class Class_1_43BD383C98B4C0C5_8;
class Class_1_BCCF85E57593CA8D;
class Class_1_BDA8DEEF59BE3031;
class Class_2_569DE47525C5FD32;
class Class_3_6B9658F527402856;
namespace RPG::Client { class DiceCombatPhySimParameter; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleContext; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleDiceDisplayInfo; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F0054AC3F0D34041_GET_PERFORMANCECONFIGPROXY_OFFSET UNITYSDK_OFFSET(0x89930F0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x898E3F0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_10230A9EE3E226EA_OFFSET UNITYSDK_OFFSET(0x89925F0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x898BD70)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_1A5AFCC3FA890F04_OFFSET UNITYSDK_OFFSET(0x89926F0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_1CF8850E3974E3E5_OFFSET UNITYSDK_OFFSET(0x898F510)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x898B550)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_1F113C252B05D04B_OFFSET UNITYSDK_OFFSET(0x898EF80)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_202558C3F0BACA2A_1_OFFSET UNITYSDK_OFFSET(0x8992240)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_202558C3F0BACA2A_OFFSET UNITYSDK_OFFSET(0x8991B70)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_21378A7EB1BCB13B_1_OFFSET UNITYSDK_OFFSET(0x898D080)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0x898D1D0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x898F400)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_23EFA88220321EA6_OFFSET UNITYSDK_OFFSET(0x898F2D0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_25B6EFC63CE6F337_OFFSET UNITYSDK_OFFSET(0x898F890)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_2B93CCEE4CF4FFA8_OFFSET UNITYSDK_OFFSET(0x8991A20)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x8991980)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_35EDB68198B7034F_OFFSET UNITYSDK_OFFSET(0x898AAD0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x898B3C0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_3D2F4B35B096863F_OFFSET UNITYSDK_OFFSET(0x89910A0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8992860)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_400278A56B43BE85_OFFSET UNITYSDK_OFFSET(0x898DA00)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8991020)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x8993110)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_49CAD6267CBC5E0E_OFFSET UNITYSDK_OFFSET(0x8992400)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_4A64EB7D6C8BBD9A_OFFSET UNITYSDK_OFFSET(0x898ED40)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_4E7879E1FC89D3A1_OFFSET UNITYSDK_OFFSET(0x898F9A0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x898B410)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_517069B232A234ED_OFFSET UNITYSDK_OFFSET(0x8993010)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x898ABD0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_51F384253127E0E9_OFFSET UNITYSDK_OFFSET(0x8992E50)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_52318DC8B70A5DC8_OFFSET UNITYSDK_OFFSET(0x898B5B0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x8990ED0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_5928E4108213B98A_OFFSET UNITYSDK_OFFSET(0x8990DD0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x898E5F0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x8990500)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_65FC837228DA1EEE_OFFSET UNITYSDK_OFFSET(0x898AE90)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x898CB50)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_69A96B2040B764B4_OFFSET UNITYSDK_OFFSET(0x898E940)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_6B3070E8A1A27E7A_OFFSET UNITYSDK_OFFSET(0x898FE50)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_6E04D26428D99BB3_OFFSET UNITYSDK_OFFSET(0x898E850)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0x8990590)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_75302AF7F211457A_OFFSET UNITYSDK_OFFSET(0x898F900)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x898B020)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_81BFBC811E3C82EF_OFFSET UNITYSDK_OFFSET(0x898F690)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_830F3D7EBB23B1FB_OFFSET UNITYSDK_OFFSET(0x8991EE0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_8B1ABC397CD19B68_OFFSET UNITYSDK_OFFSET(0x898F1E0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_8BFE370EB5319039_OFFSET UNITYSDK_OFFSET(0x898D3C0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_8C272642BED64EA2_OFFSET UNITYSDK_OFFSET(0x89903A0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x89930A0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_96189EDEF38976A6_1_OFFSET UNITYSDK_OFFSET(0x8991400)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x898C590)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_965FEFBF42F0F1DF_OFFSET UNITYSDK_OFFSET(0x898B710)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_9D8893CD130270AA_OFFSET UNITYSDK_OFFSET(0x898BC10)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_A5245CA3B8948734_OFFSET UNITYSDK_OFFSET(0x898F9F0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_ADE28970C9B5BF1C_OFFSET UNITYSDK_OFFSET(0x8992A20)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x898E130)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x898B1F0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_B5455D8E300A0B6D_OFFSET UNITYSDK_OFFSET(0x898F470)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x8991390)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_C43FB717EAB07898_OFFSET UNITYSDK_OFFSET(0x898D800)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8991320)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x8991910)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x898EF10)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_CB99850B30B486C9_1_OFFSET UNITYSDK_OFFSET(0x8992090)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_CB99850B30B486C9_OFFSET UNITYSDK_OFFSET(0x8991D30)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_D087E4458C5C5551_OFFSET UNITYSDK_OFFSET(0x898B980)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_DA2D597F63639838_OFFSET UNITYSDK_OFFSET(0x89928B0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_E374F6C9CEE8E680_1_OFFSET UNITYSDK_OFFSET(0x898D320)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_E374F6C9CEE8E680_2_OFFSET UNITYSDK_OFFSET(0x898E090)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_E374F6C9CEE8E680_3_OFFSET UNITYSDK_OFFSET(0x898E550)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_E374F6C9CEE8E680_4_OFFSET UNITYSDK_OFFSET(0x8990300)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_E374F6C9CEE8E680_OFFSET UNITYSDK_OFFSET(0x898BB70)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_E6F4FD7AF7C4C2DC_OFFSET UNITYSDK_OFFSET(0x898A9A0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x898AB40)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x898C9E0)
#define CLASS_1_F0054AC3F0D34041_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x89908E0)
#define CLASS_1_F0054AC3F0D34041_SET_PERFORMANCECONFIGPROXY_OFFSET UNITYSDK_OFFSET(0x8993100)
#define CLASS_1_F0054AC3F0D34041__CTOR_OFFSET UNITYSDK_OFFSET(0x898A7A0)
#define CLASS_1_F0054AC3F0D34041___PLAYCONFIRMPERFORMANCE_B__52_0_OFFSET UNITYSDK_OFFSET(0x8993120)

inline static constexpr unsigned int Class_1_F0054AC3F0D34041_TypeDefinitionIndex = 48854;

class Class_1_F0054AC3F0D34041 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_8; // 0x18
	::Class_1_3BFD1BBF7A6AF539* _PerformanceConfigProxy_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>* Field_1_9; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* Field_1_18; // 0x38
	::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>* Field_1_10; // 0x40
	::System::Action_2<::System::Int32, ::System::Boolean>* Field_1_14; // 0x48
	::UnityEngine::Transform* Field_1_6; // 0x50
	::Class_3_6B9658F527402856* Field_1_15; // 0x58
	::UnityEngine::Transform* Field_1_4; // 0x60
	::RPG::Client::DiceCombatPhySimParameter* Field_1_3; // 0x68
	::System::Action* Field_1_12; // 0x70
	::Class_2_569DE47525C5FD32* Field_1_16; // 0x78
	::System::Action_1<::Class_1_BDA8DEEF59BE3031*>* Field_1_21; // 0x80
	::System::Boolean Field_1_17; // 0x88
	::System::Boolean Field_1_13; // 0x89
	::System::Single Field_1_11; // 0x8C
	::System::Single Field_1_20; // 0x90
	::System::Boolean Field_1_0; // 0x94
	::System::Boolean Field_1_1; // 0x95
	::System::Boolean Field_1_22; // 0x96
	::System::Boolean Field_1_19; // 0x97

	::System::Void _ctor(::Class_2_569DE47525C5FD32* a1, ::Class_3_6B9658F527402856* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_569DE47525C5FD32*, ::Class_3_6B9658F527402856*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6F4FD7AF7C4C2DC(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_E6F4FD7AF7C4C2DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_35EDB68198B7034F(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_35EDB68198B7034F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EC61075536D10822(::Class_1_BDA8DEEF59BE3031* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_EC61075536D10822_OFFSET))(this, a1);
	}

	::System::Void Method_1_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_1_65FC837228DA1EEE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_65FC837228DA1EEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_BDA8DEEF59BE3031* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_52318DC8B70A5DC8(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_52318DC8B70A5DC8_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_965FEFBF42F0F1DF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_965FEFBF42F0F1DF_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_D087E4458C5C5551(::Class_1_BDA8DEEF59BE3031* a1, ::Class_1_BDA8DEEF59BE3031* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*, ::Class_1_BDA8DEEF59BE3031*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_D087E4458C5C5551_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_E374F6C9CEE8E680_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D8893CD130270AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_9D8893CD130270AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Boolean Method_1_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_F1BB718E73080948_OFFSET))(this);
	}

	::System::Void Method_1_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_68805403250CC013_OFFSET))(this);
	}

	::System::Void Method_1_21378A7EB1BCB13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_21378A7EB1BCB13B_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_1(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_E374F6C9CEE8E680_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_1_8BFE370EB5319039(::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_8BFE370EB5319039_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* Method_1_C43FB717EAB07898(::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_C43FB717EAB07898_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_400278A56B43BE85(::Class_1_BDA8DEEF59BE3031* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_400278A56B43BE85_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_2(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_E374F6C9CEE8E680_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void Method_1_21378A7EB1BCB13B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_21378A7EB1BCB13B_1_OFFSET))(this);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_3(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_E374F6C9CEE8E680_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F0036ED5CF109B4(::Class_1_BDA8DEEF59BE3031* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_6E04D26428D99BB3(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::DiceCombat::DiceCombatBattleContext* a3, ::Class_1_43BD383C98B4C0C5_8* a4, ::System::Boolean a5)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatBattleContext*, ::Class_1_43BD383C98B4C0C5_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_6E04D26428D99BB3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_69A96B2040B764B4(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_69A96B2040B764B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4A64EB7D6C8BBD9A(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::DiceCombat::DiceCombatBattleContext* a3, ::Class_1_43BD383C98B4C0C5_8* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatBattleContext*, ::Class_1_43BD383C98B4C0C5_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_4A64EB7D6C8BBD9A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_1F113C252B05D04B(::Class_1_BDA8DEEF59BE3031* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_1F113C252B05D04B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8B1ABC397CD19B68(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::RPG::GameCore::DiceCombatDiceType a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::RPG::GameCore::DiceCombatDiceType))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_8B1ABC397CD19B68_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_23EFA88220321EA6(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::UnityEngine::GameObject* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_23EFA88220321EA6_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::IEnumerator* Method_1_B5455D8E300A0B6D(::Class_1_BCCF85E57593CA8D* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::Class_1_BCCF85E57593CA8D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_B5455D8E300A0B6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1CF8850E3974E3E5(::Class_1_BCCF85E57593CA8D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BCCF85E57593CA8D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_1CF8850E3974E3E5_OFFSET))(this, a1, a2);
	}

	::Class_1_BDA8DEEF59BE3031* Method_1_81BFBC811E3C82EF(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_BDA8DEEF59BE3031*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_81BFBC811E3C82EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_25B6EFC63CE6F337(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_25B6EFC63CE6F337_OFFSET))(this, a1);
	}

	::System::Void Method_1_75302AF7F211457A(::System::Action_2<::System::Int32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_75302AF7F211457A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E7879E1FC89D3A1(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_4E7879E1FC89D3A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B3070E8A1A27E7A(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_6B3070E8A1A27E7A_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_4(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_E374F6C9CEE8E680_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C272642BED64EA2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_8C272642BED64EA2_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_6EECE8924BBFC43C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_6EECE8924BBFC43C_OFFSET))(this);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_5928E4108213B98A(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_5928E4108213B98A_OFFSET))(this, a1);
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A5245CA3B8948734(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_A5245CA3B8948734_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D2F4B35B096863F(::System::Single a1, ::System::Action_1<::Class_1_BDA8DEEF59BE3031*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::Class_1_BDA8DEEF59BE3031*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_3D2F4B35B096863F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_96189EDEF38976A6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_96189EDEF38976A6_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_2B93CCEE4CF4FFA8()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_2B93CCEE4CF4FFA8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_202558C3F0BACA2A()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_202558C3F0BACA2A_OFFSET))(this);
	}

	::System::Void Method_1_CB99850B30B486C9(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_CB99850B30B486C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_830F3D7EBB23B1FB(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_830F3D7EBB23B1FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB99850B30B486C9_1(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_CB99850B30B486C9_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_202558C3F0BACA2A_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_202558C3F0BACA2A_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* Method_1_49CAD6267CBC5E0E(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_49CAD6267CBC5E0E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1A5AFCC3FA890F04()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_1A5AFCC3FA890F04_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA2D597F63639838(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_DA2D597F63639838_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ADE28970C9B5BF1C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_ADE28970C9B5BF1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_51F384253127E0E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_51F384253127E0E9_OFFSET))(this);
	}

	::System::Int32 Method_1_10230A9EE3E226EA(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_10230A9EE3E226EA_OFFSET))(this, a1);
	}

	::RPG::Client::DiceCombatPhySimParameter* Method_1_517069B232A234ED()
	{
		return ((::RPG::Client::DiceCombatPhySimParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_517069B232A234ED_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_3BFD1BBF7A6AF539* get_PerformanceConfigProxy()
	{
		return ((::Class_1_3BFD1BBF7A6AF539*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_GET_PERFORMANCECONFIGPROXY_OFFSET))(this);
	}

	::System::Void set_PerformanceConfigProxy(::Class_1_3BFD1BBF7A6AF539* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BFD1BBF7A6AF539*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_SET_PERFORMANCECONFIGPROXY_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Void __PlayConfirmPerformance_b__52_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041___PLAYCONFIRMPERFORMANCE_B__52_0_OFFSET))(this);
	}
};

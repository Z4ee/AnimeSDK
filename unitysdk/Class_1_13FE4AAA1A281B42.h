#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatDiceEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_13FE4AAA1A281B42_Class_1_8798F3E640B79A4B;
class Class_1_3BFD1BBF7A6AF539;
class Class_1_43BD383C98B4C0C5_8;
class Class_1_9C8BB23B0435A836;
class Class_1_EB7FD32C4AD9446F;
class Class_2_1BB8CA1042AACD99;
class Class_3_3BDFAF4A2AB65026;
namespace RPG::Client { class DiceCombatPhySimParameter; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleDiceDisplayInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_13FE4AAA1A281B42_GET_PERFORMANCECONFIGPROXY_OFFSET UNITYSDK_OFFSET(0x11B21230)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x11B1F7F0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x11B1A230)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_10230A9EE3E226EA_OFFSET UNITYSDK_OFFSET(0x11B206C0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x11B182B0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_1535F500B174C069_OFFSET UNITYSDK_OFFSET(0x11B1AD10)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_1A5AFCC3FA890F04_OFFSET UNITYSDK_OFFSET(0x11B20550)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_1AA1173AA5F5ACBA_OFFSET UNITYSDK_OFFSET(0x11B1F150)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_1BA0CB15CCC9AEAC_OFFSET UNITYSDK_OFFSET(0x11B1C430)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x11B17D30)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11B15720)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_1F97E6972D02B73A_OFFSET UNITYSDK_OFFSET(0x11B1E4C0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_202558C3F0BACA2A_1_OFFSET UNITYSDK_OFFSET(0x11B20110)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_202558C3F0BACA2A_OFFSET UNITYSDK_OFFSET(0x11B1F420)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_21378A7EB1BCB13B_1_OFFSET UNITYSDK_OFFSET(0x11B195C0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0x11B19710)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x11B15830)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_25B6EFC63CE6F337_OFFSET UNITYSDK_OFFSET(0x11B1BF30)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_25BC92DB399D9CC4_OFFSET UNITYSDK_OFFSET(0x11B1A780)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_2A0F641337364AF8_OFFSET UNITYSDK_OFFSET(0x11B1E010)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_2B93CCEE4CF4FFA8_OFFSET UNITYSDK_OFFSET(0x11B1F2D0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x11B15B30)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x11B1E0F0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_2EAE6F29CBE62CE5_OFFSET UNITYSDK_OFFSET(0x11B20980)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x11B1E190)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x11B15780)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x11B1CBA0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11B207C0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_400278A56B43BE85_OFFSET UNITYSDK_OFFSET(0x11B165F0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_4217BB43EA2E84B6_OFFSET UNITYSDK_OFFSET(0x11B1C050)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11B1D660)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_48817C5E8B548479_OFFSET UNITYSDK_OFFSET(0x11B1FDB0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_48E0E9D29DE90B49_OFFSET UNITYSDK_OFFSET(0x11B14A80)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x11B21250)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_4C2095C57D425211_OFFSET UNITYSDK_OFFSET(0x11B1DBC0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x11B17BF0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_517069B232A234ED_OFFSET UNITYSDK_OFFSET(0x11B21150)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_51968C61834F8DAC_OFFSET UNITYSDK_OFFSET(0x11B180A0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_52A35DAB1E20C89F_OFFSET UNITYSDK_OFFSET(0x11B15D60)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x11B1D510)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_5928E4108213B98A_OFFSET UNITYSDK_OFFSET(0x11B1D410)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x11B1A430)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x11B1CB10)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_65FC837228DA1EEE_OFFSET UNITYSDK_OFFSET(0x11B151F0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_6673186E27486388_OFFSET UNITYSDK_OFFSET(0x11B1F9A0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x11B19060)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_7056397BA691DF4C_OFFSET UNITYSDK_OFFSET(0x11B1A690)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x11B20F90)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x11B1DFA0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_75302AF7F211457A_OFFSET UNITYSDK_OFFSET(0x11B1BFB0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_7767CF7D666B9058_OFFSET UNITYSDK_OFFSET(0x11B16D70)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_7791063CAE015263_OFFSET UNITYSDK_OFFSET(0x11B1FF50)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_779C05A5EFE2CCC5_OFFSET UNITYSDK_OFFSET(0x11B17730)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_785DE326292FA606_OFFSET UNITYSDK_OFFSET(0x11B19900)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_7D008406A3311600_OFFSET UNITYSDK_OFFSET(0x11B14C90)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x11B15380)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_85EEF3424D43EA07_OFFSET UNITYSDK_OFFSET(0x11B1BDA0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x11B14F10)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_8C272642BED64EA2_OFFSET UNITYSDK_OFFSET(0x11B1C9B0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_8E5C3CB57673590C_OFFSET UNITYSDK_OFFSET(0x11B1C0A0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_90C54CEDA296A0DE_OFFSET UNITYSDK_OFFSET(0x11B1AF50)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_91B0457B56843B57_1_OFFSET UNITYSDK_OFFSET(0x11B17270)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_91B0457B56843B57_OFFSET UNITYSDK_OFFSET(0x11B16C80)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_926C17FE5C60E73F_OFFSET UNITYSDK_OFFSET(0x11B1D6E0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x11B211E0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x11B18AA0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_965FEFBF42F0F1DF_OFFSET UNITYSDK_OFFSET(0x11B17D90)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11B1AC10)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_9D8893CD130270AA_OFFSET UNITYSDK_OFFSET(0x11B18150)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_A2172401030892FD_1_OFFSET UNITYSDK_OFFSET(0x11B17360)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x11B15F10)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x11B16460)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_A713D2FFB1CF1C21_OFFSET UNITYSDK_OFFSET(0x11B1F5E0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x11B19F70)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x11B15550)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_B11E1861F441DF39_OFFSET UNITYSDK_OFFSET(0x11B1FA70)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_B35BE49616037316_OFFSET UNITYSDK_OFFSET(0x11B1BCF0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_C43FB717EAB07898_OFFSET UNITYSDK_OFFSET(0x11B19CD0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_C76F79E7DA2F0E29_OFFSET UNITYSDK_OFFSET(0x11B158A0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_C99C9E07D54FBFD0_OFFSET UNITYSDK_OFFSET(0x11B202D0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11B1DF30)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11B1E080)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B1AEE0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_CB99850B30B486C9_OFFSET UNITYSDK_OFFSET(0x11B1FC00)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x11B14B00)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_DA2D597F63639838_OFFSET UNITYSDK_OFFSET(0x11B20810)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_E2623127249F0BA9_OFFSET UNITYSDK_OFFSET(0x11B1BA80)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_E374F6C9CEE8E680_1_OFFSET UNITYSDK_OFFSET(0x11B19860)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_E374F6C9CEE8E680_2_OFFSET UNITYSDK_OFFSET(0x11B19ED0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_E374F6C9CEE8E680_3_OFFSET UNITYSDK_OFFSET(0x11B1A390)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_E374F6C9CEE8E680_4_OFFSET UNITYSDK_OFFSET(0x11B1C910)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_E374F6C9CEE8E680_OFFSET UNITYSDK_OFFSET(0x11B18000)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_E571E8AF865712D0_OFFSET UNITYSDK_OFFSET(0x11B1B1A0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_E6F4FD7AF7C4C2DC_OFFSET UNITYSDK_OFFSET(0x11B14950)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0x11B1F760)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_EC61075536D10822_1_OFFSET UNITYSDK_OFFSET(0x11B1AC80)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x11B14E80)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x11B18EF0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_F460ACA412CECE46_OFFSET UNITYSDK_OFFSET(0x11B1B990)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x11B1CF20)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_F663772CC3E8C186_1_OFFSET UNITYSDK_OFFSET(0x11B162E0)
#define CLASS_1_13FE4AAA1A281B42_METHOD_1_F663772CC3E8C186_OFFSET UNITYSDK_OFFSET(0x11B17A60)
#define CLASS_1_13FE4AAA1A281B42_SET_PERFORMANCECONFIGPROXY_OFFSET UNITYSDK_OFFSET(0x11B21240)
#define CLASS_1_13FE4AAA1A281B42__CTOR_OFFSET UNITYSDK_OFFSET(0x11B146C0)
#define CLASS_1_13FE4AAA1A281B42___PLAYCONFIRMPERFORMANCE_B__66_0_OFFSET UNITYSDK_OFFSET(0x11B21260)

inline static constexpr unsigned int Class_1_13FE4AAA1A281B42_TypeDefinitionIndex = 55619;

class Class_1_13FE4AAA1A281B42 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_12; // 0x0
	::Class_3_3BDFAF4A2AB65026* Field_1_18; // 0x10
	::System::Action_2<::System::Int32, ::System::Boolean>* Field_1_17; // 0x18
	::UnityEngine::Transform* Field_1_4; // 0x20
	::Class_1_3BFD1BBF7A6AF539* _PerformanceConfigProxy_k__BackingField; // 0x28
	::RPG::Client::DiceCombatPhySimParameter* Field_1_3; // 0x30
	::Class_2_1BB8CA1042AACD99* Field_1_19; // 0x38
	::UnityEngine::Transform* Field_1_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_13FE4AAA1A281B42_Class_1_8798F3E640B79A4B*>* Field_1_11; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_9; // 0x50
	::System::Action_1<::Class_1_9C8BB23B0435A836*>* Field_1_24; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* Field_1_21; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_8; // 0x68
	::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>* Field_1_13; // 0x70
	::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>* Field_1_10; // 0x78
	::UnityEngine::Transform* Field_1_7; // 0x80
	::System::Action* Field_1_15; // 0x88
	::UnityEngine::Transform* Field_1_5; // 0x90
	::System::Boolean Field_1_25; // 0x98
	::System::Boolean Field_1_16; // 0x99
	::System::Single Field_1_23; // 0x9C
	::System::Single Field_1_14; // 0xA0
	::System::Boolean Field_1_0; // 0xA4
	::System::Boolean Field_1_20; // 0xA5
	::System::Boolean Field_1_1; // 0xA6
	::System::Boolean Field_1_22; // 0xA7

	::System::Void _ctor(::Class_2_1BB8CA1042AACD99* a1, ::Class_3_3BDFAF4A2AB65026* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::Class_3_3BDFAF4A2AB65026*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6F4FD7AF7C4C2DC(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_E6F4FD7AF7C4C2DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_48E0E9D29DE90B49(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_48E0E9D29DE90B49_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_1_EC61075536D10822(::Class_1_9C8BB23B0435A836* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_EC61075536D10822_OFFSET))(this, a1);
	}

	::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_1_65FC837228DA1EEE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_65FC837228DA1EEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Void Method_1_C76F79E7DA2F0E29(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_C76F79E7DA2F0E29_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_1_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_1_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_1_91B0457B56843B57(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_91B0457B56843B57_OFFSET))(this, a1);
	}

	::System::Void Method_1_91B0457B56843B57_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_91B0457B56843B57_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2172401030892FD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_A2172401030892FD_1_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_9C8BB23B0435A836* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F663772CC3E8C186(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_F663772CC3E8C186_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>* Method_1_52A35DAB1E20C89F()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_52A35DAB1E20C89F_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F663772CC3E8C186_1(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_F663772CC3E8C186_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_965FEFBF42F0F1DF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_965FEFBF42F0F1DF_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_E374F6C9CEE8E680_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_51968C61834F8DAC(::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_51968C61834F8DAC_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_1_7767CF7D666B9058()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_7767CF7D666B9058_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_779C05A5EFE2CCC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_779C05A5EFE2CCC5_OFFSET))(this);
	}

	::System::Void Method_1_9D8893CD130270AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_9D8893CD130270AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Boolean Method_1_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_F1BB718E73080948_OFFSET))(this);
	}

	::System::Void Method_1_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_68805403250CC013_OFFSET))(this);
	}

	::System::Void Method_1_21378A7EB1BCB13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_21378A7EB1BCB13B_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_1(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_E374F6C9CEE8E680_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_1_785DE326292FA606(::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_785DE326292FA606_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* Method_1_C43FB717EAB07898(::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_C43FB717EAB07898_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_400278A56B43BE85(::Class_1_9C8BB23B0435A836* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Class_1_9C8BB23B0435A836*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_400278A56B43BE85_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_2(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_E374F6C9CEE8E680_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void Method_1_21378A7EB1BCB13B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_21378A7EB1BCB13B_1_OFFSET))(this);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_3(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_E374F6C9CEE8E680_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F0036ED5CF109B4(::Class_1_9C8BB23B0435A836* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_7056397BA691DF4C(::System::Int32 a1, ::System::UInt32 a2, ::Class_1_43BD383C98B4C0C5_8* a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::Class_1_43BD383C98B4C0C5_8*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_7056397BA691DF4C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_25BC92DB399D9CC4(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_25BC92DB399D9CC4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1535F500B174C069(::System::Int32 a1, ::System::UInt32 a2, ::Class_1_43BD383C98B4C0C5_8* a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::Class_1_43BD383C98B4C0C5_8*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_1535F500B174C069_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_90C54CEDA296A0DE(::Class_1_9C8BB23B0435A836* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C8BB23B0435A836*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_90C54CEDA296A0DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E571E8AF865712D0(::Class_1_9C8BB23B0435A836* a1, ::Class_1_9C8BB23B0435A836* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C8BB23B0435A836*, ::Class_1_9C8BB23B0435A836*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_E571E8AF865712D0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F460ACA412CECE46(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Int32 a5, ::RPG::GameCore::DiceCombatDiceType a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Int32, ::RPG::GameCore::DiceCombatDiceType))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_F460ACA412CECE46_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_E2623127249F0BA9(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Int32 a4, ::UnityEngine::GameObject* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_E2623127249F0BA9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::IEnumerator* Method_1_B35BE49616037316(::System::UInt32 a1, ::Class_1_EB7FD32C4AD9446F* a2, ::System::UInt32 a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::Class_1_EB7FD32C4AD9446F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_B35BE49616037316_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_85EEF3424D43EA07(::System::UInt32 a1, ::Class_1_EB7FD32C4AD9446F* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_EB7FD32C4AD9446F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_85EEF3424D43EA07_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_25B6EFC63CE6F337(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_25B6EFC63CE6F337_OFFSET))(this, a1);
	}

	::System::Void Method_1_75302AF7F211457A(::System::Action_2<::System::Int32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_75302AF7F211457A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4217BB43EA2E84B6(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_4217BB43EA2E84B6_OFFSET))(this, a1);
	}

	::System::Void Method_1_1BA0CB15CCC9AEAC(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_1BA0CB15CCC9AEAC_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_4(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_E374F6C9CEE8E680_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C272642BED64EA2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_8C272642BED64EA2_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_394F35BBA0EE596A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_394F35BBA0EE596A_OFFSET))(this);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_5928E4108213B98A(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_5928E4108213B98A_OFFSET))(this, a1);
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_8E5C3CB57673590C(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_8E5C3CB57673590C_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C2095C57D425211(::System::Single a1, ::System::Action_1<::Class_1_9C8BB23B0435A836*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::Class_1_9C8BB23B0435A836*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_4C2095C57D425211_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_1_2A0F641337364AF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_2A0F641337364AF8_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::System::Void Method_1_36971FC3F16E2CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_36971FC3F16E2CEB_OFFSET))(this);
	}

	::System::Boolean Method_1_1AA1173AA5F5ACBA(::Class_2_1BB8CA1042AACD99* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_1AA1173AA5F5ACBA_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_926C17FE5C60E73F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_926C17FE5C60E73F_OFFSET))(this);
	}

	::System::Int32 Method_1_2B93CCEE4CF4FFA8()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_2B93CCEE4CF4FFA8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_202558C3F0BACA2A()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_202558C3F0BACA2A_OFFSET))(this);
	}

	::Class_1_9C8BB23B0435A836* Method_1_A713D2FFB1CF1C21(::Class_1_0E117AC86D8E5BCA* a1)
	{
		return ((::Class_1_9C8BB23B0435A836*(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_A713D2FFB1CF1C21_OFFSET))(this, a1);
	}

	::System::Void Method_1_E83C86A203FAF2A6(::Class_1_9C8BB23B0435A836* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC61075536D10822_1(::Class_1_9C8BB23B0435A836* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_EC61075536D10822_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_063ADB01C44981A7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_063ADB01C44981A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_6673186E27486388(::Class_1_9C8BB23B0435A836* a1, ::Class_1_9C8BB23B0435A836* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C8BB23B0435A836*, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_6673186E27486388_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B11E1861F441DF39(::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_B11E1861F441DF39_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB99850B30B486C9(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_CB99850B30B486C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_48817C5E8B548479(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_48817C5E8B548479_OFFSET))(this, a1);
	}

	::System::Void Method_1_7791063CAE015263(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_7791063CAE015263_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F97E6972D02B73A(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatDiceEffectType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatDiceEffectType))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_1F97E6972D02B73A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D008406A3311600()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_7D008406A3311600_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_202558C3F0BACA2A_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_202558C3F0BACA2A_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* Method_1_C99C9E07D54FBFD0(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_C99C9E07D54FBFD0_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1A5AFCC3FA890F04()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_1A5AFCC3FA890F04_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA2D597F63639838(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_DA2D597F63639838_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2EAE6F29CBE62CE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_2EAE6F29CBE62CE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_73052712910A9EE7_OFFSET))(this);
	}

	::System::Int32 Method_1_10230A9EE3E226EA(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_10230A9EE3E226EA_OFFSET))(this, a1);
	}

	::RPG::Client::DiceCombatPhySimParameter* Method_1_517069B232A234ED()
	{
		return ((::RPG::Client::DiceCombatPhySimParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_517069B232A234ED_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_3BFD1BBF7A6AF539* get_PerformanceConfigProxy()
	{
		return ((::Class_1_3BFD1BBF7A6AF539*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_GET_PERFORMANCECONFIGPROXY_OFFSET))(this);
	}

	::System::Void set_PerformanceConfigProxy(::Class_1_3BFD1BBF7A6AF539* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BFD1BBF7A6AF539*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_SET_PERFORMANCECONFIGPROXY_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9C8BB23B0435A836*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Void __PlayConfirmPerformance_b__66_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___PLAYCONFIRMPERFORMANCE_B__66_0_OFFSET))(this);
	}
};

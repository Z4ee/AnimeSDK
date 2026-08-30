#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_388AB69FB9FDF843_Struct_2_06087D77EC5E548E.h"
#include "unitysdk/Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8.h"
#include "unitysdk/RPG/GameCore/EMatchAIState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_6B1FB1C4D415B966;
class Class_2_230F5EDDB35DAEBA;
class Class_2_A59080F652920B7A;
class Class_3_CD59F26A5F0E803D;
namespace RPG::Client { class RoadRashGameModifier_MatchLevelAI; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_388AB69FB9FDF843_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1886E120)
#define CLASS_2_388AB69FB9FDF843_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x18871620)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_093E660A6EB005F3_OFFSET UNITYSDK_OFFSET(0x188706D0)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0x1886E610)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_188B54FD1E2EA526_OFFSET UNITYSDK_OFFSET(0x188717A0)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_1C5EC54583F2FF24_OFFSET UNITYSDK_OFFSET(0x18871BD0)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_354780033A0FE7BD_OFFSET UNITYSDK_OFFSET(0x18871070)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_53B766FA15AA1F3D_OFFSET UNITYSDK_OFFSET(0x18871740)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x188715A0)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x1886E270)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_66651391F617BE91_OFFSET UNITYSDK_OFFSET(0x18871D70)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x1886E180)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_80B92FCB538C0094_OFFSET UNITYSDK_OFFSET(0x1886FD90)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_831CFC9B669CF9E6_OFFSET UNITYSDK_OFFSET(0x18870A90)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_8BFAF8F29CCB1DA7_OFFSET UNITYSDK_OFFSET(0x18870C30)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x1886E410)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_9C814A85CBF45139_OFFSET UNITYSDK_OFFSET(0x1886FC30)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_AE8E0C9A69334FFB_OFFSET UNITYSDK_OFFSET(0x18871C90)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_B5C077AEB094903F_OFFSET UNITYSDK_OFFSET(0x18871190)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_C8110F9A5AB27813_OFFSET UNITYSDK_OFFSET(0x1886E4D0)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_DCB37D75F9596BF9_1_OFFSET UNITYSDK_OFFSET(0x188716D0)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_DCB37D75F9596BF9_OFFSET UNITYSDK_OFFSET(0x18871660)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_E6B4D8E9B33CB8DA_OFFSET UNITYSDK_OFFSET(0x1886FA00)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_E77EFC24DB3494AC_OFFSET UNITYSDK_OFFSET(0x18870500)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_F336FA3684E0A97F_OFFSET UNITYSDK_OFFSET(0x18871EE0)
#define CLASS_2_388AB69FB9FDF843_METHOD_2_FA17F26CD34EF68F_OFFSET UNITYSDK_OFFSET(0x18870EF0)
#define CLASS_2_388AB69FB9FDF843_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1886E590)
#define CLASS_2_388AB69FB9FDF843_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1886ED30)
#define CLASS_2_388AB69FB9FDF843_TICK_OFFSET UNITYSDK_OFFSET(0x1886EE30)
#define CLASS_2_388AB69FB9FDF843__CTOR_OFFSET UNITYSDK_OFFSET(0x1886E010)

inline static constexpr unsigned int Class_2_388AB69FB9FDF843_TypeDefinitionIndex = 58570;

class Class_2_388AB69FB9FDF843 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* PGLMJKMOGNO; // 0x0
	// static const ::System::Single PBEEEIPJBHA; // 0x0
	// static const ::System::Single OAAPGDFGELE; // 0x0
	// static const ::System::Single IABFGCLGKBF; // 0x0
	// static const ::System::Single NCMHHOKKFNI; // 0x0
	// static const ::System::Single HLPLCAIDBJM; // 0x0
	// static const ::System::Single EMKPNDCGCNE; // 0x0
	// static const ::System::Single ADEEALDNCJC; // 0x0
	// static const ::System::Single JCFBHBABBKN; // 0x0
	// static const ::System::Single MFGOMEPGBCO; // 0x0
	// static const ::System::Single ICAANGJNJHH; // 0x0
	// static const ::System::Single JNNMIPKMCGK; // 0x0
	// static const ::System::Single GJJFABAJLHC; // 0x0
	// static const ::System::Single JHHGNPNBBFP; // 0x0
	// static const ::System::Single KKMKKDONAOO; // 0x0
	// static const ::System::Single OFKFGIPLANP; // 0x0
	// static const ::System::Single GLDPLDHFNLJ; // 0x0
	// static const ::System::Single LEJNPJAEPNO; // 0x0
	// static const ::System::Single CHLPOPFECHI; // 0x0
	// static const ::System::Single LFMAOOLKKOI; // 0x0
	// static const ::System::Single ODMLLCLKJBF; // 0x0
	// static const ::System::Single OLPCMMANADH; // 0x0
	::Class_2_388AB69FB9FDF843_Struct_2_06087D77EC5E548E KEFHBMIBBIC; // 0x18
	::RPG::Client::RoadRashGameModifier_MatchLevelAI* OFKGLJOAMLD; // 0x40
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
	::System::Single IHAAGLCDMGK; // 0x50
	::System::Boolean IENDFFHOECA; // 0x54
	::System::Boolean JKHCAIANNNL; // 0x55
	::RPG::GameCore::EMatchAIState LMPDFBOMMDB; // 0x58
	::System::Single FHIPFHGCGKH; // 0x5C
	::System::Int32 NCDPMNOPPHJ; // 0x60
	::System::Single MKCHHFMKCFP; // 0x64
	::System::Boolean LAODGODMBKG; // 0x68
	::System::Boolean KCOGALCECDM; // 0x69
	::System::Boolean ALADCDEMINO; // 0x6A
	::System::Boolean DPMPGPAHNLJ; // 0x6B
	::System::Single DCIBNEKENPN; // 0x6C
	::System::Single BCFHFMJNMCF; // 0x70
	::System::UInt32 DJPPJJCHCHE; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_MatchLevelAI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_MatchLevelAI*))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_GETCONFIG_OFFSET))(this);
	}

	::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8 Method_2_80B92FCB538C0094()
	{
		return ((::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_80B92FCB538C0094_OFFSET))(this);
	}

	static ::System::Void Method_2_53B766FA15AA1F3D(::System::String*& a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*&, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_53B766FA15AA1F3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_DCB37D75F9596BF9(::System::Single& a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::System::Single&, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_DCB37D75F9596BF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_DCB37D75F9596BF9_1(::System::Single& a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::System::Single&, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_DCB37D75F9596BF9_1_OFFSET))(a1, a2);
	}

	::System::Void Method_2_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_1283EC0876EAAACF_OFFSET))(this);
	}

	static ::System::Int32 Method_2_188B54FD1E2EA526(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_188B54FD1E2EA526_OFFSET))(a1, a2);
	}

	::System::Void Method_2_E77EFC24DB3494AC(::Class_2_230F5EDDB35DAEBA* a1, ::Class_3_CD59F26A5F0E803D* a2, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_3_CD59F26A5F0E803D*, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_E77EFC24DB3494AC_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_1C5EC54583F2FF24(::Class_2_A59080F652920B7A* a1)
	{
		return ((::System::Boolean(*)(::Class_2_A59080F652920B7A*))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_1C5EC54583F2FF24_OFFSET))(a1);
	}

	::System::Void Method_2_8BFAF8F29CCB1DA7(::Class_2_230F5EDDB35DAEBA* a1, ::System::Single a2, ::System::Single a3, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::Single, ::System::Single, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_8BFAF8F29CCB1DA7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_831CFC9B669CF9E6(::Class_2_230F5EDDB35DAEBA* a1, ::RPG::GameCore::EMatchAIState a2, ::System::String* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::RPG::GameCore::EMatchAIState, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_831CFC9B669CF9E6_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_2_FA17F26CD34EF68F(::System::Single a1, ::System::Single a2, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8 a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_FA17F26CD34EF68F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_2_354780033A0FE7BD(::Class_2_230F5EDDB35DAEBA* a1, ::Class_2_230F5EDDB35DAEBA* a2, ::System::Single a3, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8 a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_2_230F5EDDB35DAEBA*, ::System::Single, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_354780033A0FE7BD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_2_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_570C5557A774C69E_OFFSET))(this, a1);
	}

	::System::Single Method_2_66651391F617BE91(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_66651391F617BE91_OFFSET))(this, a1);
	}

	::System::Void Method_2_093E660A6EB005F3(::Class_2_230F5EDDB35DAEBA* a1, ::Class_3_CD59F26A5F0E803D* a2, ::System::Single a3, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_3_CD59F26A5F0E803D*, ::System::Single, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_093E660A6EB005F3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_F336FA3684E0A97F(::Class_2_230F5EDDB35DAEBA* a1, ::Class_1_6B1FB1C4D415B966* a2, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8 a3, ::System::String*& a4, ::System::Single& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::Class_1_6B1FB1C4D415B966*, ::Class_2_388AB69FB9FDF843_Struct_2_BB5652B98DD9D8F8, ::System::String*&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_F336FA3684E0A97F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	static ::System::Void Method_2_9C814A85CBF45139(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Void(*)(::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_9C814A85CBF45139_OFFSET))(a1);
	}

	::System::Void Method_2_B5C077AEB094903F(::Class_2_230F5EDDB35DAEBA* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_B5C077AEB094903F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8110F9A5AB27813()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_C8110F9A5AB27813_OFFSET))(this);
	}

	::System::Void Method_2_E6B4D8E9B33CB8DA(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_E6B4D8E9B33CB8DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE8E0C9A69334FFB(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_AE8E0C9A69334FFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}
};

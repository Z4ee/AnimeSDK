#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_1_9EBCF6317BDAE2CB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193CEF00)
#define CLASS_1_9EBCF6317BDAE2CB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193CEF40)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x193CEF50)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_100_OFFSET UNITYSDK_OFFSET(0x193CFFB0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_101_OFFSET UNITYSDK_OFFSET(0x193CFFE0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_102_OFFSET UNITYSDK_OFFSET(0x193CFFF0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_103_OFFSET UNITYSDK_OFFSET(0x193D0020)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_104_OFFSET UNITYSDK_OFFSET(0x193D0030)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_105_OFFSET UNITYSDK_OFFSET(0x193D0070)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_106_OFFSET UNITYSDK_OFFSET(0x193D0080)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_107_OFFSET UNITYSDK_OFFSET(0x193D0090)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_108_OFFSET UNITYSDK_OFFSET(0x193D00A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_109_OFFSET UNITYSDK_OFFSET(0x193D00D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_10_OFFSET UNITYSDK_OFFSET(0x193CF230)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_110_OFFSET UNITYSDK_OFFSET(0x193D0100)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_111_OFFSET UNITYSDK_OFFSET(0x193D0170)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_112_OFFSET UNITYSDK_OFFSET(0x193D01C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_11_OFFSET UNITYSDK_OFFSET(0x193CF280)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_12_OFFSET UNITYSDK_OFFSET(0x193CF2E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_13_OFFSET UNITYSDK_OFFSET(0x193CF330)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_14_OFFSET UNITYSDK_OFFSET(0x193CF360)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_15_OFFSET UNITYSDK_OFFSET(0x193CF370)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_16_OFFSET UNITYSDK_OFFSET(0x193CF380)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_17_OFFSET UNITYSDK_OFFSET(0x193CF3B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_18_OFFSET UNITYSDK_OFFSET(0x193CF3C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_19_OFFSET UNITYSDK_OFFSET(0x193CF3D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x193CEF80)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_20_OFFSET UNITYSDK_OFFSET(0x193CF3E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_21_OFFSET UNITYSDK_OFFSET(0x193CF420)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_22_OFFSET UNITYSDK_OFFSET(0x193CF460)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_23_OFFSET UNITYSDK_OFFSET(0x193CF470)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_24_OFFSET UNITYSDK_OFFSET(0x193CF4B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_25_OFFSET UNITYSDK_OFFSET(0x193CF4F0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_26_OFFSET UNITYSDK_OFFSET(0x193CF540)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_27_OFFSET UNITYSDK_OFFSET(0x193CF590)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_28_OFFSET UNITYSDK_OFFSET(0x193CF5E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_29_OFFSET UNITYSDK_OFFSET(0x193CF610)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_2_OFFSET UNITYSDK_OFFSET(0x193CEFD0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_30_OFFSET UNITYSDK_OFFSET(0x193CF650)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_31_OFFSET UNITYSDK_OFFSET(0x193CF680)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_32_OFFSET UNITYSDK_OFFSET(0x193CF6B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_33_OFFSET UNITYSDK_OFFSET(0x193CF6C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_34_OFFSET UNITYSDK_OFFSET(0x193CF6F0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_35_OFFSET UNITYSDK_OFFSET(0x193CF700)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_36_OFFSET UNITYSDK_OFFSET(0x193CF740)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_37_OFFSET UNITYSDK_OFFSET(0x193CF750)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_38_OFFSET UNITYSDK_OFFSET(0x193CF760)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_39_OFFSET UNITYSDK_OFFSET(0x193CF7A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_3_OFFSET UNITYSDK_OFFSET(0x193CF000)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_40_OFFSET UNITYSDK_OFFSET(0x193CF7D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_41_OFFSET UNITYSDK_OFFSET(0x193CF7E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_42_OFFSET UNITYSDK_OFFSET(0x193CF820)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_43_OFFSET UNITYSDK_OFFSET(0x193CF870)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_44_OFFSET UNITYSDK_OFFSET(0x193CF8A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_45_OFFSET UNITYSDK_OFFSET(0x193CF8B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_46_OFFSET UNITYSDK_OFFSET(0x193CF900)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_47_OFFSET UNITYSDK_OFFSET(0x193CF910)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_48_OFFSET UNITYSDK_OFFSET(0x193CF920)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_49_OFFSET UNITYSDK_OFFSET(0x193CF950)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_4_OFFSET UNITYSDK_OFFSET(0x193CF050)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_50_OFFSET UNITYSDK_OFFSET(0x193CF960)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_51_OFFSET UNITYSDK_OFFSET(0x193CF970)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_52_OFFSET UNITYSDK_OFFSET(0x193CF980)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_53_OFFSET UNITYSDK_OFFSET(0x193CF990)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_54_OFFSET UNITYSDK_OFFSET(0x193CF9D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_55_OFFSET UNITYSDK_OFFSET(0x193CFA10)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_56_OFFSET UNITYSDK_OFFSET(0x193CFA50)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_57_OFFSET UNITYSDK_OFFSET(0x193CFA60)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_58_OFFSET UNITYSDK_OFFSET(0x193CFA70)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_59_OFFSET UNITYSDK_OFFSET(0x193CFA80)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_5_OFFSET UNITYSDK_OFFSET(0x193CF090)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_60_OFFSET UNITYSDK_OFFSET(0x193CFA90)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_61_OFFSET UNITYSDK_OFFSET(0x193CFAA0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_62_OFFSET UNITYSDK_OFFSET(0x193CFAE0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_63_OFFSET UNITYSDK_OFFSET(0x193CFAF0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_64_OFFSET UNITYSDK_OFFSET(0x193CFB30)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_65_OFFSET UNITYSDK_OFFSET(0x193CFB70)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_66_OFFSET UNITYSDK_OFFSET(0x193CFB80)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_67_OFFSET UNITYSDK_OFFSET(0x193CFB90)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_68_OFFSET UNITYSDK_OFFSET(0x193CFBA0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_69_OFFSET UNITYSDK_OFFSET(0x193CFBB0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_6_OFFSET UNITYSDK_OFFSET(0x193CF0E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_70_OFFSET UNITYSDK_OFFSET(0x193CFBC0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_71_OFFSET UNITYSDK_OFFSET(0x193CFC00)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_72_OFFSET UNITYSDK_OFFSET(0x193CFC40)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_73_OFFSET UNITYSDK_OFFSET(0x193CFC80)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_74_OFFSET UNITYSDK_OFFSET(0x193CFCB0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_75_OFFSET UNITYSDK_OFFSET(0x193CFCF0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_76_OFFSET UNITYSDK_OFFSET(0x193CFD00)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_77_OFFSET UNITYSDK_OFFSET(0x193CFD10)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_78_OFFSET UNITYSDK_OFFSET(0x193CFD20)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_79_OFFSET UNITYSDK_OFFSET(0x193CFD60)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_7_OFFSET UNITYSDK_OFFSET(0x193CF110)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_80_OFFSET UNITYSDK_OFFSET(0x193CFD70)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_81_OFFSET UNITYSDK_OFFSET(0x193CFDA0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_82_OFFSET UNITYSDK_OFFSET(0x193CFDB0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_83_OFFSET UNITYSDK_OFFSET(0x193CFDC0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_84_OFFSET UNITYSDK_OFFSET(0x193CFDD0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_85_OFFSET UNITYSDK_OFFSET(0x193CFE10)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_86_OFFSET UNITYSDK_OFFSET(0x193CFE40)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_87_OFFSET UNITYSDK_OFFSET(0x193CFE50)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_88_OFFSET UNITYSDK_OFFSET(0x193CFE60)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_89_OFFSET UNITYSDK_OFFSET(0x193CFE90)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_8_OFFSET UNITYSDK_OFFSET(0x193CF180)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_90_OFFSET UNITYSDK_OFFSET(0x193CFEA0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_91_OFFSET UNITYSDK_OFFSET(0x193CFED0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_92_OFFSET UNITYSDK_OFFSET(0x193CFEE0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_93_OFFSET UNITYSDK_OFFSET(0x193CFEF0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_94_OFFSET UNITYSDK_OFFSET(0x193CFF00)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_95_OFFSET UNITYSDK_OFFSET(0x193CFF40)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_96_OFFSET UNITYSDK_OFFSET(0x193CFF70)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_97_OFFSET UNITYSDK_OFFSET(0x193CFF80)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_98_OFFSET UNITYSDK_OFFSET(0x193CFF90)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_99_OFFSET UNITYSDK_OFFSET(0x193CFFA0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_9_OFFSET UNITYSDK_OFFSET(0x193CF1B0)

inline static constexpr unsigned int Class_1_9EBCF6317BDAE2CB___c_TypeDefinitionIndex = 23007;

class Class_1_9EBCF6317BDAE2CB___c : public ::System::Object
{
public:
	static ::Class_1_9EBCF6317BDAE2CB___c** StaticGet___9()
	{
		return (::Class_1_9EBCF6317BDAE2CB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EBCF6317BDAE2CB___c_TypeDefinitionIndex)->GetStaticField(0x67F10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_0(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_0_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_1(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_2(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_3(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_3_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_4(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_4_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_5(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_5_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_6(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_6_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_7(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_7_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_8(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_8_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_9(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_9_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_10(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_10_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_11(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_11_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_12(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_12_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_13(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_13_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_14(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_14_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_15(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_15_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_16(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_16_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_17(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_17_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_18(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_18_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_19(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_19_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_20(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_20_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_21(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_21_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_22(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_22_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_23(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_23_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_24(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_24_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_25(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_25_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_26(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_26_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_27(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_27_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_28(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_28_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_29(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_29_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_30(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_30_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_31(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_31_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_32(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_32_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_33(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_33_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_34(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_34_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_35(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_35_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_36(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_36_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_37(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_37_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_38(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_38_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_39(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_39_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_40(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_40_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_41(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_41_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_42(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_42_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_43(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_43_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_44(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_44_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_45(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_45_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_46(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_46_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_47(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_47_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_48(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_48_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_49(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_49_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_50(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_50_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_51(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_51_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_52(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_52_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_53(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_53_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_54(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_54_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_55(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_55_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_56(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_56_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_57(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_57_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_58(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_58_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_59(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_59_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_60(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_60_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_61(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_61_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_62(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_62_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_63(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_63_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_64(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_64_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_65(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_65_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_66(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_66_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_67(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_67_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_68(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_68_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_69(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_69_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_70(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_70_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_71(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_71_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_72(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_72_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_73(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_73_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_74(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_74_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_75(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_75_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_76(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_76_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_77(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_77_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_78(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_78_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_79(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_79_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_80(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_80_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_81(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_81_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_82(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_82_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_83(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_83_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_84(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_84_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_85(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_85_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_86(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_86_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_87(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_87_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_88(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_88_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_89(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_89_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_90(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_90_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_91(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_91_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_92(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_92_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_93(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_93_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_94(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_94_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_95(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_95_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_96(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_96_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_97(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_97_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_98(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_98_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_99(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_99_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_100(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_100_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_101(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_101_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_102(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_102_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_103(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_103_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_104(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_104_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_105(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_105_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_106(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_106_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_107(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_107_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_108(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_108_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_109(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_109_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_110(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_110_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_111(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_111_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_112(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_112_OFFSET))(this, a1);
	}
};

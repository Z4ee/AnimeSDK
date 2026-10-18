#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_1_9EBCF6317BDAE2CB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D132680)
#define CLASS_1_9EBCF6317BDAE2CB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1326C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1D1326D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_100_OFFSET UNITYSDK_OFFSET(0x1D133770)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_101_OFFSET UNITYSDK_OFFSET(0x1D133780)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_102_OFFSET UNITYSDK_OFFSET(0x1D133790)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_103_OFFSET UNITYSDK_OFFSET(0x1D1337C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_104_OFFSET UNITYSDK_OFFSET(0x1D1337D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_105_OFFSET UNITYSDK_OFFSET(0x1D133800)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_106_OFFSET UNITYSDK_OFFSET(0x1D133810)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_107_OFFSET UNITYSDK_OFFSET(0x1D133850)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_108_OFFSET UNITYSDK_OFFSET(0x1D133860)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_109_OFFSET UNITYSDK_OFFSET(0x1D133870)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_10_OFFSET UNITYSDK_OFFSET(0x1D1329B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_110_OFFSET UNITYSDK_OFFSET(0x1D133880)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_111_OFFSET UNITYSDK_OFFSET(0x1D1338B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_112_OFFSET UNITYSDK_OFFSET(0x1D1338E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_113_OFFSET UNITYSDK_OFFSET(0x1D133950)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_114_OFFSET UNITYSDK_OFFSET(0x1D1339A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_11_OFFSET UNITYSDK_OFFSET(0x1D132A00)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_12_OFFSET UNITYSDK_OFFSET(0x1D132A60)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_13_OFFSET UNITYSDK_OFFSET(0x1D132AB0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_14_OFFSET UNITYSDK_OFFSET(0x1D132AE0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_15_OFFSET UNITYSDK_OFFSET(0x1D132AF0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_16_OFFSET UNITYSDK_OFFSET(0x1D132B00)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_17_OFFSET UNITYSDK_OFFSET(0x1D132B30)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_18_OFFSET UNITYSDK_OFFSET(0x1D132B40)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_19_OFFSET UNITYSDK_OFFSET(0x1D132B50)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x1D132700)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_20_OFFSET UNITYSDK_OFFSET(0x1D132B60)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_21_OFFSET UNITYSDK_OFFSET(0x1D132B70)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_22_OFFSET UNITYSDK_OFFSET(0x1D132BB0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_23_OFFSET UNITYSDK_OFFSET(0x1D132BC0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_24_OFFSET UNITYSDK_OFFSET(0x1D132C00)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_25_OFFSET UNITYSDK_OFFSET(0x1D132C40)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_26_OFFSET UNITYSDK_OFFSET(0x1D132C90)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_27_OFFSET UNITYSDK_OFFSET(0x1D132CE0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_28_OFFSET UNITYSDK_OFFSET(0x1D132D30)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_29_OFFSET UNITYSDK_OFFSET(0x1D132D60)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_2_OFFSET UNITYSDK_OFFSET(0x1D132750)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_30_OFFSET UNITYSDK_OFFSET(0x1D132DA0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_31_OFFSET UNITYSDK_OFFSET(0x1D132DD0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_32_OFFSET UNITYSDK_OFFSET(0x1D132E00)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_33_OFFSET UNITYSDK_OFFSET(0x1D132E10)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_34_OFFSET UNITYSDK_OFFSET(0x1D132E40)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_35_OFFSET UNITYSDK_OFFSET(0x1D132E50)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_36_OFFSET UNITYSDK_OFFSET(0x1D132E90)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_37_OFFSET UNITYSDK_OFFSET(0x1D132EA0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_38_OFFSET UNITYSDK_OFFSET(0x1D132EB0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_39_OFFSET UNITYSDK_OFFSET(0x1D132EF0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_3_OFFSET UNITYSDK_OFFSET(0x1D132780)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_40_OFFSET UNITYSDK_OFFSET(0x1D132F20)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_41_OFFSET UNITYSDK_OFFSET(0x1D132F30)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_42_OFFSET UNITYSDK_OFFSET(0x1D132F70)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_43_OFFSET UNITYSDK_OFFSET(0x1D132FC0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_44_OFFSET UNITYSDK_OFFSET(0x1D132FF0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_45_OFFSET UNITYSDK_OFFSET(0x1D133000)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_46_OFFSET UNITYSDK_OFFSET(0x1D133050)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_47_OFFSET UNITYSDK_OFFSET(0x1D133060)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_48_OFFSET UNITYSDK_OFFSET(0x1D133070)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_49_OFFSET UNITYSDK_OFFSET(0x1D1330A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_4_OFFSET UNITYSDK_OFFSET(0x1D1327D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_50_OFFSET UNITYSDK_OFFSET(0x1D1330B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_51_OFFSET UNITYSDK_OFFSET(0x1D1330C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_52_OFFSET UNITYSDK_OFFSET(0x1D1330D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_53_OFFSET UNITYSDK_OFFSET(0x1D1330E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_54_OFFSET UNITYSDK_OFFSET(0x1D133120)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_55_OFFSET UNITYSDK_OFFSET(0x1D133160)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_56_OFFSET UNITYSDK_OFFSET(0x1D1331A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_57_OFFSET UNITYSDK_OFFSET(0x1D1331B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_58_OFFSET UNITYSDK_OFFSET(0x1D1331F0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_59_OFFSET UNITYSDK_OFFSET(0x1D133200)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_5_OFFSET UNITYSDK_OFFSET(0x1D132810)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_60_OFFSET UNITYSDK_OFFSET(0x1D133210)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_61_OFFSET UNITYSDK_OFFSET(0x1D133220)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_62_OFFSET UNITYSDK_OFFSET(0x1D133230)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_63_OFFSET UNITYSDK_OFFSET(0x1D133270)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_64_OFFSET UNITYSDK_OFFSET(0x1D133280)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_65_OFFSET UNITYSDK_OFFSET(0x1D1332C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_66_OFFSET UNITYSDK_OFFSET(0x1D133300)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_67_OFFSET UNITYSDK_OFFSET(0x1D133310)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_68_OFFSET UNITYSDK_OFFSET(0x1D133320)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_69_OFFSET UNITYSDK_OFFSET(0x1D133330)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_6_OFFSET UNITYSDK_OFFSET(0x1D132860)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_70_OFFSET UNITYSDK_OFFSET(0x1D133340)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_71_OFFSET UNITYSDK_OFFSET(0x1D133350)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_72_OFFSET UNITYSDK_OFFSET(0x1D133390)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_73_OFFSET UNITYSDK_OFFSET(0x1D1333D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_74_OFFSET UNITYSDK_OFFSET(0x1D133410)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_75_OFFSET UNITYSDK_OFFSET(0x1D133440)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_76_OFFSET UNITYSDK_OFFSET(0x1D133480)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_77_OFFSET UNITYSDK_OFFSET(0x1D133490)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_78_OFFSET UNITYSDK_OFFSET(0x1D1334A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_79_OFFSET UNITYSDK_OFFSET(0x1D1334B0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_7_OFFSET UNITYSDK_OFFSET(0x1D132890)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_80_OFFSET UNITYSDK_OFFSET(0x1D1334F0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_81_OFFSET UNITYSDK_OFFSET(0x1D133500)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_82_OFFSET UNITYSDK_OFFSET(0x1D133530)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_83_OFFSET UNITYSDK_OFFSET(0x1D133540)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_84_OFFSET UNITYSDK_OFFSET(0x1D133550)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_85_OFFSET UNITYSDK_OFFSET(0x1D133560)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_86_OFFSET UNITYSDK_OFFSET(0x1D1335A0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_87_OFFSET UNITYSDK_OFFSET(0x1D1335D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_88_OFFSET UNITYSDK_OFFSET(0x1D1335E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_89_OFFSET UNITYSDK_OFFSET(0x1D1335F0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_8_OFFSET UNITYSDK_OFFSET(0x1D132900)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_90_OFFSET UNITYSDK_OFFSET(0x1D133620)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_91_OFFSET UNITYSDK_OFFSET(0x1D133630)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_92_OFFSET UNITYSDK_OFFSET(0x1D133660)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_93_OFFSET UNITYSDK_OFFSET(0x1D133670)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_94_OFFSET UNITYSDK_OFFSET(0x1D1336C0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_95_OFFSET UNITYSDK_OFFSET(0x1D1336D0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_96_OFFSET UNITYSDK_OFFSET(0x1D1336E0)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_97_OFFSET UNITYSDK_OFFSET(0x1D133720)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_98_OFFSET UNITYSDK_OFFSET(0x1D133750)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_99_OFFSET UNITYSDK_OFFSET(0x1D133760)
#define CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_9_OFFSET UNITYSDK_OFFSET(0x1D132930)

inline static constexpr unsigned int Class_1_9EBCF6317BDAE2CB___c_TypeDefinitionIndex = 23861;

class Class_1_9EBCF6317BDAE2CB___c : public ::System::Object
{
public:
	static ::Class_1_9EBCF6317BDAE2CB___c** StaticGet___9()
	{
		return (::Class_1_9EBCF6317BDAE2CB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EBCF6317BDAE2CB___c_TypeDefinitionIndex)->GetStaticField(0x43AA0);
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

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_113(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_113_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* __cctor_b__2_114(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_9EBCF6317BDAE2CB___C___CCTOR_B__2_114_OFFSET))(this, a1);
	}
};

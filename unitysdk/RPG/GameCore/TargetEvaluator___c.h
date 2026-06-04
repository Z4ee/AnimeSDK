#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETEVALUATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D02540)
#define RPG_GAMECORE_TARGETEVALUATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D02570)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_0_OFFSET UNITYSDK_OFFSET(0x19D02580)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_100_OFFSET UNITYSDK_OFFSET(0x19D07690)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_101_OFFSET UNITYSDK_OFFSET(0x19D07790)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_102_OFFSET UNITYSDK_OFFSET(0x19D07850)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_103_OFFSET UNITYSDK_OFFSET(0x19D07910)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_104_OFFSET UNITYSDK_OFFSET(0x19D079D0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_105_OFFSET UNITYSDK_OFFSET(0x19D07B40)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_106_OFFSET UNITYSDK_OFFSET(0x19D07C20)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_107_OFFSET UNITYSDK_OFFSET(0x19D07C50)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_108_OFFSET UNITYSDK_OFFSET(0x19D07CC0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_10_OFFSET UNITYSDK_OFFSET(0x19D028F0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_11_OFFSET UNITYSDK_OFFSET(0x19D02980)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_12_OFFSET UNITYSDK_OFFSET(0x19D02A30)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_13_OFFSET UNITYSDK_OFFSET(0x19D02AA0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_14_OFFSET UNITYSDK_OFFSET(0x19D02B10)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_15_OFFSET UNITYSDK_OFFSET(0x19D02BD0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_16_OFFSET UNITYSDK_OFFSET(0x19D02C90)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_17_OFFSET UNITYSDK_OFFSET(0x19D02D70)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_18_OFFSET UNITYSDK_OFFSET(0x19D02E30)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_19_OFFSET UNITYSDK_OFFSET(0x19D02EF0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_1_OFFSET UNITYSDK_OFFSET(0x19D025B0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_20_OFFSET UNITYSDK_OFFSET(0x19D02FB0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_21_OFFSET UNITYSDK_OFFSET(0x19D030B0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_22_OFFSET UNITYSDK_OFFSET(0x19D031B0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_23_OFFSET UNITYSDK_OFFSET(0x19D03270)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_24_OFFSET UNITYSDK_OFFSET(0x19D03360)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_25_OFFSET UNITYSDK_OFFSET(0x19D03460)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_26_OFFSET UNITYSDK_OFFSET(0x19D03580)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_27_OFFSET UNITYSDK_OFFSET(0x19D036A0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_28_OFFSET UNITYSDK_OFFSET(0x19D03780)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_29_OFFSET UNITYSDK_OFFSET(0x19D03860)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_2_OFFSET UNITYSDK_OFFSET(0x19D025E0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_30_OFFSET UNITYSDK_OFFSET(0x19D03960)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_31_OFFSET UNITYSDK_OFFSET(0x19D03A40)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_32_OFFSET UNITYSDK_OFFSET(0x19D03B20)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_33_OFFSET UNITYSDK_OFFSET(0x19D03BE0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_34_OFFSET UNITYSDK_OFFSET(0x19D03CC0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_35_OFFSET UNITYSDK_OFFSET(0x19D03D80)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_36_OFFSET UNITYSDK_OFFSET(0x19D03E80)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_37_OFFSET UNITYSDK_OFFSET(0x19D03F40)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_38_OFFSET UNITYSDK_OFFSET(0x19D04000)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_39_OFFSET UNITYSDK_OFFSET(0x19D041B0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_3_OFFSET UNITYSDK_OFFSET(0x19D02650)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_40_OFFSET UNITYSDK_OFFSET(0x19D04290)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_41_OFFSET UNITYSDK_OFFSET(0x19D04350)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_42_OFFSET UNITYSDK_OFFSET(0x19D04440)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_43_OFFSET UNITYSDK_OFFSET(0x19D04560)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_44_OFFSET UNITYSDK_OFFSET(0x19D046C0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_45_OFFSET UNITYSDK_OFFSET(0x19D04780)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_46_OFFSET UNITYSDK_OFFSET(0x19D048A0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_47_OFFSET UNITYSDK_OFFSET(0x19D04960)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_48_OFFSET UNITYSDK_OFFSET(0x19D04A20)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_49_OFFSET UNITYSDK_OFFSET(0x19D04B90)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_4_OFFSET UNITYSDK_OFFSET(0x19D026E0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_50_OFFSET UNITYSDK_OFFSET(0x19D04C50)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_51_OFFSET UNITYSDK_OFFSET(0x19D04D10)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_52_OFFSET UNITYSDK_OFFSET(0x19D04DD0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_53_OFFSET UNITYSDK_OFFSET(0x19D04E90)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_54_OFFSET UNITYSDK_OFFSET(0x19D04F90)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_55_OFFSET UNITYSDK_OFFSET(0x19D05090)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_56_OFFSET UNITYSDK_OFFSET(0x19D05190)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_57_OFFSET UNITYSDK_OFFSET(0x19D05250)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_58_OFFSET UNITYSDK_OFFSET(0x19D05310)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_59_OFFSET UNITYSDK_OFFSET(0x19D053D0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_5_OFFSET UNITYSDK_OFFSET(0x19D02760)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_60_OFFSET UNITYSDK_OFFSET(0x19D05490)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_61_OFFSET UNITYSDK_OFFSET(0x19D05550)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_62_OFFSET UNITYSDK_OFFSET(0x19D05650)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_63_OFFSET UNITYSDK_OFFSET(0x19D05710)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_64_OFFSET UNITYSDK_OFFSET(0x19D05810)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_65_OFFSET UNITYSDK_OFFSET(0x19D05910)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_66_OFFSET UNITYSDK_OFFSET(0x19D059D0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_67_OFFSET UNITYSDK_OFFSET(0x19D05AD0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_68_OFFSET UNITYSDK_OFFSET(0x19D05BD0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_69_OFFSET UNITYSDK_OFFSET(0x19D05CD0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_6_OFFSET UNITYSDK_OFFSET(0x19D027F0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_70_OFFSET UNITYSDK_OFFSET(0x19D05DB0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_71_OFFSET UNITYSDK_OFFSET(0x19D05EB0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_72_OFFSET UNITYSDK_OFFSET(0x19D05F70)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_73_OFFSET UNITYSDK_OFFSET(0x19D06030)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_74_OFFSET UNITYSDK_OFFSET(0x19D060F0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_75_OFFSET UNITYSDK_OFFSET(0x19D061F0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_76_OFFSET UNITYSDK_OFFSET(0x19D062B0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_77_OFFSET UNITYSDK_OFFSET(0x19D06400)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_78_OFFSET UNITYSDK_OFFSET(0x19D064C0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_79_OFFSET UNITYSDK_OFFSET(0x19D06580)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_7_OFFSET UNITYSDK_OFFSET(0x19D02860)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_80_OFFSET UNITYSDK_OFFSET(0x19D06640)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_81_OFFSET UNITYSDK_OFFSET(0x19D06740)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_82_OFFSET UNITYSDK_OFFSET(0x19D06820)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_83_OFFSET UNITYSDK_OFFSET(0x19D068E0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_84_OFFSET UNITYSDK_OFFSET(0x19D069A0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_85_OFFSET UNITYSDK_OFFSET(0x19D06AD0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_86_OFFSET UNITYSDK_OFFSET(0x19D06B90)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_87_OFFSET UNITYSDK_OFFSET(0x19D06C70)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_88_OFFSET UNITYSDK_OFFSET(0x19D06D30)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_89_OFFSET UNITYSDK_OFFSET(0x19D06DF0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_8_OFFSET UNITYSDK_OFFSET(0x19D02890)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_90_OFFSET UNITYSDK_OFFSET(0x19D06EB0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_91_OFFSET UNITYSDK_OFFSET(0x19D06F70)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_92_OFFSET UNITYSDK_OFFSET(0x19D07050)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_93_OFFSET UNITYSDK_OFFSET(0x19D07110)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_94_OFFSET UNITYSDK_OFFSET(0x19D071D0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_95_OFFSET UNITYSDK_OFFSET(0x19D07290)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_96_OFFSET UNITYSDK_OFFSET(0x19D07350)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_97_OFFSET UNITYSDK_OFFSET(0x19D07430)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_98_OFFSET UNITYSDK_OFFSET(0x19D074F0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_99_OFFSET UNITYSDK_OFFSET(0x19D075D0)
#define RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_9_OFFSET UNITYSDK_OFFSET(0x19D028C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetEvaluator___c_TypeDefinitionIndex = 22441;

	class TargetEvaluator___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TargetEvaluator___c** StaticGet___9()
		{
			return (::RPG::GameCore::TargetEvaluator___c**)Il2CppClass::FromTypeDefinitionIndex(TargetEvaluator___c_TypeDefinitionIndex)->GetStaticField(0x50E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_0(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_1(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_2(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_2_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_3(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_3_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_4(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_4_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_5(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_5_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_6(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_6_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_7(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_7_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_8(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_8_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_9(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_9_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_10(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_10_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_11(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_11_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_12(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_12_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_13(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_13_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_14(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_14_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_15(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_15_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_16(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_16_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_17(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_17_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_18(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_18_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_19(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_19_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_20(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_20_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_21(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_21_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_22(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_22_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_23(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_23_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_24(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_24_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_25(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_25_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_26(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_26_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_27(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_27_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_28(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_28_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_29(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_29_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_30(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_30_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_31(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_31_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_32(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_32_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_33(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_33_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_34(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_34_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_35(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_35_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_36(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_36_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_37(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_37_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_38(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_38_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_39(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_39_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_40(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_40_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_41(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_41_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_42(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_42_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_43(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_43_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_44(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_44_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_45(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_45_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_46(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_46_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_47(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_47_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_48(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_48_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_49(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_49_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_50(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_50_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_51(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_51_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_52(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_52_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_53(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_53_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_54(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_54_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_55(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_55_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_56(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_56_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_57(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_57_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_58(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_58_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_59(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_59_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_60(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_60_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_61(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_61_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_62(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_62_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_63(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_63_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_64(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_64_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_65(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_65_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_66(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_66_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_67(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_67_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_68(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_68_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_69(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_69_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_70(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_70_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_71(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_71_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_72(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_72_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_73(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_73_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_74(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_74_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_75(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_75_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_76(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_76_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_77(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_77_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_78(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_78_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_79(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_79_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_80(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_80_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_81(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_81_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_82(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_82_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_83(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_83_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_84(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_84_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_85(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_85_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_86(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_86_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_87(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_87_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_88(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_88_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_89(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_89_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_90(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_90_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_91(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_91_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_92(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_92_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_93(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_93_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_94(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_94_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_95(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_95_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_96(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_96_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_97(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_97_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_98(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_98_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_99(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_99_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_100(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_100_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_101(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_101_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_102(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_102_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_103(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_103_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_104(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_104_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_105(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_105_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_106(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_106_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_107(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_107_OFFSET))(this, a1);
		}

		::RPG::GameCore::TargetEvaluator* __cctor_b__117_108(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR___C___CCTOR_B__117_108_OFFSET))(this, a1);
		}
	};
}

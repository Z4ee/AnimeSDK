#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/RegionVisualStateReason.h"
#include "unitysdk/RPG/Client/RegionVisualStateRefCntReason.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionType.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/Struct_2_6B1DEF4C12A48710.h"
#include "unitysdk/Struct_2_960171EC79068492.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_A71861351D4ACE4D;
class Class_1_BEFD036212012D82;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelRegionInfo; }
namespace RPG::GameCore { class LevelRegionStateCondition; }
namespace RPG::GameCore { class LevelRegionStateConditionSet; }
namespace RPG::GameCore { class LevelRegionStateConfig; }
namespace RPG::GameCore { class StageRegionAffect; }
namespace RPG::GameCore { class StageRegionConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C1FC5F79840837FA_METHOD_1_0FB4701C048F21A8_OFFSET UNITYSDK_OFFSET(0x16F38A40)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_1011839DF6D17ECE_OFFSET UNITYSDK_OFFSET(0x16F3A050)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_12774AA325E0088B_OFFSET UNITYSDK_OFFSET(0x16F388B0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_1AFFAF5E0AB00FB5_OFFSET UNITYSDK_OFFSET(0x16F39590)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_1E91FFFB37216F67_OFFSET UNITYSDK_OFFSET(0x16F35310)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_20B511A103C213DD_OFFSET UNITYSDK_OFFSET(0x16F386E0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_241FCB0507EB9FA1_1_OFFSET UNITYSDK_OFFSET(0x16F3C5B0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x16F3B4E0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16F3BF60)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16F31B10)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_3D1A76B7DFE821F3_OFFSET UNITYSDK_OFFSET(0x16F3B560)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_3E4243BB348DE0D4_OFFSET UNITYSDK_OFFSET(0x16F36400)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_42534C094D9FC222_1_OFFSET UNITYSDK_OFFSET(0x16F3C5F0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_42534C094D9FC222_OFFSET UNITYSDK_OFFSET(0x16F37340)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_53788AABC08BED63_OFFSET UNITYSDK_OFFSET(0x16F38730)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_678A641D7D5163B2_OFFSET UNITYSDK_OFFSET(0x16F38F00)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_68007CFD6400DAC2_OFFSET UNITYSDK_OFFSET(0x16F31F20)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_681800EF036C0F1D_OFFSET UNITYSDK_OFFSET(0x16F373A0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_6ABA6A7D3FD8E04E_OFFSET UNITYSDK_OFFSET(0x16F3BFB0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_6AC60E17A6A2BBB9_OFFSET UNITYSDK_OFFSET(0x16F38340)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_6BB8B909016DC1E1_OFFSET UNITYSDK_OFFSET(0x16F3B5A0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_6CC0E8D2DB72D85E_OFFSET UNITYSDK_OFFSET(0x16F33D10)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_6E4A08BCEEDE9205_OFFSET UNITYSDK_OFFSET(0x16F3AA30)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0x16F396D0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_6F901BAEE7DCC4D1_OFFSET UNITYSDK_OFFSET(0x16F3ADE0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x16F37240)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_74C5E451DB3BCE7F_OFFSET UNITYSDK_OFFSET(0x16F3C290)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x16F3C490)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_77CF61FE1024629B_OFFSET UNITYSDK_OFFSET(0x16F39970)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_7A51A1C590A67AE1_OFFSET UNITYSDK_OFFSET(0x16F3C650)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_818F911E2177BEB3_OFFSET UNITYSDK_OFFSET(0x16F38100)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_829B09E994469287_OFFSET UNITYSDK_OFFSET(0x16F34550)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_840DB136F4FEF208_OFFSET UNITYSDK_OFFSET(0x16F3BAC0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_85D9BB2EBD662D55_OFFSET UNITYSDK_OFFSET(0x16F38C60)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_87EBA5EB20CB62D4_OFFSET UNITYSDK_OFFSET(0x16F38790)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_8DBA9D503648CF4A_OFFSET UNITYSDK_OFFSET(0x16F3C780)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_986E4F3D92DC02FB_OFFSET UNITYSDK_OFFSET(0x16F38BE0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_990D492087A958D7_OFFSET UNITYSDK_OFFSET(0x16F314D0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_9BE7677FEC6FD9D0_OFFSET UNITYSDK_OFFSET(0x16F3B060)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_9F5F3F90C66496E1_OFFSET UNITYSDK_OFFSET(0x16F345A0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x16F3C520)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x16F32B90)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_B0D0D30AA6E083F2_OFFSET UNITYSDK_OFFSET(0x16F37AA0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_B1FD6E7C3CBA7EAF_OFFSET UNITYSDK_OFFSET(0x16F39F40)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x16F356B0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0x16F36ED0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_B355D3861E365318_OFFSET UNITYSDK_OFFSET(0x16F36120)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x16F31B60)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_B4952912C3FBCEAE_OFFSET UNITYSDK_OFFSET(0x16F39530)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_B79C2FE4831A322B_OFFSET UNITYSDK_OFFSET(0x16F3A850)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_B89F6095FE656E59_OFFSET UNITYSDK_OFFSET(0x16F39B60)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_BBAB4D72BFD3417E_OFFSET UNITYSDK_OFFSET(0x16F32530)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x16F3B520)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_BC5B668148D964CC_OFFSET UNITYSDK_OFFSET(0x16F383F0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_C533DFD74EC3B4F1_OFFSET UNITYSDK_OFFSET(0x16F3C570)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_C78CD55DCDD16250_OFFSET UNITYSDK_OFFSET(0x16F38800)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16F3A3A0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16F31BF0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_D3D90DFCA5A06372_OFFSET UNITYSDK_OFFSET(0x16F3B490)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_D51C43B78C16F87F_OFFSET UNITYSDK_OFFSET(0x16F372E0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_D52BA3DAE5DF1A9E_OFFSET UNITYSDK_OFFSET(0x16F355B0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_D8A38B75FB093779_OFFSET UNITYSDK_OFFSET(0x16F32800)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_DEC691A09D0D18F9_OFFSET UNITYSDK_OFFSET(0x16F35070)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_DFBA6EF609324A1B_OFFSET UNITYSDK_OFFSET(0x16F31D40)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_E107ABB7B934BEF3_OFFSET UNITYSDK_OFFSET(0x16F3AB20)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x16F398B0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_E4B33477B7A6A3F1_OFFSET UNITYSDK_OFFSET(0x16F3A3E0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_E4DA2649F121FB56_OFFSET UNITYSDK_OFFSET(0x16F39010)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_E7661A75673806CC_OFFSET UNITYSDK_OFFSET(0x16F325D0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x16F33F50)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_EB524DC4272DCFA8_OFFSET UNITYSDK_OFFSET(0x16F39CB0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_EC5B4833D0786107_OFFSET UNITYSDK_OFFSET(0x16F3B5F0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_ECA9CEB8BBCC7524_OFFSET UNITYSDK_OFFSET(0x16F31C40)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_EEA3DA24B2C7A27F_OFFSET UNITYSDK_OFFSET(0x16F35EB0)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16F3B220)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_F59C64654F230E9C_OFFSET UNITYSDK_OFFSET(0x16F3C010)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_F7606175EF4528A6_OFFSET UNITYSDK_OFFSET(0x16F32580)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_FD9FABB0A847C348_OFFSET UNITYSDK_OFFSET(0x16F37830)
#define CLASS_1_C1FC5F79840837FA_METHOD_1_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x16F37E40)
#define CLASS_1_C1FC5F79840837FA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16F32AC0)
#define CLASS_1_C1FC5F79840837FA__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F3D370)
#define CLASS_1_C1FC5F79840837FA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F32BE0)

inline static constexpr unsigned int Class_1_C1FC5F79840837FA_TypeDefinitionIndex = 59397;

class Class_1_C1FC5F79840837FA : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1FC5F79840837FA_TypeDefinitionIndex)->GetStaticField(0x39C00);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1FC5F79840837FA_TypeDefinitionIndex)->GetStaticField(0x39C08);
	}
	static ::Class_1_C1FC5F79840837FA** StaticGet_Field_1_2()
	{
		return (::Class_1_C1FC5F79840837FA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1FC5F79840837FA_TypeDefinitionIndex)->GetStaticField(0x39C10);
	}
	// static const ::System::Int32 Field_1_3 = 0xFFFFFFFF; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A71861351D4ACE4D*>* Field_1_5; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_7; // 0x20
	::RPG::GameCore::StageRegionConfig* Field_1_8; // 0x28
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_9; // 0x30
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority>*>*>* Field_1_10; // 0x38
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_11; // 0x40
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Struct_2_960171EC79068492, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority>*>*>* Field_1_12; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_13; // 0x50
	::Class_1_D70A30D666F20D90* Field_1_14; // 0x58
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionVisualState>*>* Field_1_15; // 0x60
	::UnityEngine::GameObject* Field_1_16; // 0x68
	::RPG::GameCore::HoyoTagContainer* Field_1_17; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* Field_1_18; // 0x78
	::System::Action_3<::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* Field_1_19; // 0x80
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Class_1_C1FC5F79840837FA*, ::Struct_2_960171EC79068492>*>* Field_1_20; // 0x88
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_21; // 0x90
	::RPG::GameCore::LevelRegionStateConfig* Field_1_22; // 0x98
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_23; // 0xA0
	::RPG::GameCore::LevelRegionInfo* Field_1_24; // 0xA8
	::RPG::GameCore::HoyoTagContainer* Field_1_25; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* Field_1_26; // 0xB8
	::Class_1_BEFD036212012D82* Field_1_27; // 0xC0
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_28; // 0xC8
	::System::Boolean Field_1_29; // 0xD0
	::System::Boolean Field_1_30; // 0xD1
	::System::Boolean Field_1_31; // 0xD2
	::System::Boolean Field_1_32; // 0xD3
	::System::Boolean Field_1_33; // 0xD4
	::System::Boolean Field_1_34; // 0xD5
	::System::Boolean Field_1_35; // 0xD6
	::System::Boolean Field_1_36; // 0xD7
	::System::Boolean Field_1_37; // 0xD8
	::System::Boolean Field_1_38; // 0xD9
	::System::Boolean Field_1_39; // 0xDA
	::System::Boolean Field_1_40; // 0xDB
	::System::Int32 Field_1_41; // 0xDC
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Field_1_42; // 0xE0
	::Struct_2_960171EC79068492 Field_1_43; // 0xE4
	::Struct_2_6B1DEF4C12A48710 Field_1_44; // 0xEC
	::RPG::GameCore::StageRegionVisualState Field_1_45; // 0x108
	::RPG::GameCore::StageRegionVisualState Field_1_46; // 0x10C
	::UnityEngine::Matrix4x4 Field_1_47; // 0x110
	::RPG::GameCore::StageRegionActiveState Field_1_48; // 0x150
	::System::Boolean Field_1_49; // 0x154

	::System::Void _ctor(::Class_1_BEFD036212012D82* a1, ::RPG::GameCore::StageRegionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BEFD036212012D82*, ::RPG::GameCore::StageRegionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA__CCTOR_OFFSET))();
	}

	::Struct_2_960171EC79068492 Method_1_990D492087A958D7()
	{
		return ((::Struct_2_960171EC79068492(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_990D492087A958D7_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Struct_2_6B1DEF4C12A48710 Method_1_ECA9CEB8BBCC7524()
	{
		return ((::Struct_2_6B1DEF4C12A48710(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_ECA9CEB8BBCC7524_OFFSET))(this);
	}

	::Struct_2_6B1DEF4C12A48710 Method_1_DFBA6EF609324A1B()
	{
		return ((::Struct_2_6B1DEF4C12A48710(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_DFBA6EF609324A1B_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_68007CFD6400DAC2(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_68007CFD6400DAC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7661A75673806CC(::Class_1_C1FC5F79840837FA* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_E7661A75673806CC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D8A38B75FB093779(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_D8A38B75FB093779_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_6CC0E8D2DB72D85E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_6CC0E8D2DB72D85E_OFFSET))(this);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_9F5F3F90C66496E1(::RPG::GameCore::LevelRegionInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_9F5F3F90C66496E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D52BA3DAE5DF1A9E(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_D52BA3DAE5DF1A9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E4243BB348DE0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_3E4243BB348DE0D4_OFFSET))(this);
	}

	::System::Void Method_1_FD9FABB0A847C348(::Class_1_C1FC5F79840837FA* a1, ::RPG::GameCore::StageRegionVisualState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_FD9FABB0A847C348_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B0D0D30AA6E083F2(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_B0D0D30AA6E083F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_FFD65E4FEAD3C019_OFFSET))(this);
	}

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC5B668148D964CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_BC5B668148D964CC_OFFSET))(this);
	}

	::System::Void Method_1_818F911E2177BEB3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_818F911E2177BEB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_53788AABC08BED63(::RPG::GameCore::LevelRegionStateConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionStateConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_53788AABC08BED63_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEA3DA24B2C7A27F(::Class_1_C1FC5F79840837FA* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_EEA3DA24B2C7A27F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_87EBA5EB20CB62D4(::Class_1_C1FC5F79840837FA* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_87EBA5EB20CB62D4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0FB4701C048F21A8(::Class_1_C1FC5F79840837FA* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_0FB4701C048F21A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B355D3861E365318(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_B355D3861E365318_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_986E4F3D92DC02FB(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_986E4F3D92DC02FB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_85D9BB2EBD662D55(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_85D9BB2EBD662D55_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_12774AA325E0088B(::RPG::GameCore::StageRegionVisualState a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::GameCore::StageRegionActiveState a3, ::RPG::GameCore::StageRegionActiveState a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_12774AA325E0088B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_B4952912C3FBCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_B4952912C3FBCEAE_OFFSET))(this);
	}

	::System::Void Method_1_678A641D7D5163B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_678A641D7D5163B2_OFFSET))(this);
	}

	::System::Void Method_1_1AFFAF5E0AB00FB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_1AFFAF5E0AB00FB5_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_6E520D7D4D494BBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_681800EF036C0F1D(::RPG::GameCore::StageRegionVisualState a1, ::System::Boolean a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_681800EF036C0F1D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_6AC60E17A6A2BBB9(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_6AC60E17A6A2BBB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EB524DC4272DCFA8(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_EB524DC4272DCFA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B89F6095FE656E59(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_B89F6095FE656E59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_B1FD6E7C3CBA7EAF(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_B1FD6E7C3CBA7EAF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_77CF61FE1024629B(::RPG::GameCore::StageRegionVisualState a1, ::System::Boolean a2, ::Class_1_303D5A33D1401D59* a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::System::Boolean, ::Class_1_303D5A33D1401D59*, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_77CF61FE1024629B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_E4B33477B7A6A3F1(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_E4B33477B7A6A3F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B79C2FE4831A322B(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_B79C2FE4831A322B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6E4A08BCEEDE9205(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_6E4A08BCEEDE9205_OFFSET))(this, a1);
	}

	::System::Void Method_1_E107ABB7B934BEF3(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*&))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_E107ABB7B934BEF3_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_6F901BAEE7DCC4D1(::RPG::GameCore::LevelRegionStateCondition* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateCondition*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_6F901BAEE7DCC4D1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9BE7677FEC6FD9D0(::RPG::GameCore::LevelRegionStateConditionSet* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateConditionSet*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_9BE7677FEC6FD9D0_OFFSET))(a1);
	}

	::System::Void Method_1_DEC691A09D0D18F9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_DEC691A09D0D18F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E91FFFB37216F67(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_1E91FFFB37216F67_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageRegionType Method_1_D3D90DFCA5A06372()
	{
		return ((::RPG::GameCore::StageRegionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_D3D90DFCA5A06372_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::StageRegionAffect*>* Method_1_20B511A103C213DD()
	{
		return ((::Il2CppArray<::RPG::GameCore::StageRegionAffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_20B511A103C213DD_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionConfig* Method_1_3D1A76B7DFE821F3()
	{
		return ((::RPG::GameCore::StageRegionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_3D1A76B7DFE821F3_OFFSET))(this);
	}

	::RPG::GameCore::LevelRegionInfo* Method_1_6BB8B909016DC1E1()
	{
		return ((::RPG::GameCore::LevelRegionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_6BB8B909016DC1E1_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_D51C43B78C16F87F()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_D51C43B78C16F87F_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_42534C094D9FC222()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_42534C094D9FC222_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_EC5B4833D0786107()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_EC5B4833D0786107_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_840DB136F4FEF208(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_840DB136F4FEF208_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_F7606175EF4528A6(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_F7606175EF4528A6_OFFSET))(a1);
	}

	::System::Void Method_1_E4DA2649F121FB56(::RPG::GameCore::StageRegionVisualState a1, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_E4DA2649F121FB56_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::StageRegionActiveState Method_1_C78CD55DCDD16250()
	{
		return ((::RPG::GameCore::StageRegionActiveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_C78CD55DCDD16250_OFFSET))(this);
	}

	static ::RPG::GameCore::StageRegionActiveState Method_1_BBAB4D72BFD3417E(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::RPG::GameCore::StageRegionActiveState(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_BBAB4D72BFD3417E_OFFSET))(a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_6ABA6A7D3FD8E04E()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_6ABA6A7D3FD8E04E_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_829B09E994469287()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_829B09E994469287_OFFSET))(this);
	}

	::System::Boolean Method_1_F59C64654F230E9C(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_F59C64654F230E9C_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_74C5E451DB3BCE7F(::Class_1_303D5A33D1401D59* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::Class_1_303D5A33D1401D59*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_74C5E451DB3BCE7F_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_77577333B4681208_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1011839DF6D17ECE(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_1011839DF6D17ECE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Method_1_C533DFD74EC3B4F1()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_C533DFD74EC3B4F1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Method_1_241FCB0507EB9FA1_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_241FCB0507EB9FA1_1_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_42534C094D9FC222_1()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_42534C094D9FC222_1_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_7A51A1C590A67AE1()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_7A51A1C590A67AE1_OFFSET))(this);
	}

	::System::Void Method_1_8DBA9D503648CF4A(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::List_1<::Class_1_C1FC5F79840837FA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::List_1<::Class_1_C1FC5F79840837FA*>*))((::PBYTE)hIl2Cpp + CLASS_1_C1FC5F79840837FA_METHOD_1_8DBA9D503648CF4A_OFFSET))(this, a1, a2);
	}
};

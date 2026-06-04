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
class Class_1_3948F09825CE1BA8;
class Class_1_616F89B5F43D1E61_Class_5_CE608A1B1B2022FC;
class Class_1_857661152BAA4A5A;
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

#define CLASS_1_616F89B5F43D1E61_METHOD_1_03B3490C0FEE2A97_OFFSET UNITYSDK_OFFSET(0x1451D770)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x1451E4D0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_0FB4701C048F21A8_OFFSET UNITYSDK_OFFSET(0x1451D980)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_14C83AF0381162FE_OFFSET UNITYSDK_OFFSET(0x1451D470)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_165AE508D91EE03A_OFFSET UNITYSDK_OFFSET(0x1451E690)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_1D54615E03D2FCC5_OFFSET UNITYSDK_OFFSET(0x14521A90)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_1DF6E63E486BB866_OFFSET UNITYSDK_OFFSET(0x14517410)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_25F72F94D36AA88A_OFFSET UNITYSDK_OFFSET(0x1451D5A0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_291BD54BBD95177E_OFFSET UNITYSDK_OFFSET(0x14516AE0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_38EFA07E130D4700_OFFSET UNITYSDK_OFFSET(0x1451F410)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_3E4243BB348DE0D4_OFFSET UNITYSDK_OFFSET(0x1451B060)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_42534C094D9FC222_OFFSET UNITYSDK_OFFSET(0x14520FE0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_49085A3FC0F13F5E_OFFSET UNITYSDK_OFFSET(0x1451A270)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_4993EDAE54425105_1_OFFSET UNITYSDK_OFFSET(0x14520FD0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x14520040)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_506BB18E23448E71_OFFSET UNITYSDK_OFFSET(0x1451C4F0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_51ACB51BD1305183_OFFSET UNITYSDK_OFFSET(0x1451F8B0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_53788AABC08BED63_OFFSET UNITYSDK_OFFSET(0x1451D410)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_559C48637087C6DD_OFFSET UNITYSDK_OFFSET(0x14520080)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_579B225C50172838_OFFSET UNITYSDK_OFFSET(0x14521040)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_67E0E4338F40B924_OFFSET UNITYSDK_OFFSET(0x1451CDD0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_68007CFD6400DAC2_OFFSET UNITYSDK_OFFSET(0x14516D60)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_681800EF036C0F1D_OFFSET UNITYSDK_OFFSET(0x1451C060)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_68A284F1C7B68BE7_OFFSET UNITYSDK_OFFSET(0x1451D3F0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_6ABA6A7D3FD8E04E_OFFSET UNITYSDK_OFFSET(0x14520A90)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_6CC0E8D2DB72D85E_OFFSET UNITYSDK_OFFSET(0x14518AC0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_6E4A08BCEEDE9205_OFFSET UNITYSDK_OFFSET(0x1451F540)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_74C5E451DB3BCE7F_OFFSET UNITYSDK_OFFSET(0x14520D80)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_7AAC3BA59076A5DD_OFFSET UNITYSDK_OFFSET(0x1451EB30)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_840DB136F4FEF208_OFFSET UNITYSDK_OFFSET(0x145205D0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_85420F280B5241BE_OFFSET UNITYSDK_OFFSET(0x1451EED0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_85D9BB2EBD662D55_OFFSET UNITYSDK_OFFSET(0x1451DC60)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_8BCD979DB7F15537_OFFSET UNITYSDK_OFFSET(0x1451D040)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_8DBA9D503648CF4A_OFFSET UNITYSDK_OFFSET(0x14521130)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_8E370F8A4B038E66_OFFSET UNITYSDK_OFFSET(0x1451BEE0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_91E12B7EAE1DAFA5_OFFSET UNITYSDK_OFFSET(0x1451BA80)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1451E370)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_990D492087A958D7_OFFSET UNITYSDK_OFFSET(0x145163C0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_9BE7677FEC6FD9D0_OFFSET UNITYSDK_OFFSET(0x1451FC10)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x14520050)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_9F5F3F90C66496E1_OFFSET UNITYSDK_OFFSET(0x14519440)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x14516A00)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_A5058F1AD6A80A4F_OFFSET UNITYSDK_OFFSET(0x1451E420)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_A88757AFAAABAF15_OFFSET UNITYSDK_OFFSET(0x14520FC0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_A8CB5027BF8B913B_OFFSET UNITYSDK_OFFSET(0x1451EC00)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x14517920)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_B1B6D3C207FF772D_OFFSET UNITYSDK_OFFSET(0x1451AE50)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_B23A908C63A6B375_OFFSET UNITYSDK_OFFSET(0x1451DF80)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x1451A5E0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_B82BE3569CBEA58B_OFFSET UNITYSDK_OFFSET(0x1451BD60)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_BBAB4D72BFD3417E_OFFSET UNITYSDK_OFFSET(0x14517370)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_BC5B668148D964CC_OFFSET UNITYSDK_OFFSET(0x1451D0F0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_BCC1A1E4BA3D2648_OFFSET UNITYSDK_OFFSET(0x14520020)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1451DF00)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1451EE90)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14516A90)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_CB972F32A412B945_OFFSET UNITYSDK_OFFSET(0x14520070)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_CCD7CE05545A362B_OFFSET UNITYSDK_OFFSET(0x14520AE0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_D0658526DC9E67E7_OFFSET UNITYSDK_OFFSET(0x1451E7D0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_D52BA3DAE5DF1A9E_OFFSET UNITYSDK_OFFSET(0x1451A4E0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x14520FA0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x14518D00)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_DD1CE400790DF441_OFFSET UNITYSDK_OFFSET(0x1451AF50)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0x1451C7C0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_DFBA6EF609324A1B_OFFSET UNITYSDK_OFFSET(0x14516B80)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_E107ABB7B934BEF3_OFFSET UNITYSDK_OFFSET(0x1451F630)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1451E5D0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_E153CCD05DDC6530_OFFSET UNITYSDK_OFFSET(0x14519FF0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_E23DF03C7CC96D02_OFFSET UNITYSDK_OFFSET(0x1451E8E0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_E5DA03E975F6880F_OFFSET UNITYSDK_OFFSET(0x1451DB20)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x14520F80)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14520A70)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1451FDD0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_F59C64654F230E9C_OFFSET UNITYSDK_OFFSET(0x14520AF0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_F755FAB34BE52637_OFFSET UNITYSDK_OFFSET(0x14520060)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_F7606175EF4528A6_OFFSET UNITYSDK_OFFSET(0x145173C0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_F9BF47CAA98019F7_OFFSET UNITYSDK_OFFSET(0x145175E0)
#define CLASS_1_616F89B5F43D1E61_METHOD_1_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x1451CB10)
#define CLASS_1_616F89B5F43D1E61_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14517850)
#define CLASS_1_616F89B5F43D1E61__CCTOR_OFFSET UNITYSDK_OFFSET(0x14521B00)
#define CLASS_1_616F89B5F43D1E61__CTOR_OFFSET UNITYSDK_OFFSET(0x14517980)
#define CLASS_1_616F89B5F43D1E61___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14521E30)

inline static constexpr unsigned int Class_1_616F89B5F43D1E61_TypeDefinitionIndex = 58131;

class Class_1_616F89B5F43D1E61 : public ::System::Object
{
public:
	static ::Class_1_616F89B5F43D1E61** StaticGet_Field_1_0()
	{
		return (::Class_1_616F89B5F43D1E61**)Il2CppClass::FromTypeDefinitionIndex(Class_1_616F89B5F43D1E61_TypeDefinitionIndex)->GetStaticField(0x4B2F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::RegionBlockVisibilityStatus>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_616F89B5F43D1E61_TypeDefinitionIndex)->GetStaticField(0x4B2F8);
	}
	static ::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_616F89B5F43D1E61_TypeDefinitionIndex)->GetStaticField(0x4B300);
	}
	// static const ::System::Int32 Field_1_3 = 0xFFFFFFFF; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_5; // 0x10
	::UnityEngine::GameObject* Field_1_6; // 0x18
	::RPG::GameCore::HoyoTagContainer* Field_1_7; // 0x20
	::Class_1_D70A30D666F20D90* Field_1_8; // 0x28
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Struct_2_960171EC79068492, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority>*>*>* Field_1_9; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_10; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_857661152BAA4A5A*>* Field_1_11; // 0x40
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageRegionVisualState, ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority>*>*>* Field_1_12; // 0x48
	::RPG::GameCore::HoyoTagContainer* Field_1_13; // 0x50
	::Class_1_616F89B5F43D1E61_Class_5_CE608A1B1B2022FC* Field_1_14; // 0x58
	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Field_1_15; // 0x60
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionVisualState>*>* Field_1_16; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* Field_1_17; // 0x70
	::Class_1_3948F09825CE1BA8* Field_1_18; // 0x78
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_19; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelRegionStateConfig*>*>* Field_1_20; // 0x88
	::RPG::GameCore::LevelRegionInfo* Field_1_21; // 0x90
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::Class_1_616F89B5F43D1E61*, ::Struct_2_960171EC79068492>*>* Field_1_22; // 0x98
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_23; // 0xA0
	::System::Action_3<::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* Field_1_24; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_25; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_26; // 0xB8
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_27; // 0xC0
	::RPG::GameCore::StageRegionConfig* Field_1_28; // 0xC8
	::RPG::GameCore::LevelRegionStateConfig* Field_1_29; // 0xD0
	::System::Boolean Field_1_30; // 0xD8
	::System::Boolean Field_1_31; // 0xD9
	::System::Boolean Field_1_32; // 0xDA
	::System::Boolean Field_1_33; // 0xDB
	::System::Boolean Field_1_34; // 0xDC
	::System::Boolean Field_1_35; // 0xDD
	::System::Int32 Field_1_36; // 0xE0
	::RPG::GameCore::StageRegionVisualState Field_1_37; // 0xE4
	::Struct_2_960171EC79068492 Field_1_38; // 0xE8
	::System::Boolean Field_1_39; // 0xF0
	::System::Boolean Field_1_40; // 0xF1
	::System::Boolean Field_1_41; // 0xF2
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Field_1_42; // 0xF4
	::RPG::GameCore::StageRegionVisualState Field_1_43; // 0xF8
	::System::Boolean Field_1_44; // 0xFC
	::System::Boolean Field_1_45; // 0xFD
	::System::Boolean Field_1_46; // 0xFE
	::System::Boolean Field_1_47; // 0xFF
	::UnityEngine::Matrix4x4 Field_1_48; // 0x100
	::RPG::GameCore::StageRegionActiveState Field_1_49; // 0x140
	::Struct_2_6B1DEF4C12A48710 Field_1_50; // 0x144

	::System::Void _ctor(::Class_1_3948F09825CE1BA8* a1, ::RPG::GameCore::StageRegionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3948F09825CE1BA8*, ::RPG::GameCore::StageRegionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61__CCTOR_OFFSET))();
	}

	::Struct_2_960171EC79068492 Method_1_990D492087A958D7()
	{
		return ((::Struct_2_960171EC79068492(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_990D492087A958D7_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Struct_2_6B1DEF4C12A48710 Method_1_291BD54BBD95177E()
	{
		return ((::Struct_2_6B1DEF4C12A48710(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_291BD54BBD95177E_OFFSET))(this);
	}

	::Struct_2_6B1DEF4C12A48710 Method_1_DFBA6EF609324A1B()
	{
		return ((::Struct_2_6B1DEF4C12A48710(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_DFBA6EF609324A1B_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_68007CFD6400DAC2(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_68007CFD6400DAC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_1DF6E63E486BB866(::Class_1_616F89B5F43D1E61* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_1DF6E63E486BB866_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F9BF47CAA98019F7(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_F9BF47CAA98019F7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_6CC0E8D2DB72D85E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_6CC0E8D2DB72D85E_OFFSET))(this);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_1_9F5F3F90C66496E1(::RPG::GameCore::LevelRegionInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionInfo*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_9F5F3F90C66496E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D52BA3DAE5DF1A9E(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_D52BA3DAE5DF1A9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E4243BB348DE0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_3E4243BB348DE0D4_OFFSET))(this);
	}

	::System::Void Method_1_506BB18E23448E71(::Class_1_616F89B5F43D1E61* a1, ::RPG::GameCore::StageRegionVisualState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_506BB18E23448E71_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DEA6ACF0B96986BD(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_DEA6ACF0B96986BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_FFD65E4FEAD3C019_OFFSET))(this);
	}

	::System::Void Method_1_91E12B7EAE1DAFA5(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_91E12B7EAE1DAFA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC5B668148D964CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_BC5B668148D964CC_OFFSET))(this);
	}

	::System::Void Method_1_67E0E4338F40B924(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_67E0E4338F40B924_OFFSET))(this, a1);
	}

	::System::Void Method_1_53788AABC08BED63(::RPG::GameCore::LevelRegionStateConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRegionStateConfig*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_53788AABC08BED63_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1B6D3C207FF772D(::Class_1_616F89B5F43D1E61* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_B1B6D3C207FF772D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_14C83AF0381162FE(::Class_1_616F89B5F43D1E61* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_14C83AF0381162FE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0FB4701C048F21A8(::Class_1_616F89B5F43D1E61* a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::Client::RegionVisualStateReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateReason))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_0FB4701C048F21A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DD1CE400790DF441(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_DD1CE400790DF441_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_E5DA03E975F6880F(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_E5DA03E975F6880F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_85D9BB2EBD662D55(::RPG::GameCore::StageRegionVisualState a1, ::RPG::Client::RegionVisualStateRefCntReason a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::Client::RegionVisualStateRefCntReason, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_85D9BB2EBD662D55_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_03B3490C0FEE2A97(::RPG::GameCore::StageRegionVisualState a1, ::RPG::GameCore::StageRegionVisualState a2, ::RPG::GameCore::StageRegionActiveState a3, ::RPG::GameCore::StageRegionActiveState a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::StageRegionVisualState, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_03B3490C0FEE2A97_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_A5058F1AD6A80A4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_A5058F1AD6A80A4F_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_063ADB01C44981A7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_063ADB01C44981A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_681800EF036C0F1D(::RPG::GameCore::StageRegionVisualState a1, ::System::Boolean a2, ::System::Boolean a3, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::System::Boolean, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_681800EF036C0F1D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8BCD979DB7F15537(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_8BCD979DB7F15537_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E23DF03C7CC96D02(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_E23DF03C7CC96D02_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0658526DC9E67E7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_D0658526DC9E67E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AAC3BA59076A5DD(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_7AAC3BA59076A5DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_165AE508D91EE03A(::RPG::GameCore::StageRegionVisualState a1, ::System::Boolean a2, ::Class_1_303D5A33D1401D59* a3, ::System::Boolean a4, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::System::Boolean, ::Class_1_303D5A33D1401D59*, ::System::Boolean, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_165AE508D91EE03A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_85420F280B5241BE(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_85420F280B5241BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_38EFA07E130D4700(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_38EFA07E130D4700_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6E4A08BCEEDE9205(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_6E4A08BCEEDE9205_OFFSET))(this, a1);
	}

	::System::Void Method_1_E107ABB7B934BEF3(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*&))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_E107ABB7B934BEF3_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_51ACB51BD1305183(::RPG::GameCore::LevelRegionStateCondition* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateCondition*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_51ACB51BD1305183_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9BE7677FEC6FD9D0(::RPG::GameCore::LevelRegionStateConditionSet* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelRegionStateConditionSet*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_9BE7677FEC6FD9D0_OFFSET))(a1);
	}

	::System::Void Method_1_E153CCD05DDC6530(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_E153CCD05DDC6530_OFFSET))(this, a1);
	}

	::System::Void Method_1_49085A3FC0F13F5E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_49085A3FC0F13F5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageRegionType Method_1_BCC1A1E4BA3D2648()
	{
		return ((::RPG::GameCore::StageRegionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_BCC1A1E4BA3D2648_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::StageRegionAffect*>* Method_1_68A284F1C7B68BE7()
	{
		return ((::Il2CppArray<::RPG::GameCore::StageRegionAffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_68A284F1C7B68BE7_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionConfig* Method_1_F755FAB34BE52637()
	{
		return ((::RPG::GameCore::StageRegionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_F755FAB34BE52637_OFFSET))(this);
	}

	::RPG::GameCore::LevelRegionInfo* Method_1_CB972F32A412B945()
	{
		return ((::RPG::GameCore::LevelRegionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_CB972F32A412B945_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_B82BE3569CBEA58B()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_B82BE3569CBEA58B_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_8E370F8A4B038E66()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_8E370F8A4B038E66_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_559C48637087C6DD()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_559C48637087C6DD_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_840DB136F4FEF208(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_840DB136F4FEF208_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_F7606175EF4528A6(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_F7606175EF4528A6_OFFSET))(a1);
	}

	::System::Void Method_1_B23A908C63A6B375(::RPG::GameCore::StageRegionVisualState a1, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionVisualState, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_B23A908C63A6B375_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::StageRegionActiveState Method_1_25F72F94D36AA88A()
	{
		return ((::RPG::GameCore::StageRegionActiveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_25F72F94D36AA88A_OFFSET))(this);
	}

	static ::RPG::GameCore::StageRegionActiveState Method_1_BBAB4D72BFD3417E(::RPG::GameCore::StageRegionVisualState a1)
	{
		return ((::RPG::GameCore::StageRegionActiveState(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_BBAB4D72BFD3417E_OFFSET))(a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_6ABA6A7D3FD8E04E()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_6ABA6A7D3FD8E04E_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_CCD7CE05545A362B()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_CCD7CE05545A362B_OFFSET))(this);
	}

	::System::Boolean Method_1_F59C64654F230E9C(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_F59C64654F230E9C_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_74C5E451DB3BCE7F(::Class_1_303D5A33D1401D59* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::Class_1_303D5A33D1401D59*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_74C5E451DB3BCE7F_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Boolean Method_1_A8CB5027BF8B913B(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_A8CB5027BF8B913B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>* Method_1_A88757AFAAABAF15()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_A88757AFAAABAF15_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Method_1_4993EDAE54425105_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_4993EDAE54425105_1_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Method_1_42534C094D9FC222()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_42534C094D9FC222_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionVisualState Method_1_579B225C50172838()
	{
		return ((::RPG::GameCore::StageRegionVisualState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_579B225C50172838_OFFSET))(this);
	}

	::System::Void Method_1_8DBA9D503648CF4A(::Class_1_DE4C6B309308A230* a1, ::System::Collections::Generic::List_1<::Class_1_616F89B5F43D1E61*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Collections::Generic::List_1<::Class_1_616F89B5F43D1E61*>*))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_8DBA9D503648CF4A_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_1D54615E03D2FCC5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61_METHOD_1_1D54615E03D2FCC5_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_616F89B5F43D1E61___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};

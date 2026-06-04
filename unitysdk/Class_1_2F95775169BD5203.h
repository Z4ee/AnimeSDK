#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2F95775169BD5203_RegionType.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/WaveInteract.h"

class Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F;
class FloatingObjectBuffer;
class InteractProxy;
class LegacyGPUParticleSystem;
class WaveSimPanel;
namespace RPG::Client { class WaveSimConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define CLASS_1_2F95775169BD5203_GET_ONACTIVEPANELCHANGED_OFFSET UNITYSDK_OFFSET(0x1421F440)
#define CLASS_1_2F95775169BD5203_GET_ONINSTANCED_OFFSET UNITYSDK_OFFSET(0x14219670)
#define CLASS_1_2F95775169BD5203_METHOD_1_00EB2C748D484792_OFFSET UNITYSDK_OFFSET(0x1421F730)
#define CLASS_1_2F95775169BD5203_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x14221B90)
#define CLASS_1_2F95775169BD5203_METHOD_1_0807B7473B8F5526_OFFSET UNITYSDK_OFFSET(0x1421AD50)
#define CLASS_1_2F95775169BD5203_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0x1421E140)
#define CLASS_1_2F95775169BD5203_METHOD_1_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x14220700)
#define CLASS_1_2F95775169BD5203_METHOD_1_0DD7B7EE3ACD7C71_OFFSET UNITYSDK_OFFSET(0x14218F00)
#define CLASS_1_2F95775169BD5203_METHOD_1_0F7D41D7CCA1E58B_OFFSET UNITYSDK_OFFSET(0x1421F110)
#define CLASS_1_2F95775169BD5203_METHOD_1_1752943C8EA15AFA_OFFSET UNITYSDK_OFFSET(0x1421D440)
#define CLASS_1_2F95775169BD5203_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x1421DF80)
#define CLASS_1_2F95775169BD5203_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14218A70)
#define CLASS_1_2F95775169BD5203_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14220620)
#define CLASS_1_2F95775169BD5203_METHOD_1_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0x14220570)
#define CLASS_1_2F95775169BD5203_METHOD_1_396D1F1F9458998C_OFFSET UNITYSDK_OFFSET(0x1421DAC0)
#define CLASS_1_2F95775169BD5203_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x1421AB70)
#define CLASS_1_2F95775169BD5203_METHOD_1_457158F21AF4EFF1_OFFSET UNITYSDK_OFFSET(0x1421E4C0)
#define CLASS_1_2F95775169BD5203_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x14218AF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x14219800)
#define CLASS_1_2F95775169BD5203_METHOD_1_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0x1421B460)
#define CLASS_1_2F95775169BD5203_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1421D860)
#define CLASS_1_2F95775169BD5203_METHOD_1_6386527715220317_OFFSET UNITYSDK_OFFSET(0x1421F2E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_640C71A5A5EAE1D0_OFFSET UNITYSDK_OFFSET(0x1421DBF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_66FADC979FDE358E_OFFSET UNITYSDK_OFFSET(0x14220B10)
#define CLASS_1_2F95775169BD5203_METHOD_1_6FCADD6476EBA26E_OFFSET UNITYSDK_OFFSET(0x14221720)
#define CLASS_1_2F95775169BD5203_METHOD_1_6FE1AD71BA198A2B_OFFSET UNITYSDK_OFFSET(0x1421EDF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_72CC672E0ECF05A7_OFFSET UNITYSDK_OFFSET(0x14220DF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_749E996CB446551C_OFFSET UNITYSDK_OFFSET(0x14218AD0)
#define CLASS_1_2F95775169BD5203_METHOD_1_78E151D9A3BE2ACD_OFFSET UNITYSDK_OFFSET(0x1421AA40)
#define CLASS_1_2F95775169BD5203_METHOD_1_7B8E66A4FD58DCEE_OFFSET UNITYSDK_OFFSET(0x142212F0)
#define CLASS_1_2F95775169BD5203_METHOD_1_83408277B358B570_OFFSET UNITYSDK_OFFSET(0x14218420)
#define CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_1_OFFSET UNITYSDK_OFFSET(0x1421A9B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_OFFSET UNITYSDK_OFFSET(0x1421A910)
#define CLASS_1_2F95775169BD5203_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x142195F0)
#define CLASS_1_2F95775169BD5203_METHOD_1_86FAFA42ABDC538F_OFFSET UNITYSDK_OFFSET(0x142193C0)
#define CLASS_1_2F95775169BD5203_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x14218C90)
#define CLASS_1_2F95775169BD5203_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x1421AF10)
#define CLASS_1_2F95775169BD5203_METHOD_1_8DC7A8D48742DFD6_OFFSET UNITYSDK_OFFSET(0x14220AD0)
#define CLASS_1_2F95775169BD5203_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14218C30)
#define CLASS_1_2F95775169BD5203_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x142183D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x142188B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_A60E5E0917F6A6F4_OFFSET UNITYSDK_OFFSET(0x14218940)
#define CLASS_1_2F95775169BD5203_METHOD_1_A6B412A42E4C4567_OFFSET UNITYSDK_OFFSET(0x1421E8E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0x1421B760)
#define CLASS_1_2F95775169BD5203_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x14219830)
#define CLASS_1_2F95775169BD5203_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x142196E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_B44AE63E34C20CB3_OFFSET UNITYSDK_OFFSET(0x1421F470)
#define CLASS_1_2F95775169BD5203_METHOD_1_B6DDFC1AF3B5F97D_OFFSET UNITYSDK_OFFSET(0x1421DD10)
#define CLASS_1_2F95775169BD5203_METHOD_1_C37AC0022F0F8793_OFFSET UNITYSDK_OFFSET(0x14220CA0)
#define CLASS_1_2F95775169BD5203_METHOD_1_C5CEC0D2132207CB_OFFSET UNITYSDK_OFFSET(0x14218CE0)
#define CLASS_1_2F95775169BD5203_METHOD_1_C5F43DA7AD63D17A_1_OFFSET UNITYSDK_OFFSET(0x14219200)
#define CLASS_1_2F95775169BD5203_METHOD_1_C5F43DA7AD63D17A_OFFSET UNITYSDK_OFFSET(0x14219070)
#define CLASS_1_2F95775169BD5203_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x142183C0)
#define CLASS_1_2F95775169BD5203_METHOD_1_C8B959BA4F3993AF_OFFSET UNITYSDK_OFFSET(0x142209E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x142216E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_1_OFFSET UNITYSDK_OFFSET(0x1421DEF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_2_OFFSET UNITYSDK_OFFSET(0x1421DF40)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_OFFSET UNITYSDK_OFFSET(0x1421DEB0)
#define CLASS_1_2F95775169BD5203_METHOD_1_CC32BB23BD684E52_OFFSET UNITYSDK_OFFSET(0x14219BC0)
#define CLASS_1_2F95775169BD5203_METHOD_1_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0x14218BA0)
#define CLASS_1_2F95775169BD5203_METHOD_1_D2DA768232E640DF_OFFSET UNITYSDK_OFFSET(0x14218350)
#define CLASS_1_2F95775169BD5203_METHOD_1_D2E7B99027D15632_OFFSET UNITYSDK_OFFSET(0x1421F460)
#define CLASS_1_2F95775169BD5203_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1421AEF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x14220ED0)
#define CLASS_1_2F95775169BD5203_METHOD_1_E2B6F1F20E5DF7A7_OFFSET UNITYSDK_OFFSET(0x14221900)
#define CLASS_1_2F95775169BD5203_METHOD_1_E6FA84ECDEF620CE_OFFSET UNITYSDK_OFFSET(0x1421D490)
#define CLASS_1_2F95775169BD5203_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1421AD00)
#define CLASS_1_2F95775169BD5203_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14218AE0)
#define CLASS_1_2F95775169BD5203_SET_ONACTIVEPANELCHANGED_OFFSET UNITYSDK_OFFSET(0x1421F450)
#define CLASS_1_2F95775169BD5203_SET_ONINSTANCED_OFFSET UNITYSDK_OFFSET(0x142196A0)
#define CLASS_1_2F95775169BD5203__CCTOR_OFFSET UNITYSDK_OFFSET(0x14221BD0)
#define CLASS_1_2F95775169BD5203__CTOR_OFFSET UNITYSDK_OFFSET(0x14219940)

inline static constexpr unsigned int Class_1_2F95775169BD5203_TypeDefinitionIndex = 44787;

class Class_1_2F95775169BD5203 : public ::System::Object
{
public:
	static ::UnityEngine::Material** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x10980);
	}
	static ::Class_1_2F95775169BD5203** StaticGet_Field_1_1()
	{
		return (::Class_1_2F95775169BD5203**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x10988);
	}
	static ::UnityEngine::ComputeShader** StaticGet_Field_1_2()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x10990);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x10998);
	}
	static ::System::Action** StaticGet__OnInstanced_k__BackingField()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x109A0);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5110);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5114);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5118);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x511C);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5120);
	}
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5124);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5128);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x512C);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5130);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5134);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5138);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x513C);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5140);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5144);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5148);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x514C);
	}
	static ::System::Int32* StaticGet_Field_1_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5150);
	}
	static ::System::Int32* StaticGet_Field_1_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5154);
	}
	static ::System::Int32* StaticGet_Field_1_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5158);
	}
	static ::System::Int32* StaticGet_Field_1_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x515C);
	}
	static ::System::Int32* StaticGet_Field_1_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5160);
	}
	static ::System::Int32* StaticGet_Field_1_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5164);
	}
	static ::System::Int32* StaticGet_Field_1_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5168);
	}
	static ::System::Int32* StaticGet_Field_1_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x516C);
	}
	static ::System::Int32* StaticGet_Field_1_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5170);
	}
	static ::System::Int32* StaticGet_Field_1_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5174);
	}
	static ::System::Int32* StaticGet_Field_1_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5178);
	}
	static ::System::Int32* StaticGet_Field_1_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x517C);
	}
	static ::System::Int32* StaticGet_Field_1_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5180);
	}
	static ::System::Int32* StaticGet_Field_1_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5184);
	}
	static ::System::Int32* StaticGet_Field_1_35()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5188);
	}
	static ::System::Int32* StaticGet_Field_1_36()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x518C);
	}
	static ::System::Int32* StaticGet_Field_1_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5190);
	}
	static ::System::Int32* StaticGet_Field_1_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5194);
	}
	static ::System::Int32* StaticGet_Field_1_39()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5198);
	}
	static ::System::Int32* StaticGet_Field_1_40()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x519C);
	}
	static ::System::Int32* StaticGet_Field_1_41()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51A0);
	}
	static ::System::Int32* StaticGet_Field_1_42()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51A4);
	}
	static ::System::Int32* StaticGet_Field_1_43()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51A8);
	}
	static ::System::Int32* StaticGet_Field_1_44()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51AC);
	}
	static ::System::Int32* StaticGet_Field_1_45()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51B0);
	}
	static ::System::Int32* StaticGet_Field_1_46()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51B4);
	}
	static ::System::Int32* StaticGet_Field_1_47()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51B8);
	}
	static ::System::Int32* StaticGet_Field_1_48()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51BC);
	}
	static ::System::Int32* StaticGet_Field_1_49()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51C0);
	}
	static ::System::Int32* StaticGet_Field_1_50()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51C4);
	}
	static ::System::Int32* StaticGet_Field_1_51()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51C8);
	}
	static ::System::Int32* StaticGet_Field_1_52()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51CC);
	}
	static ::System::Int32* StaticGet_Field_1_53()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51D0);
	}
	static ::System::Int32* StaticGet_Field_1_54()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51D4);
	}
	static ::System::Int32* StaticGet_Field_1_55()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51D8);
	}
	static ::System::Int32* StaticGet_Field_1_56()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51DC);
	}
	static ::System::Int32* StaticGet_Field_1_57()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51E0);
	}
	static ::System::Int32* StaticGet_Field_1_58()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51E4);
	}
	static ::System::Int32* StaticGet_Field_1_59()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51E8);
	}
	static ::System::Int32* StaticGet_Field_1_60()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51EC);
	}
	static ::System::Int32* StaticGet_Field_1_61()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51F0);
	}
	static ::System::Int32* StaticGet_Field_1_62()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51F4);
	}
	static ::System::Int32* StaticGet_Field_1_63()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51F8);
	}
	static ::System::Int32* StaticGet_Field_1_64()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x51FC);
	}
	static ::System::Int32* StaticGet_Field_1_65()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5200);
	}
	static ::System::Int32* StaticGet_Field_1_66()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x5204);
	}
	::UnityEngine::RenderTexture* Field_1_67; // 0x10
	::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* Field_1_68; // 0x18
	::System::Collections::Generic::List_1<::WaveSimPanel*>* Field_1_69; // 0x20
	::UnityEngine::RenderTexture* Field_1_70; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_71; // 0x30
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_72; // 0x38
	::System::Collections::Generic::List_1<::WaveInteract>* Field_1_73; // 0x40
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_74; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_75; // 0x50
	::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* Field_1_76; // 0x58
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_77; // 0x60
	::UnityEngine::Texture2D* Field_1_78; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* Field_1_79; // 0x70
	::UnityEngine::Texture2D* Field_1_80; // 0x78
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_81; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* Field_1_82; // 0x88
	::UnityEngine::Texture2D* Field_1_83; // 0x90
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_84; // 0x98
	::UnityEngine::RenderTexture* Field_1_85; // 0xA0
	::WaveSimPanel* Field_1_86; // 0xA8
	::System::Collections::Generic::List_1<::InteractProxy*>* Field_1_87; // 0xB0
	::UnityEngine::RenderTexture* Field_1_88; // 0xB8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_89; // 0xC0
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_90; // 0xC8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_91; // 0xD0
	::System::Collections::Generic::List_1<::WaveSimPanel*>* Field_1_92; // 0xD8
	::UnityEngine::Texture2D* Field_1_93; // 0xE0
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* Field_1_94; // 0xE8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_95; // 0xF0
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_96; // 0xF8
	::FloatingObjectBuffer* Field_1_97; // 0x100
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_98; // 0x108
	::WaveSimPanel* Field_1_99; // 0x110
	::RPG::Client::WaveSimConfig* Field_1_100; // 0x118
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_101; // 0x120
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_102; // 0x128
	::System::Action* _OnActivePanelChanged_k__BackingField; // 0x130
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_104; // 0x138
	::System::Single Field_1_105; // 0x140
	::System::Int32 Field_1_106; // 0x144
	::System::Int32 Field_1_107; // 0x148
	::System::Int32 Field_1_108; // 0x14C
	::System::Single Field_1_109; // 0x150
	::System::Int32 Field_1_110; // 0x154
	::System::Boolean Field_1_111; // 0x158
	::System::Boolean Field_1_112; // 0x159
	::System::Single Field_1_113; // 0x15C
	::System::Int32 Field_1_114; // 0x160
	::System::Single Field_1_115; // 0x164
	::System::Single Field_1_116; // 0x168
	::System::Int32 Field_1_117; // 0x16C
	::System::Single Field_1_118; // 0x170
	::System::Single Field_1_119; // 0x174
	::UnityEngine::Vector3 Field_1_120; // 0x178
	::System::Boolean Field_1_121; // 0x184
	::System::Boolean Field_1_122; // 0x185
	::System::Boolean Field_1_123; // 0x186
	::System::Boolean Field_1_124; // 0x187
	::System::Int32 Field_1_125; // 0x188
	::System::Int32 Field_1_126; // 0x18C
	::System::Int32 Field_1_127; // 0x190
	::System::Boolean Field_1_128; // 0x194
	::System::Boolean Field_1_129; // 0x195
	::System::Boolean Field_1_130; // 0x196
	::UnityEngine::Vector4 Field_1_131; // 0x198

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203__CCTOR_OFFSET))();
	}

	::UnityEngine::Texture* Method_1_D2DA768232E640DF()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D2DA768232E640DF_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::FloatingObjectBuffer* Method_1_83408277B358B570()
	{
		return ((::FloatingObjectBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_83408277B358B570_OFFSET))(this);
	}

	::System::Void Method_1_A60E5E0917F6A6F4(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A60E5E0917F6A6F4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::WaveSimPanel*>* Method_1_749E996CB446551C()
	{
		return ((::System::Collections::Generic::List_1<::WaveSimPanel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_749E996CB446551C_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_1_C5CEC0D2132207CB(::LegacyGPUParticleSystem* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_C5CEC0D2132207CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0DD7B7EE3ACD7C71(::LegacyGPUParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0DD7B7EE3ACD7C71_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5F43DA7AD63D17A(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_C5F43DA7AD63D17A_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5F43DA7AD63D17A_1(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_C5F43DA7AD63D17A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	static ::System::Action* get_OnInstanced()
	{
		return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_GET_ONINSTANCED_OFFSET))();
	}

	static ::System::Void set_OnInstanced(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_SET_ONINSTANCED_OFFSET))(a1);
	}

	static ::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B1936CE4DA97AA45_OFFSET))();
	}

	static ::Class_1_2F95775169BD5203* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_2F95775169BD5203*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	static ::Class_1_2F95775169BD5203* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_2F95775169BD5203*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Void Method_1_83F84A2352FBB33C(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_OFFSET))(this, a1);
	}

	::System::Void Method_1_83F84A2352FBB33C_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_78E151D9A3BE2ACD(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_78E151D9A3BE2ACD_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_6092608CF92684DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6092608CF92684DE_OFFSET))(this);
	}

	::System::Void Method_1_1752943C8EA15AFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_1752943C8EA15AFA_OFFSET))(this);
	}

	::System::Void Method_1_CC32BB23BD684E52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CC32BB23BD684E52_OFFSET))(this);
	}

	::System::Void Method_1_396D1F1F9458998C(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_396D1F1F9458998C_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6DDFC1AF3B5F97D(::UnityEngine::RenderTexture* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B6DDFC1AF3B5F97D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Texture2D* Method_1_CAFF28467C61EE64()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_OFFSET))(this);
	}

	::UnityEngine::Texture2D* Method_1_CAFF28467C61EE64_1()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_1_OFFSET))(this);
	}

	::UnityEngine::Texture2D* Method_1_CAFF28467C61EE64_2()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_2_OFFSET))(this);
	}

	::System::Void Method_1_E6FA84ECDEF620CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_E6FA84ECDEF620CE_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_457158F21AF4EFF1(::WaveSimPanel* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_457158F21AF4EFF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A6B412A42E4C4567(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A6B412A42E4C4567_OFFSET))(this, a1);
	}

	::System::Void Method_1_6FE1AD71BA198A2B(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::Class_1_2F95775169BD5203_RegionType a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::Class_1_2F95775169BD5203_RegionType))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6FE1AD71BA198A2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0F7D41D7CCA1E58B(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0F7D41D7CCA1E58B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0807B7473B8F5526(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0807B7473B8F5526_OFFSET))(this, a1, a2, a3);
	}

	::System::Action* get_OnActivePanelChanged()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_GET_ONACTIVEPANELCHANGED_OFFSET))(this);
	}

	::System::Void set_OnActivePanelChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_SET_ONACTIVEPANELCHANGED_OFFSET))(this, a1);
	}

	::WaveSimPanel* Method_1_D2E7B99027D15632()
	{
		return ((::WaveSimPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D2E7B99027D15632_OFFSET))(this);
	}

	::System::Void Method_1_B44AE63E34C20CB3(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B44AE63E34C20CB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0B68C1DD4B91F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D0B68C1DD4B91F49_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0D372435D9CAE4BC_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_C8B959BA4F3993AF()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_C8B959BA4F3993AF_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_8DC7A8D48742DFD6()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_8DC7A8D48742DFD6_OFFSET))(this);
	}

	::System::Void Method_1_86FAFA42ABDC538F(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_86FAFA42ABDC538F_OFFSET))(this, a1);
	}

	::System::Void Method_1_66FADC979FDE358E(::InteractProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::InteractProxy*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_66FADC979FDE358E_OFFSET))(this, a1);
	}

	::System::Void Method_1_C37AC0022F0F8793(::InteractProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::InteractProxy*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_C37AC0022F0F8793_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_6386527715220317(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6386527715220317_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_72CC672E0ECF05A7(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_72CC672E0ECF05A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_A94BAB85685275CB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_A94BAB85685275CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B8E66A4FD58DCEE(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_7B8E66A4FD58DCEE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0D3455A2B8A3E6D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0D3455A2B8A3E6D4_OFFSET))(this);
	}

	::System::Void Method_1_00EB2C748D484792(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_00EB2C748D484792_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_6FCADD6476EBA26E(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6FCADD6476EBA26E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E2B6F1F20E5DF7A7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_E2B6F1F20E5DF7A7_OFFSET))(a1);
	}

	static ::System::Void Method_1_640C71A5A5EAE1D0(::UnityEngine::ComputeShader* a1, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* a2, ::UnityEngine::RenderTexture* a3)
	{
		return ((::System::Void(*)(::UnityEngine::ComputeShader*, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_640C71A5A5EAE1D0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_1DE63FE11FA0D5B4_OFFSET))();
	}

	static ::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_60E1F7F58CCF739F_OFFSET))();
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}
};

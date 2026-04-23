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

#define CLASS_1_2F95775169BD5203_GET_ONACTIVEPANELCHANGED_OFFSET UNITYSDK_OFFSET(0x995A910)
#define CLASS_1_2F95775169BD5203_GET_ONINSTANCED_OFFSET UNITYSDK_OFFSET(0x9954DB0)
#define CLASS_1_2F95775169BD5203_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x995CD30)
#define CLASS_1_2F95775169BD5203_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x995B990)
#define CLASS_1_2F95775169BD5203_METHOD_1_0626B8FDDB3CCB92_OFFSET UNITYSDK_OFFSET(0x9956DD0)
#define CLASS_1_2F95775169BD5203_METHOD_1_06882BAD50E20B19_OFFSET UNITYSDK_OFFSET(0x9956410)
#define CLASS_1_2F95775169BD5203_METHOD_1_06DA9A03809A95B0_OFFSET UNITYSDK_OFFSET(0x995C4C0)
#define CLASS_1_2F95775169BD5203_METHOD_1_0F7D41D7CCA1E58B_OFFSET UNITYSDK_OFFSET(0x995A5E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_10BA33E5106447FB_OFFSET UNITYSDK_OFFSET(0x9959E80)
#define CLASS_1_2F95775169BD5203_METHOD_1_130F74EAAC211FE9_OFFSET UNITYSDK_OFFSET(0x995CAA0)
#define CLASS_1_2F95775169BD5203_METHOD_1_136AA723B7BC2FB1_OFFSET UNITYSDK_OFFSET(0x99548E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x9954310)
#define CLASS_1_2F95775169BD5203_METHOD_1_17B438A8A428F3F1_OFFSET UNITYSDK_OFFSET(0x9958950)
#define CLASS_1_2F95775169BD5203_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x99594D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_23286C4E1BC884C6_OFFSET UNITYSDK_OFFSET(0x9956110)
#define CLASS_1_2F95775169BD5203_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x99544B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_2D7D5BFA98E754EE_OFFSET UNITYSDK_OFFSET(0x9954810)
#define CLASS_1_2F95775169BD5203_METHOD_1_396D1F1F9458998C_OFFSET UNITYSDK_OFFSET(0x9958FF0)
#define CLASS_1_2F95775169BD5203_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x99561E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x9956A60)
#define CLASS_1_2F95775169BD5203_METHOD_1_457158F21AF4EFF1_OFFSET UNITYSDK_OFFSET(0x9959A80)
#define CLASS_1_2F95775169BD5203_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x99565D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0x99545E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_4EBDBAAEF5EE433F_OFFSET UNITYSDK_OFFSET(0x9954720)
#define CLASS_1_2F95775169BD5203_METHOD_1_5111CFB8C4345E2B_OFFSET UNITYSDK_OFFSET(0x9955FB0)
#define CLASS_1_2F95775169BD5203_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x9954F30)
#define CLASS_1_2F95775169BD5203_METHOD_1_5A753E00298D4034_OFFSET UNITYSDK_OFFSET(0x9954AE0)
#define CLASS_1_2F95775169BD5203_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x9958D90)
#define CLASS_1_2F95775169BD5203_METHOD_1_621509ADEB43845F_OFFSET UNITYSDK_OFFSET(0x995BEC0)
#define CLASS_1_2F95775169BD5203_METHOD_1_6386527715220317_OFFSET UNITYSDK_OFFSET(0x995A7B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_640C71A5A5EAE1D0_OFFSET UNITYSDK_OFFSET(0x9959120)
#define CLASS_1_2F95775169BD5203_METHOD_1_6FCADD6476EBA26E_OFFSET UNITYSDK_OFFSET(0x995C8C0)
#define CLASS_1_2F95775169BD5203_METHOD_1_6FE1AD71BA198A2B_OFFSET UNITYSDK_OFFSET(0x995A2D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_72CC672E0ECF05A7_OFFSET UNITYSDK_OFFSET(0x995BF80)
#define CLASS_1_2F95775169BD5203_METHOD_1_749E996CB446551C_OFFSET UNITYSDK_OFFSET(0x9954510)
#define CLASS_1_2F95775169BD5203_METHOD_1_7B32E6463125895B_OFFSET UNITYSDK_OFFSET(0x99552F0)
#define CLASS_1_2F95775169BD5203_METHOD_1_7E56748B5D1765E4_OFFSET UNITYSDK_OFFSET(0x995BD20)
#define CLASS_1_2F95775169BD5203_METHOD_1_83408277B358B570_OFFSET UNITYSDK_OFFSET(0x9953EB0)
#define CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_OFFSET UNITYSDK_OFFSET(0x9956080)
#define CLASS_1_2F95775169BD5203_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x9954D30)
#define CLASS_1_2F95775169BD5203_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x995B8E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_8DC7A8D48742DFD6_OFFSET UNITYSDK_OFFSET(0x995BDC0)
#define CLASS_1_2F95775169BD5203_METHOD_1_9094A96EEEB7AD9B_OFFSET UNITYSDK_OFFSET(0x995B830)
#define CLASS_1_2F95775169BD5203_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9954670)
#define CLASS_1_2F95775169BD5203_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x9954E20)
#define CLASS_1_2F95775169BD5203_METHOD_1_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x99546D0)
#define CLASS_1_2F95775169BD5203_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9953E60)
#define CLASS_1_2F95775169BD5203_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x9954F60)
#define CLASS_1_2F95775169BD5203_METHOD_1_B09968832FEFF646_OFFSET UNITYSDK_OFFSET(0x99549A0)
#define CLASS_1_2F95775169BD5203_METHOD_1_B16F718A68F30FC4_OFFSET UNITYSDK_OFFSET(0x995AC00)
#define CLASS_1_2F95775169BD5203_METHOD_1_B44AE63E34C20CB3_OFFSET UNITYSDK_OFFSET(0x995A940)
#define CLASS_1_2F95775169BD5203_METHOD_1_B6DDFC1AF3B5F97D_OFFSET UNITYSDK_OFFSET(0x9959240)
#define CLASS_1_2F95775169BD5203_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x9953E50)
#define CLASS_1_2F95775169BD5203_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x995C880)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_1_OFFSET UNITYSDK_OFFSET(0x9959430)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_2_OFFSET UNITYSDK_OFFSET(0x9959480)
#define CLASS_1_2F95775169BD5203_METHOD_1_CAFF28467C61EE64_OFFSET UNITYSDK_OFFSET(0x99593E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_CCCB4B28FDD898E3_OFFSET UNITYSDK_OFFSET(0x99543E0)
#define CLASS_1_2F95775169BD5203_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x9959690)
#define CLASS_1_2F95775169BD5203_METHOD_1_D2DA768232E640DF_OFFSET UNITYSDK_OFFSET(0x9953DE0)
#define CLASS_1_2F95775169BD5203_METHOD_1_D2E7B99027D15632_OFFSET UNITYSDK_OFFSET(0x995A930)
#define CLASS_1_2F95775169BD5203_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x99565B0)
#define CLASS_1_2F95775169BD5203_METHOD_1_D843B3A87B4B93FD_OFFSET UNITYSDK_OFFSET(0x995BE00)
#define CLASS_1_2F95775169BD5203_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x995C060)
#define CLASS_1_2F95775169BD5203_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x9954530)
#define CLASS_1_2F95775169BD5203_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x99563C0)
#define CLASS_1_2F95775169BD5203_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9954520)
#define CLASS_1_2F95775169BD5203_METHOD_1_F26622B39BDCBB48_OFFSET UNITYSDK_OFFSET(0x99589A0)
#define CLASS_1_2F95775169BD5203_SET_ONACTIVEPANELCHANGED_OFFSET UNITYSDK_OFFSET(0x995A920)
#define CLASS_1_2F95775169BD5203_SET_ONINSTANCED_OFFSET UNITYSDK_OFFSET(0x9954DE0)
#define CLASS_1_2F95775169BD5203__CCTOR_OFFSET UNITYSDK_OFFSET(0x995CD70)
#define CLASS_1_2F95775169BD5203__CTOR_OFFSET UNITYSDK_OFFSET(0x9955070)

inline static constexpr unsigned int Class_1_2F95775169BD5203_TypeDefinitionIndex = 44241;

class Class_1_2F95775169BD5203 : public ::System::Object
{
public:
	static ::UnityEngine::ComputeShader** StaticGet_Field_1_80()
	{
		return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xC6E0);
	}
	static ::Class_1_2F95775169BD5203** StaticGet_Field_1_121()
	{
		return (::Class_1_2F95775169BD5203**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xC6E8);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_76()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xC6F0);
	}
	static ::System::Action** StaticGet__OnInstanced_k__BackingField()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xC6F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>** StaticGet_Field_1_131()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0xC700);
	}
	static ::System::Int32* StaticGet_Field_1_39()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A60);
	}
	static ::System::Int32* StaticGet_Field_1_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A64);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A68);
	}
	static ::System::Int32* StaticGet_Field_1_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A6C);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A70);
	}
	static ::System::Int32* StaticGet_Field_1_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A74);
	}
	static ::System::Int32* StaticGet_Field_1_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A78);
	}
	static ::System::Int32* StaticGet_Field_1_30()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A7C);
	}
	static ::System::Int32* StaticGet_Field_1_51()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A80);
	}
	static ::System::Int32* StaticGet_Field_1_50()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A84);
	}
	static ::System::Int32* StaticGet_Field_1_55()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A88);
	}
	static ::System::Int32* StaticGet_Field_1_49()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A8C);
	}
	static ::System::Int32* StaticGet_Field_1_41()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A90);
	}
	static ::System::Int32* StaticGet_Field_1_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A94);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A98);
	}
	static ::System::Int32* StaticGet_Field_1_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4A9C);
	}
	static ::System::Int32* StaticGet_Field_1_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AA0);
	}
	static ::System::Int32* StaticGet_Field_1_48()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AA4);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AA8);
	}
	static ::System::Int32* StaticGet_Field_1_66()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AAC);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AB0);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AB4);
	}
	static ::System::Int32* StaticGet_Field_1_57()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AB8);
	}
	static ::System::Int32* StaticGet_Field_1_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4ABC);
	}
	static ::System::Int32* StaticGet_Field_1_40()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AC0);
	}
	static ::System::Int32* StaticGet_Field_1_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AC4);
	}
	static ::System::Int32* StaticGet_Field_1_29()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AC8);
	}
	static ::System::Int32* StaticGet_Field_1_60()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4ACC);
	}
	static ::System::Int32* StaticGet_Field_1_58()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AD0);
	}
	static ::System::Int32* StaticGet_Field_1_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AD4);
	}
	static ::System::Int32* StaticGet_Field_1_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AD8);
	}
	static ::System::Int32* StaticGet_Field_1_59()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4ADC);
	}
	static ::System::Int32* StaticGet_Field_1_42()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AE0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AE4);
	}
	static ::System::Int32* StaticGet_Field_1_36()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AE8);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AEC);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AF0);
	}
	static ::System::Int32* StaticGet_Field_1_54()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AF4);
	}
	static ::System::Int32* StaticGet_Field_1_45()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AF8);
	}
	static ::System::Int32* StaticGet_Field_1_47()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4AFC);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B00);
	}
	static ::System::Int32* StaticGet_Field_1_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B04);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B08);
	}
	static ::System::Int32* StaticGet_Field_1_53()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B0C);
	}
	static ::System::Int32* StaticGet_Field_1_52()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B10);
	}
	static ::System::Int32* StaticGet_Field_1_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B14);
	}
	static ::System::Int32* StaticGet_Field_1_35()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B18);
	}
	static ::System::Int32* StaticGet_Field_1_44()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B1C);
	}
	static ::System::Int32* StaticGet_Field_1_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B20);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B24);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B28);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B2C);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B30);
	}
	static ::System::Int32* StaticGet_Field_1_43()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B34);
	}
	static ::System::Int32* StaticGet_Field_1_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B38);
	}
	static ::System::Int32* StaticGet_Field_1_46()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B3C);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B40);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B44);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B48);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B4C);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B50);
	}
	static ::System::Int32* StaticGet_Field_1_56()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F95775169BD5203_TypeDefinitionIndex)->GetStaticField(0x4B54);
	}
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_90; // 0x10
	::FloatingObjectBuffer* Field_1_109; // 0x18
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_86; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* Field_1_95; // 0x28
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_88; // 0x30
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_81; // 0x38
	::WaveSimPanel* Field_1_123; // 0x40
	::UnityEngine::RenderTexture* Field_1_96; // 0x48
	::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* Field_1_120; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_75; // 0x58
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_85; // 0x60
	::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>* Field_1_107; // 0x68
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_91; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* Field_1_101; // 0x78
	::System::Collections::Generic::List_1<::InteractProxy*>* Field_1_104; // 0x80
	::UnityEngine::RenderTexture* Field_1_100; // 0x88
	::UnityEngine::Texture2D* Field_1_77; // 0x90
	::System::Action* _OnActivePanelChanged_k__BackingField; // 0x98
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_84; // 0xA0
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_93; // 0xA8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_83; // 0xB0
	::WaveSimPanel* Field_1_115; // 0xB8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_92; // 0xC0
	::UnityEngine::RenderTexture* Field_1_103; // 0xC8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_94; // 0xD0
	::RPG::Client::WaveSimConfig* Field_1_110; // 0xD8
	::UnityEngine::RenderTexture* Field_1_97; // 0xE0
	::System::Collections::Generic::List_1<::WaveSimPanel*>* Field_1_117; // 0xE8
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_82; // 0xF0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_125; // 0xF8
	::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* Field_1_98; // 0x100
	::System::Collections::Generic::List_1<::WaveSimPanel*>* Field_1_124; // 0x108
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_89; // 0x110
	::System::Collections::Generic::List_1<::WaveInteract>* Field_1_106; // 0x118
	::UnityEngine::Texture2D* Field_1_108; // 0x120
	::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_1_87; // 0x128
	::UnityEngine::Texture2D* Field_1_78; // 0x130
	::UnityEngine::Texture2D* Field_1_79; // 0x138
	::System::Single Field_1_68; // 0x140
	::System::Single Field_1_118; // 0x144
	::System::Single Field_1_61; // 0x148
	::System::Single Field_1_70; // 0x14C
	::System::Int32 Field_1_105; // 0x150
	::System::Single Field_1_74; // 0x154
	::UnityEngine::Vector3 Field_1_128; // 0x158
	::System::Int32 Field_1_112; // 0x164
	::System::Int32 Field_1_102; // 0x168
	::System::Single Field_1_114; // 0x16C
	::System::Int32 Field_1_67; // 0x170
	::System::Int32 Field_1_99; // 0x174
	::System::Boolean Field_1_71; // 0x178
	::System::Boolean Field_1_73; // 0x179
	::System::Single Field_1_62; // 0x17C
	::System::Int32 Field_1_64; // 0x180
	::System::Int32 Field_1_69; // 0x184
	::UnityEngine::Vector4 Field_1_72; // 0x188
	::System::Int32 Field_1_113; // 0x198
	::System::Boolean Field_1_111; // 0x19C
	::System::Boolean Field_1_116; // 0x19D
	::System::Boolean Field_1_65; // 0x19E
	::System::Boolean Field_1_129; // 0x19F
	::System::Boolean Field_1_127; // 0x1A0
	::System::Boolean Field_1_119; // 0x1A1
	::System::Boolean Field_1_126; // 0x1A2
	::System::Int32 Field_1_63; // 0x1A4

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

	::System::Void Method_1_CCCB4B28FDD898E3(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CCCB4B28FDD898E3_OFFSET))(this, a1, a2, a3);
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

	::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_1_4EBDBAAEF5EE433F(::LegacyGPUParticleSystem* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_4EBDBAAEF5EE433F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2D7D5BFA98E754EE(::LegacyGPUParticleSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_2D7D5BFA98E754EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_136AA723B7BC2FB1(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_136AA723B7BC2FB1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09968832FEFF646(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B09968832FEFF646_OFFSET))(this, a1);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	static ::System::Action* get_OnInstanced()
	{
		return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_GET_ONINSTANCED_OFFSET))();
	}

	static ::System::Void set_OnInstanced(::System::Action* value)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_SET_ONINSTANCED_OFFSET))(value);
	}

	static ::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_9A6DA36CCAE7D188_OFFSET))();
	}

	static ::Class_1_2F95775169BD5203* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_2F95775169BD5203*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	static ::Class_1_2F95775169BD5203* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_2F95775169BD5203*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Void Method_1_5111CFB8C4345E2B(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_5111CFB8C4345E2B_OFFSET))(this, a1);
	}

	::System::Void Method_1_83F84A2352FBB33C(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_83F84A2352FBB33C_OFFSET))(this, a1);
	}

	::System::Void Method_1_23286C4E1BC884C6(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_23286C4E1BC884C6_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_17B438A8A428F3F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_17B438A8A428F3F1_OFFSET))(this);
	}

	::System::Void Method_1_7B32E6463125895B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_7B32E6463125895B_OFFSET))(this);
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

	::System::Void Method_1_F26622B39BDCBB48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_F26622B39BDCBB48_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_457158F21AF4EFF1(::WaveSimPanel* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_457158F21AF4EFF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_10BA33E5106447FB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_10BA33E5106447FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_6FE1AD71BA198A2B(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::Class_1_2F95775169BD5203_RegionType a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::Class_1_2F95775169BD5203_RegionType))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6FE1AD71BA198A2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0F7D41D7CCA1E58B(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0F7D41D7CCA1E58B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_06882BAD50E20B19(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_06882BAD50E20B19_OFFSET))(this, a1, a2, a3);
	}

	::System::Action* get_OnActivePanelChanged()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_GET_ONACTIVEPANELCHANGED_OFFSET))(this);
	}

	::System::Void set_OnActivePanelChanged(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_SET_ONACTIVEPANELCHANGED_OFFSET))(this, value);
	}

	::WaveSimPanel* Method_1_D2E7B99027D15632()
	{
		return ((::WaveSimPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D2E7B99027D15632_OFFSET))(this);
	}

	::System::Void Method_1_B44AE63E34C20CB3(::WaveSimPanel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B44AE63E34C20CB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_9094A96EEEB7AD9B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_9094A96EEEB7AD9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C1C6BDA70EF0410(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_4C1C6BDA70EF0410_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_7E56748B5D1765E4()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_7E56748B5D1765E4_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_8DC7A8D48742DFD6()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_8DC7A8D48742DFD6_OFFSET))(this);
	}

	::System::Void Method_1_5A753E00298D4034(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_5A753E00298D4034_OFFSET))(this, a1);
	}

	::System::Void Method_1_D843B3A87B4B93FD(::InteractProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::InteractProxy*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_D843B3A87B4B93FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_621509ADEB43845F(::InteractProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::InteractProxy*))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_621509ADEB43845F_OFFSET))(this, a1);
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

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_0626B8FDDB3CCB92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_0626B8FDDB3CCB92_OFFSET))(this, a1);
	}

	::System::Void Method_1_06DA9A03809A95B0(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_06DA9A03809A95B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_1_B16F718A68F30FC4(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_B16F718A68F30FC4_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_6FCADD6476EBA26E(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_6FCADD6476EBA26E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_130F74EAAC211FE9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F95775169BD5203_METHOD_1_130F74EAAC211FE9_OFFSET))(a1);
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

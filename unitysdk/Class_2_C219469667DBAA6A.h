#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C219469667DBAA6A_Enum_3_554CAED038424452.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_433EAFD16930C7BA.h"

class Class_1_2C75E68C0ED89E97;
class Class_1_986F52381DF139E6;
class Class_2_C219469667DBAA6A_Class_1_42788263D0E1130D;
class Class_2_C219469667DBAA6A_Class_1_B63EF75DA8C71149;
class Class_3_5F8DAA47ACDB7251;
namespace FlowCanvas { class FlowNode; }
namespace Foundation { class AssetPoolRunMode; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class PreloadGhostEffectConfig; }
namespace MoleMole { class PreloadLevelConfig; }
namespace MoleMole { class PreloadMonsterSummonConfig; }
namespace MoleMole { class PreloadSingleGroupConfig; }
namespace MoleMole { class PreloadSingleLevelConfig; }
namespace MoleMole { class PreloadSingleStreaminGameConfig; }
namespace MoleMole { class PreloadStreamingGameConfig; }
namespace MoleMole { class PreloadUIAssetsConfig; }
namespace MoleMole { class TeamDataItem; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ShaderVariantCollection; }

#define CLASS_2_C219469667DBAA6A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11246020)
#define CLASS_2_C219469667DBAA6A_METHOD_2_09753BBB55A2BD9E_OFFSET UNITYSDK_OFFSET(0x11255010)
#define CLASS_2_C219469667DBAA6A_METHOD_2_0E17D5162C02199F_OFFSET UNITYSDK_OFFSET(0x1124F100)
#define CLASS_2_C219469667DBAA6A_METHOD_2_0FA8D2457860B677_OFFSET UNITYSDK_OFFSET(0x1124C5B0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_0FBCCD0ECB3E49FA_OFFSET UNITYSDK_OFFSET(0x11247B20)
#define CLASS_2_C219469667DBAA6A_METHOD_2_10B5EDD03FB1C08B_OFFSET UNITYSDK_OFFSET(0x112529A0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x11255310)
#define CLASS_2_C219469667DBAA6A_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11253900)
#define CLASS_2_C219469667DBAA6A_METHOD_2_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x1124BB50)
#define CLASS_2_C219469667DBAA6A_METHOD_2_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0x112539B0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_22C8B27D1773170D_OFFSET UNITYSDK_OFFSET(0x1124E0E0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x11257310)
#define CLASS_2_C219469667DBAA6A_METHOD_2_2B8B70092FE5FFBC_OFFSET UNITYSDK_OFFSET(0x11249B70)
#define CLASS_2_C219469667DBAA6A_METHOD_2_30A8E3D87CAC149E_OFFSET UNITYSDK_OFFSET(0x1124EF80)
#define CLASS_2_C219469667DBAA6A_METHOD_2_30BE0FAEB4D229A4_OFFSET UNITYSDK_OFFSET(0x1124F3B0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_33B57B4EA2B00DA3_OFFSET UNITYSDK_OFFSET(0x1124CFC0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_342171591C9121A2_OFFSET UNITYSDK_OFFSET(0x1124B5D0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_35FB6B1DA0F7018A_OFFSET UNITYSDK_OFFSET(0x11256F90)
#define CLASS_2_C219469667DBAA6A_METHOD_2_362228ED47D27AF7_OFFSET UNITYSDK_OFFSET(0x112563C0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x11246580)
#define CLASS_2_C219469667DBAA6A_METHOD_2_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x112559C0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11256CD0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0x1124DCF0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_4353FFAF6FBCA62C_OFFSET UNITYSDK_OFFSET(0x11254EF0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x11255780)
#define CLASS_2_C219469667DBAA6A_METHOD_2_44C6956149352354_OFFSET UNITYSDK_OFFSET(0x112503D0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_44D3880D3CD317F0_OFFSET UNITYSDK_OFFSET(0x11252650)
#define CLASS_2_C219469667DBAA6A_METHOD_2_5424EA29D826068F_OFFSET UNITYSDK_OFFSET(0x11247330)
#define CLASS_2_C219469667DBAA6A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1124CE20)
#define CLASS_2_C219469667DBAA6A_METHOD_2_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x11248790)
#define CLASS_2_C219469667DBAA6A_METHOD_2_614675CBA6131A20_OFFSET UNITYSDK_OFFSET(0x1124B770)
#define CLASS_2_C219469667DBAA6A_METHOD_2_637BE57AD17CE1C1_OFFSET UNITYSDK_OFFSET(0x112554E0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_6590D7A40D9A82FB_OFFSET UNITYSDK_OFFSET(0x11256E40)
#define CLASS_2_C219469667DBAA6A_METHOD_2_670F9011F4A497FF_OFFSET UNITYSDK_OFFSET(0x11251DD0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_6AD73B86F90810C1_OFFSET UNITYSDK_OFFSET(0x112509A0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_6F9706A3E0D0298D_OFFSET UNITYSDK_OFFSET(0x11248A00)
#define CLASS_2_C219469667DBAA6A_METHOD_2_7435303307FA82B1_OFFSET UNITYSDK_OFFSET(0x1124CF70)
#define CLASS_2_C219469667DBAA6A_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x11256B30)
#define CLASS_2_C219469667DBAA6A_METHOD_2_7A6948FD354CB3F3_OFFSET UNITYSDK_OFFSET(0x112492A0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_7E692C4823C131A7_OFFSET UNITYSDK_OFFSET(0x11257A20)
#define CLASS_2_C219469667DBAA6A_METHOD_2_7F4192D12853B595_OFFSET UNITYSDK_OFFSET(0x11252480)
#define CLASS_2_C219469667DBAA6A_METHOD_2_7FDE2873CDAB8BA1_OFFSET UNITYSDK_OFFSET(0x112504F0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_83DD9CDA25F37FB9_OFFSET UNITYSDK_OFFSET(0x11251A40)
#define CLASS_2_C219469667DBAA6A_METHOD_2_8A89067F0D435875_OFFSET UNITYSDK_OFFSET(0x1124E990)
#define CLASS_2_C219469667DBAA6A_METHOD_2_8C713B32B3B4180D_OFFSET UNITYSDK_OFFSET(0x11257A70)
#define CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_1_OFFSET UNITYSDK_OFFSET(0x11250460)
#define CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_2_OFFSET UNITYSDK_OFFSET(0x11256DB0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_OFFSET UNITYSDK_OFFSET(0x1124D1E0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_9114FE74C723030B_OFFSET UNITYSDK_OFFSET(0x1124BFC0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_9219C2A9E5905AEF_OFFSET UNITYSDK_OFFSET(0x1124EA40)
#define CLASS_2_C219469667DBAA6A_METHOD_2_9B6155789DB526FE_OFFSET UNITYSDK_OFFSET(0x11251280)
#define CLASS_2_C219469667DBAA6A_METHOD_2_9CF93D9EF546634A_OFFSET UNITYSDK_OFFSET(0x11248CB0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_9FEBDE4CF5D68407_OFFSET UNITYSDK_OFFSET(0x112556D0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_A31A14B9B6EA8D2F_OFFSET UNITYSDK_OFFSET(0x11248460)
#define CLASS_2_C219469667DBAA6A_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x112565D0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_AB4F9B00D764C4EA_OFFSET UNITYSDK_OFFSET(0x11252910)
#define CLASS_2_C219469667DBAA6A_METHOD_2_AC2F3DB2172423FD_OFFSET UNITYSDK_OFFSET(0x1124FE30)
#define CLASS_2_C219469667DBAA6A_METHOD_2_ADD45F11BB7336A7_OFFSET UNITYSDK_OFFSET(0x1124CE60)
#define CLASS_2_C219469667DBAA6A_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11251970)
#define CLASS_2_C219469667DBAA6A_METHOD_2_B6EB6624ADED740A_OFFSET UNITYSDK_OFFSET(0x112536D0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_B9A9E959EC753CBA_OFFSET UNITYSDK_OFFSET(0x1124DE20)
#define CLASS_2_C219469667DBAA6A_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x112460B0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11245FE0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x11256D20)
#define CLASS_2_C219469667DBAA6A_METHOD_2_CB9CB30F9EEFA2D1_OFFSET UNITYSDK_OFFSET(0x11249000)
#define CLASS_2_C219469667DBAA6A_METHOD_2_CBCE4A2497FEDA8F_OFFSET UNITYSDK_OFFSET(0x11247E80)
#define CLASS_2_C219469667DBAA6A_METHOD_2_D20BF56E36607D54_1_OFFSET UNITYSDK_OFFSET(0x1124BAB0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x1124BB00)
#define CLASS_2_C219469667DBAA6A_METHOD_2_D56164292B7CC690_OFFSET UNITYSDK_OFFSET(0x11255380)
#define CLASS_2_C219469667DBAA6A_METHOD_2_D9B8FBA9ED10B3DC_OFFSET UNITYSDK_OFFSET(0x1124E020)
#define CLASS_2_C219469667DBAA6A_METHOD_2_DBA2FA22E3C11308_OFFSET UNITYSDK_OFFSET(0x1124BD80)
#define CLASS_2_C219469667DBAA6A_METHOD_2_DDFD5258CD3CC3DB_OFFSET UNITYSDK_OFFSET(0x1124D610)
#define CLASS_2_C219469667DBAA6A_METHOD_2_DF5FA5D742DD8F71_OFFSET UNITYSDK_OFFSET(0x1124D270)
#define CLASS_2_C219469667DBAA6A_METHOD_2_DF645F048FE4E4E3_OFFSET UNITYSDK_OFFSET(0x11256450)
#define CLASS_2_C219469667DBAA6A_METHOD_2_E42B2031F3B58559_OFFSET UNITYSDK_OFFSET(0x112506A0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x11247470)
#define CLASS_2_C219469667DBAA6A_METHOD_2_EB092EAC5D07B77E_OFFSET UNITYSDK_OFFSET(0x11256C80)
#define CLASS_2_C219469667DBAA6A_METHOD_2_ED26635D0EB903C2_OFFSET UNITYSDK_OFFSET(0x11248840)
#define CLASS_2_C219469667DBAA6A_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x11253970)
#define CLASS_2_C219469667DBAA6A_METHOD_2_F237A7075F5557C8_OFFSET UNITYSDK_OFFSET(0x1124AFA0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_F5203B25925DADA6_OFFSET UNITYSDK_OFFSET(0x1124DFD0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_F7129A87C3FC8740_OFFSET UNITYSDK_OFFSET(0x11247180)
#define CLASS_2_C219469667DBAA6A_METHOD_2_F7F8016EAE618A49_OFFSET UNITYSDK_OFFSET(0x11256530)
#define CLASS_2_C219469667DBAA6A_METHOD_2_FB116C60A246D0A5_OFFSET UNITYSDK_OFFSET(0x1124F9A0)
#define CLASS_2_C219469667DBAA6A_METHOD_2_FDE914DD8171A49F_OFFSET UNITYSDK_OFFSET(0x11253890)
#define CLASS_2_C219469667DBAA6A_ONCREATE_OFFSET UNITYSDK_OFFSET(0x11246070)
#define CLASS_2_C219469667DBAA6A__CCTOR_OFFSET UNITYSDK_OFFSET(0x11246500)
#define CLASS_2_C219469667DBAA6A__CTOR_OFFSET UNITYSDK_OFFSET(0x112460F0)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_TypeDefinitionIndex = 59402;

class Class_2_C219469667DBAA6A : public ::Foundation::SingletonDisposable_1<::Class_2_C219469667DBAA6A*>
{
public:
	static ::Foundation::AssetRequestHandle* StaticGet_Field_2_60()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0x332A0);
	}
	static ::MoleMole::PreloadUIAssetsConfig** StaticGet_Field_2_58()
	{
		return (::MoleMole::PreloadUIAssetsConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0x332C0);
	}
	static ::System::Diagnostics::Stopwatch** StaticGet_Field_2_68()
	{
		return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0x332C8);
	}
	static ::System::Boolean* StaticGet_Field_2_43()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC890);
	}
	static ::System::Boolean* StaticGet_Field_2_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC891);
	}
	static ::System::Boolean* StaticGet_Field_2_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC892);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC893);
	}
	static ::System::Single* StaticGet_Field_2_70()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC894);
	}
	static ::System::Boolean* StaticGet_Field_2_63()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC898);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC899);
	}
	static ::System::Boolean* StaticGet_Field_2_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC89A);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC89B);
	}
	static ::System::Single* StaticGet_Field_2_69()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC89C);
	}
	static ::System::Single* StaticGet_Field_2_67()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC8A0);
	}
	static ::System::Boolean* StaticGet_Field_2_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC8A4);
	}
	static ::System::Boolean* StaticGet_Field_2_66()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC8A5);
	}
	static ::System::Boolean* StaticGet_Field_2_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC8A6);
	}
	static ::System::Boolean* StaticGet_Field_2_57()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC8A7);
	}
	static ::System::Boolean* StaticGet_Field_2_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C219469667DBAA6A_TypeDefinitionIndex)->GetStaticField(0xC8A8);
	}
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_47; // 0x0
	// static const ::System::String* Field_2_48; // 0x0
	// static const ::System::String* Field_2_49; // 0x0
	// static const ::System::Int64 Field_2_52 = 0xB5400000; // 0x0
	// static const ::System::String* Field_2_59; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadGhostEffectConfig*>* Field_2_25; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_34; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_2_45; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_29; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_64; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_28; // 0x38
	::MoleMole::PreloadLevelConfig* Field_2_14; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_65; // 0x48
	::System::String* Field_2_33; // 0x50
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_55; // 0x58
	::Il2CppArray<::Class_2_C219469667DBAA6A_Class_1_B63EF75DA8C71149*>* Field_2_18; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleGroupConfig*>* Field_2_22; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_35; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_C219469667DBAA6A_Class_1_42788263D0E1130D*>* Field_2_61; // 0x78
	::Il2CppArray<::System::UInt64>* Field_2_16; // 0x80
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_0; // 0x88
	::Il2CppArray<::System::UInt64>* Field_2_17; // 0x90
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_42; // 0x98
	::Foundation::AssetPoolRunMode* Field_2_41; // 0xA0
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_31; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_50; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadMonsterSummonConfig*>* Field_2_26; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_C219469667DBAA6A_Class_1_42788263D0E1130D*>* Field_2_62; // 0xC0
	::MoleMole::PreloadStreamingGameConfig* Field_2_15; // 0xC8
	::Il2CppArray<::Class_2_C219469667DBAA6A_Class_1_B63EF75DA8C71149*>* Field_2_19; // 0xD0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::Class_1_2C75E68C0ED89E97*>* Field_2_32; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleLevelConfig*>* Field_2_20; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleGroupConfig*>* Field_2_23; // 0xE8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_30; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleGroupConfig*>* Field_2_21; // 0xF8
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_54; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleGroupConfig*>* Field_2_24; // 0x108
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PreloadSingleStreaminGameConfig*>* Field_2_27; // 0x110
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_36; // 0x118
	::System::Int32 Field_2_37; // 0x120
	::System::Int32 Field_2_40; // 0x124
	::System::Int32 Field_2_38; // 0x128
	::System::Int32 Field_2_39; // 0x12C
	::System::Boolean Field_2_56; // 0x130
	::System::Boolean Field_2_53; // 0x131
	::System::Boolean Field_2_46; // 0x132
	::System::Boolean Field_2_44; // 0x133
	::System::Boolean Field_2_51; // 0x134

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>* Method_2_0FBCCD0ECB3E49FA(::NodeCanvas::Framework::Graph* a1)
	{
		return ((::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>*(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_0FBCCD0ECB3E49FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7129A87C3FC8740(::Foundation::AssetRequestHandle a1, ::Foundation::AssetPath a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetPath, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_F7129A87C3FC8740_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A31A14B9B6EA8D2F(::MoleMole::PreloadSingleGroupConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadSingleGroupConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_A31A14B9B6EA8D2F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_611142A6ECF0D805_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED26635D0EB903C2(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_ED26635D0EB903C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CB9CB30F9EEFA2D1(::MoleMole::PreloadSingleStreaminGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadSingleStreaminGameConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_CB9CB30F9EEFA2D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B8B70092FE5FFBC(::Class_3_5F8DAA47ACDB7251* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5F8DAA47ACDB7251*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_2B8B70092FE5FFBC_OFFSET))(this, a1);
	}

	::System::Void Method_2_DBA2FA22E3C11308(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_DBA2FA22E3C11308_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_9114FE74C723030B(::System::Int32 a1, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_9114FE74C723030B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F237A7075F5557C8(::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_F237A7075F5557C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_0FA8D2457860B677(::Class_2_C219469667DBAA6A_Class_1_42788263D0E1130D* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C219469667DBAA6A_Class_1_42788263D0E1130D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_0FA8D2457860B677_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D20BF56E36607D54_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_D20BF56E36607D54_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_5790A55946AA509D_OFFSET))();
	}

	::Foundation::AssetRequestHandle Method_2_ADD45F11BB7336A7(::Foundation::AssetPath a1)
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_ADD45F11BB7336A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_614675CBA6131A20(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_614675CBA6131A20_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_2_8E6B15734894FE2D(::System::String* a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DF5FA5D742DD8F71(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_DF5FA5D742DD8F71_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9A9E959EC753CBA(::UnityEngine::ShaderVariantCollection* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ShaderVariantCollection*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_B9A9E959EC753CBA_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_2_D9B8FBA9ED10B3DC(::System::String* a1, ::System::Int32 a2, ::System::Action_1<::System::Single>* a3, ::System::Single a4)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Action_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_D9B8FBA9ED10B3DC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_22C8B27D1773170D(::System::Int32 a1, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Action_3<::Foundation::AssetPath, ::System::Int32, ::System::Int32>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Action_3<::Foundation::AssetPath, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_22C8B27D1773170D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_0E17D5162C02199F(::Struct_2_433EAFD16930C7BA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_433EAFD16930C7BA))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_0E17D5162C02199F_OFFSET))(this, a1);
	}

	::System::Void Method_2_30BE0FAEB4D229A4(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::Struct_2_433EAFD16930C7BA>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::Struct_2_433EAFD16930C7BA>*&))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_30BE0FAEB4D229A4_OFFSET))(this, a1, a2);
	}

	::Struct_2_433EAFD16930C7BA Method_2_FB116C60A246D0A5(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::Struct_2_433EAFD16930C7BA(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_FB116C60A246D0A5_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::IEnumerator* Method_2_44C6956149352354(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_44C6956149352354_OFFSET))(a1, a2);
	}

	::System::Collections::IEnumerator* Method_2_8E6B15734894FE2D_1(::System::String* a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7FDE2873CDAB8BA1(::NodeCanvas::Framework::Graph* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_7FDE2873CDAB8BA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E42B2031F3B58559(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_E42B2031F3B58559_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8A89067F0D435875(::System::Int32 a1, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_8A89067F0D435875_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>* Method_2_6AD73B86F90810C1(::NodeCanvas::Framework::Graph* a1)
	{
		return ((::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>*(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_6AD73B86F90810C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B6155789DB526FE(::System::Int32 a1, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Action_1<::System::Int32>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_9B6155789DB526FE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_83DD9CDA25F37FB9(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_83DD9CDA25F37FB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_670F9011F4A497FF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_670F9011F4A497FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F4192D12853B595(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_7F4192D12853B595_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AB4F9B00D764C4EA(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_AB4F9B00D764C4EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_10B5EDD03FB1C08B(::NodeCanvas::Framework::Graph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_10B5EDD03FB1C08B_OFFSET))(this, a1);
	}

	::System::Void Method_2_44D3880D3CD317F0(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_44D3880D3CD317F0_OFFSET))(this, a1);
	}

	::System::Void Method_2_7435303307FA82B1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_7435303307FA82B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_342171591C9121A2(::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_342171591C9121A2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FDE914DD8171A49F(::Class_2_C219469667DBAA6A_Class_1_B63EF75DA8C71149* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C219469667DBAA6A_Class_1_B63EF75DA8C71149*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_FDE914DD8171A49F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDFD5258CD3CC3DB(::MoleMole::PreloadSingleStreaminGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadSingleStreaminGameConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_DDFD5258CD3CC3DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CBCE4A2497FEDA8F(::FlowCanvas::FlowNode* a1, ::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>* a2, ::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>* a3, ::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::Collections::Generic::List_1<::FlowCanvas::FlowNode*>*, ::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>*, ::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_CBCE4A2497FEDA8F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	static ::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_F0E307B84478A272_OFFSET))();
	}

	::System::Void Method_2_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::System::Void Method_2_33B57B4EA2B00DA3(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_33B57B4EA2B00DA3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4353FFAF6FBCA62C(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_4353FFAF6FBCA62C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_D56164292B7CC690(::System::Collections::Generic::List_1<::Struct_2_433EAFD16930C7BA>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_433EAFD16930C7BA>*&))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_D56164292B7CC690_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F9706A3E0D0298D(::MoleMole::PreloadSingleGroupConfig* a1, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadSingleGroupConfig*, ::Class_2_C219469667DBAA6A_Enum_3_554CAED038424452, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_6F9706A3E0D0298D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_637BE57AD17CE1C1(::Struct_2_433EAFD16930C7BA a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_433EAFD16930C7BA))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_637BE57AD17CE1C1_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_9FEBDE4CF5D68407(::System::String* a1, ::System::Action_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_9FEBDE4CF5D68407_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9219C2A9E5905AEF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_9219C2A9E5905AEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_362228ED47D27AF7(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_362228ED47D27AF7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DF645F048FE4E4E3(::Foundation::AssetPath a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_DF645F048FE4E4E3_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_F7F8016EAE618A49(::System::Action_1<::System::Single>* a1, ::System::Single a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_F7F8016EAE618A49_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5424EA29D826068F(::Foundation::AssetRequestHandle a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_5424EA29D826068F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_2_F5203B25925DADA6(::UnityEngine::ShaderVariantCollection* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ShaderVariantCollection*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_F5203B25925DADA6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	static ::System::Void Method_2_EB092EAC5D07B77E(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_EB092EAC5D07B77E_OFFSET))(a1);
	}

	::System::Void Method_2_B6EB6624ADED740A(::NodeCanvas::Framework::Graph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_B6EB6624ADED740A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_9CF93D9EF546634A(::MoleMole::PreloadGhostEffectConfig* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadGhostEffectConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_9CF93D9EF546634A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7A6948FD354CB3F3(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_7A6948FD354CB3F3_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetRequestHandle Method_2_30A8E3D87CAC149E(::Foundation::AssetPath a1)
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_30A8E3D87CAC149E_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_8E6B15734894FE2D_2(::System::String* a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_8E6B15734894FE2D_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_09753BBB55A2BD9E(::MoleMole::PreloadSingleGroupConfig* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PreloadSingleGroupConfig*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_09753BBB55A2BD9E_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Material* Method_2_6590D7A40D9A82FB(::UnityEngine::Material* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_6590D7A40D9A82FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_35FB6B1DA0F7018A(::MoleMole::TeamDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TeamDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_35FB6B1DA0F7018A_OFFSET))(this, a1);
	}

	::System::Void Method_2_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_2_7E692C4823C131A7(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_7E692C4823C131A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_1DE63FE11FA0D5B4_OFFSET))(this);
	}

	::System::Void Method_2_8C713B32B3B4180D(::System::Collections::Generic::IEnumerable_1<::Class_1_986F52381DF139E6*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_986F52381DF139E6*>*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_8C713B32B3B4180D_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC2F3DB2172423FD(::Class_2_C219469667DBAA6A_Class_1_42788263D0E1130D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C219469667DBAA6A_Class_1_42788263D0E1130D*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_METHOD_2_AC2F3DB2172423FD_OFFSET))(this, a1);
	}
};

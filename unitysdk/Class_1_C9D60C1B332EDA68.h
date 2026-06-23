#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B.h"
#include "unitysdk/Class_1_C9D60C1B332EDA68_Struct_2_2000B9B1F1AD847D.h"
#include "unitysdk/Class_1_C9D60C1B332EDA68_Struct_2_83143841FFE32BF9.h"
#include "unitysdk/Class_1_C9D60C1B332EDA68_Struct_2_FF35D64B04BF12C3.h"
#include "unitysdk/MoleMole/UIInLevelMonsterHudWidgetChildWindowController_HudFlag.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BEAA93324417DF4;
class Class_2_05BFAB15000D9DD3;
class Class_2_4E92AFC82E302868;
class Class_2_C2DE7756E351C461;
namespace MoleMole { class UIInLevelLocalRoleShieldChildWindowController; }
namespace MoleMole { class UIInLevelMPTeammateInfoChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudLevelChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudTagChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudWidgetChildWindowController; }
namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }
namespace MoleMole { class UIInLevelNPCNameWidgetController; }
namespace MoleMole { class UIInLevelUpToolBarBossWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_1_C9D60C1B332EDA68_Class_1_FD9A463A1F51789D;

#define CLASS_1_C9D60C1B332EDA68_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15931BC0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_00CD4948E9086743_1_OFFSET UNITYSDK_OFFSET(0x159390F0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_00CD4948E9086743_2_OFFSET UNITYSDK_OFFSET(0x1593B170)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_00CD4948E9086743_OFFSET UNITYSDK_OFFSET(0x15935DC0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_017A57752CFD9559_1_OFFSET UNITYSDK_OFFSET(0x1593ABB0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_017A57752CFD9559_OFFSET UNITYSDK_OFFSET(0x15938140)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_06C8F530E7C0F3D3_OFFSET UNITYSDK_OFFSET(0x159384A0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_087A8B29E39CE077_OFFSET UNITYSDK_OFFSET(0x159358A0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_0956015EE7643124_OFFSET UNITYSDK_OFFSET(0x1593C490)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_0ACDBF5760F9570B_OFFSET UNITYSDK_OFFSET(0x1593EF60)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_0B86B8238BF548F4_OFFSET UNITYSDK_OFFSET(0x1593D0A0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_0F72EB07B305C2F1_OFFSET UNITYSDK_OFFSET(0x1593E490)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_0FAF75628D196C2E_OFFSET UNITYSDK_OFFSET(0x15935C80)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_13179C86A98496CD_OFFSET UNITYSDK_OFFSET(0x15934230)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_1382F85F8AC5E84A_OFFSET UNITYSDK_OFFSET(0x15938310)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_1456E99155FB9C6A_OFFSET UNITYSDK_OFFSET(0x1593B310)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x159367A0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_1A2B9A972D25622D_OFFSET UNITYSDK_OFFSET(0x15932140)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x15939DE0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_22E0436F5B6030F2_OFFSET UNITYSDK_OFFSET(0x1593E8B0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_245950D4F0985AD9_OFFSET UNITYSDK_OFFSET(0x1593B300)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_24ED6289627D7BE7_1_OFFSET UNITYSDK_OFFSET(0x15934CC0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_24ED6289627D7BE7_2_OFFSET UNITYSDK_OFFSET(0x1593B4E0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_24ED6289627D7BE7_3_OFFSET UNITYSDK_OFFSET(0x1593BE80)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_24ED6289627D7BE7_OFFSET UNITYSDK_OFFSET(0x159356F0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x15933400)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_35D2E84278E299F3_OFFSET UNITYSDK_OFFSET(0x159323B0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_3AE8E28E92DB3043_1_OFFSET UNITYSDK_OFFSET(0x1593F3B0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_3AE8E28E92DB3043_OFFSET UNITYSDK_OFFSET(0x1593E040)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_3C01CFA341E3D780_OFFSET UNITYSDK_OFFSET(0x1593DAE0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x159423C0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_40658F47E42D2173_OFFSET UNITYSDK_OFFSET(0x159334D0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_428BD246F5FAAA99_1_OFFSET UNITYSDK_OFFSET(0x15938A90)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_428BD246F5FAAA99_OFFSET UNITYSDK_OFFSET(0x159355C0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x159368D0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x15931E20)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_51C64716021AE184_OFFSET UNITYSDK_OFFSET(0x159394A0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_5276BB923D9D229E_OFFSET UNITYSDK_OFFSET(0x15935B90)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_52CFD3732DF3E71B_OFFSET UNITYSDK_OFFSET(0x15932390)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x15934440)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_56AAF22972BD1A66_OFFSET UNITYSDK_OFFSET(0x1593D360)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_5A8B223EA7063738_OFFSET UNITYSDK_OFFSET(0x1593D260)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_5B81D4C788C5B0B8_OFFSET UNITYSDK_OFFSET(0x159333B0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_5DE9604F5B364F8D_OFFSET UNITYSDK_OFFSET(0x15935D40)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_622F78E871526932_OFFSET UNITYSDK_OFFSET(0x15938BC0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_66664F6293DA8226_1_OFFSET UNITYSDK_OFFSET(0x1593CF20)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_66664F6293DA8226_OFFSET UNITYSDK_OFFSET(0x1593CDA0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_6823FAA8CED8C847_OFFSET UNITYSDK_OFFSET(0x15933060)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x15936930)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_76D1425C852F83D4_OFFSET UNITYSDK_OFFSET(0x1593B680)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_7CFFD61C3F34EDDF_1_OFFSET UNITYSDK_OFFSET(0x1593F800)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_7CFFD61C3F34EDDF_OFFSET UNITYSDK_OFFSET(0x15938D10)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_7DCDFCEF5043DAD6_OFFSET UNITYSDK_OFFSET(0x1593F1B0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_82076D287B8D69AA_OFFSET UNITYSDK_OFFSET(0x1593C1E0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_820D430B830A5D1F_OFFSET UNITYSDK_OFFSET(0x15940830)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x159412A0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x1593FB70)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x15939CF0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_8B2D6636BADD098E_OFFSET UNITYSDK_OFFSET(0x15934050)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_8BB8AB163EE50E10_OFFSET UNITYSDK_OFFSET(0x15942EF0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_8F1CCCF3284F31D5_OFFSET UNITYSDK_OFFSET(0x15933450)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_9122FC030BA948E4_OFFSET UNITYSDK_OFFSET(0x159365F0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_921C3C3E09D59CD4_1_OFFSET UNITYSDK_OFFSET(0x15935260)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x15934F80)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_92F2FCA8316DB56D_OFFSET UNITYSDK_OFFSET(0x15936540)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_932E0718231FB60C_OFFSET UNITYSDK_OFFSET(0x15941210)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x15939770)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_978E4B25C2114F7E_OFFSET UNITYSDK_OFFSET(0x159331F0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_AA0BDA36C0B04FEC_OFFSET UNITYSDK_OFFSET(0x15934E70)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_AD9F071724804EBE_OFFSET UNITYSDK_OFFSET(0x15939280)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_AE6D44E5602930B4_OFFSET UNITYSDK_OFFSET(0x15932E60)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_AFC4242440B0B88F_OFFSET UNITYSDK_OFFSET(0x1593DEA0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_AFEB151ED2CA5323_OFFSET UNITYSDK_OFFSET(0x1593C700)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_B184336BB2F50398_OFFSET UNITYSDK_OFFSET(0x1593E810)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1593AAD0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_BB377151BEA521D0_OFFSET UNITYSDK_OFFSET(0x1593B440)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_BB47E6F02E790669_OFFSET UNITYSDK_OFFSET(0x1593BC40)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_BCA6E52A3808F7C8_1_OFFSET UNITYSDK_OFFSET(0x15941080)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_BCA6E52A3808F7C8_OFFSET UNITYSDK_OFFSET(0x159324F0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_BD4FC448CA0E3CB4_OFFSET UNITYSDK_OFFSET(0x159396D0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_BF7DAF459E1571C5_OFFSET UNITYSDK_OFFSET(0x1593DA40)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_C5A70D5838D29031_1_OFFSET UNITYSDK_OFFSET(0x1593C410)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_C5A70D5838D29031_2_OFFSET UNITYSDK_OFFSET(0x1593E790)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_C5A70D5838D29031_3_OFFSET UNITYSDK_OFFSET(0x1593EFE0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_C5A70D5838D29031_OFFSET UNITYSDK_OFFSET(0x15934C40)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1593E030)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_C94EA3E2325F6BC6_OFFSET UNITYSDK_OFFSET(0x1593BE00)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_CCD32E2CB63DA514_OFFSET UNITYSDK_OFFSET(0x159360B0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x159344A0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_D0CD9A971CA3B1CF_1_OFFSET UNITYSDK_OFFSET(0x1593F060)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x15935540)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x15933360)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_D27A209C0B63A47C_OFFSET UNITYSDK_OFFSET(0x159329F0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_D69118B7E9BC7C71_OFFSET UNITYSDK_OFFSET(0x159337B0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_D990A8C70081F8B2_OFFSET UNITYSDK_OFFSET(0x159339D0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_DD36367A88EA26F2_OFFSET UNITYSDK_OFFSET(0x1593C990)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_DDE5C3833280C5F2_OFFSET UNITYSDK_OFFSET(0x1593E660)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_E65764D6742B6D02_OFFSET UNITYSDK_OFFSET(0x15936440)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_E8ED681BE5180AF4_OFFSET UNITYSDK_OFFSET(0x15934A60)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15941290)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_F1B31E33410D065E_1_OFFSET UNITYSDK_OFFSET(0x1593AD80)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_F1B31E33410D065E_OFFSET UNITYSDK_OFFSET(0x15932680)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_F4A5B85F552CBBAB_1_OFFSET UNITYSDK_OFFSET(0x159396F0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_F4A5B85F552CBBAB_2_OFFSET UNITYSDK_OFFSET(0x1593B0F0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_F4A5B85F552CBBAB_OFFSET UNITYSDK_OFFSET(0x15939070)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_F515BE3458EF02E5_OFFSET UNITYSDK_OFFSET(0x1593DF40)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_F7300E87EC49A206_1_OFFSET UNITYSDK_OFFSET(0x15934830)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x15932A90)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_FA70A0DEECDE57B3_1_OFFSET UNITYSDK_OFFSET(0x1593C030)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_FA70A0DEECDE57B3_OFFSET UNITYSDK_OFFSET(0x159392F0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_FABC9D43ED6552D8_1_OFFSET UNITYSDK_OFFSET(0x15940EF0)
#define CLASS_1_C9D60C1B332EDA68_METHOD_1_FABC9D43ED6552D8_OFFSET UNITYSDK_OFFSET(0x15935F50)
#define CLASS_1_C9D60C1B332EDA68__CCTOR_OFFSET UNITYSDK_OFFSET(0x15932110)
#define CLASS_1_C9D60C1B332EDA68__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15931110)
#define CLASS_1_C9D60C1B332EDA68__CTOR_OFFSET UNITYSDK_OFFSET(0x15931070)

inline static constexpr unsigned int Class_1_C9D60C1B332EDA68_TypeDefinitionIndex = 49808;

class Class_1_C9D60C1B332EDA68 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_33()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9D60C1B332EDA68_TypeDefinitionIndex)->GetStaticField(0xCDC0);
	}
	static ::System::Boolean* StaticGet_Field_1_31()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9D60C1B332EDA68_TypeDefinitionIndex)->GetStaticField(0xCDC1);
	}
	static ::System::Boolean* StaticGet_Field_1_30()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9D60C1B332EDA68_TypeDefinitionIndex)->GetStaticField(0xCDC2);
	}
	static ::System::Boolean* StaticGet_Field_1_32()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9D60C1B332EDA68_TypeDefinitionIndex)->GetStaticField(0xCDC3);
	}
	static ::System::Boolean* StaticGet_Field_1_46()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9D60C1B332EDA68_TypeDefinitionIndex)->GetStaticField(0xCDC4);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9D60C1B332EDA68_TypeDefinitionIndex)->GetStaticField(0xCDC5);
	}
	static ::System::Int32* StaticGet_Field_1_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9D60C1B332EDA68_TypeDefinitionIndex)->GetStaticField(0xCDC8);
	}
	static ::System::Int32* StaticGet_Field_1_35()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9D60C1B332EDA68_TypeDefinitionIndex)->GetStaticField(0xCDCC);
	}
	static ::System::Int32* StaticGet_Field_1_36()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9D60C1B332EDA68_TypeDefinitionIndex)->GetStaticField(0xCDD0);
	}
	// static const ::System::Single Field_1_25; // 0x0
	// static const ::System::Single Field_1_26; // 0x0
	// static const ::System::Single Field_1_27; // 0x0
	// static const ::System::Single Field_1_28; // 0x0
	// static const ::System::Int32 Field_1_37 = 0x8; // 0x0
	// static const ::System::Boolean Field_1_38; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterHudTagChildWindowController*>* Field_1_8; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*>* Field_1_18; // 0x18
	::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*, ::System::Int32>* Field_1_48; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_7; // 0x30
	::Class_1_C9D60C1B332EDA68_Class_1_FD9A463A1F51789D<::Class_1_C9D60C1B332EDA68_Struct_2_2000B9B1F1AD847D>* Field_1_29; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIInLevelMPTeammateInfoChildWindowController*>* Field_1_22; // 0x40
	::System::Func_2<::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*>* Field_1_17; // 0x48
	::System::Action* Field_1_2; // 0x50
	::System::Func_1<::MoleMole::UIInLevelUpToolBarBossWidgetController*>* Field_1_14; // 0x58
	::System::Func_2<::System::UInt32, ::MoleMole::UIInLevelMPTeammateInfoChildWindowController*>* Field_1_23; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_49; // 0x68
	::MoleMole::UIInLevelUpToolBarBossWidgetController* Field_1_15; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterHudLevelChildWindowController*>* Field_1_9; // 0x78
	::System::Func_1<::MoleMole::UIInLevelMonsterHudLevelChildWindowController*>* Field_1_11; // 0x80
	::System::Func_2<::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*>* Field_1_16; // 0x88
	::System::Collections::Generic::HashSet_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_51; // 0x90
	::System::Action_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_6; // 0x98
	::System::Action_1<::MoleMole::UIInLevelMonsterHudLevelChildWindowController*>* Field_1_13; // 0xA0
	::Class_1_2BEAA93324417DF4* Field_1_1; // 0xA8
	::System::Collections::Generic::List_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* Field_1_50; // 0xB0
	::MoleMole::UIInLevelLocalRoleShieldChildWindowController* Field_1_20; // 0xB8
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::UIWindowController*, ::System::Single>>* Field_1_19; // 0xC0
	::System::Func_1<::MoleMole::UIInLevelMonsterHudTagChildWindowController*>* Field_1_10; // 0xC8
	::System::Action* Field_1_3; // 0xD0
	::System::Action_1<::MoleMole::UIInLevelMonsterHudTagChildWindowController*>* Field_1_12; // 0xD8
	::System::Func_1<::MoleMole::UIInLevelLocalRoleShieldChildWindowController*>* Field_1_21; // 0xE0
	::Unity::Collections::NativeArray_1<::Class_1_C9D60C1B332EDA68_Struct_2_83143841FFE32BF9> Field_1_45; // 0xE8
	::Unity::Collections::NativeList_1<::Class_1_C9D60C1B332EDA68_Struct_2_FF35D64B04BF12C3> Field_1_44; // 0xF8
	::System::Boolean Field_1_4; // 0x108
	::System::Boolean Field_1_24; // 0x109
	::Unity::Jobs::JobHandle Field_1_47; // 0x110
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Field_1_43; // 0x120
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Field_1_42; // 0x130
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Field_1_41; // 0x140
	::UnityEngine::Jobs::TransformAccessArray Field_1_40; // 0x150
	::UnityEngine::Jobs::TransformAccessArray Field_1_39; // 0x158

	::System::Void _ctor(::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>* a1, ::System::Action_1<::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>*, ::System::Action_1<::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* a1, ::System::Action_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Boolean, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>*, ::System::Action_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_DISPOSE_OFFSET))(this);
	}

	static ::System::Single Method_1_1A2B9A972D25622D(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_1A2B9A972D25622D_OFFSET))(a1);
	}

	::System::Void Method_1_52CFD3732DF3E71B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_52CFD3732DF3E71B_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCA6E52A3808F7C8(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_BCA6E52A3808F7C8_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_F1B31E33410D065E(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_F1B31E33410D065E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D27A209C0B63A47C(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_D27A209C0B63A47C_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_1_AE6D44E5602930B4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_AE6D44E5602930B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_35D2E84278E299F3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_35D2E84278E299F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_6823FAA8CED8C847(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_6823FAA8CED8C847_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B81D4C788C5B0B8(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_5B81D4C788C5B0B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F1CCCF3284F31D5(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_8F1CCCF3284F31D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_D69118B7E9BC7C71(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_D69118B7E9BC7C71_OFFSET))(this, a1);
	}

	::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_1_8B2D6636BADD098E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_8B2D6636BADD098E_OFFSET))(this, a1);
	}

	::System::Void Method_1_13179C86A98496CD(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_13179C86A98496CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Void Method_1_F7300E87EC49A206_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_F7300E87EC49A206_1_OFFSET))(this);
	}

	::System::Void Method_1_C5A70D5838D29031(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_C5A70D5838D29031_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA0BDA36C0B04FEC(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_AA0BDA36C0B04FEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_428BD246F5FAAA99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_428BD246F5FAAA99_OFFSET))(this);
	}

	::System::Boolean Method_1_24ED6289627D7BE7(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_24ED6289627D7BE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_5276BB923D9D229E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_5276BB923D9D229E_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_5DE9604F5B364F8D(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_5DE9604F5B364F8D_OFFSET))(a1);
	}

	::System::Boolean Method_1_00CD4948E9086743(::Class_2_4E92AFC82E302868* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4E92AFC82E302868*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_00CD4948E9086743_OFFSET))(this, a1);
	}

	::System::Void Method_1_FABC9D43ED6552D8(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_FABC9D43ED6552D8_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelNPCNameWidgetController* Method_1_CCD32E2CB63DA514(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelNPCNameWidgetController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_CCD32E2CB63DA514_OFFSET))(this, a1);
	}

	::System::Void Method_1_92F2FCA8316DB56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_92F2FCA8316DB56D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9122FC030BA948E4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_9122FC030BA948E4_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* Method_1_978E4B25C2114F7E(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_978E4B25C2114F7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	static ::System::Single Method_1_017A57752CFD9559(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_017A57752CFD9559_OFFSET))(a1);
	}

	::System::Void Method_1_1382F85F8AC5E84A(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_1382F85F8AC5E84A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_06C8F530E7C0F3D3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_06C8F530E7C0F3D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_428BD246F5FAAA99_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_428BD246F5FAAA99_1_OFFSET))(this);
	}

	::System::Boolean Method_1_622F78E871526932(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_622F78E871526932_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CFFD61C3F34EDDF(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_7CFFD61C3F34EDDF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4A5B85F552CBBAB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_F4A5B85F552CBBAB_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_AD9F071724804EBE(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_AD9F071724804EBE_OFFSET))(a1);
	}

	::System::Boolean Method_1_24ED6289627D7BE7_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_24ED6289627D7BE7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA70A0DEECDE57B3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_FA70A0DEECDE57B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD4FC448CA0E3CB4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_BD4FC448CA0E3CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4A5B85F552CBBAB_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_F4A5B85F552CBBAB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Boolean Method_1_00CD4948E9086743_1(::Class_2_05BFAB15000D9DD3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_05BFAB15000D9DD3*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_00CD4948E9086743_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4A5B85F552CBBAB_2(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_F4A5B85F552CBBAB_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_245950D4F0985AD9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_245950D4F0985AD9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0FAF75628D196C2E(::Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_0FAF75628D196C2E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_24ED6289627D7BE7_2(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_24ED6289627D7BE7_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_76D1425C852F83D4(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_76D1425C852F83D4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C94EA3E2325F6BC6(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_C94EA3E2325F6BC6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_24ED6289627D7BE7_3(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_24ED6289627D7BE7_3_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_017A57752CFD9559_1(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_017A57752CFD9559_1_OFFSET))(a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_FA70A0DEECDE57B3_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_FA70A0DEECDE57B3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5A70D5838D29031_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_C5A70D5838D29031_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0956015EE7643124(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_0956015EE7643124_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AFEB151ED2CA5323(::Struct_2_2CC23FE9C9AEC1B7 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2CC23FE9C9AEC1B7))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_AFEB151ED2CA5323_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_CCD88C0D86A5A786_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_1_BF7DAF459E1571C5(::Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9166BD0F741825C9_Enum_3_9E1A6BADD767C70B, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_BF7DAF459E1571C5_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_AFC4242440B0B88F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_AFC4242440B0B88F_OFFSET))(a1, a2);
	}

	::System::Void Method_1_F515BE3458EF02E5(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_F515BE3458EF02E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_3AE8E28E92DB3043(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_3AE8E28E92DB3043_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1456E99155FB9C6A(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_1456E99155FB9C6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD36367A88EA26F2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_DD36367A88EA26F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F72EB07B305C2F1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_0F72EB07B305C2F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_56AAF22972BD1A66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_56AAF22972BD1A66_OFFSET))(this);
	}

	::System::Void Method_1_DDE5C3833280C5F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_DDE5C3833280C5F2_OFFSET))(this);
	}

	::System::Void Method_1_66664F6293DA8226(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_66664F6293DA8226_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_1_E8ED681BE5180AF4(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_E8ED681BE5180AF4_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_1_C5A70D5838D29031_2(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_C5A70D5838D29031_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D990A8C70081F8B2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_D990A8C70081F8B2_OFFSET))(this);
	}

	::System::Void Method_1_B184336BB2F50398(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_B184336BB2F50398_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_00CD4948E9086743_2(::Class_2_C2DE7756E351C461* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C2DE7756E351C461*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_00CD4948E9086743_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_22E0436F5B6030F2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_22E0436F5B6030F2_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIInLevelMonsterHudLevelChildWindowController* Method_1_82076D287B8D69AA(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelMonsterHudLevelChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_82076D287B8D69AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_0ACDBF5760F9570B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_0ACDBF5760F9570B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5A70D5838D29031_3(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_C5A70D5838D29031_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0CD9A971CA3B1CF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_D0CD9A971CA3B1CF_1_OFFSET))(this);
	}

	::MoleMole::UIInLevelMonsterHudTagChildWindowController* Method_1_51C64716021AE184(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelMonsterHudTagChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_51C64716021AE184_OFFSET))(this, a1);
	}

	::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_1_7DCDFCEF5043DAD6(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_7DCDFCEF5043DAD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_3AE8E28E92DB3043_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_3AE8E28E92DB3043_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_BB377151BEA521D0(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_BB377151BEA521D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A8B223EA7063738(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_5A8B223EA7063738_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CFFD61C3F34EDDF_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_7CFFD61C3F34EDDF_1_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* Method_1_BB47E6F02E790669(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1, ::System::UInt32 a2)
	{
		return ((::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_BB47E6F02E790669_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_1_FABC9D43ED6552D8_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_FABC9D43ED6552D8_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCA6E52A3808F7C8_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_BCA6E52A3808F7C8_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3C01CFA341E3D780(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_3C01CFA341E3D780_OFFSET))(this, a1);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_1_0B86B8238BF548F4(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_0B86B8238BF548F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_932E0718231FB60C(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_932E0718231FB60C_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelMPTeammateInfoChildWindowController* Method_1_087A8B29E39CE077(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelMPTeammateInfoChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_087A8B29E39CE077_OFFSET))(this, a1);
	}

	::System::Void Method_1_E65764D6742B6D02(::System::UInt32 a1, ::MoleMole::UIInLevelNPCNameWidgetController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_E65764D6742B6D02_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::System::Single Method_1_F1B31E33410D065E_1(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Single(*)(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_F1B31E33410D065E_1_OFFSET))(a1);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_921C3C3E09D59CD4_1_OFFSET))(this);
	}

	::System::Void Method_1_66664F6293DA8226_1(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_66664F6293DA8226_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_820D430B830A5D1F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_820D430B830A5D1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_1_8BB8AB163EE50E10(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_8BB8AB163EE50E10_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_40658F47E42D2173(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_METHOD_1_40658F47E42D2173_OFFSET))(this, a1);
	}
};

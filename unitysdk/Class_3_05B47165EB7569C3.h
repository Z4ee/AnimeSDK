#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F5B8D6A28B626E8E.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"

class Class_1_677D22BBE6B5DAE4;
class Class_1_76C5A4C5A662A017;
class Class_1_8A50BFB20D9D2482;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ForwardRenderer; }

#define CLASS_3_05B47165EB7569C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12601920)
#define CLASS_3_05B47165EB7569C3_METHOD_3_02B4A7AC57AB5850_OFFSET UNITYSDK_OFFSET(0x16FB0190)
#define CLASS_3_05B47165EB7569C3_METHOD_3_091DF3033F55990A_OFFSET UNITYSDK_OFFSET(0x16FA8E70)
#define CLASS_3_05B47165EB7569C3_METHOD_3_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x16FC90F0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x12603440)
#define CLASS_3_05B47165EB7569C3_METHOD_3_15364C75F7A1B66B_OFFSET UNITYSDK_OFFSET(0x16FB0370)
#define CLASS_3_05B47165EB7569C3_METHOD_3_233C851B0E3803FF_OFFSET UNITYSDK_OFFSET(0x12604980)
#define CLASS_3_05B47165EB7569C3_METHOD_3_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x16FBC3D0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_25BDE921D645888D_OFFSET UNITYSDK_OFFSET(0x16FB7D40)
#define CLASS_3_05B47165EB7569C3_METHOD_3_289E522D6A576DC5_OFFSET UNITYSDK_OFFSET(0x126041F0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_30B84D11D6E8A895_OFFSET UNITYSDK_OFFSET(0x16FA6C80)
#define CLASS_3_05B47165EB7569C3_METHOD_3_314CB383333C08EE_OFFSET UNITYSDK_OFFSET(0x16FB8B10)
#define CLASS_3_05B47165EB7569C3_METHOD_3_35D2868F291B8004_OFFSET UNITYSDK_OFFSET(0x16FC96F0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_3617F51E36984770_1_OFFSET UNITYSDK_OFFSET(0x16FC9590)
#define CLASS_3_05B47165EB7569C3_METHOD_3_3617F51E36984770_OFFSET UNITYSDK_OFFSET(0x16FA87E0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_36B2ECAF8FE055B5_OFFSET UNITYSDK_OFFSET(0x16FC9380)
#define CLASS_3_05B47165EB7569C3_METHOD_3_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x16FBAB70)
#define CLASS_3_05B47165EB7569C3_METHOD_3_46C6AD3AA3219549_OFFSET UNITYSDK_OFFSET(0x16FC8190)
#define CLASS_3_05B47165EB7569C3_METHOD_3_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x16FB0180)
#define CLASS_3_05B47165EB7569C3_METHOD_3_5767E34877A2199E_OFFSET UNITYSDK_OFFSET(0x16FAD290)
#define CLASS_3_05B47165EB7569C3_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16FA87A0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_5912D221AB8A4DE7_OFFSET UNITYSDK_OFFSET(0x12604E30)
#define CLASS_3_05B47165EB7569C3_METHOD_3_6975CBCBA472044B_OFFSET UNITYSDK_OFFSET(0x16FA8A20)
#define CLASS_3_05B47165EB7569C3_METHOD_3_6A6C8C6B2239A604_OFFSET UNITYSDK_OFFSET(0x12601C10)
#define CLASS_3_05B47165EB7569C3_METHOD_3_6C4F0D57CC4A6CF0_OFFSET UNITYSDK_OFFSET(0x16FB7340)
#define CLASS_3_05B47165EB7569C3_METHOD_3_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x16FC7BD0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x16FA7830)
#define CLASS_3_05B47165EB7569C3_METHOD_3_83E1EAF9F7D26EA8_OFFSET UNITYSDK_OFFSET(0x16FBC000)
#define CLASS_3_05B47165EB7569C3_METHOD_3_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x16FBAB20)
#define CLASS_3_05B47165EB7569C3_METHOD_3_86EEF580F7E039B3_OFFSET UNITYSDK_OFFSET(0x126032A0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x16FB5150)
#define CLASS_3_05B47165EB7569C3_METHOD_3_8CDD850F131B9499_OFFSET UNITYSDK_OFFSET(0x16FB7EF0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_8E89BE9866A768ED_OFFSET UNITYSDK_OFFSET(0x16FBECA0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x16FB73E0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_922BBA933846C8F0_OFFSET UNITYSDK_OFFSET(0x16FC74E0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_97B0367EA2ED2ED7_OFFSET UNITYSDK_OFFSET(0x16FC8760)
#define CLASS_3_05B47165EB7569C3_METHOD_3_98FC9B3E5B77775E_OFFSET UNITYSDK_OFFSET(0x16FC7620)
#define CLASS_3_05B47165EB7569C3_METHOD_3_9C3C96666085F895_OFFSET UNITYSDK_OFFSET(0x16FAF050)
#define CLASS_3_05B47165EB7569C3_METHOD_3_9ECE1C99C27388AC_OFFSET UNITYSDK_OFFSET(0x12604340)
#define CLASS_3_05B47165EB7569C3_METHOD_3_A0EFDC02874C650B_OFFSET UNITYSDK_OFFSET(0x16FB7490)
#define CLASS_3_05B47165EB7569C3_METHOD_3_A128D0556C6CF784_OFFSET UNITYSDK_OFFSET(0x16FB8B80)
#define CLASS_3_05B47165EB7569C3_METHOD_3_A4BEABC751DB0FF6_OFFSET UNITYSDK_OFFSET(0x16FAA250)
#define CLASS_3_05B47165EB7569C3_METHOD_3_A576F328C56C105D_OFFSET UNITYSDK_OFFSET(0x16FBCAA0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_B060C644BFD512E7_OFFSET UNITYSDK_OFFSET(0x16FBB5B0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_B078C58C2CD24B5E_OFFSET UNITYSDK_OFFSET(0x16FB19D0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x16FB67B0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x16FADC50)
#define CLASS_3_05B47165EB7569C3_METHOD_3_BD244A8C97A97A0D_OFFSET UNITYSDK_OFFSET(0x12603630)
#define CLASS_3_05B47165EB7569C3_METHOD_3_BFF777A41DE1C9B0_OFFSET UNITYSDK_OFFSET(0x16FC86E0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_C0BEC2AC889B653C_OFFSET UNITYSDK_OFFSET(0x16FBF800)
#define CLASS_3_05B47165EB7569C3_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16FAA260)
#define CLASS_3_05B47165EB7569C3_METHOD_3_C905625E207F23E1_OFFSET UNITYSDK_OFFSET(0x12604B00)
#define CLASS_3_05B47165EB7569C3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16FC8EF0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4767F35E35FBB79_OFFSET UNITYSDK_OFFSET(0x16FA6DF0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_10_OFFSET UNITYSDK_OFFSET(0x16FABF50)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_11_OFFSET UNITYSDK_OFFSET(0x16FAC8F0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_12_OFFSET UNITYSDK_OFFSET(0x16FADD10)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_13_OFFSET UNITYSDK_OFFSET(0x16FAE6B0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_14_OFFSET UNITYSDK_OFFSET(0x16FAF500)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_15_OFFSET UNITYSDK_OFFSET(0x16FB0690)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_16_OFFSET UNITYSDK_OFFSET(0x16FB1030)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_17_OFFSET UNITYSDK_OFFSET(0x16FB1A70)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_18_OFFSET UNITYSDK_OFFSET(0x16FB2410)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_19_OFFSET UNITYSDK_OFFSET(0x16FB2DB0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_1_OFFSET UNITYSDK_OFFSET(0x12603850)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_20_OFFSET UNITYSDK_OFFSET(0x16FB3750)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_21_OFFSET UNITYSDK_OFFSET(0x16FB47A0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_22_OFFSET UNITYSDK_OFFSET(0x16FB5470)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_23_OFFSET UNITYSDK_OFFSET(0x16FB5E10)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_24_OFFSET UNITYSDK_OFFSET(0x16FB6990)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_25_OFFSET UNITYSDK_OFFSET(0x16FB8170)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_26_OFFSET UNITYSDK_OFFSET(0x16FBA180)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_27_OFFSET UNITYSDK_OFFSET(0x16FBAC10)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_28_OFFSET UNITYSDK_OFFSET(0x16FBB660)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_29_OFFSET UNITYSDK_OFFSET(0x16FBCF50)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_2_OFFSET UNITYSDK_OFFSET(0x16FA62E0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_30_OFFSET UNITYSDK_OFFSET(0x16FBD8F0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_31_OFFSET UNITYSDK_OFFSET(0x16FBE300)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_32_OFFSET UNITYSDK_OFFSET(0x16FBEE60)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_33_OFFSET UNITYSDK_OFFSET(0x16FC5800)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_34_OFFSET UNITYSDK_OFFSET(0x16FC0B00)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_35_OFFSET UNITYSDK_OFFSET(0x16FC6B40)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_36_OFFSET UNITYSDK_OFFSET(0x16FC44C0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_37_OFFSET UNITYSDK_OFFSET(0x16FC1E40)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_38_OFFSET UNITYSDK_OFFSET(0x16FC61A0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_39_OFFSET UNITYSDK_OFFSET(0x16FC3B20)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_3_OFFSET UNITYSDK_OFFSET(0x16FA6E90)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_40_OFFSET UNITYSDK_OFFSET(0x16FC4E60)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_41_OFFSET UNITYSDK_OFFSET(0x16FC14A0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_42_OFFSET UNITYSDK_OFFSET(0x16FC3180)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_43_OFFSET UNITYSDK_OFFSET(0x16FC27E0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_4_OFFSET UNITYSDK_OFFSET(0x16FA7E00)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_5_OFFSET UNITYSDK_OFFSET(0x16FA8F10)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_6_OFFSET UNITYSDK_OFFSET(0x16FA98B0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_7_OFFSET UNITYSDK_OFFSET(0x16FAA270)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_8_OFFSET UNITYSDK_OFFSET(0x16FAAC10)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_9_OFFSET UNITYSDK_OFFSET(0x16FAB5B0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_OFFSET UNITYSDK_OFFSET(0x12602900)
#define CLASS_3_05B47165EB7569C3_METHOD_3_E26C99C52BC1E654_1_OFFSET UNITYSDK_OFFSET(0x16FB40F0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x16FA7A30)
#define CLASS_3_05B47165EB7569C3_METHOD_3_E530905EC9C5B4AD_OFFSET UNITYSDK_OFFSET(0x16FB44C0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_E703029C2C81747C_OFFSET UNITYSDK_OFFSET(0x16FC8F30)
#define CLASS_3_05B47165EB7569C3_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x16FBB650)
#define CLASS_3_05B47165EB7569C3_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x16FC8EE0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16FB5140)
#define CLASS_3_05B47165EB7569C3_METHOD_3_F2EEC5E8503D3622_OFFSET UNITYSDK_OFFSET(0x12604820)
#define CLASS_3_05B47165EB7569C3_METHOD_3_F7D67FDD803EB746_OFFSET UNITYSDK_OFFSET(0x16FAFEA0)
#define CLASS_3_05B47165EB7569C3_METHOD_3_F87D73EA06BA6997_OFFSET UNITYSDK_OFFSET(0x16FA8940)
#define CLASS_3_05B47165EB7569C3_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12601670)
#define CLASS_3_05B47165EB7569C3_ONSTART_OFFSET UNITYSDK_OFFSET(0x126017C0)
#define CLASS_3_05B47165EB7569C3__CCTOR_OFFSET UNITYSDK_OFFSET(0x12601970)
#define CLASS_3_05B47165EB7569C3__CTOR_OFFSET UNITYSDK_OFFSET(0x12601320)

inline static constexpr unsigned int Class_3_05B47165EB7569C3_TypeDefinitionIndex = 75301;

class Class_3_05B47165EB7569C3 : public ::Foundation::GameManager_1<::Class_3_05B47165EB7569C3*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::System::String*>** StaticGet_Field_3_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_05B47165EB7569C3_TypeDefinitionIndex)->GetStaticField(0x333E0);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_05B47165EB7569C3_TypeDefinitionIndex)->GetStaticField(0xC8B0);
	}
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_05B47165EB7569C3_TypeDefinitionIndex)->GetStaticField(0xC8B1);
	}
	::System::Collections::Generic::List_1<::Class_1_677D22BBE6B5DAE4*>* Field_3_11; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_76C5A4C5A662A017*>* Field_3_12; // 0x18
	::System::Action_1<::System::Boolean>* Field_3_13; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*>* Field_3_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_7; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_3_15; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_10; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_3; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* Field_3_4; // 0x58
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_16; // 0x60
	::System::Boolean Field_3_17; // 0x68
	::System::Boolean Field_3_14; // 0x69
	::System::Boolean Field_3_8; // 0x6A
	::System::Int32 Field_3_9; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_6A6C8C6B2239A604(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_6A6C8C6B2239A604_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_151E25A63D14DDB0_OFFSET))();
	}

	::System::Void Method_3_BD244A8C97A97A0D(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_BD244A8C97A97A0D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_1(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_289E522D6A576DC5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_289E522D6A576DC5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_86EEF580F7E039B3(::System::Type* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_86EEF580F7E039B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9ECE1C99C27388AC(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::Single a3, ::System::Action* a4, ::MoleMole::Battle::Entity* a5, ::System::Boolean a6, ::System::String* a7, ::MoleMole::Config::ConfigPosRot* a8, ::System::Boolean a9, ::UnityEngine::Rendering::Volume* a10, ::System::Boolean a11, ::Foundation::Variable_1<::System::Single> a12, ::Enum_3_F5B8D6A28B626E8E a13, ::Class_1_8A50BFB20D9D2482* a14)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::System::Boolean, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_9ECE1C99C27388AC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}

	::System::Void Method_3_F2EEC5E8503D3622(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_F2EEC5E8503D3622_OFFSET))(this, a1);
	}

	::System::Void Method_3_233C851B0E3803FF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_233C851B0E3803FF_OFFSET))(this, a1);
	}

	::System::Void Method_3_C905625E207F23E1(::MoleMole::Config::ShaderCustomType a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ShaderCustomType, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_C905625E207F23E1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_5912D221AB8A4DE7(::MoleMole::Config::ScreenEffectType a1, ::UnityEngine::Rendering::Volume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_5912D221AB8A4DE7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_2(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::UnityEngine::NAPRenderPipeline0::VolumeComponent* Method_3_D4767F35E35FBB79(::System::Int32 a1)
	{
		return ((::UnityEngine::NAPRenderPipeline0::VolumeComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4767F35E35FBB79_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_3(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_4(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	::System::Void Method_3_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_3_3617F51E36984770()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_3617F51E36984770_OFFSET))(this);
	}

	::System::Void Method_3_F87D73EA06BA6997(::UnityEngine::Rendering::Volume* a1, ::MoleMole::Config::ScreenEffectType a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_F87D73EA06BA6997_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* Method_3_091DF3033F55990A(::System::Int32 a1)
	{
		return ((::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_091DF3033F55990A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_5(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_6(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::System::Int32>*>* Method_3_A4BEABC751DB0FF6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_A4BEABC751DB0FF6_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_7(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_8(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_9(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_10(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_10_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_11(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_11_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_5767E34877A2199E(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_5767E34877A2199E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_12(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_12_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_13(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_13_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_9C3C96666085F895(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_9C3C96666085F895_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_14(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_14_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_F7D67FDD803EB746(::System::Type* a1, ::UnityEngine::Rendering::Volume* a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Rendering::Volume*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_F7D67FDD803EB746_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_677D22BBE6B5DAE4*>* Method_3_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_677D22BBE6B5DAE4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_3_6975CBCBA472044B(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_6975CBCBA472044B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_02B4A7AC57AB5850(::System::Type* a1, ::System::Int32 a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_02B4A7AC57AB5850_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Rendering::Universal::ForwardRenderer* Method_3_15364C75F7A1B66B()
	{
		return ((::UnityEngine::Rendering::Universal::ForwardRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_15364C75F7A1B66B_OFFSET))(this);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_15(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_15_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_16(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_16_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Boolean Method_3_B078C58C2CD24B5E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_B078C58C2CD24B5E_OFFSET))();
	}

	::System::Boolean Method_3_D4935E81B6693BA7_17(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_17_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_18(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_18_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_19(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_19_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_20(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_20_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_E26C99C52BC1E654_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_E26C99C52BC1E654_1_OFFSET))(this);
	}

	::System::Void Method_3_E530905EC9C5B4AD(::Class_1_677D22BBE6B5DAE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_677D22BBE6B5DAE4*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_E530905EC9C5B4AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_21(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_21_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_22(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_22_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_23(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_23_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_24(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_24_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_6C4F0D57CC4A6CF0(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_6C4F0D57CC4A6CF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_3_25BDE921D645888D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_25BDE921D645888D_OFFSET))(this, a1);
	}

	::System::Void Method_3_8CDD850F131B9499(::MoleMole::Config::ShaderCustomType a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ShaderCustomType, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_8CDD850F131B9499_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_25(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_25_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_314CB383333C08EE(::MoleMole::Config::ScreenEffectType a1, ::UnityEngine::Rendering::Volume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_314CB383333C08EE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_26(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_26_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_A128D0556C6CF784(::MoleMole::Config::ScreenEffectType a1, ::UnityEngine::Rendering::Volume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_A128D0556C6CF784_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_27(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_27_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_B060C644BFD512E7(::MoleMole::Config::ScreenEffectType a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_B060C644BFD512E7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_28(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_28_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_83E1EAF9F7D26EA8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_83E1EAF9F7D26EA8_OFFSET))(this, a1);
	}

	::System::Void Method_3_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_3_A576F328C56C105D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_A576F328C56C105D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_29(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_29_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_30(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_30_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_31(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_31_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_8E89BE9866A768ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_8E89BE9866A768ED_OFFSET))(this);
	}

	::System::Void Method_3_A0EFDC02874C650B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_A0EFDC02874C650B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_32(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_32_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_C0BEC2AC889B653C(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::Single a3, ::System::Action* a4, ::MoleMole::Battle::Entity* a5, ::System::Boolean a6, ::System::String* a7, ::MoleMole::Config::ConfigPosRot* a8, ::System::Boolean a9, ::UnityEngine::Rendering::Volume* a10, ::Foundation::Variable_1<::System::Single> a11, ::Enum_3_F5B8D6A28B626E8E a12, ::Class_1_8A50BFB20D9D2482* a13)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_C0BEC2AC889B653C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	::System::Void Method_3_922BBA933846C8F0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_922BBA933846C8F0_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_33(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_33_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_98FC9B3E5B77775E(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_98FC9B3E5B77775E_OFFSET))(this, a1);
	}

	::System::Void Method_3_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_3_30B84D11D6E8A895(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_30B84D11D6E8A895_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_34(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_34_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_46C6AD3AA3219549(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_46C6AD3AA3219549_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BFF777A41DE1C9B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_BFF777A41DE1C9B0_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_97B0367EA2ED2ED7(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_97B0367EA2ED2ED7_OFFSET))(a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_E703029C2C81747C(::System::Type* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_E703029C2C81747C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_35(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_35_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_36(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_36_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_36B2ECAF8FE055B5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_36B2ECAF8FE055B5_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_37(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_37_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_38(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_38_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_39(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_39_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_40(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_40_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_41(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_41_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_3617F51E36984770_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_3617F51E36984770_1_OFFSET))(this);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_42(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_42_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Boolean Method_3_D4935E81B6693BA7_43(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8, ::UnityEngine::Rendering::Volume* a9, ::Foundation::Variable_1<::System::Single> a10, ::Enum_3_F5B8D6A28B626E8E a11, ::Class_1_8A50BFB20D9D2482* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Rendering::Volume*, ::Foundation::Variable_1<::System::Single>, ::Enum_3_F5B8D6A28B626E8E, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_D4935E81B6693BA7_43_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_3_35D2868F291B8004(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_05B47165EB7569C3_METHOD_3_35D2868F291B8004_OFFSET))(this, a1);
	}
};

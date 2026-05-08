#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FBA6A644F76B8A72.h"
#include "unitysdk/Foundation/NapPlatform.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_EntityCreate.h"
#include "unitysdk/MoleMole/EMaterialModifierPerformanceLevel.h"
#include "unitysdk/MoleMole/FrameRateInterpolateType.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"
#include "unitysdk/MoleMole/InLevelNPCCrowdLevel.h"
#include "unitysdk/MoleMole/PCSuperResolutionType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ENapGIQuality.h"

class Class_1_144B047379F813BA;
class Class_1_480FC3B3774489BF;
class Class_1_5F6793D062D31870;
class Class_1_BCCD4DFEA016B7F9;
namespace MoleMole { class DeviceSettingConfig; }
namespace MoleMole { class DeviceSettingProfile; }
namespace MoleMole { class GeneralGraphicQualityProfileContext; }
namespace MoleMole { class GraphicSettingProfileBase; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DevicePerformanceConfig; }
namespace MoleMole::Config { class EffectPatternInfoConfig_PatternInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4A31986163B0B2B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153C4AE0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_03601414F77E6CE7_OFFSET UNITYSDK_OFFSET(0x153C80D0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_07AAE9BFCC4186F3_OFFSET UNITYSDK_OFFSET(0x153C9990)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_08AAFD08AC0FA5C1_OFFSET UNITYSDK_OFFSET(0x1003A6D0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_098C4B6E1F88B232_OFFSET UNITYSDK_OFFSET(0x153C59E0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_0B77A2299C85C12C_OFFSET UNITYSDK_OFFSET(0x153C7790)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_0BBD9A611E2E6EE2_OFFSET UNITYSDK_OFFSET(0x1003AB90)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_0CFB4A6C9D80CDEC_OFFSET UNITYSDK_OFFSET(0x1003A310)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_0D95214C1FCF51C2_OFFSET UNITYSDK_OFFSET(0x153C4CE0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_134F4662017FA8D4_OFFSET UNITYSDK_OFFSET(0x153C7480)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_16A376934740D580_OFFSET UNITYSDK_OFFSET(0x153C64A0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x153C8AF0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_1F4A04CEE762335A_OFFSET UNITYSDK_OFFSET(0x1003B250)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1003B1D0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x153C9B10)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x153C46D0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_2CBF59A7192198B4_OFFSET UNITYSDK_OFFSET(0x1003A380)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_3422201382CE593B_1_OFFSET UNITYSDK_OFFSET(0x153C4F30)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x153C4FD0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x1003B9F0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x153C8040)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x153C7FD0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_3D6F561DE1069F96_OFFSET UNITYSDK_OFFSET(0x153C9210)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1003B1E0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_4774F4C5640CCE25_OFFSET UNITYSDK_OFFSET(0x153C73F0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_489A69512C3B7D20_OFFSET UNITYSDK_OFFSET(0x153C9000)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x1003AC80)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x153C4C90)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x153C9A10)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_509CF91EDD13A3A0_OFFSET UNITYSDK_OFFSET(0x153C9C70)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x153C9EC0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x153C73E0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_55142585DDBDDF17_OFFSET UNITYSDK_OFFSET(0x153C9600)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_581D806F89304C35_OFFSET UNITYSDK_OFFSET(0x153C8EC0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_5F253B3051C2DF95_OFFSET UNITYSDK_OFFSET(0x153C9060)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_6181BB089D539027_1_OFFSET UNITYSDK_OFFSET(0x153C6F90)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_6181BB089D539027_OFFSET UNITYSDK_OFFSET(0x153C6960)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_68403DF4D0844B8D_OFFSET UNITYSDK_OFFSET(0x153C8560)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_69AA1472849A746C_OFFSET UNITYSDK_OFFSET(0x153C53F0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x153C78D0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_70FD38146819D162_OFFSET UNITYSDK_OFFSET(0x153C90D0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_75599E6F55CAC779_OFFSET UNITYSDK_OFFSET(0x153C9B20)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x153C8030)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x153C7990)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_8315F0700C3726DD_OFFSET UNITYSDK_OFFSET(0x153C8AA0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1003AD20)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_8BF6BD9CFC92C60D_OFFSET UNITYSDK_OFFSET(0x153C7CE0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_917D0ED47D05C89A_OFFSET UNITYSDK_OFFSET(0x1003B320)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_94E81A769E469060_OFFSET UNITYSDK_OFFSET(0x153C5070)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x153C7E20)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_97E8BEA61B448953_OFFSET UNITYSDK_OFFSET(0x153C6DB0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_9D7B81571ADA6EDE_OFFSET UNITYSDK_OFFSET(0x153C48A0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_9FFA4FE44CCCCBF6_OFFSET UNITYSDK_OFFSET(0x153C9730)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_A08E18B9F5A46959_OFFSET UNITYSDK_OFFSET(0x153CA000)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_A30162A6C0BA8D26_OFFSET UNITYSDK_OFFSET(0x1003BD50)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x153C6EF0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_A481DDAAEBB75D91_OFFSET UNITYSDK_OFFSET(0x153C7EC0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_AF11EB02CE78B812_OFFSET UNITYSDK_OFFSET(0x1003B2D0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_B16466D0D2C5C84B_OFFSET UNITYSDK_OFFSET(0x153C9A20)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_BAB8A573E344AF0F_OFFSET UNITYSDK_OFFSET(0x1003AC90)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x1003AAB0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x153C4BE0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x153C4BA0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_CAAAA03D9552FCE2_OFFSET UNITYSDK_OFFSET(0x153C7BA0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_DE37FD76A9915675_OFFSET UNITYSDK_OFFSET(0x153C9ED0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_E3365B402071963B_OFFSET UNITYSDK_OFFSET(0x1003AD80)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_E6373F67B4ECDF1C_OFFSET UNITYSDK_OFFSET(0x153C8BB0)
#define CLASS_2_4A31986163B0B2B7_METHOD_2_F675341C48ED6437_OFFSET UNITYSDK_OFFSET(0x153C51B0)
#define CLASS_2_4A31986163B0B2B7_ONCREATE_OFFSET UNITYSDK_OFFSET(0x153C44B0)
#define CLASS_2_4A31986163B0B2B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x153C4C70)
#define CLASS_2_4A31986163B0B2B7__CTOR_OFFSET UNITYSDK_OFFSET(0x153C4C20)

inline static constexpr unsigned int Class_2_4A31986163B0B2B7_TypeDefinitionIndex = 80984;

class Class_2_4A31986163B0B2B7 : public ::Foundation::SingletonDisposable_1<::Class_2_4A31986163B0B2B7*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_31()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4A31986163B0B2B7_TypeDefinitionIndex)->GetStaticField(0x9F40);
	}
	static ::System::Boolean* StaticGet_Field_2_34()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4A31986163B0B2B7_TypeDefinitionIndex)->GetStaticField(0x9F41);
	}
	static ::System::Boolean* StaticGet_Field_2_35()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4A31986163B0B2B7_TypeDefinitionIndex)->GetStaticField(0x9F42);
	}
	static ::System::Boolean* StaticGet_Field_2_32()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4A31986163B0B2B7_TypeDefinitionIndex)->GetStaticField(0x9F43);
	}
	static ::System::Boolean* StaticGet_Field_2_36()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4A31986163B0B2B7_TypeDefinitionIndex)->GetStaticField(0x9F44);
	}
	static ::System::Boolean* StaticGet_Field_2_33()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4A31986163B0B2B7_TypeDefinitionIndex)->GetStaticField(0x9F45);
	}
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>* Field_2_2; // 0x10
	::Class_1_5F6793D062D31870* Field_2_21; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode>>* Field_2_14; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::ENapGIQuality>>* Field_2_12; // 0x30
	::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::String*, ::System::Single, ::System::Single>>* Field_2_9; // 0x38
	::MoleMole::DeviceSettingProfile* Field_2_16; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GeneralGraphicQualityProfileContext*>* Field_2_20; // 0x48
	::Class_1_144B047379F813BA* Field_2_17; // 0x50
	::System::Collections::Generic::List_1<::Class_1_BCCD4DFEA016B7F9*>* Field_2_18; // 0x58
	::System::Collections::Generic::Dictionary_2<::MoleMole::GraphicSettingProfileType, ::Class_1_480FC3B3774489BF*>* Field_2_19; // 0x60
	::System::Boolean Field_2_30; // 0x68
	::System::Boolean Field_2_25; // 0x69
	::System::Boolean Field_2_4; // 0x6A
	::System::Boolean Field_2_1; // 0x6B
	::System::Single Field_2_5; // 0x6C
	::MoleMole::InLevelNPCCrowdLevel Field_2_29; // 0x70
	::System::Single Field_2_6; // 0x74
	::UnityEngine::NAPRenderPipeline0::ENapGIQuality Field_2_13; // 0x78
	::System::Int32 Field_2_3; // 0x7C
	::System::Int64 Field_2_39; // 0x80
	::MoleMole::PCSuperResolutionType Field_2_37; // 0x88
	::System::Single Field_2_7; // 0x8C
	::MoleMole::Config::ConfigViewObjectMisc_EntityCreate Field_2_38; // 0x90
	::System::Single Field_2_10; // 0x9C
	::System::Boolean Field_2_28; // 0xA0
	::System::Boolean Field_2_26; // 0xA1
	::System::Boolean Field_2_27; // 0xA2
	::UnityEngine::NAPRenderPipeline0::AntialiasingMode Field_2_15; // 0xA4
	::MoleMole::EMaterialModifierPerformanceLevel Field_2_24; // 0xA8
	::System::Single Field_2_11; // 0xAC
	::Enum_3_FBA6A644F76B8A72 Field_2_22; // 0xB0
	::MoleMole::FrameRateInterpolateType Field_2_23; // 0xB4
	::System::Single Field_2_8; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Enum_3_FBA6A644F76B8A72 Method_2_49AC00594530B714()
	{
		return ((::Enum_3_FBA6A644F76B8A72(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_49AC00594530B714_OFFSET))(this);
	}

	::System::Void Method_2_9D7B81571ADA6EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_9D7B81571ADA6EDE_OFFSET))(this);
	}

	::System::Void Method_2_0D95214C1FCF51C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_0D95214C1FCF51C2_OFFSET))(this);
	}

	::System::Void Method_2_94E81A769E469060(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_94E81A769E469060_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_69AA1472849A746C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_69AA1472849A746C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6181BB089D539027(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_6181BB089D539027_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97E8BEA61B448953(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_97E8BEA61B448953_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_6181BB089D539027_1(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_6181BB089D539027_1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::UnityEngine::NAPRenderPipeline0::ENapGIQuality Method_2_4774F4C5640CCE25()
	{
		return ((::UnityEngine::NAPRenderPipeline0::ENapGIQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_4774F4C5640CCE25_OFFSET))(this);
	}

	::System::Single Method_2_134F4662017FA8D4(::System::Boolean a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_134F4662017FA8D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B77A2299C85C12C(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_0B77A2299C85C12C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_CAAAA03D9552FCE2(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_CAAAA03D9552FCE2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A481DDAAEBB75D91(::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* a1, ::System::Byte a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_A481DDAAEBB75D91_OFFSET))(this, a1, a2);
	}

	::System::Int64 Method_2_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_2_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Int32 Method_2_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Boolean Method_2_03601414F77E6CE7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_03601414F77E6CE7_OFFSET))(this, a1);
	}

	::System::Void Method_2_68403DF4D0844B8D(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GeneralGraphicQualityProfileContext*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GeneralGraphicQualityProfileContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_68403DF4D0844B8D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8315F0700C3726DD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_8315F0700C3726DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::MoleMole::DeviceSettingProfile* Method_2_098C4B6E1F88B232(::MoleMole::DeviceSettingConfig* a1)
	{
		return ((::MoleMole::DeviceSettingProfile*(*)(::PVOID, ::MoleMole::DeviceSettingConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_098C4B6E1F88B232_OFFSET))(this, a1);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Boolean Method_2_E6373F67B4ECDF1C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_E6373F67B4ECDF1C_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BF6BD9CFC92C60D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_8BF6BD9CFC92C60D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_581D806F89304C35(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_581D806F89304C35_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F675341C48ED6437()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_F675341C48ED6437_OFFSET))(this);
	}

	::System::Void Method_2_489A69512C3B7D20(::UnityEngine::NAPRenderPipeline0::AntialiasingMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_489A69512C3B7D20_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F253B3051C2DF95(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_5F253B3051C2DF95_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_70FD38146819D162(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_70FD38146819D162_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3D6F561DE1069F96(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_3D6F561DE1069F96_OFFSET))(this, a1);
	}

	::System::Single Method_2_3422201382CE593B_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_3422201382CE593B_1_OFFSET))(this);
	}

	::System::Void Method_2_55142585DDBDDF17(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_55142585DDBDDF17_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9FFA4FE44CCCCBF6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_9FFA4FE44CCCCBF6_OFFSET))(this, a1);
	}

	::System::Void Method_2_07AAE9BFCC4186F3(::MoleMole::GraphicSettingProfileType a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_07AAE9BFCC4186F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_16A376934740D580(::MoleMole::Config::DevicePerformanceConfig* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DevicePerformanceConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_16A376934740D580_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B16466D0D2C5C84B(::Foundation::NapPlatform a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NapPlatform))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_B16466D0D2C5C84B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_1_5F6793D062D31870* Method_2_24748FC20F375725()
	{
		return ((::Class_1_5F6793D062D31870*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_75599E6F55CAC779(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_75599E6F55CAC779_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_509CF91EDD13A3A0(::System::String* a1, ::MoleMole::GraphicSettingProfileType a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::GraphicSettingProfileType, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_509CF91EDD13A3A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_2_DE37FD76A9915675(::System::String* a1, ::UnityEngine::NAPRenderPipeline0::ENapGIQuality a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::NAPRenderPipeline0::ENapGIQuality))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_DE37FD76A9915675_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_A08E18B9F5A46959(::MoleMole::GraphicSettingProfileType a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::GraphicSettingProfileType))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_A08E18B9F5A46959_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CFB4A6C9D80CDEC(::UnityEngine::NAPRenderPipeline0::ENapGIQuality a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::ENapGIQuality, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_0CFB4A6C9D80CDEC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2CBF59A7192198B4(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_2CBF59A7192198B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD658202BB4C4431()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_BD658202BB4C4431_OFFSET))(this);
	}

	::Class_1_480FC3B3774489BF* Method_2_0BBD9A611E2E6EE2(::MoleMole::GraphicSettingProfileType a1)
	{
		return ((::Class_1_480FC3B3774489BF*(*)(::PVOID, ::MoleMole::GraphicSettingProfileType))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_0BBD9A611E2E6EE2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_BCCD4DFEA016B7F9*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_BCCD4DFEA016B7F9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::UnityEngine::NAPRenderPipeline0::AntialiasingMode Method_2_BAB8A573E344AF0F()
	{
		return ((::UnityEngine::NAPRenderPipeline0::AntialiasingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_BAB8A573E344AF0F_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Boolean Method_2_E3365B402071963B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_E3365B402071963B_OFFSET))(this, a1);
	}

	::Class_1_144B047379F813BA* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_144B047379F813BA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_1F4A04CEE762335A(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_1F4A04CEE762335A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AF11EB02CE78B812(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_AF11EB02CE78B812_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_917D0ED47D05C89A(::System::String* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*&))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_917D0ED47D05C89A_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Battle::Entity* Method_2_08AAFD08AC0FA5C1(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_08AAFD08AC0FA5C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_36971FC3F16E2CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_36971FC3F16E2CEB_OFFSET))(this);
	}

	::System::Void Method_2_A30162A6C0BA8D26(::System::String* a1, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode))((::PBYTE)hIl2Cpp + CLASS_2_4A31986163B0B2B7_METHOD_2_A30162A6C0BA8D26_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FBA6A644F76B8A72.h"
#include "unitysdk/Foundation/NapPlatform.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_EntityCreate.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_ZKReward.h"
#include "unitysdk/MoleMole/EMaterialModifierPerformanceLevel.h"
#include "unitysdk/MoleMole/FrameRateInterpolateType.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"
#include "unitysdk/MoleMole/InLevelNPCCrowdLevel.h"
#include "unitysdk/MoleMole/PCFrameGenType.h"
#include "unitysdk/MoleMole/PCSuperResolutionType.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ENapGIQuality.h"

class Class_1_144B047379F813BA;
class Class_1_480FC3B3774489BF;
class Class_1_913CED533E60A070;
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
template <typename T> class Class_1_F7D550E84A871144;

#define CLASS_2_0BBD4737DF48D7ED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18148690)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_003F3CD7B39BF4BD_OFFSET UNITYSDK_OFFSET(0x1814CD60)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0x1814D700)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_03601414F77E6CE7_OFFSET UNITYSDK_OFFSET(0x18148830)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_07AAE9BFCC4186F3_OFFSET UNITYSDK_OFFSET(0x1814E510)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_08AAFD08AC0FA5C1_OFFSET UNITYSDK_OFFSET(0x1814BE80)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_098C4B6E1F88B232_OFFSET UNITYSDK_OFFSET(0x18149B90)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_0BBD9A611E2E6EE2_OFFSET UNITYSDK_OFFSET(0x1814B990)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_134F4662017FA8D4_OFFSET UNITYSDK_OFFSET(0x1814ECB0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_16A376934740D580_OFFSET UNITYSDK_OFFSET(0x1814A640)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1814CB80)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1814D890)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1814D4F0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x18148280)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_2CBF59A7192198B4_OFFSET UNITYSDK_OFFSET(0x1814F3D0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x18149100)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1814AE50)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_39EA24CAB14D3584_OFFSET UNITYSDK_OFFSET(0x1814F2E0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x18148CC0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_424E85F8462A68C1_OFFSET UNITYSDK_OFFSET(0x1814B2C0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1814B460)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x1814D5C0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x1814D4A0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1814F3C0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_509CF91EDD13A3A0_OFFSET UNITYSDK_OFFSET(0x1814B6B0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_5C5EB45FCBC3F9BC_OFFSET UNITYSDK_OFFSET(0x1814D500)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_5F253B3051C2DF95_OFFSET UNITYSDK_OFFSET(0x1814E640)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_6181BB089D539027_1_OFFSET UNITYSDK_OFFSET(0x1814DD00)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_6181BB089D539027_OFFSET UNITYSDK_OFFSET(0x1814D8A0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_69AA1472849A746C_OFFSET UNITYSDK_OFFSET(0x181495A0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_70FD38146819D162_OFFSET UNITYSDK_OFFSET(0x18149460)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_716EA20142A24700_1_OFFSET UNITYSDK_OFFSET(0x1814B1A0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_716EA20142A24700_2_OFFSET UNITYSDK_OFFSET(0x1814F350)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_716EA20142A24700_OFFSET UNITYSDK_OFFSET(0x1814E4A0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1814EB20)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_7E79F9A8C26A342A_1_OFFSET UNITYSDK_OFFSET(0x1814D660)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_7E79F9A8C26A342A_OFFSET UNITYSDK_OFFSET(0x1814B8F0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1814AEB0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_852D4F792003124D_OFFSET UNITYSDK_OFFSET(0x1814B210)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1814E3D0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_8A1E852B6B34106B_OFFSET UNITYSDK_OFFSET(0x1814CF00)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_8BB2A1A37F3270F1_OFFSET UNITYSDK_OFFSET(0x1814B340)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_948E478C46A63491_OFFSET UNITYSDK_OFFSET(0x1814AC80)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1814EB30)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_9D7B81571ADA6EDE_OFFSET UNITYSDK_OFFSET(0x18148450)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_9FFA4FE44CCCCBF6_OFFSET UNITYSDK_OFFSET(0x1814EFC0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_A08E18B9F5A46959_OFFSET UNITYSDK_OFFSET(0x1814E320)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_A481DDAAEBB75D91_OFFSET UNITYSDK_OFFSET(0x1814AD40)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_AC2154A1B39AB8AB_OFFSET UNITYSDK_OFFSET(0x1814AB60)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_AC928FA52A1BD3E0_OFFSET UNITYSDK_OFFSET(0x1814CEB0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_AEDC22485A0EF794_OFFSET UNITYSDK_OFFSET(0x1814CAE0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_B03E376C6910B203_OFFSET UNITYSDK_OFFSET(0x1814E430)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_B0AD7BD2244C5697_OFFSET UNITYSDK_OFFSET(0x1814B400)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_B341E178A988992B_OFFSET UNITYSDK_OFFSET(0x1814D5D0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1814B4D0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x1814CCC0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1814F220)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18148790)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18148750)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x18148D90)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_D3F4A9917F7B37AE_OFFSET UNITYSDK_OFFSET(0x1814D430)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x1814E160)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_D7D187EF1B0D599E_OFFSET UNITYSDK_OFFSET(0x1814CDF0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_D9E34E162363C06E_OFFSET UNITYSDK_OFFSET(0x1814CC40)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_DAE4D15278D57F15_OFFSET UNITYSDK_OFFSET(0x1814AC20)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_DB2B44FABAA6A6B5_1_OFFSET UNITYSDK_OFFSET(0x1814CD10)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_DB2B44FABAA6A6B5_OFFSET UNITYSDK_OFFSET(0x1814AB10)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_DC27904EF3ABA137_OFFSET UNITYSDK_OFFSET(0x1814F230)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_E3365B402071963B_OFFSET UNITYSDK_OFFSET(0x1814E6D0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_E51426A627187E45_OFFSET UNITYSDK_OFFSET(0x1814BA80)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_E6373F67B4ECDF1C_OFFSET UNITYSDK_OFFSET(0x18148DE0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_E7ECA58397199261_OFFSET UNITYSDK_OFFSET(0x1814E590)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1814E6C0)
#define CLASS_2_0BBD4737DF48D7ED_METHOD_2_FAB95AB2F31AE5D5_OFFSET UNITYSDK_OFFSET(0x1814C1D0)
#define CLASS_2_0BBD4737DF48D7ED_ONCREATE_OFFSET UNITYSDK_OFFSET(0x18148050)
#define CLASS_2_0BBD4737DF48D7ED__CCTOR_OFFSET UNITYSDK_OFFSET(0x18148810)
#define CLASS_2_0BBD4737DF48D7ED__CTOR_OFFSET UNITYSDK_OFFSET(0x181487D0)

inline static constexpr unsigned int Class_2_0BBD4737DF48D7ED_TypeDefinitionIndex = 76555;

class Class_2_0BBD4737DF48D7ED : public ::Foundation::SingletonDisposable_1<::Class_2_0BBD4737DF48D7ED*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_31()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0BBD4737DF48D7ED_TypeDefinitionIndex)->GetStaticField(0xDBC0);
	}
	static ::System::Boolean* StaticGet_Field_2_34()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0BBD4737DF48D7ED_TypeDefinitionIndex)->GetStaticField(0xDBC1);
	}
	static ::System::Boolean* StaticGet_Field_2_30()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0BBD4737DF48D7ED_TypeDefinitionIndex)->GetStaticField(0xDBC2);
	}
	static ::System::Boolean* StaticGet_Field_2_28()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0BBD4737DF48D7ED_TypeDefinitionIndex)->GetStaticField(0xDBC3);
	}
	static ::System::Boolean* StaticGet_Field_2_29()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0BBD4737DF48D7ED_TypeDefinitionIndex)->GetStaticField(0xDBC4);
	}
	static ::System::Boolean* StaticGet_Field_2_35()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0BBD4737DF48D7ED_TypeDefinitionIndex)->GetStaticField(0xDBC5);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GeneralGraphicQualityProfileContext*>* Field_2_19; // 0x10
	::Class_1_144B047379F813BA* Field_2_14; // 0x18
	::Class_1_F7D550E84A871144<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>* Field_2_10; // 0x20
	::Class_1_F7D550E84A871144<::UnityEngine::NAPRenderPipeline0::ENapGIQuality>* Field_2_11; // 0x28
	::Class_1_F7D550E84A871144<::System::ValueTuple_2<::System::Single, ::System::Single>>* Field_2_4; // 0x30
	::MoleMole::DeviceSettingProfile* Field_2_15; // 0x38
	::Class_1_913CED533E60A070* Field_2_18; // 0x40
	::MoleMole::Config::ConfigViewObjectMisc_EntityCreate Field_2_39; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::GraphicSettingProfileType, ::Class_1_480FC3B3774489BF*>* Field_2_12; // 0x68
	::Class_1_F7D550E84A871144<::System::Boolean>* Field_2_3; // 0x70
	::Class_1_F7D550E84A871144<::System::Int32>* Field_2_2; // 0x78
	::System::Collections::Generic::List_1<::Class_1_BCCD4DFEA016B7F9*>* Field_2_13; // 0x80
	::MoleMole::InLevelNPCCrowdLevel Field_2_26; // 0x88
	::System::Single Field_2_0; // 0x8C
	::MoleMole::EMaterialModifierPerformanceLevel Field_2_23; // 0x90
	::System::Boolean Field_2_32; // 0x94
	::System::Boolean Field_2_20; // 0x95
	::System::Boolean Field_2_27; // 0x96
	::System::Boolean Field_2_1; // 0x97
	::System::Single Field_2_5; // 0x98
	::System::Int32 Field_2_8; // 0x9C
	::MoleMole::FrameRateInterpolateType Field_2_16; // 0xA0
	::MoleMole::PerformanceSettingProfile_ENPCOmitLevel Field_2_25; // 0xA4
	::Enum_3_FBA6A644F76B8A72 Field_2_17; // 0xA8
	::MoleMole::PCFrameGenType Field_2_9; // 0xAC
	::MoleMole::PCSuperResolutionType Field_2_33; // 0xB0
	::System::Single Field_2_6; // 0xB4
	::System::Int64 Field_2_37; // 0xB8
	::System::Boolean Field_2_22; // 0xC0
	::System::Boolean Field_2_21; // 0xC1
	::System::Boolean Field_2_24; // 0xC2
	::MoleMole::Config::ConfigViewObjectMisc_ZKReward Field_2_38; // 0xC4
	::System::Single Field_2_7; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_03601414F77E6CE7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_03601414F77E6CE7_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Boolean Method_2_E6373F67B4ECDF1C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_E6373F67B4ECDF1C_OFFSET))(this, a1);
	}

	::System::Void Method_2_36971FC3F16E2CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_36971FC3F16E2CEB_OFFSET))(this);
	}

	::System::Void Method_2_69AA1472849A746C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_69AA1472849A746C_OFFSET))(this, a1);
	}

	::System::Single Method_2_DB2B44FABAA6A6B5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_DB2B44FABAA6A6B5_OFFSET))(this);
	}

	::UnityEngine::NAPRenderPipeline0::AntialiasingMode Method_2_DAE4D15278D57F15()
	{
		return ((::UnityEngine::NAPRenderPipeline0::AntialiasingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_DAE4D15278D57F15_OFFSET))(this);
	}

	::System::Boolean Method_2_A481DDAAEBB75D91(::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem* a1, ::System::Byte a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_A481DDAAEBB75D91_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_2_424E85F8462A68C1(::UnityEngine::NAPRenderPipeline0::ENapGIQuality a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::ENapGIQuality, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_424E85F8462A68C1_OFFSET))(this, a1, a2);
	}

	::UnityEngine::NAPRenderPipeline0::ENapGIQuality Method_2_B0AD7BD2244C5697()
	{
		return ((::UnityEngine::NAPRenderPipeline0::ENapGIQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_B0AD7BD2244C5697_OFFSET))(this);
	}

	::System::Void Method_2_852D4F792003124D(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_852D4F792003124D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Boolean Method_2_509CF91EDD13A3A0(::System::String* a1, ::MoleMole::GraphicSettingProfileType a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::GraphicSettingProfileType, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_509CF91EDD13A3A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_7E79F9A8C26A342A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_7E79F9A8C26A342A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_70FD38146819D162(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_70FD38146819D162_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E51426A627187E45(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_E51426A627187E45_OFFSET))(this, a1);
	}

	::System::Void Method_2_9D7B81571ADA6EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_9D7B81571ADA6EDE_OFFSET))(this);
	}

	::System::Boolean Method_2_FAB95AB2F31AE5D5(::System::String* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*& a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EffectPatternInfoConfig_PatternInfoItem*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_FAB95AB2F31AE5D5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AEDC22485A0EF794(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_AEDC22485A0EF794_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9E34E162363C06E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_D9E34E162363C06E_OFFSET))(this);
	}

	::System::Single Method_2_DB2B44FABAA6A6B5_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_DB2B44FABAA6A6B5_1_OFFSET))(this);
	}

	::System::Void Method_2_003F3CD7B39BF4BD(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_003F3CD7B39BF4BD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AC928FA52A1BD3E0(::Foundation::NapPlatform a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NapPlatform))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_AC928FA52A1BD3E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A1E852B6B34106B(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GeneralGraphicQualityProfileContext*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GeneralGraphicQualityProfileContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_8A1E852B6B34106B_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_08AAFD08AC0FA5C1(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_08AAFD08AC0FA5C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3F4A9917F7B37AE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_D3F4A9917F7B37AE_OFFSET))(this, a1);
	}

	::Enum_3_FBA6A644F76B8A72 Method_2_49AC00594530B714()
	{
		return ((::Enum_3_FBA6A644F76B8A72(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_49AC00594530B714_OFFSET))(this);
	}

	::Class_1_144B047379F813BA* Method_2_24748FC20F375725()
	{
		return ((::Class_1_144B047379F813BA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::Class_1_F7D550E84A871144<::System::Int32>* Method_2_5C5EB45FCBC3F9BC()
	{
		return ((::Class_1_F7D550E84A871144<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_5C5EB45FCBC3F9BC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_BCCD4DFEA016B7F9*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_BCCD4DFEA016B7F9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_2_16A376934740D580(::MoleMole::Config::DevicePerformanceConfig* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DevicePerformanceConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_16A376934740D580_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B341E178A988992B(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_B341E178A988992B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7E79F9A8C26A342A_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_7E79F9A8C26A342A_1_OFFSET))(this, a1, a2);
	}

	::Class_1_F7D550E84A871144<::System::Boolean>* Method_2_D7D187EF1B0D599E()
	{
		return ((::Class_1_F7D550E84A871144<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_D7D187EF1B0D599E_OFFSET))(this);
	}

	::System::Void Method_2_025E4B1A2211CF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_025E4B1A2211CF52_OFFSET))(this);
	}

	::System::Int32 Method_2_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_BFBBE8A6FE167A6A_OFFSET))(this);
	}

	::Class_1_913CED533E60A070* Method_2_24748FC20F375725_1()
	{
		return ((::Class_1_913CED533E60A070*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_24748FC20F375725_1_OFFSET))(this);
	}

	::Class_1_F7D550E84A871144<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>* Method_2_948E478C46A63491()
	{
		return ((::Class_1_F7D550E84A871144<::UnityEngine::NAPRenderPipeline0::AntialiasingMode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_948E478C46A63491_OFFSET))(this);
	}

	::System::Boolean Method_2_6181BB089D539027(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_6181BB089D539027_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6181BB089D539027_1(::System::String* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_6181BB089D539027_1_OFFSET))(this, a1, a2);
	}

	::Class_1_F7D550E84A871144<::System::ValueTuple_2<::System::Single, ::System::Single>>* Method_2_AC2154A1B39AB8AB()
	{
		return ((::Class_1_F7D550E84A871144<::System::ValueTuple_2<::System::Single, ::System::Single>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_AC2154A1B39AB8AB_OFFSET))(this);
	}

	::System::Void Method_2_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_D737CD2779D51A4E_OFFSET))(this);
	}

	::Class_1_F7D550E84A871144<::UnityEngine::NAPRenderPipeline0::ENapGIQuality>* Method_2_8BB2A1A37F3270F1()
	{
		return ((::Class_1_F7D550E84A871144<::UnityEngine::NAPRenderPipeline0::ENapGIQuality>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_8BB2A1A37F3270F1_OFFSET))(this);
	}

	::System::String* Method_2_A08E18B9F5A46959(::MoleMole::GraphicSettingProfileType a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::GraphicSettingProfileType))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_A08E18B9F5A46959_OFFSET))(this, a1);
	}

	::MoleMole::DeviceSettingProfile* Method_2_098C4B6E1F88B232(::MoleMole::DeviceSettingConfig* a1)
	{
		return ((::MoleMole::DeviceSettingProfile*(*)(::PVOID, ::MoleMole::DeviceSettingConfig*))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_098C4B6E1F88B232_OFFSET))(this, a1);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_B03E376C6910B203(::UnityEngine::NAPRenderPipeline0::AntialiasingMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_B03E376C6910B203_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CE18697B63E52504()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_CE18697B63E52504_OFFSET))(this);
	}

	::System::Void Method_2_716EA20142A24700(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_716EA20142A24700_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_07AAE9BFCC4186F3(::MoleMole::GraphicSettingProfileType a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_07AAE9BFCC4186F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E7ECA58397199261(::System::String* a1, ::UnityEngine::NAPRenderPipeline0::ENapGIQuality a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::NAPRenderPipeline0::ENapGIQuality, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_E7ECA58397199261_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_480FC3B3774489BF* Method_2_0BBD9A611E2E6EE2(::MoleMole::GraphicSettingProfileType a1)
	{
		return ((::Class_1_480FC3B3774489BF*(*)(::PVOID, ::MoleMole::GraphicSettingProfileType))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_0BBD9A611E2E6EE2_OFFSET))(this, a1);
	}

	::System::Void Method_2_716EA20142A24700_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_716EA20142A24700_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5F253B3051C2DF95(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_5F253B3051C2DF95_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_E3365B402071963B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_E3365B402071963B_OFFSET))(this, a1);
	}

	::System::Int64 Method_2_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_2_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Single Method_2_134F4662017FA8D4(::System::Boolean a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_134F4662017FA8D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9FFA4FE44CCCCBF6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_9FFA4FE44CCCCBF6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC27904EF3ABA137(::System::String* a1, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::NAPRenderPipeline0::AntialiasingMode, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_DC27904EF3ABA137_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_39EA24CAB14D3584(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_39EA24CAB14D3584_OFFSET))(this, a1);
	}

	::System::Void Method_2_716EA20142A24700_2(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_716EA20142A24700_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2CBF59A7192198B4(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0BBD4737DF48D7ED_METHOD_2_2CBF59A7192198B4_OFFSET))(this, a1, a2);
	}
};

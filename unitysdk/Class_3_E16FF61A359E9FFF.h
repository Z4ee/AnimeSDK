#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityRadialBlur; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define CLASS_3_E16FF61A359E9FFF_METHOD_3_03F90059E94D0371_OFFSET UNITYSDK_OFFSET(0x18B05010)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_1791C0D06E06376D_OFFSET UNITYSDK_OFFSET(0x18B02340)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_19A7CE20FC144EFE_OFFSET UNITYSDK_OFFSET(0x18B05B60)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_29EA181F4AE58577_OFFSET UNITYSDK_OFFSET(0x18B058F0)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_37F7DF079CA9D344_OFFSET UNITYSDK_OFFSET(0x18B05230)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_5A1D4A843D7D8984_OFFSET UNITYSDK_OFFSET(0x15D51340)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_709C6ACE480ED0E5_OFFSET UNITYSDK_OFFSET(0x18B05060)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_B9C14C0C67FF3D42_OFFSET UNITYSDK_OFFSET(0x15D53EC0)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_D011DB62603DB0A1_OFFSET UNITYSDK_OFFSET(0x18B051C0)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_DA2644193DAB9F9D_OFFSET UNITYSDK_OFFSET(0x15D4C580)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_DB964DC5493AE064_OFFSET UNITYSDK_OFFSET(0x15D4F450)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_E112F422B8004A6D_OFFSET UNITYSDK_OFFSET(0x18AFFE20)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_F67C8F42FA599FC0_1_OFFSET UNITYSDK_OFFSET(0x18B058E0)
#define CLASS_3_E16FF61A359E9FFF_METHOD_3_F67C8F42FA599FC0_OFFSET UNITYSDK_OFFSET(0x18B05220)
#define CLASS_3_E16FF61A359E9FFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18B03AB0)
#define CLASS_3_E16FF61A359E9FFF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B04C50)
#define CLASS_3_E16FF61A359E9FFF__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4C220)

inline static constexpr unsigned int Class_3_E16FF61A359E9FFF_TypeDefinitionIndex = 89322;

class Class_3_E16FF61A359E9FFF : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::RadialBlur*, ::MoleMole::Config::ConfigEntityRadialBlur*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_14; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_34; // 0xB0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_4; // 0xB8
	::MoleMole::Config::ConfigPosRot* Field_3_41; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_24; // 0xC8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_16; // 0xD0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_38; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_30; // 0xE0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_12; // 0xE8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_8; // 0xF0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::SampleDistanceMode>* Field_3_6; // 0xF8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_28; // 0x100
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_18; // 0x108
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* Field_3_26; // 0x118
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_22; // 0x120
	::MoleMole::TwoValue_1<::System::Single>* Field_3_32; // 0x128
	::System::String* Field_3_42; // 0x130
	::MoleMole::TwoValue_1<::System::Single>* Field_3_20; // 0x138
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DownSampleLevel>* Field_3_0; // 0x140
	::System::Single Field_3_39; // 0x148
	::System::Single Field_3_9; // 0x14C
	::System::Single Field_3_29; // 0x150
	::UnityEngine::Vector2 Field_3_47; // 0x154
	::System::Boolean Field_3_23; // 0x15C
	::System::Boolean Field_3_46; // 0x15D
	::System::Boolean Field_3_40; // 0x15E
	::System::Boolean Field_3_19; // 0x15F
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_3_5; // 0x160
	::UnityEngine::Vector2 Field_3_17; // 0x164
	::System::Int32 Field_3_11; // 0x16C
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_3_7; // 0x170
	::UnityEngine::Vector2 Field_3_15; // 0x174
	::System::Single Field_3_25; // 0x17C
	::System::UInt32 Field_3_36; // 0x180
	::System::Single Field_3_31; // 0x184
	::System::Single Field_3_13; // 0x188
	::System::Single Field_3_33; // 0x18C
	::System::Single Field_3_27; // 0x190
	::System::Int32 Field_3_37; // 0x194
	::System::Boolean Field_3_21; // 0x198
	::System::Boolean Field_3_35; // 0x199
	::System::Boolean Field_3_43; // 0x19A

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityRadialBlur* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::System::String* a1, ::MoleMole::Config::ConfigEntityRadialBlur* a2, ::MoleMole::Battle::Entity* a3, ::System::Boolean a4, ::System::String* a5, ::MoleMole::Config::ConfigPosRot* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_DA2644193DAB9F9D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::RadialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::RadialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_DA2644193DAB9F9D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DB964DC5493AE064(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_DB964DC5493AE064_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5A1D4A843D7D8984(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_5A1D4A843D7D8984_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B9C14C0C67FF3D42(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::RadialBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::RadialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_B9C14C0C67FF3D42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E112F422B8004A6D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::RadialBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_E112F422B8004A6D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_1791C0D06E06376D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::RadialBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_1791C0D06E06376D_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_TOSTRING_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_709C6ACE480ED0E5()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_709C6ACE480ED0E5_OFFSET))(this);
	}

	::System::Void Method_3_D011DB62603DB0A1(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_D011DB62603DB0A1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_F67C8F42FA599FC0(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_F67C8F42FA599FC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F67C8F42FA599FC0_1(::UnityEngine::Rendering::Universal::RadialBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_F67C8F42FA599FC0_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_03F90059E94D0371(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::System::String* a3, ::MoleMole::Config::ConfigPosRot* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_03F90059E94D0371_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_37F7DF079CA9D344(::UnityEngine::Rendering::Universal::RadialBlur* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::RadialBlur*))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_37F7DF079CA9D344_OFFSET))(this, a1);
	}

	::System::Void Method_3_29EA181F4AE58577(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_29EA181F4AE58577_OFFSET))(this, a1);
	}

	::System::Void Method_3_19A7CE20FC144EFE(::MoleMole::Config::ConfigEntityRadialBlur* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::System::String* a4, ::MoleMole::Config::ConfigPosRot* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRadialBlur*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E16FF61A359E9FFF_METHOD_3_19A7CE20FC144EFE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};

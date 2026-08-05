#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityFXFogEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define CLASS_3_6035293E61073C3C_METHOD_3_14AC13BD93C6DACD_OFFSET UNITYSDK_OFFSET(0x1AF2BC30)
#define CLASS_3_6035293E61073C3C_METHOD_3_9F5854F2B744F3B0_OFFSET UNITYSDK_OFFSET(0x1AF38AE0)
#define CLASS_3_6035293E61073C3C_METHOD_3_B0BA2D5CFC9C793B_OFFSET UNITYSDK_OFFSET(0x1AF356F0)
#define CLASS_3_6035293E61073C3C_METHOD_3_B354DF0A2205049D_OFFSET UNITYSDK_OFFSET(0x1AF2FB60)
#define CLASS_3_6035293E61073C3C_METHOD_3_C0C7C35A5A8F8180_OFFSET UNITYSDK_OFFSET(0x1AF3BEB0)
#define CLASS_3_6035293E61073C3C_METHOD_3_DEE6CF9D02F90D94_OFFSET UNITYSDK_OFFSET(0x1AF32280)
#define CLASS_3_6035293E61073C3C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AF3DAF0)
#define CLASS_3_6035293E61073C3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2B7E0)

inline static constexpr unsigned int Class_3_6035293E61073C3C_TypeDefinitionIndex = 89395;

class Class_3_6035293E61073C3C : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::FXFog*, ::MoleMole::Config::ConfigEntityFXFogEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_29; // 0xA8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_19; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_17; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_45; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_21; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_39; // 0xD0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_25; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_35; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_23; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_43; // 0xF0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_33; // 0xF8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_11; // 0x100
	::MoleMole::TwoValue_1<::System::Single>* Field_3_37; // 0x108
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_47; // 0x110
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_1; // 0x118
	::MoleMole::TwoValue_1<::System::Single>* Field_3_31; // 0x120
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_9; // 0x128
	::MoleMole::TwoValue_1<::System::Single>* Field_3_15; // 0x130
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_41; // 0x138
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_5; // 0x140
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_13; // 0x148
	::MoleMole::TwoValue_1<::System::Single>* Field_3_7; // 0x150
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_3; // 0x158
	::MoleMole::TwoValue_1<::System::Single>* Field_3_27; // 0x160
	::UnityEngine::Color Field_3_8; // 0x168
	::System::Single Field_3_38; // 0x178
	::System::Single Field_3_30; // 0x17C
	::System::Single Field_3_22; // 0x180
	::System::Single Field_3_14; // 0x184
	::System::Single Field_3_26; // 0x188
	::System::Single Field_3_36; // 0x18C
	::UnityEngine::Color Field_3_4; // 0x190
	::System::Single Field_3_10; // 0x1A0
	::System::Single Field_3_16; // 0x1A4
	::System::Single Field_3_20; // 0x1A8
	::System::Single Field_3_34; // 0x1AC
	::System::Single Field_3_44; // 0x1B0
	::UnityEngine::Color Field_3_32; // 0x1B4
	::System::Boolean Field_3_46; // 0x1C4
	::System::Boolean Field_3_24; // 0x1C5
	::System::Single Field_3_42; // 0x1C8
	::System::Single Field_3_6; // 0x1CC
	::System::Boolean Field_3_2; // 0x1D0
	::System::Boolean Field_3_40; // 0x1D1
	::System::Boolean Field_3_0; // 0x1D2
	::System::Boolean Field_3_18; // 0x1D3
	::UnityEngine::Color Field_3_12; // 0x1D4
	::System::Single Field_3_28; // 0x1E4

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityFXFogEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_6035293E61073C3C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_14AC13BD93C6DACD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FXFog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXFog*))((::PBYTE)hIl2Cpp + CLASS_3_6035293E61073C3C_METHOD_3_14AC13BD93C6DACD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B354DF0A2205049D(::UnityEngine::Rendering::Universal::FXFog* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FXFog*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6035293E61073C3C_METHOD_3_B354DF0A2205049D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DEE6CF9D02F90D94(::UnityEngine::Rendering::Universal::FXFog* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FXFog*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6035293E61073C3C_METHOD_3_DEE6CF9D02F90D94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B0BA2D5CFC9C793B(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FXFog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXFog*))((::PBYTE)hIl2Cpp + CLASS_3_6035293E61073C3C_METHOD_3_B0BA2D5CFC9C793B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9F5854F2B744F3B0(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FXFog* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXFog*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6035293E61073C3C_METHOD_3_9F5854F2B744F3B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C0C7C35A5A8F8180(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FXFog* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXFog*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6035293E61073C3C_METHOD_3_C0C7C35A5A8F8180_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6035293E61073C3C_TOSTRING_OFFSET))(this);
	}
};

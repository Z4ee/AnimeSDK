#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityDepthOfFieldEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define CLASS_3_11ED433BD84D41CB_METHOD_3_0510E9CFC11E45BB_OFFSET UNITYSDK_OFFSET(0x14175E00)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_0841A2232FB0AEE0_OFFSET UNITYSDK_OFFSET(0x1417C590)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_5444750A6160D013_OFFSET UNITYSDK_OFFSET(0x141745D0)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_87709EF30A4464BB_OFFSET UNITYSDK_OFFSET(0x14171A70)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_885288C2D34D929F_OFFSET UNITYSDK_OFFSET(0x1417E9A0)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_C32CF6DCEDFD1751_OFFSET UNITYSDK_OFFSET(0x141780C0)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_CCF0A3D3BE6BE21B_OFFSET UNITYSDK_OFFSET(0x1417A660)
#define CLASS_3_11ED433BD84D41CB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1417DA30)
#define CLASS_3_11ED433BD84D41CB__CTOR_OFFSET UNITYSDK_OFFSET(0x14171780)

inline static constexpr unsigned int Class_3_11ED433BD84D41CB_TypeDefinitionIndex = 48790;

class Class_3_11ED433BD84D41CB : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::DepthOfField*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_29; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_9; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DepthOfFieldMode>* Field_3_1; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_21; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_13; // 0xC8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_23; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_5; // 0xD8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_31; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_19; // 0xE8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_25; // 0xF0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DofDebugMode>* Field_3_7; // 0xF8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_11; // 0x100
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_15; // 0x108
	::MoleMole::TwoValue_1<::System::Single>* Field_3_17; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* Field_3_27; // 0x118
	::System::Int32 Field_3_22; // 0x120
	::UnityEngine::Rendering::Universal::DepthOfFieldMode Field_3_0; // 0x124
	::System::Boolean Field_3_28; // 0x128
	::System::Boolean Field_3_14; // 0x129
	::System::Boolean Field_3_30; // 0x12A
	::System::Boolean Field_3_24; // 0x12B
	::System::Single Field_3_10; // 0x12C
	::System::Single Field_3_26; // 0x130
	::UnityEngine::Rendering::Universal::DofDebugMode Field_3_6; // 0x134
	::System::Single Field_3_12; // 0x138
	::System::Single Field_3_4; // 0x13C
	::System::Single Field_3_20; // 0x140
	::System::Single Field_3_18; // 0x144
	::System::Single Field_3_8; // 0x148
	::System::Single Field_3_16; // 0x14C

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_87709EF30A4464BB(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_87709EF30A4464BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5444750A6160D013(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_5444750A6160D013_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0510E9CFC11E45BB(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_0510E9CFC11E45BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C32CF6DCEDFD1751(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_C32CF6DCEDFD1751_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CCF0A3D3BE6BE21B(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_CCF0A3D3BE6BE21B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_0841A2232FB0AEE0(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_0841A2232FB0AEE0_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_885288C2D34D929F(::UnityEngine::Rendering::Universal::DepthOfField* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_885288C2D34D929F_OFFSET))(this, a1, a2);
	}
};

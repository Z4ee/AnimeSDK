#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
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

#define CLASS_3_11ED433BD84D41CB_METHOD_3_0510E9CFC11E45BB_OFFSET UNITYSDK_OFFSET(0x17AB59F0)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_5444750A6160D013_OFFSET UNITYSDK_OFFSET(0x17AB4160)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_87709EF30A4464BB_OFFSET UNITYSDK_OFFSET(0x17AB15B0)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_885288C2D34D929F_OFFSET UNITYSDK_OFFSET(0x17ABE6C0)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_9226E9D37DB49A3A_OFFSET UNITYSDK_OFFSET(0x17ABA2B0)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_B3E15C9CE7ABB609_OFFSET UNITYSDK_OFFSET(0x17ABC2C0)
#define CLASS_3_11ED433BD84D41CB_METHOD_3_C32CF6DCEDFD1751_OFFSET UNITYSDK_OFFSET(0x17AB7D00)
#define CLASS_3_11ED433BD84D41CB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17ABD750)
#define CLASS_3_11ED433BD84D41CB__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB12C0)

inline static constexpr unsigned int Class_3_11ED433BD84D41CB_TypeDefinitionIndex = 78230;

class Class_3_11ED433BD84D41CB : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::DepthOfField*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DofDebugMode>* Field_3_2; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_16; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_28; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0xD0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_26; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xE0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DepthOfFieldMode>* Field_3_0; // 0xE8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_10; // 0xF0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_22; // 0xF8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_18; // 0x100
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_24; // 0x108
	::MoleMole::TwoValue_1<::System::Single>* Field_3_20; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* Field_3_14; // 0x118
	::System::Single Field_3_9; // 0x120
	::System::Single Field_3_7; // 0x124
	::System::Int32 Field_3_19; // 0x128
	::System::Single Field_3_17; // 0x12C
	::UnityEngine::Rendering::Universal::DofDebugMode Field_3_3; // 0x130
	::System::Boolean Field_3_27; // 0x134
	::System::Boolean Field_3_11; // 0x135
	::System::Boolean Field_3_29; // 0x136
	::System::Boolean Field_3_25; // 0x137
	::UnityEngine::Rendering::Universal::DepthOfFieldMode Field_3_1; // 0x138
	::System::Single Field_3_15; // 0x13C
	::System::Single Field_3_23; // 0x140
	::System::Single Field_3_21; // 0x144
	::System::Single Field_3_13; // 0x148
	::System::Single Field_3_5; // 0x14C

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

	::System::Void Method_3_9226E9D37DB49A3A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_9226E9D37DB49A3A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B3E15C9CE7ABB609(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::DepthOfField* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::DepthOfField*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_11ED433BD84D41CB_METHOD_3_B3E15C9CE7ABB609_OFFSET))(this, a1, a2, a3);
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

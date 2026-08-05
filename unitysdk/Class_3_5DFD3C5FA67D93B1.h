#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityCullingEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_0A60101A9EFF5658_OFFSET UNITYSDK_OFFSET(0x1705C8E0)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_259999792D72E1D0_OFFSET UNITYSDK_OFFSET(0x17061440)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_7726FBCA5E2454A8_OFFSET UNITYSDK_OFFSET(0x17057E50)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_A0FE94F86A27E15D_OFFSET UNITYSDK_OFFSET(0x1705EA90)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_B62A91C929E0504D_OFFSET UNITYSDK_OFFSET(0x17055450)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_ED5D7264C0CF48AB_OFFSET UNITYSDK_OFFSET(0x170599C0)
#define CLASS_3_5DFD3C5FA67D93B1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17062C40)
#define CLASS_3_5DFD3C5FA67D93B1__CTOR_OFFSET UNITYSDK_OFFSET(0x17055110)

inline static constexpr unsigned int Class_3_5DFD3C5FA67D93B1_TypeDefinitionIndex = 69202;

class Class_3_5DFD3C5FA67D93B1 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::Culling*, ::MoleMole::Config::ConfigEntityCullingEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_9; // 0xA8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_5; // 0xB0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_1; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_21; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_27; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_25; // 0xD0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_7; // 0xD8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_17; // 0xE0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_31; // 0xE8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_15; // 0xF0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_3; // 0xF8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_35; // 0x100
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_11; // 0x108
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_19; // 0x110
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_13; // 0x118
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_23; // 0x120
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_29; // 0x128
	::System::Single Field_3_26; // 0x130
	::System::Boolean Field_3_30; // 0x134
	::System::Boolean Field_3_16; // 0x135
	::System::Boolean Field_3_22; // 0x136
	::UnityEngine::Color Field_3_34; // 0x138
	::System::Boolean Field_3_8; // 0x148
	::System::Boolean Field_3_18; // 0x149
	::System::Boolean Field_3_10; // 0x14A
	::System::Boolean Field_3_2; // 0x14B
	::UnityEngine::Color Field_3_12; // 0x14C
	::UnityEngine::Color Field_3_20; // 0x15C
	::System::Single Field_3_24; // 0x16C
	::System::Boolean Field_3_14; // 0x170
	::System::Boolean Field_3_4; // 0x171
	::System::Boolean Field_3_6; // 0x172
	::System::Boolean Field_3_0; // 0x173
	::UnityEngine::Color Field_3_28; // 0x174

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityCullingEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_B62A91C929E0504D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_B62A91C929E0504D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7726FBCA5E2454A8(::UnityEngine::Rendering::Universal::Culling* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_7726FBCA5E2454A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_ED5D7264C0CF48AB(::UnityEngine::Rendering::Universal::Culling* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_ED5D7264C0CF48AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0A60101A9EFF5658(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_0A60101A9EFF5658_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A0FE94F86A27E15D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_A0FE94F86A27E15D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_259999792D72E1D0(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_259999792D72E1D0_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_TOSTRING_OFFSET))(this);
	}
};

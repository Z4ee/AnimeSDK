#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityCullingEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_2390DC841BE423F4_OFFSET UNITYSDK_OFFSET(0x14DEE7B0)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_719CB5F876BEEA85_OFFSET UNITYSDK_OFFSET(0x14DF10C0)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_7726FBCA5E2454A8_OFFSET UNITYSDK_OFFSET(0x14DECE80)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_8BE258EDE5EA102C_OFFSET UNITYSDK_OFFSET(0x14DEA9F0)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_AC5461D288DA5662_OFFSET UNITYSDK_OFFSET(0x14DF5680)
#define CLASS_3_5DFD3C5FA67D93B1_METHOD_3_F1183D2F7BB52042_OFFSET UNITYSDK_OFFSET(0x14DF2EF0)
#define CLASS_3_5DFD3C5FA67D93B1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14DF6D10)
#define CLASS_3_5DFD3C5FA67D93B1__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEA700)

inline static constexpr unsigned int Class_3_5DFD3C5FA67D93B1_TypeDefinitionIndex = 87406;

class Class_3_5DFD3C5FA67D93B1 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::Culling*, ::MoleMole::Config::ConfigEntityCullingEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_2; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_14; // 0xB0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_4; // 0xB8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_10; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_6; // 0xC8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_8; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_24; // 0xD8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_12; // 0xE0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_16; // 0xE8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_0; // 0xF0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_26; // 0xF8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_28; // 0x100
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_20; // 0x108
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_22; // 0x110
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_18; // 0x118
	::System::Boolean Field_3_7; // 0x120
	::System::Boolean Field_3_3; // 0x121
	::System::Boolean Field_3_29; // 0x122
	::System::Boolean Field_3_9; // 0x123
	::System::Boolean Field_3_21; // 0x124
	::System::Boolean Field_3_19; // 0x125
	::System::Boolean Field_3_11; // 0x126
	::System::Boolean Field_3_17; // 0x127
	::System::Boolean Field_3_13; // 0x128
	::System::Boolean Field_3_5; // 0x129
	::System::Boolean Field_3_1; // 0x12A
	::UnityEngine::Color Field_3_23; // 0x12C
	::System::Single Field_3_25; // 0x13C
	::System::Single Field_3_27; // 0x140
	::UnityEngine::Color Field_3_15; // 0x144

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityCullingEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_8BE258EDE5EA102C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_8BE258EDE5EA102C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7726FBCA5E2454A8(::UnityEngine::Rendering::Universal::Culling* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_7726FBCA5E2454A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2390DC841BE423F4(::UnityEngine::Rendering::Universal::Culling* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_2390DC841BE423F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_719CB5F876BEEA85(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_719CB5F876BEEA85_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F1183D2F7BB52042(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_F1183D2F7BB52042_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_AC5461D288DA5662(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Culling* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Culling*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_METHOD_3_AC5461D288DA5662_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DFD3C5FA67D93B1_TOSTRING_OFFSET))(this);
	}
};

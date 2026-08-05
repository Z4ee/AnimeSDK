#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection; }

#define CLASS_3_6D8B3CAC83602668_METHOD_3_1C610D4EBFBFB279_OFFSET UNITYSDK_OFFSET(0x1825E6D0)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_2E46105048C05004_OFFSET UNITYSDK_OFFSET(0x182629B0)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_38ACC2FA8764A10E_OFFSET UNITYSDK_OFFSET(0x1825FC10)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_5F2BA1180044938D_OFFSET UNITYSDK_OFFSET(0x1825D4C0)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_6D724C0BD28EDFD1_OFFSET UNITYSDK_OFFSET(0x182611F0)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_85896EE28468EF1F_OFFSET UNITYSDK_OFFSET(0x1825BA90)
#define CLASS_3_6D8B3CAC83602668_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18263490)
#define CLASS_3_6D8B3CAC83602668__CTOR_OFFSET UNITYSDK_OFFSET(0x1825B820)

inline static constexpr unsigned int Class_3_6D8B3CAC83602668_TypeDefinitionIndex = 48343;

class Class_3_6D8B3CAC83602668 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_26; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_20; // 0xB0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_0; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask>* Field_3_18; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_16; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::LayerMask>* Field_3_14; // 0xD8
	::MoleMole::TwoValue_1<::UnityEngine::LayerMask>* Field_3_12; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xF0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_22; // 0xF8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0x100
	::System::Boolean Field_3_23; // 0x108
	::System::Boolean Field_3_7; // 0x109
	::UnityEngine::LayerMask Field_3_19; // 0x10C
	::System::Single Field_3_21; // 0x110
	::System::Single Field_3_9; // 0x114
	::System::Single Field_3_27; // 0x118
	::System::Single Field_3_25; // 0x11C
	::System::Single Field_3_15; // 0x120
	::System::Single Field_3_5; // 0x124
	::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask Field_3_17; // 0x128
	::System::Single Field_3_11; // 0x12C
	::UnityEngine::LayerMask Field_3_13; // 0x130

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_85896EE28468EF1F(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_85896EE28468EF1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5F2BA1180044938D(::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_5F2BA1180044938D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1C610D4EBFBFB279(::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_1C610D4EBFBFB279_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_38ACC2FA8764A10E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_38ACC2FA8764A10E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6D724C0BD28EDFD1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_6D724C0BD28EDFD1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2E46105048C05004(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_2E46105048C05004_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_TOSTRING_OFFSET))(this);
	}
};

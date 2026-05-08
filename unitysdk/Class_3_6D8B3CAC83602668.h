#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
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

#define CLASS_3_6D8B3CAC83602668_METHOD_3_1359BFE0BB989473_1_OFFSET UNITYSDK_OFFSET(0x1417BDD0)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_1359BFE0BB989473_OFFSET UNITYSDK_OFFSET(0x1417BD50)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_1E20A00D879736A7_OFFSET UNITYSDK_OFFSET(0x14178C50)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_2ADA83C2844F7E36_OFFSET UNITYSDK_OFFSET(0x141733A0)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_5F0F2072DBF29504_OFFSET UNITYSDK_OFFSET(0x14174E10)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_6B43668E16F59439_1_OFFSET UNITYSDK_OFFSET(0x1417BD80)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_6B43668E16F59439_OFFSET UNITYSDK_OFFSET(0x1417BD60)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_705E57E7298E870E_OFFSET UNITYSDK_OFFSET(0x1417BD70)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_9D272DF358617ACE_OFFSET UNITYSDK_OFFSET(0x14177610)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x1417BD90)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_D8CEAF375CFEF986_OFFSET UNITYSDK_OFFSET(0x1417A4A0)
#define CLASS_3_6D8B3CAC83602668_METHOD_3_FC23AA419FFB8142_OFFSET UNITYSDK_OFFSET(0x14176080)
#define CLASS_3_6D8B3CAC83602668_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1417AFD0)
#define CLASS_3_6D8B3CAC83602668__CTOR_OFFSET UNITYSDK_OFFSET(0x14173130)

inline static constexpr unsigned int Class_3_6D8B3CAC83602668_TypeDefinitionIndex = 66723;

class Class_3_6D8B3CAC83602668 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_16; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_20; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_18; // 0xB8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_0; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_22; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xE8
	::MoleMole::TwoValue_1<::UnityEngine::LayerMask>* Field_3_10; // 0xF0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask>* Field_3_14; // 0xF8
	::MoleMole::TwoValue_1<::UnityEngine::LayerMask>* Field_3_12; // 0x100
	::System::Single Field_3_21; // 0x108
	::System::Single Field_3_9; // 0x10C
	::UnityEngine::LayerMask Field_3_13; // 0x110
	::System::Single Field_3_5; // 0x114
	::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask Field_3_15; // 0x118
	::System::Single Field_3_3; // 0x11C
	::System::Single Field_3_19; // 0x120
	::System::Boolean Field_3_17; // 0x124
	::System::Boolean Field_3_1; // 0x125
	::System::Single Field_3_7; // 0x128
	::UnityEngine::LayerMask Field_3_11; // 0x12C
	::System::Single Field_3_23; // 0x130

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_2ADA83C2844F7E36(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_2ADA83C2844F7E36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5F0F2072DBF29504(::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_5F0F2072DBF29504_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FC23AA419FFB8142(::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_FC23AA419FFB8142_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9D272DF358617ACE(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_9D272DF358617ACE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1E20A00D879736A7(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_1E20A00D879736A7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_D8CEAF375CFEF986(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_D8CEAF375CFEF986_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_1359BFE0BB989473(::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_1359BFE0BB989473_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6B43668E16F59439(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_6B43668E16F59439_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_705E57E7298E870E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_705E57E7298E870E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_6B43668E16F59439_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_6B43668E16F59439_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_1359BFE0BB989473_1(::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D8B3CAC83602668_METHOD_3_1359BFE0BB989473_1_OFFSET))(this, a1, a2);
	}
};

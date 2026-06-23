#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityColorLookupEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ColorLookup; }

#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_18E6E15A204EBBD3_OFFSET UNITYSDK_OFFSET(0x13096F40)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_59B69B101D59CF1F_OFFSET UNITYSDK_OFFSET(0x130968B0)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_8BF7232547DA717E_OFFSET UNITYSDK_OFFSET(0x130975B0)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_AC97E8CCE81BC4EE_OFFSET UNITYSDK_OFFSET(0x13097260)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_D63013DC6614D94D_OFFSET UNITYSDK_OFFSET(0x13097C30)
#define CLASS_3_59D7B8BA0A276DC9_METHOD_3_FF1F8C9891E3CEAE_OFFSET UNITYSDK_OFFSET(0x13098230)
#define CLASS_3_59D7B8BA0A276DC9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13098550)
#define CLASS_3_59D7B8BA0A276DC9__CTOR_OFFSET UNITYSDK_OFFSET(0x130967D0)

inline static constexpr unsigned int Class_3_59D7B8BA0A276DC9_TypeDefinitionIndex = 40808;

class Class_3_59D7B8BA0A276DC9 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::ColorLookup*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_0; // 0xB0
	::UnityEngine::Texture* Field_3_1; // 0xB8
	::System::Single Field_3_3; // 0xC0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityColorLookupEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_59B69B101D59CF1F(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ColorLookup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_59B69B101D59CF1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_18E6E15A204EBBD3(::UnityEngine::Rendering::Universal::ColorLookup* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_18E6E15A204EBBD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AC97E8CCE81BC4EE(::UnityEngine::Rendering::Universal::ColorLookup* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_AC97E8CCE81BC4EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8BF7232547DA717E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ColorLookup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_8BF7232547DA717E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D63013DC6614D94D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ColorLookup* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_D63013DC6614D94D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_FF1F8C9891E3CEAE(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ColorLookup* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ColorLookup*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_METHOD_3_FF1F8C9891E3CEAE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59D7B8BA0A276DC9_TOSTRING_OFFSET))(this);
	}
};

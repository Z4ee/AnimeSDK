#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define CLASS_3_218C1C7C5F11943F_METHOD_3_0FA1AF0808083398_OFFSET UNITYSDK_OFFSET(0x15C6C000)
#define CLASS_3_218C1C7C5F11943F_METHOD_3_638F32CE6A4D79B9_OFFSET UNITYSDK_OFFSET(0x15C6FE10)
#define CLASS_3_218C1C7C5F11943F_METHOD_3_70AD5D10FA9B9EBA_OFFSET UNITYSDK_OFFSET(0x15C6E3C0)
#define CLASS_3_218C1C7C5F11943F_METHOD_3_A3FE6FEBD7902988_OFFSET UNITYSDK_OFFSET(0x15C6CDF0)
#define CLASS_3_218C1C7C5F11943F_METHOD_3_C659E5CF69100EE2_OFFSET UNITYSDK_OFFSET(0x15C6F000)
#define CLASS_3_218C1C7C5F11943F_METHOD_3_F7B09BCCF4E80F29_OFFSET UNITYSDK_OFFSET(0x15C6D830)
#define CLASS_3_218C1C7C5F11943F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15C704E0)
#define CLASS_3_218C1C7C5F11943F__CTOR_OFFSET UNITYSDK_OFFSET(0x15C6BE80)

inline static constexpr unsigned int Class_3_218C1C7C5F11943F_TypeDefinitionIndex = 66987;

class Class_3_218C1C7C5F11943F : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::GaussianBlur*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xA8
	::UnityEngine::Texture* Field_3_5; // 0xB0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_10; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0xC0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_0; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_4; // 0xD8
	::System::Int32 Field_3_1; // 0xE0
	::System::Single Field_3_9; // 0xE4
	::System::Single Field_3_3; // 0xE8
	::System::Boolean Field_3_11; // 0xEC
	::System::Single Field_3_7; // 0xF0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityGaussianBlurEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_218C1C7C5F11943F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_0FA1AF0808083398(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*))((::PBYTE)hIl2Cpp + CLASS_3_218C1C7C5F11943F_METHOD_3_0FA1AF0808083398_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A3FE6FEBD7902988(::UnityEngine::Rendering::Universal::GaussianBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_218C1C7C5F11943F_METHOD_3_A3FE6FEBD7902988_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F7B09BCCF4E80F29(::UnityEngine::Rendering::Universal::GaussianBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_218C1C7C5F11943F_METHOD_3_F7B09BCCF4E80F29_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_70AD5D10FA9B9EBA(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*))((::PBYTE)hIl2Cpp + CLASS_3_218C1C7C5F11943F_METHOD_3_70AD5D10FA9B9EBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C659E5CF69100EE2(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_218C1C7C5F11943F_METHOD_3_C659E5CF69100EE2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_638F32CE6A4D79B9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_218C1C7C5F11943F_METHOD_3_638F32CE6A4D79B9_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_218C1C7C5F11943F_TOSTRING_OFFSET))(this);
	}
};

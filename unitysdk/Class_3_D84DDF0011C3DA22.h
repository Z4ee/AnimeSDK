#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define CLASS_3_D84DDF0011C3DA22_METHOD_3_638F32CE6A4D79B9_OFFSET UNITYSDK_OFFSET(0x1C3C8620)
#define CLASS_3_D84DDF0011C3DA22_METHOD_3_70AD5D10FA9B9EBA_OFFSET UNITYSDK_OFFSET(0x1C3C6860)
#define CLASS_3_D84DDF0011C3DA22_METHOD_3_8296B05ED6463659_OFFSET UNITYSDK_OFFSET(0x1C3C7610)
#define CLASS_3_D84DDF0011C3DA22_METHOD_3_A3FE6FEBD7902988_OFFSET UNITYSDK_OFFSET(0x1C3C4E10)
#define CLASS_3_D84DDF0011C3DA22_METHOD_3_CA7B929CB9BD1692_OFFSET UNITYSDK_OFFSET(0x1C3C3E50)
#define CLASS_3_D84DDF0011C3DA22_METHOD_3_F7B09BCCF4E80F29_OFFSET UNITYSDK_OFFSET(0x1C3C59D0)
#define CLASS_3_D84DDF0011C3DA22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C3C8E40)
#define CLASS_3_D84DDF0011C3DA22__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C3CA0)

inline static constexpr unsigned int Class_3_D84DDF0011C3DA22_TypeDefinitionIndex = 90874;

class Class_3_D84DDF0011C3DA22 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::GaussianBlur*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_8; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0xB0
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_2; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xC0
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_6; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xD0
	::UnityEngine::Texture* Field_3_5; // 0xD8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_14; // 0xE0
	::System::Single Field_3_11; // 0xE8
	::System::Boolean Field_3_15; // 0xEC
	::System::Boolean Field_3_13; // 0xED
	::System::Single Field_3_9; // 0xF0
	::System::Int32 Field_3_1; // 0xF4
	::System::Single Field_3_7; // 0xF8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityGaussianBlurEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_D84DDF0011C3DA22__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA7B929CB9BD1692(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*))((::PBYTE)hIl2Cpp + CLASS_3_D84DDF0011C3DA22_METHOD_3_CA7B929CB9BD1692_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A3FE6FEBD7902988(::UnityEngine::Rendering::Universal::GaussianBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D84DDF0011C3DA22_METHOD_3_A3FE6FEBD7902988_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F7B09BCCF4E80F29(::UnityEngine::Rendering::Universal::GaussianBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D84DDF0011C3DA22_METHOD_3_F7B09BCCF4E80F29_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_70AD5D10FA9B9EBA(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*))((::PBYTE)hIl2Cpp + CLASS_3_D84DDF0011C3DA22_METHOD_3_70AD5D10FA9B9EBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8296B05ED6463659(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D84DDF0011C3DA22_METHOD_3_8296B05ED6463659_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_638F32CE6A4D79B9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::GaussianBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::GaussianBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D84DDF0011C3DA22_METHOD_3_638F32CE6A4D79B9_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D84DDF0011C3DA22_TOSTRING_OFFSET))(this);
	}
};

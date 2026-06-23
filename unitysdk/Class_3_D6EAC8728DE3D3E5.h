#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigChromaticAberration; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_3AA8D8D0BF149E20_OFFSET UNITYSDK_OFFSET(0x17AADC40)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_5ADE7B1AB3889C73_OFFSET UNITYSDK_OFFSET(0x17AA9E40)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_A21B4D3401A3AF18_OFFSET UNITYSDK_OFFSET(0x17AAB0D0)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_A591C46474F88E86_OFFSET UNITYSDK_OFFSET(0x17AAC640)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_C1F1DE0836CB7B2A_OFFSET UNITYSDK_OFFSET(0x17AA7550)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_ECB8CB384FC0DDFD_OFFSET UNITYSDK_OFFSET(0x17AA8F60)
#define CLASS_3_D6EAC8728DE3D3E5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AAE6F0)
#define CLASS_3_D6EAC8728DE3D3E5__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA7350)

inline static constexpr unsigned int Class_3_D6EAC8728DE3D3E5_TypeDefinitionIndex = 48424;

class Class_3_D6EAC8728DE3D3E5 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::ChromaticAberration*, ::MoleMole::Config::ConfigChromaticAberration*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_16; // 0xC0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_10; // 0xC8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_6; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_2; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xE0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_14; // 0xE8
	::System::Single Field_3_13; // 0xF0
	::UnityEngine::Color Field_3_15; // 0xF4
	::UnityEngine::Vector2 Field_3_3; // 0x104
	::System::Single Field_3_17; // 0x10C
	::System::Single Field_3_5; // 0x110
	::UnityEngine::Color Field_3_7; // 0x114
	::System::Single Field_3_9; // 0x124
	::System::Single Field_3_1; // 0x128
	::UnityEngine::Color Field_3_11; // 0x12C

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigChromaticAberration* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigChromaticAberration*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_C1F1DE0836CB7B2A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_C1F1DE0836CB7B2A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_ECB8CB384FC0DDFD(::UnityEngine::Rendering::Universal::ChromaticAberration* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_ECB8CB384FC0DDFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5ADE7B1AB3889C73(::UnityEngine::Rendering::Universal::ChromaticAberration* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_5ADE7B1AB3889C73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A21B4D3401A3AF18(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_A21B4D3401A3AF18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A591C46474F88E86(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_A591C46474F88E86_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3AA8D8D0BF149E20(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_3AA8D8D0BF149E20_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_TOSTRING_OFFSET))(this);
	}
};

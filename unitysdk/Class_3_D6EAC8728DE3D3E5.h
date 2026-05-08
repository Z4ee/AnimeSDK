#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
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

#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_10CA416D7E500E48_OFFSET UNITYSDK_OFFSET(0x181894D0)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_32BB63B2E1BDF28C_1_OFFSET UNITYSDK_OFFSET(0x1818D6E0)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_32BB63B2E1BDF28C_OFFSET UNITYSDK_OFFSET(0x1818D660)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_523A27F8AF5D2AAD_OFFSET UNITYSDK_OFFSET(0x1818C060)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_5ADE7B1AB3889C73_OFFSET UNITYSDK_OFFSET(0x18188220)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_9445E12A57B7833D_OFFSET UNITYSDK_OFFSET(0x1818D6D0)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_A591C46474F88E86_OFFSET UNITYSDK_OFFSET(0x1818AA70)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_C1F1DE0836CB7B2A_OFFSET UNITYSDK_OFFSET(0x18185910)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x1818D680)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_DF68ADAB3E6F43C4_1_OFFSET UNITYSDK_OFFSET(0x1818D6C0)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_DF68ADAB3E6F43C4_OFFSET UNITYSDK_OFFSET(0x1818D670)
#define CLASS_3_D6EAC8728DE3D3E5_METHOD_3_ECB8CB384FC0DDFD_OFFSET UNITYSDK_OFFSET(0x18187320)
#define CLASS_3_D6EAC8728DE3D3E5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1818CB10)
#define CLASS_3_D6EAC8728DE3D3E5__CTOR_OFFSET UNITYSDK_OFFSET(0x18185710)

inline static constexpr unsigned int Class_3_D6EAC8728DE3D3E5_TypeDefinitionIndex = 55775;

class Class_3_D6EAC8728DE3D3E5 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::ChromaticAberration*, ::MoleMole::Config::ConfigChromaticAberration*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_2; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_16; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_14; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xC8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_10; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0xD8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_6; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xE8
	::System::Single Field_3_5; // 0xF0
	::UnityEngine::Color Field_3_15; // 0xF4
	::System::Single Field_3_1; // 0x104
	::System::Single Field_3_9; // 0x108
	::UnityEngine::Vector2 Field_3_3; // 0x10C
	::System::Single Field_3_13; // 0x114
	::UnityEngine::Color Field_3_7; // 0x118
	::UnityEngine::Color Field_3_11; // 0x128
	::System::Single Field_3_17; // 0x138

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

	::System::Void Method_3_10CA416D7E500E48(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_10CA416D7E500E48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A591C46474F88E86(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_A591C46474F88E86_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_523A27F8AF5D2AAD(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_523A27F8AF5D2AAD_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_32BB63B2E1BDF28C(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_32BB63B2E1BDF28C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DF68ADAB3E6F43C4(::UnityEngine::Rendering::Universal::ChromaticAberration* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_DF68ADAB3E6F43C4_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_DF68ADAB3E6F43C4_1(::UnityEngine::Rendering::Universal::ChromaticAberration* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_DF68ADAB3E6F43C4_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9445E12A57B7833D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_9445E12A57B7833D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_32BB63B2E1BDF28C_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_D6EAC8728DE3D3E5_METHOD_3_32BB63B2E1BDF28C_1_OFFSET))(this, a1, a2);
	}
};

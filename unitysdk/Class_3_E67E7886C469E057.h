#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"

namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Config { class ConfigChromaticAberration; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define CLASS_3_E67E7886C469E057_METHOD_3_1710F41C6B052BF5_OFFSET UNITYSDK_OFFSET(0x129F5800)
#define CLASS_3_E67E7886C469E057_METHOD_3_3EFEC65EC284692A_OFFSET UNITYSDK_OFFSET(0x129F53A0)
#define CLASS_3_E67E7886C469E057_METHOD_3_4FE9E8C2940A786D_OFFSET UNITYSDK_OFFSET(0x129F55F0)
#define CLASS_3_E67E7886C469E057_METHOD_3_AE2E8B86D8F5CE7F_OFFSET UNITYSDK_OFFSET(0x129F5220)
#define CLASS_3_E67E7886C469E057_METHOD_3_C3BE75444F74DED2_OFFSET UNITYSDK_OFFSET(0x129F56D0)
#define CLASS_3_E67E7886C469E057_METHOD_3_F783986554694418_OFFSET UNITYSDK_OFFSET(0x129F5150)
#define CLASS_3_E67E7886C469E057__CTOR_OFFSET UNITYSDK_OFFSET(0x129F50C0)

inline static constexpr unsigned int Class_3_E67E7886C469E057_TypeDefinitionIndex = 51771;

class Class_3_E67E7886C469E057 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::ChromaticAberration*, ::MoleMole::Config::ConfigChromaticAberration*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0xA8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_E67E7886C469E057__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F783986554694418(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E67E7886C469E057_METHOD_3_F783986554694418_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_AE2E8B86D8F5CE7F(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_E67E7886C469E057_METHOD_3_AE2E8B86D8F5CE7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3EFEC65EC284692A(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + CLASS_3_E67E7886C469E057_METHOD_3_3EFEC65EC284692A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4FE9E8C2940A786D(::UnityEngine::Rendering::Universal::ChromaticAberration* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E67E7886C469E057_METHOD_3_4FE9E8C2940A786D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C3BE75444F74DED2(::UnityEngine::Rendering::Universal::ChromaticAberration* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E67E7886C469E057_METHOD_3_C3BE75444F74DED2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1710F41C6B052BF5(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ChromaticAberration* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ChromaticAberration*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E67E7886C469E057_METHOD_3_1710F41C6B052BF5_OFFSET))(this, a1, a2, a3);
	}
};

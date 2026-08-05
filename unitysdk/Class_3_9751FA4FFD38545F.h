#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityLiftGammaGainEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class LiftGammaGain; }

#define CLASS_3_9751FA4FFD38545F_METHOD_3_2297CDB94FFF825E_OFFSET UNITYSDK_OFFSET(0x1A66FFA0)
#define CLASS_3_9751FA4FFD38545F_METHOD_3_303047C0DD0FA891_OFFSET UNITYSDK_OFFSET(0x1A66DD60)
#define CLASS_3_9751FA4FFD38545F_METHOD_3_5DC9F9F28A21FADF_OFFSET UNITYSDK_OFFSET(0x1A66ECD0)
#define CLASS_3_9751FA4FFD38545F_METHOD_3_8BF6FE9E05A0C848_OFFSET UNITYSDK_OFFSET(0x1A66F5C0)
#define CLASS_3_9751FA4FFD38545F_METHOD_3_94EC5CEFB19CB30E_OFFSET UNITYSDK_OFFSET(0x1A6707C0)
#define CLASS_3_9751FA4FFD38545F_METHOD_3_CAD345B23259A0A9_OFFSET UNITYSDK_OFFSET(0x1A66E8E0)
#define CLASS_3_9751FA4FFD38545F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A670C70)
#define CLASS_3_9751FA4FFD38545F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A66DC40)

inline static constexpr unsigned int Class_3_9751FA4FFD38545F_TypeDefinitionIndex = 51918;

class Class_3_9751FA4FFD38545F : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::LiftGammaGain*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_6; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_0; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_2; // 0xB8
	::UnityEngine::Vector4 Field_3_1; // 0xC0
	::UnityEngine::Vector4 Field_3_7; // 0xD0
	::UnityEngine::Vector4 Field_3_5; // 0xE0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_303047C0DD0FA891(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LiftGammaGain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LiftGammaGain*))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F_METHOD_3_303047C0DD0FA891_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CAD345B23259A0A9(::UnityEngine::Rendering::Universal::LiftGammaGain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LiftGammaGain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F_METHOD_3_CAD345B23259A0A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5DC9F9F28A21FADF(::UnityEngine::Rendering::Universal::LiftGammaGain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LiftGammaGain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F_METHOD_3_5DC9F9F28A21FADF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8BF6FE9E05A0C848(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LiftGammaGain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LiftGammaGain*))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F_METHOD_3_8BF6FE9E05A0C848_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2297CDB94FFF825E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LiftGammaGain* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LiftGammaGain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F_METHOD_3_2297CDB94FFF825E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_94EC5CEFB19CB30E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LiftGammaGain* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LiftGammaGain*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F_METHOD_3_94EC5CEFB19CB30E_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F_TOSTRING_OFFSET))(this);
	}
};

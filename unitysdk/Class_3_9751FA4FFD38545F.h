#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityLiftGammaGainEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class LiftGammaGain; }

#define CLASS_3_9751FA4FFD38545F_METHOD_3_0DD730F4BBB7B0F6_OFFSET UNITYSDK_OFFSET(0x144403A0)
#define CLASS_3_9751FA4FFD38545F_METHOD_3_2297CDB94FFF825E_OFFSET UNITYSDK_OFFSET(0x144416E0)
#define CLASS_3_9751FA4FFD38545F_METHOD_3_449B6FE3CD205F45_OFFSET UNITYSDK_OFFSET(0x14440CC0)
#define CLASS_3_9751FA4FFD38545F_METHOD_3_94EC5CEFB19CB30E_OFFSET UNITYSDK_OFFSET(0x14441FF0)
#define CLASS_3_9751FA4FFD38545F_METHOD_3_E117A8405ED695B2_OFFSET UNITYSDK_OFFSET(0x1443F380)
#define CLASS_3_9751FA4FFD38545F_METHOD_3_EBE4E89F923C5EA7_OFFSET UNITYSDK_OFFSET(0x1443FF30)
#define CLASS_3_9751FA4FFD38545F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x144424C0)
#define CLASS_3_9751FA4FFD38545F__CTOR_OFFSET UNITYSDK_OFFSET(0x1443F260)

inline static constexpr unsigned int Class_3_9751FA4FFD38545F_TypeDefinitionIndex = 85981;

class Class_3_9751FA4FFD38545F : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::LiftGammaGain*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_0; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_4; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_2; // 0xB8
	::UnityEngine::Vector4 Field_3_1; // 0xC0
	::UnityEngine::Vector4 Field_3_3; // 0xD0
	::UnityEngine::Vector4 Field_3_5; // 0xE0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_E117A8405ED695B2(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LiftGammaGain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LiftGammaGain*))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F_METHOD_3_E117A8405ED695B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EBE4E89F923C5EA7(::UnityEngine::Rendering::Universal::LiftGammaGain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LiftGammaGain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F_METHOD_3_EBE4E89F923C5EA7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0DD730F4BBB7B0F6(::UnityEngine::Rendering::Universal::LiftGammaGain* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LiftGammaGain*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F_METHOD_3_0DD730F4BBB7B0F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_449B6FE3CD205F45(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::LiftGammaGain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::LiftGammaGain*))((::PBYTE)hIl2Cpp + CLASS_3_9751FA4FFD38545F_METHOD_3_449B6FE3CD205F45_OFFSET))(this, a1, a2);
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

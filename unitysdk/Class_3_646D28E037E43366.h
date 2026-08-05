#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityMotionBlurEffect; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }

#define CLASS_3_646D28E037E43366_METHOD_3_4DD3E5BABFCA7D99_OFFSET UNITYSDK_OFFSET(0x153F5BE0)
#define CLASS_3_646D28E037E43366_METHOD_3_5EE60CF4DA0D4E41_OFFSET UNITYSDK_OFFSET(0x153F4F00)
#define CLASS_3_646D28E037E43366_METHOD_3_5F9AFC230AF79FE9_OFFSET UNITYSDK_OFFSET(0x153F6410)
#define CLASS_3_646D28E037E43366_METHOD_3_9397C1B34B43D0FF_OFFSET UNITYSDK_OFFSET(0x153F7890)
#define CLASS_3_646D28E037E43366_METHOD_3_AF56403247D6B034_OFFSET UNITYSDK_OFFSET(0x153F6CD0)
#define CLASS_3_646D28E037E43366_METHOD_3_F1E33DBBB7FC1E02_OFFSET UNITYSDK_OFFSET(0x153F83B0)
#define CLASS_3_646D28E037E43366_TOSTRING_OFFSET UNITYSDK_OFFSET(0x153F88B0)
#define CLASS_3_646D28E037E43366__CTOR_OFFSET UNITYSDK_OFFSET(0x153F4D80)

inline static constexpr unsigned int Class_3_646D28E037E43366_TypeDefinitionIndex = 69329;

class Class_3_646D28E037E43366 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::MotionBlur*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurDirection>* Field_3_5; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_1; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurQuality>* Field_3_9; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::MotionBlurMode>* Field_3_7; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_11; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_15; // 0xD0
	::UnityEngine::NAPRenderPipeline0::MotionBlurMode Field_3_6; // 0xD8
	::UnityEngine::NAPRenderPipeline0::MotionBlurQuality Field_3_8; // 0xDC
	::System::Single Field_3_0; // 0xE0
	::System::Single Field_3_14; // 0xE4
	::System::Single Field_3_10; // 0xE8
	::UnityEngine::NAPRenderPipeline0::MotionBlurDirection Field_3_4; // 0xEC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityMotionBlurEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_5EE60CF4DA0D4E41(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_5EE60CF4DA0D4E41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4DD3E5BABFCA7D99(::UnityEngine::Rendering::Universal::MotionBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_4DD3E5BABFCA7D99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5F9AFC230AF79FE9(::UnityEngine::Rendering::Universal::MotionBlur* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_5F9AFC230AF79FE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AF56403247D6B034(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_AF56403247D6B034_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9397C1B34B43D0FF(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_9397C1B34B43D0FF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F1E33DBBB7FC1E02(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::MotionBlur* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::MotionBlur*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_METHOD_3_F1E33DBBB7FC1E02_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_646D28E037E43366_TOSTRING_OFFSET))(this);
	}
};
